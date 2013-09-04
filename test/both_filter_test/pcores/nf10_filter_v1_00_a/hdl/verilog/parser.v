/*******************************************************************************
 *
 *  NetFPGA-10G http://www.netfpga.org
 *
 *  File:
 *        filter.v
 *
 *  Library:
 *        hw/contrib/pcores/nf10_filter_v1_00_a
 *
 *  Module:
 *        filter
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

module parser
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
    output reg [C_M_AXIS_DATA_WIDTH - 1:0]         m_axis_tdata,
    output reg [((C_M_AXIS_DATA_WIDTH / 8)) - 1:0] m_axis_tstrb,
    output reg [C_M_AXIS_TUSER_WIDTH-1:0]          m_axis_tuser,
    output reg                                    m_axis_tvalid,
    input                                      m_axis_tready,
    output reg                                    m_axis_tlast,

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
    input  [NUM_RO_REGS*C_S_AXI_DATA_WIDTH-1:0]  ro_regs,

    output reg [31:0]                          source_addr,
    output reg [31:0]                          dest_addr,
    output reg [15:0]                          source_port,
    output reg [15:0]                          dest_port,
    output reg                                 found_header
);

   localparam READ_HEADER_1 = 2'b00;
   localparam READ_HEADER_2 = 2'b01;
   localparam PAYLOAD       = 2'b10;

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

   reg                              state;
   reg                              state_next;

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

   always @(*) begin
      m_axis_tuser = fifo_out_tuser;
      m_axis_tlast = fifo_out_tlast;
      m_axis_tstrb = fifo_out_tstrb;
      m_axis_tvalid = 0;

      m_axis_tdata = fifo_out_tdata;

      in_fifo_rd_en = 0;

      if (m_axis_tready && !in_fifo_empty) begin
        in_fifo_rd_en = 1;
      end

      state_next = state; 

      if (!axi_aresetn) begin
         state_next = READ_HEADER_1;
         m_axis_tuser = 'h0;
         m_axis_tlast = 'h0;
         m_axis_tstrb = 0;
         m_axis_tvalid = 0;
         m_axis_tdata = 0;
         in_fifo_rd_en = 0;
      end else begin
         m_axis_tuser = fifo_out_tuser;
         m_axis_tlast = fifo_out_tlast;
         m_axis_tstrb = fifo_out_tstrb;
         m_axis_tvalid = 0;

         m_axis_tdata = fifo_out_tdata;

         in_fifo_rd_en = 0;

         if (m_axis_tready && !in_fifo_empty) begin
            in_fifo_rd_en = 1;
         end

         state_next = state; 

         case (state) 
            READ_HEADER_1: begin
               m_axis_tvalid = ~in_fifo_empty;
               found_header = 1'b0;
               if (m_axis_tvalid && m_axis_tready) begin 
                  state_next = READ_HEADER_2; 
                  // read source IP address
                  source_addr        = fifo_out_tdata[47:16];
                  // read first part of destination IP address
                  dest_addr[31:16]   = fifo_out_tdata[15:0];
               end
            end   
            READ_HEADER_2: begin
               m_axis_tvalid = ~in_fifo_empty;
               if(m_axis_tvalid && m_axis_tready) begin
                  // read last 2 bytes of destination IP address
                  dest_addr[15:0] = fifo_out_tdata[255:240];
                  // read source port
                  source_port  = fifo_out_tdata[239:224];
                  dest_port    = fifo_out_tdata[223:208];
                  // read destination port
                  //
                  found_header = 1'b1;
                  if(!m_axis_tlast)
                     state_next = PAYLOAD; 
                  else 
                     state_next = READ_HEADER_1; 
               end
            end   
            PAYLOAD: begin
               m_axis_tvalid = ~in_fifo_empty;
               found_header = 1'b0;
               if (m_axis_tvalid && m_axis_tready) begin
                  if (m_axis_tlast)
                     state_next = READ_HEADER_1;
                  else
                     state_next = PAYLOAD;
               end
            end   
         endcase
      end
   end

  always @(posedge axi_aclk) begin
     if (!axi_aresetn)
        state <= READ_HEADER_1;
      else
         state <= state_next;
   end 

endmodule
