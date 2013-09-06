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
    
    output reg                                   result_din,
    input                                        result_nearly_full,
    output reg                                   result_wr_en
);

   localparam READ_HEADER_1 = 3'b000;
   localparam READ_HEADER_2 = 3'b001;
   localparam PUSH_RESULT   = 3'b010;
   localparam PAYLOAD       = 3'b011;
   localparam SRC_IP = 32'hAAAAAAAA;
   localparam DST_IP = 32'hBBBBBBBB;


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

   reg [2:0]                           state;
   reg [2:0]                           state_next;
   
   reg [31:0]                          source_addr;
   reg [31:0]                          dest_addr;
   reg [15:0]                          source_port;
   reg [15:0]                          dest_port;

   reg [31:0]                          source_addr_next;
   reg [31:0]                          dest_addr_next;
   reg [15:0]                          source_port_next;
   reg [15:0]                          dest_port_next;

   reg                                 found_header;
   reg                                 found_header_next;
   reg                                 clear_header;
   reg                                 clear_header_next;


   // ------------ Modules -------------

   fallthrough_small_fifo
   #( .WIDTH(C_M_AXIS_DATA_WIDTH+C_M_AXIS_TUSER_WIDTH+C_M_AXIS_DATA_WIDTH/8+1),
      .MAX_DEPTH_BITS(20)
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

filter #
   (
     .C_M_AXIS_DATA_WIDTH  (C_M_AXIS_DATA_WIDTH),
     .C_S_AXIS_DATA_WIDTH  (C_S_AXIS_DATA_WIDTH),
     .C_M_AXIS_TUSER_WIDTH (C_M_AXIS_TUSER_WIDTH),
     .C_S_AXIS_TUSER_WIDTH (C_S_AXIS_TUSER_WIDTH),

     .NUM_RW_REGS          (NUM_RW_REGS),
     .NUM_WO_REGS          (NUM_WO_REGS),
     .NUM_RO_REGS          (NUM_RO_REGS)
   )
filter
    ( // Outputs
      .m_send_rd                      (m_send_rd),
      .m_send                         (m_send),
      
      // Inputs
      .hdr_rd                       (found_header),
      .hdr_clear                    (clear_header),
      .hdr_src_ip                   (source_addr),
      .hdr_dst_ip                   (dest_addr),
      .hdr_src_port                 (source_port),
      .hdr_dst_port                 (dest_port),
      .rw_regs                      (rw_regs),
      .rw_defaults                  (rw_defaults),
      .wo_regs                      (wo_regs),
      .wo_defaults                  (wo_defaults),
      
      .axi_aclk                     (axi_aclk),
      .axi_aresetn                  (axi_aresetn)
   );

   // ------------- Logic ------------

   assign s_axis_tready = ~in_fifo_nearly_full;

   always @(*) begin
      in_fifo_rd_en = 0;

      if (!in_fifo_empty) begin
        in_fifo_rd_en = 1;
      end

      state_next = state; 
      found_header_next = found_header;
      clear_header_next = clear_header;
      result_wr_en = 1'b0;

      if (!axi_aresetn) begin
         state_next = READ_HEADER_1;
         //found_header = 1'b0;
         //clear_header = 1'b0; 
         found_header_next = 1'b0;
         clear_header_next = 1'b0; 
      end else begin
         case (state) 
            READ_HEADER_1: begin
               found_header_next = 1'b0;
               clear_header_next = 1'b1; 
               if (!in_fifo_empty) begin 
                  state_next = READ_HEADER_2; 
                  // read source IP address
                  //source_addr        = fifo_out_tdata[47:16];
                  source_addr_next   = fifo_out_tdata[47:16];
                  // read first part of destination IP address
                  //dest_addr[31:16]   = fifo_out_tdata[15:0];
                  dest_addr_next[31:16]   = fifo_out_tdata[15:0];
               end
            end   
            READ_HEADER_2: begin
               if(!in_fifo_empty) begin
                  // read last 2 bytes of destination IP address
                  //dest_addr[15:0] = fifo_out_tdata[255:240];
                  dest_addr_next[15:0] = fifo_out_tdata[255:240];
                  // read source port
                  //source_port  = fifo_out_tdata[239:224];
                  source_port_next  = fifo_out_tdata[239:224];
                  // read destination port
                  //dest_port    = fifo_out_tdata[223:208];
                  dest_port_next    = fifo_out_tdata[223:208];
                  //
                  found_header_next = 1'b1;
                  clear_header_next = 1'b0; 
                  state_next = PUSH_RESULT;
                  in_fifo_rd_en = 1'b0;
               end
            end
            PUSH_RESULT: begin
               found_header_next = 1'b1;
               clear_header_next = 1'b0;
               in_fifo_rd_en = 1'b0;
               if (m_send_rd && !result_nearly_full) begin
                  result_wr_en = 1'b1;
                  result_din = m_send;
                  state_next = PAYLOAD;
               end
            end

            PAYLOAD: begin
               found_header_next = 1'b0;
               clear_header_next = 1'b1; 
               if (!in_fifo_empty) begin
                  if (fifo_out_tlast)
                     state_next = READ_HEADER_1;
                  else
                     state_next = PAYLOAD;
               end
            end   
       
        endcase
      end
   end

  always @(posedge axi_aclk) begin
     if (!axi_aresetn) begin
        state <= READ_HEADER_1;
        source_addr <= 32'h0;
        dest_addr <= 32'h0;
        source_port <= 16'h0;
        dest_port <= 16'h0;
        found_header <= 1'b0;
      end else begin
         state <= state_next;

         source_addr <= source_addr_next;
         dest_addr <= dest_addr_next;
         source_port <= source_port_next;
         dest_port <= dest_port_next;

         found_header <= found_header_next;
         clear_header <= clear_header_next;
      end
   end 

endmodule
