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

module filter
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


   // parser input
   input                                       hdr_rd,
   input                                       hdr_clear,
   input [IP_ADDR_LEN-1:0]                     hdr_src_ip,
   input [IP_ADDR_LEN-1:0]                     hdr_dst_ip,
   input [PORT_LEN-1:0]                        hdr_src_port,
   input [PORT_LEN-1:0]                        hdr_dst_port,

   //fifo_signals
   output reg                                     m_send,
   output reg                                     m_send_rd,

    // Registers
    input  [NUM_RW_REGS*C_S_AXI_DATA_WIDTH-1:0]  rw_regs,
    output [NUM_RW_REGS*C_S_AXI_DATA_WIDTH-1:0]  rw_defaults,
    input  [NUM_WO_REGS*C_S_AXI_DATA_WIDTH-1:0]  wo_regs,
    output [NUM_WO_REGS*C_S_AXI_DATA_WIDTH-1:0]  wo_defaults,
    input  [NUM_RO_REGS*C_S_AXI_DATA_WIDTH-1:0]  ro_regs
);

   localparam FILTER_SRC_ADDR = 32'h5;
   localparam IP_ADDR_LEN = 32;
   localparam PORT_LEN = 16;

   localparam SRC_IP = 32'hAAAAAAAA;
   localparam DST_IP = 32'hBBBBBBBB;

   localparam WAIT_FOR_HEADER = 2'b00;
   localparam LOOKUP          = 2'b01;
   localparam WAIT_FOR_CLEAR  = 2'b10;

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
   reg                              send_next;
   reg                              send_rd_next;
   reg [1:0]                        state;
   reg [1:0]                        state_next;

   // ------------ Modules -------------

   // ------------- Logic ------------

   always @(*) begin

      state_next = state; 
      send_next = m_send;
      send_rd_next = m_send_rd;

      case (state) 
         WAIT_FOR_HEADER: begin 
            send_next = 1'b0;
            send_rd_next = 1'b0;
            if (hdr_rd) begin 
               state_next = LOOKUP;
            end
         end

         LOOKUP: begin
            if (hdr_src_ip == SRC_IP)
               send_next = 1;
            else
               send_next = 0;
            send_rd_next = 1'b1;
            state_next = WAIT_FOR_CLEAR; 
         end

         WAIT_FOR_CLEAR: begin      
            if (hdr_clear) begin 
               state_next = WAIT_FOR_HEADER;
            end
         end
      endcase 
   end

   always @(posedge axi_aclk) begin
     if (!axi_aresetn) begin 
        m_send <= 0;
        m_send_rd <= 0;
        state <= WAIT_FOR_HEADER;
     end
     else begin
        m_send <= send_next;
        m_send_rd <= send_rd_next;
        state <= state_next;
     end 
   end

endmodule
