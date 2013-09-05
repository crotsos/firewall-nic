/*******************************************************************************
 *
 *  NetFPGA-10G http://www.netfpga.org
 *
 *  File:
 *        nf10_filter.v
 *
 *  Library:
 *        hw/contrib/pcores/nf10_filter_v1_00_a
 *
 *  Module:
 *        nf10_filter
 *
 *  Author:
 *        Adam Covington, Muhammad Shahbaz
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

module nf10_filter
#(
    // Master AXI Stream Data Width
    parameter C_M_AXIS_DATA_WIDTH=256,
    parameter C_S_AXIS_DATA_WIDTH=256,
    parameter C_M_AXIS_TUSER_WIDTH=128,
    parameter C_S_AXIS_TUSER_WIDTH=128,
    parameter C_S_AXI_DATA_WIDTH=32,
    parameter C_S_AXI_ADDR_WIDTH=32,
    parameter C_USE_WSTRB=0,
    parameter C_DPHASE_TIMEOUT=0,
    parameter C_BASEADDR=32'hFFFFFFFF,
    parameter C_HIGHADDR=32'h00000000,
    parameter C_S_AXI_ACLK_FREQ_HZ=100
)
(
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

    // AXI Lite control/status interface
    input                                      s_axi_aclk,
    input                                      s_axi_aresetn,
    input  [C_S_AXI_ADDR_WIDTH-1:0]            s_axi_awaddr,
    input                                      s_axi_awvalid,
    output                                     s_axi_awready,
    input  [C_S_AXI_DATA_WIDTH-1:0]            s_axi_wdata,
    input  [((C_S_AXI_DATA_WIDTH / 8)) - 1:0]  s_axi_wstrb,
    input                                      s_axi_wvalid,
    output                                     s_axi_wready,
    output [1:0]                               s_axi_bresp,
    output                                     s_axi_bvalid,
    input                                      s_axi_bready,
    input  [C_S_AXI_ADDR_WIDTH-1:0]            s_axi_araddr,
    input                                      s_axi_arvalid,
    output                                     s_axi_arready,
    output [C_S_AXI_DATA_WIDTH-1:0]            s_axi_rdata,
    output [1:0]                               s_axi_rresp,
    output                                     s_axi_rvalid,
    input                                      s_axi_rready
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

   // --------- Internal Parameters ------
   localparam NUM_RW_REGS = 1;
   localparam NUM_WO_REGS = 1;
   localparam NUM_RO_REGS = 1;

   // ------------- Regs/ wires -----------

   wire [NUM_RW_REGS*C_S_AXI_DATA_WIDTH-1:0] rw_regs;
   wire [NUM_RW_REGS*C_S_AXI_DATA_WIDTH-1:0] rw_defaults;
   wire [NUM_WO_REGS*C_S_AXI_DATA_WIDTH-1:0] wo_regs;
   wire [NUM_WO_REGS*C_S_AXI_DATA_WIDTH-1:0] wo_defaults;
   wire [NUM_RO_REGS*C_S_AXI_DATA_WIDTH-1:0] ro_regs;

   wire result_wr_en;
   wire result_din;
   wire result_nearly_full;

   // ------------ Modules -------------

   axi_lite_regs
   #( .C_S_AXI_DATA_WIDTH   (C_S_AXI_DATA_WIDTH),
      .C_S_AXI_ADDR_WIDTH   (C_S_AXI_ADDR_WIDTH),
      .C_USE_WSTRB          (C_USE_WSTRB),
      .C_DPHASE_TIMEOUT     (C_DPHASE_TIMEOUT),
      .C_BAR0_BASEADDR      (C_BASEADDR),
      .C_BAR0_HIGHADDR      (C_HIGHADDR),
      .C_S_AXI_ACLK_FREQ_HZ (C_S_AXI_ACLK_FREQ_HZ),

      .NUM_RW_REGS          (NUM_RW_REGS),
      .NUM_WO_REGS          (NUM_WO_REGS),
      .NUM_RO_REGS          (NUM_RO_REGS)
    )
      axi_lite_regs_inst
        (
         .s_axi_aclk      (s_axi_aclk),
         .s_axi_aresetn   (s_axi_aresetn),
         .s_axi_awaddr    (s_axi_awaddr),
         .s_axi_awvalid   (s_axi_awvalid),
         .s_axi_wdata     (s_axi_wdata),
         .s_axi_wstrb     (s_axi_wstrb),
         .s_axi_wvalid    (s_axi_wvalid),
         .s_axi_bready    (s_axi_bready),
         .s_axi_araddr    (s_axi_araddr),
         .s_axi_arvalid   (s_axi_arvalid),
         .s_axi_rready    (s_axi_rready),
         .s_axi_arready   (s_axi_arready),
         .s_axi_rdata     (s_axi_rdata),
         .s_axi_rresp     (s_axi_rresp),
         .s_axi_rvalid    (s_axi_rvalid),
         .s_axi_wready    (s_axi_wready),
         .s_axi_bresp     (s_axi_bresp),
         .s_axi_bvalid    (s_axi_bvalid),
         .s_axi_awready   (s_axi_awready),

         .rw_regs         (rw_regs),
         .rw_defaults     (rw_defaults),
         .wo_regs         (wo_regs),
         .wo_defaults     (wo_defaults),
         .ro_regs         (ro_regs)
        );

   // filter (user-logic)
   parser #
   (
     .C_M_AXIS_DATA_WIDTH  (C_M_AXIS_DATA_WIDTH),
     .C_S_AXIS_DATA_WIDTH  (C_S_AXIS_DATA_WIDTH),
     .C_M_AXIS_TUSER_WIDTH (C_M_AXIS_TUSER_WIDTH),
     .C_S_AXIS_TUSER_WIDTH (C_S_AXIS_TUSER_WIDTH),

     .NUM_RW_REGS          (NUM_RW_REGS),
     .NUM_WO_REGS          (NUM_WO_REGS),
     .NUM_RO_REGS          (NUM_RO_REGS)
   )
     parser
       (
         // Global Ports
         .axi_aclk      (s_axi_aclk),
         .axi_aresetn   (s_axi_aresetn),

         .result_wr_en(result_wr_en),
         .result_din(result_din),
         .result_nearly_full(result_nearly_full),

         // Slave Stream Ports (interface to RX queues)
         .s_axis_tdata  (s_axis_tdata),
         .s_axis_tstrb  (s_axis_tstrb),
         .s_axis_tuser  (s_axis_tuser),
         .s_axis_tvalid (s_axis_tvalid),
         .s_axis_tready (s_axis_tready_filter),
         .s_axis_tlast  (s_axis_tlast),

         // Registers
         .rw_regs       (rw_regs),
         .rw_defaults   (rw_defaults),
         .wo_regs       (wo_regs),
         .wo_defaults   (wo_defaults),
         .ro_regs       (ro_regs)
       );

   // filter (user-logic)
   fifo_store #
   (
     .C_M_AXIS_DATA_WIDTH  (C_M_AXIS_DATA_WIDTH),
     .C_S_AXIS_DATA_WIDTH  (C_S_AXIS_DATA_WIDTH),
     .C_M_AXIS_TUSER_WIDTH (C_M_AXIS_TUSER_WIDTH),
     .C_S_AXIS_TUSER_WIDTH (C_S_AXIS_TUSER_WIDTH),

     .NUM_RW_REGS          (NUM_RW_REGS),
     .NUM_WO_REGS          (NUM_WO_REGS),
     .NUM_RO_REGS          (NUM_RO_REGS)
   )
     fifo_store
       (
         // Global Ports
         .axi_aclk      (s_axi_aclk),
         .axi_aresetn   (s_axi_aresetn),

         // Master Stream Ports (interface to data path)
         .m_axis_tdata  (m_axis_tdata),
         .m_axis_tstrb  (m_axis_tstrb),
         .m_axis_tuser  (m_axis_tuser),
         .m_axis_tvalid (m_axis_tvalid),
         .m_axis_tready (m_axis_tready),
         .m_axis_tlast  (m_axis_tlast),

         // Slave Stream Ports (interface to RX queues)
         .s_axis_tdata  (s_axis_tdata),
         .s_axis_tstrb  (s_axis_tstrb),
         .s_axis_tuser  (s_axis_tuser),
         .s_axis_tvalid (s_axis_tvalid),
         .s_axis_tready (s_axis_tready),
         .s_axis_tlast  (s_axis_tlast),

         .result_wr_en(result_wr_en),
         .result_din(result_din),
         .result_nearly_full(result_nearly_full)
       );

endmodule
