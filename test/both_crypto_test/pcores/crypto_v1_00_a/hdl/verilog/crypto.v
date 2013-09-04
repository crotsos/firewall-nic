/*******************************************************************************
 *
 *  NetFPGA-10G http://www.netfpga.org
 *
 *  File:
 *        crypto.v
 *
 *  Library:
 *        hw/contrib/pcores/nf10_crypto_v1_00_a
 *
 *  Module:
 *        crypto
 *
 *  Author:
 *        Template automatically generated
 *        Altered by <user name> 
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

module crypto
#(
    // Master AXI Stream Data Width
    parameter C_M_AXIS_DATA_WIDTH=256,
    parameter C_S_AXIS_DATA_WIDTH=256,
    parameter C_M_AXIS_TUSER_WIDTH=128,
    parameter C_S_AXIS_TUSER_WIDTH=128,
    parameter C_S_AXI_DATA_WIDTH=32,
    // Register parameters
    parameter NUM_RW_REGS = 0,
    parameter NUM_WO_REGS = 0,
    parameter NUM_RO_REGS = 0
)
(
    // Global Ports
    input axi_aclk,
    input axi_aresetn,

    // Master Stream Ports (interface to data path downstream)
    output [C_M_AXIS_DATA_WIDTH - 1:0]         m_axis_tdata,
    output [((C_M_AXIS_DATA_WIDTH / 8)) - 1:0] m_axis_tstrb,
    output [C_M_AXIS_TUSER_WIDTH-1:0]          m_axis_tuser,
    output                                     m_axis_tvalid,
    input                                      m_axis_tready,
    output                                     m_axis_tlast,

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

   localparam READ_HEADER_1 = 2'b00;
   localparam READ_HEADER_2 = 2'b01;
   localparam PAYLOAD       = 2'b10;

   localparam KEY           = 32'hffffffff;

   function integer log2;
      input integer number;
      begin
         log2=0;
         while(2**log2<number) begin
            log2=log2+1;
         end
      end
   endfunction // log2

   // ------------- Regs/ wires -----------

   wire                             in_fifo_nearly_full;
   wire                             in_fifo_empty;
   reg                              in_fifo_rd_en;
   wire [C_M_AXIS_TUSER_WIDTH-1:0]  fifo_out_tuser;
   wire [C_M_AXIS_DATA_WIDTH-1:0]   fifo_out_tdata;
   wire [C_M_AXIS_DATA_WIDTH/8-1:0] fifo_out_tstrb;
   wire  	                        fifo_out_tlast;
   wire                             fifo_tvalid;
   wire                             fifo_tlast;

   reg [1:0]                        crypto_state;
   reg [1:0]                        crypto_state_next;

   reg [C_M_AXIS_DATA_WIDTH-1:0]   reg_fifo_out_tdata;

   // ------------ Modules -------------

   fallthrough_small_fifo
   #( .WIDTH(C_M_AXIS_DATA_WIDTH+C_M_AXIS_TUSER_WIDTH+C_M_AXIS_DATA_WIDTH/8+1),
      .MAX_DEPTH_BITS(2)
    )
    input_fifo
    ( // Outputs
      .dout                         ({fifo_out_tlast, fifo_out_tuser, fifo_out_tstrb, fifo_out_tdata}),
      .full                         (),
      .nearly_full                  (in_fifo_nearly_full),
	  .prog_full                    (),
      .empty                        (in_fifo_empty),
      // Inputs
      .din                          ({s_axis_tlast, s_axis_tuser, s_axis_tstrb, s_axis_tdata}),
      .wr_en                        (s_axis_tvalid & s_axis_tready),
      .rd_en                        (in_fifo_rd_en),
      .reset                        (~axi_aresetn),
      .clk                          (axi_aclk));

   // ------------- Logic ------------

   assign s_axis_tready = !in_fifo_nearly_full;
   assign m_axis_tuser = fifo_out_tuser;
   //assign m_axis_tdata = fifo_out_tdata;
   assign m_axis_tlast = fifo_out_tlast;
   assign m_axis_tstrb = fifo_out_tstrb;
   assign m_axis_tvalid = ~in_fifo_empty;

   assign m_axis_tdata = reg_fifo_out_tdata;

   always @(*) begin
      in_fifo_rd_en = 0;

      if (m_axis_tready && !in_fifo_empty) begin
        in_fifo_rd_en = 1;
      end

      crypto_state = crypto_state_next;
      reg_fifo_out_tdata = fifo_out_tdata;

      if (!axi_aresetn) begin
         crypto_state = READ_HEADER_1;
      end else begin
         case (crypto_state) 
            READ_HEADER_1: begin
               if (m_axis_tvalid && m_axis_tready) begin 
                  crypto_state_next = READ_HEADER_2; 
               end
            end   
            READ_HEADER_2: begin
               if(m_axis_tvalid && m_axis_tready && !m_axis_tlast) begin
                  crypto_state_next = PAYLOAD; 
                  reg_fifo_out_tdata = {fifo_out_tdata[255:240],
                                       (fifo_out_tdata[C_M_AXIS_DATA_WIDTH - 16 - 1:0]
                                        ^ {{7{KEY}}, KEY[15:0]})
                                        };
               end else begin
                  if(m_axis_tvalid && m_axis_tready && m_axis_tlast) begin
                     crypto_state_next = READ_HEADER_1; 
                     //reg_fifo_out_tdata = {fifo_out_tdata[255:240], (fifo_out_tdata[C_M_AXIS_DATA_WIDTH - 16 - 1:0] ^ {{{7{KEY}}, KEY[15:0]})}};
                     reg_fifo_out_tdata = {fifo_out_tdata[255:240],
                                          (fifo_out_tdata[C_M_AXIS_DATA_WIDTH - 16 - 1:0]
                                           ^ {{7{KEY}}, KEY[15:0]})
                                           };
                  end
               end
            end   
            PAYLOAD: begin

               reg_fifo_out_tdata = (fifo_out_tdata ^ {8{KEY}});

               if (m_axis_tvalid && m_axis_tready && m_axis_tlast) begin
                  crypto_state_next = READ_HEADER_1;
               end
            end   
         endcase
      end
   end

   always @(posedge axi_aclk) begin
     if (!axi_aresetn) 
        crypto_state_next <= READ_HEADER_1;
     else
        crypto_state_next <= crypto_state;
   end
endmodule
