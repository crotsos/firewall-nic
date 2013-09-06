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

module fifo_store
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
    output reg                                    m_axis_tvalid,
    input                                      m_axis_tready,
    output                                     m_axis_tlast,

    // Slave Stream Ports (interface to data path upstream)
    input [C_S_AXIS_DATA_WIDTH - 1:0]          s_axis_tdata,
    input [((C_S_AXIS_DATA_WIDTH / 8)) - 1:0]  s_axis_tstrb,
    input [C_S_AXIS_TUSER_WIDTH-1:0]           s_axis_tuser,
    input                                      s_axis_tvalid,
    output                                     s_axis_tready,
    input                                      s_axis_tlast,

    input                                   result_wr_en,
    input  [104:0]                                    result_din,
    output                                     result_nearly_full
);

   localparam FILTER_SRC_ADDR = 32'h5;
   
   localparam READ               = 3'b000;
   localparam WRITE              = 3'b001;
   localparam WRITE_RST_HEADER_1 = 3'b010;
   localparam WRITE_RST_HEADER_2 = 3'b011;
   localparam WRITE_RST_PAYLOAD  = 3'b100;

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
   reg [C_M_AXIS_TUSER_WIDTH-1:0]  fifo_out_tuser;
   wire [C_M_AXIS_DATA_WIDTH-1:0]   fifo_out_tdata;
   wire [C_M_AXIS_DATA_WIDTH/8-1:0] fifo_out_tstrb;
   wire  	                        fifo_out_tlast;
   wire                             fifo_tvalid;
   wire                             fifo_tlast;

   reg                              result_deque;
   wire                             result_dout;
   wire                             result_empty;
   wire  [31:0]                     result_src_addr;
   wire  [31:0]                     result_dst_addr;
   wire  [15:0]                     result_src_port;
   wire  [15:0]                     result_dst_port;
   wire  [7:0]                      proto;

   reg   [5:0]                           state;
   reg   [5:0]                           state_next;

   // ------------ Modules -------------

   fallthrough_small_fifo
   #( .WIDTH(C_M_AXIS_DATA_WIDTH+C_M_AXIS_TUSER_WIDTH+C_M_AXIS_DATA_WIDTH/8+1),
      .MAX_DEPTH_BITS(10)
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


   fallthrough_small_fifo
   #( .WIDTH(105),
      .MAX_DEPTH_BITS(10)
    )
    result_fifo
    ( // Outputs
      .dout                         ({result_dout, result_src_addr, result_dst_addr, 
                                      result_src_port, result_dst_port, proto}),
      .full                         (),
      .nearly_full                  (result_nearly_full),
	  .prog_full                    (),
      .empty                        (result_empty),
      // Inputs
      .din                          (result_din),
      .wr_en                        (result_wr_en),
      .rd_en                        (result_deque),
      .reset                        (~axi_aresetn),
      .clk                          (axi_aclk));


   // ------------- Logic ------------

   assign s_axis_tready = !in_fifo_nearly_full;
   assign m_axis_tuser = fifo_out_tuser;
   assign m_axis_tdata = fifo_out_tdata;
   assign m_axis_tlast = fifo_out_tlast;
   assign m_axis_tstrb = fifo_out_tstrb;

   always @(*) begin

      state_next = state;

      case (state) 
         READ: begin
            m_axis_tvalid = 1'b0;
            in_fifo_rd_en = 0;
            result_deque = 1'b0;
            if (!result_empty) begin
//               if (!result_dout & proto == 6) 
//                  state_next = WRITE_RST_HEADER_1 ;
//               else
                  state_next = WRITE;
//            end
         end
         end
         WRITE : begin
            if(!in_fifo_empty) begin
               m_axis_tvalid = 1'b1;
               if(m_axis_tready) begin                  
                  in_fifo_rd_en = 1'b1;
                  m_axis_tvalid = result_dout; 
                  if (fifo_out_tlast) begin
                     state_next = READ;
                     result_deque = 1'b1;
                  end
               end else begin
                   in_fifo_rd_en = 1'b0;
                   //m_axis_tvalid = 1'b0;
               end
            end else begin
               in_fifo_rd_en = 1'b0;
               m_axis_tvalid = 1'b0; 
            end
        end 
//        WRITE_RST_HEADER_1: begin
//         fifo_out_tuser[31:24] = fifo_out_tuser[23:16];
//         m_axis_tvalid = 1'b1;
//         in_fifo_rd_en = 1'b0;
//         if(!in_fifo_empty & m_axis_tready) begin                  
//            in_fifo_rd_en = 1'b1;
//            if (fifo_out_tlast) begin
//               state_next = READ;
//               result_deque = 1'b1;
//            end else begin
//               state_next = WRITE_RST_HEADER_2; 
//           end
//         end
//      end
//      WRITE_RST_HEADER_2: begin
//         fifo_out_tuser[31:24] = fifo_out_tuser[23:16];
//         m_axis_tvalid = 1'b1;
//         in_fifo_rd_en = 1'b0;
//         if(!in_fifo_empty & m_axis_tready) begin                  
//            in_fifo_rd_en = 1'b1;
//            if (fifo_out_tlast) begin
//               state_next = READ;
//               result_deque = 1'b1;
//            end else begin  
//               state_next = WRITE_RST_PAYLOAD; 
//            end
//         end
//       end
//      WRITE_RST_PAYLOAD: begin
//         fifo_out_tuser[32:24] = fifo_out_tuser[23:16];
//         in_fifo_rd_en = 1'b0;
//         m_axis_tvalid = 1'b1;
//         if(!in_fifo_empty & m_axis_tready) begin                  
//            in_fifo_rd_en = 1'b1;
//            if (fifo_out_tlast) begin
//               state_next = READ;
//               result_deque = 1'b1;
//            end            
//         end
//       end
      endcase
   end

  always @(posedge axi_aclk) begin
     if (!axi_aresetn) begin 
        state <= READ;
      end
      else begin
         state <= state_next;
      end
   end 

endmodule
