/*******************************************************************************
 *
 *  NetFPGA-10G http://www.netfpga.org
 *
 *  File:
 *        output_port_lookup.v
 *
 *  Library:
 *        hw/contrib/pcores/crypto_v1_00_a
 *
 *  Module:
 *        output_port_lookup
 *
 *  Author:
 *        Muhammad Shahbaz
 *
 *  Description:
 *        Defines a module for the user data path
 *
 *  Copyright notice:
 *        Copyright (C) 2010, 2011 The Board of Trustees of The Leland Stanford
 *                                 Junior University
 *
 *  Licence:
 *        This file is part of the NetFPGA 10G development base package.
 *
 *        This file is free code: you can redistribute it and/or modify it under
 *        the terms of the GNU Lesser General Public License version 2.1 as
 *        published by the Free Software Foundation.
 *
 *        This package is distributed in the hope that it will be useful, but
 *        WITHOUT ANY WARRANTY; without even the implied warranty of
 *        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *        Lesser General Public License for more details.
 *
 *        You should have received a copy of the GNU Lesser General Public
 *        License along with the NetFPGA source package.  If not, see
 *        http://www.gnu.org/licenses/.
 *
 */

module output_port_lookup
#(
    // Master AXI Stream Data Width
    parameter C_M_AXIS_DATA_WIDTH=256,
    parameter C_S_AXIS_DATA_WIDTH=256,
    parameter C_M_AXIS_TUSER_WIDTH=128,
    parameter C_S_AXIS_TUSER_WIDTH=128,
    parameter C_S_AXI_DATA_WIDTH=32,
    // Register parameters
    parameter NUM_RW_REGS = 1,
    parameter NUM_WO_REGS = 1,
    parameter NUM_RO_REGS = 1
)
(
    // Global Ports
    input axi_aclk,
    input axi_aresetn,

    // Master Stream Ports (interface to data path downstream)
    output reg [C_M_AXIS_DATA_WIDTH - 1:0]         m_axis_tdata,
    output reg [((C_M_AXIS_DATA_WIDTH / 8)) - 1:0] m_axis_tstrb,
    output reg [C_M_AXIS_TUSER_WIDTH-1:0]          m_axis_tuser,
    output reg                                     m_axis_tvalid,
    input                                          m_axis_tready,
    output reg                                     m_axis_tlast,

    // Slave Stream Ports (interface to data path upstream)
    input [C_S_AXIS_DATA_WIDTH - 1:0]          s_axis_tdata,
    input [((C_S_AXIS_DATA_WIDTH / 8)) - 1:0]  s_axis_tstrb,
    input [C_S_AXIS_TUSER_WIDTH-1:0]           s_axis_tuser,
    input                                      s_axis_tvalid,
    output                                     s_axis_tready,
    input                                      s_axis_tlast,

    // Registers
    input  [NUM_RW_REGS*C_S_AXI_DATA_WIDTH-1:0]  rw_regs,
    output [NUM_RW_REGS*C_S_AXI_DATA_WIDTH-1:0]  rw_defaults,
    input  [NUM_WO_REGS*C_S_AXI_DATA_WIDTH-1:0]  wo_regs,
    output [NUM_WO_REGS*C_S_AXI_DATA_WIDTH-1:0]  wo_defaults,
    input  [NUM_RO_REGS*C_S_AXI_DATA_WIDTH-1:0]  ro_regs
);

   function integer log2;
      input integer number;
      begin
         log2=0;
         while(2**log2<number) begin
            log2=log2+1;
         end
      end
   endfunction // log2

   // ---------- Local Parameters ---------
   localparam PKT_HDR_WORD0       = 1;
   localparam PKT_HDR_WORD1       = 2;
   localparam PKT_PAYLOAD         = 4; 

   // ------------- Regs/ wires -----------

   wire                             fifo_nearly_full;
   wire                             fifo_empty;
   reg                              fifo_rd_en;
   wire [C_M_AXIS_TUSER_WIDTH-1:0]  fifo_out_tuser;
   wire [C_M_AXIS_DATA_WIDTH-1:0]   fifo_out_tdata;
   wire [C_M_AXIS_DATA_WIDTH/8-1:0] fifo_out_tstrb;
   wire  	                    fifo_out_tlast;
   wire                             fifo_tvalid;
   wire                             fifo_tlast;

   reg  [2:0]                       state, next_state;
   wire [31:0]                      key;

   // ------------ Modules -------------

   fallthrough_small_fifo
   #( .WIDTH(C_M_AXIS_DATA_WIDTH+C_M_AXIS_TUSER_WIDTH+C_M_AXIS_DATA_WIDTH/8+1),
      .MAX_DEPTH_BITS(2)
    )
    input_fifo
    ( // Outputs
      .dout                         ({fifo_out_tlast, fifo_out_tuser, fifo_out_tstrb, fifo_out_tdata}),
      .full                         (),
      .nearly_full                  (fifo_nearly_full),
      .prog_full                    (),
      .empty                        (fifo_empty),
      // Inputs
      .din                          ({s_axis_tlast, s_axis_tuser, s_axis_tstrb, s_axis_tdata}),
      .wr_en                        (s_axis_tvalid & s_axis_tready),
      .rd_en                        (fifo_rd_en),
      .reset                        (~axi_aresetn),
      .clk                          (axi_aclk));

   // ------------- Logic ------------

   assign s_axis_tready = !fifo_nearly_full;
/*
   assign m_axis_tuser = fifo_out_tuser;
   assign m_axis_tdata = fifo_out_tdata;
   assign m_axis_tlast = fifo_out_tlast;
   assign m_axis_tstrb = fifo_out_tstrb;
   assign m_axis_tvalid = ~in_fifo_empty;

   always @(*) begin
      in_fifo_rd_en = 0;

      if (m_axis_tready && !in_fifo_empty) begin
        in_fifo_rd_en = 1;
      end
   end
*/

   assign rw_defaults = 32'h01234567;

   assign key = rw_regs;


   /*********************************************************************
   * Wait until the ethernet header has been decoded and the output
   * port is found, then write the module header and move the packet
   * to the output
   **********************************************************************/
   always @* begin
     m_axis_tuser = fifo_out_tuser;
     m_axis_tdata = fifo_out_tdata;
     m_axis_tstrb = fifo_out_tstrb;
     m_axis_tlast = fifo_out_tlast;
     m_axis_tvalid = 0;
     
     fifo_rd_en = 0;
     
     next_state = state;

     case(state)
       PKT_HDR_WORD0: begin
         m_axis_tvalid = !fifo_empty;         

         if (m_axis_tvalid && m_axis_tready) begin
           fifo_rd_en = 1;
           next_state = PKT_HDR_WORD1;
         end
       end

       PKT_HDR_WORD1: begin
         m_axis_tvalid = !fifo_empty; 

         if (m_axis_tvalid && m_axis_tready) begin
           fifo_rd_en = 1;
           m_axis_tdata[255:240] = fifo_out_tdata[255:240];
           m_axis_tdata[239:0]=(fifo_out_tdata[239:0] ^ {key[15:0], {7{key}}});
             
           if (fifo_out_tlast) begin
             next_state = PKT_HDR_WORD0;
	   end
	   else begin					 
	     next_state = PKT_PAYLOAD;
	   end	  
         end
       end 

       PKT_PAYLOAD: begin
         m_axis_tvalid = !fifo_empty; 

         if (m_axis_tvalid && m_axis_tready) begin
           fifo_rd_en = 1;
           m_axis_tdata = (fifo_out_tdata ^ {8{key}});
           
	   if (fifo_out_tlast) begin
             next_state = PKT_HDR_WORD0;
	   end
         end 
       end
     endcase 
   end

   always @(posedge axi_aclk) begin
     if (~axi_aresetn) begin
       state <= PKT_HDR_WORD0;
     end
     else begin
       state <= next_state;
     end
   end

endmodule
