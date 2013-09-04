//-----------------------------------------------------------------------------
// system_axisim.v
//-----------------------------------------------------------------------------

`timescale 1 ps / 100 fs

`uselib lib=unisims_ver

module system_axisim
  (
    RESET,
    RS232_Uart_1_sout,
    RS232_Uart_1_sin,
    CLK,
    nf10_10g_interface_0_xaui_tx_l0_p_pin,
    nf10_10g_interface_0_xaui_tx_l0_n_pin,
    nf10_10g_interface_0_xaui_tx_l1_p_pin,
    nf10_10g_interface_0_xaui_tx_l1_n_pin,
    nf10_10g_interface_0_xaui_tx_l2_p_pin,
    nf10_10g_interface_0_xaui_tx_l3_n_pin,
    nf10_10g_interface_0_xaui_tx_l2_n_pin,
    nf10_10g_interface_0_xaui_tx_l3_p_pin,
    nf10_10g_interface_0_xaui_rx_l0_n_pin,
    nf10_10g_interface_0_xaui_rx_l1_p_pin,
    nf10_10g_interface_0_xaui_rx_l1_n_pin,
    nf10_10g_interface_0_xaui_rx_l2_p_pin,
    nf10_10g_interface_0_xaui_rx_l2_n_pin,
    nf10_10g_interface_0_xaui_rx_l3_p_pin,
    nf10_10g_interface_0_xaui_rx_l3_n_pin,
    nf10_10g_interface_0_xaui_rx_l0_p_pin,
    nf10_10g_interface_1_xaui_tx_l3_n_pin,
    nf10_10g_interface_1_xaui_tx_l1_n_pin,
    nf10_10g_interface_1_xaui_tx_l3_p_pin,
    nf10_10g_interface_1_xaui_tx_l0_p_pin,
    nf10_10g_interface_1_xaui_tx_l0_n_pin,
    nf10_10g_interface_1_xaui_tx_l1_p_pin,
    nf10_10g_interface_1_xaui_tx_l2_n_pin,
    nf10_10g_interface_1_xaui_rx_l0_p_pin,
    nf10_10g_interface_1_xaui_rx_l0_n_pin,
    nf10_10g_interface_1_xaui_rx_l1_p_pin,
    nf10_10g_interface_1_xaui_rx_l1_n_pin,
    nf10_10g_interface_1_xaui_rx_l2_p_pin,
    nf10_10g_interface_1_xaui_rx_l2_n_pin,
    nf10_10g_interface_1_xaui_rx_l3_p_pin,
    nf10_10g_interface_1_xaui_rx_l3_n_pin,
    nf10_10g_interface_1_xaui_tx_l2_p_pin,
    nf10_10g_interface_2_xaui_tx_l3_p_pin,
    nf10_10g_interface_2_xaui_tx_l3_n_pin,
    nf10_10g_interface_2_xaui_tx_l0_p_pin,
    nf10_10g_interface_2_xaui_tx_l0_n_pin,
    nf10_10g_interface_2_xaui_tx_l1_p_pin,
    nf10_10g_interface_2_xaui_tx_l2_p_pin,
    nf10_10g_interface_2_xaui_tx_l2_n_pin,
    nf10_10g_interface_2_xaui_rx_l0_p_pin,
    nf10_10g_interface_2_xaui_rx_l0_n_pin,
    nf10_10g_interface_2_xaui_rx_l1_p_pin,
    nf10_10g_interface_2_xaui_rx_l1_n_pin,
    nf10_10g_interface_2_xaui_rx_l2_p_pin,
    nf10_10g_interface_2_xaui_rx_l2_n_pin,
    nf10_10g_interface_2_xaui_rx_l3_p_pin,
    nf10_10g_interface_2_xaui_rx_l3_n_pin,
    nf10_10g_interface_2_xaui_tx_l1_n_pin,
    nf10_10g_interface_3_xaui_tx_l3_p_pin,
    nf10_10g_interface_3_xaui_tx_l3_n_pin,
    nf10_10g_interface_3_xaui_tx_l0_p_pin,
    nf10_10g_interface_3_xaui_tx_l0_n_pin,
    nf10_10g_interface_3_xaui_tx_l1_p_pin,
    nf10_10g_interface_3_xaui_tx_l2_p_pin,
    nf10_10g_interface_3_xaui_tx_l2_n_pin,
    nf10_10g_interface_3_xaui_rx_l0_p_pin,
    nf10_10g_interface_3_xaui_rx_l0_n_pin,
    nf10_10g_interface_3_xaui_rx_l1_p_pin,
    nf10_10g_interface_3_xaui_rx_l1_n_pin,
    nf10_10g_interface_3_xaui_rx_l2_p_pin,
    nf10_10g_interface_3_xaui_rx_l2_n_pin,
    nf10_10g_interface_3_xaui_rx_l3_p_pin,
    nf10_10g_interface_3_xaui_rx_l3_n_pin,
    nf10_10g_interface_3_xaui_tx_l1_n_pin,
    refclk_A_p,
    refclk_A_n,
    refclk_B_p,
    refclk_B_n,
    refclk_C_p,
    refclk_C_n,
    refclk_D_p,
    refclk_D_n,
    MDC,
    MDIO,
    PHY_RST_N,
    pcie_clk_p,
    pcie_top_0_pci_exp_0_txp_pin,
    pcie_clk_n,
    pcie_top_0_pci_exp_0_rxp_pin,
    pcie_top_0_pci_exp_0_rxn_pin,
    pcie_top_0_pci_exp_1_txp_pin,
    pcie_top_0_pci_exp_1_txn_pin,
    pcie_top_0_pci_exp_1_rxp_pin,
    pcie_top_0_pci_exp_1_rxn_pin,
    pcie_top_0_pci_exp_4_txp_pin,
    pcie_top_0_pci_exp_2_txp_pin,
    pcie_top_0_pci_exp_2_txn_pin,
    pcie_top_0_pci_exp_2_rxp_pin,
    pcie_top_0_pci_exp_2_rxn_pin,
    pcie_top_0_pci_exp_3_txp_pin,
    pcie_top_0_pci_exp_3_txn_pin,
    pcie_top_0_pci_exp_3_rxp_pin,
    pcie_top_0_pci_exp_3_rxn_pin,
    pcie_top_0_pci_exp_4_txn_pin,
    pcie_top_0_pci_exp_4_rxp_pin,
    pcie_top_0_pci_exp_4_rxn_pin,
    pcie_top_0_pci_exp_5_txp_pin,
    pcie_top_0_pci_exp_5_txn_pin,
    pcie_top_0_pci_exp_5_rxp_pin,
    pcie_top_0_pci_exp_5_rxn_pin,
    pcie_top_0_pci_exp_6_txp_pin,
    pcie_top_0_pci_exp_6_txn_pin,
    pcie_top_0_pci_exp_6_rxp_pin,
    pcie_top_0_pci_exp_6_rxn_pin,
    pcie_top_0_pci_exp_7_txn_pin,
    pcie_top_0_pci_exp_7_txp_pin,
    pcie_top_0_pci_exp_7_rxn_pin,
    pcie_top_0_pci_exp_7_rxp_pin,
    pcie_top_0_pci_exp_0_txn_pin,
    axi_emc_0_Mem_A_pin,
    axi_emc_0_Mem_CEN_pin,
    axi_emc_0_Mem_OEN_pin,
    axi_emc_0_Mem_WEN_pin,
    axi_emc_0_Mem_DQ_pin,
    axi_cfg_fpga_0_GPIO_IO_pin
  );
  input RESET;
  output RS232_Uart_1_sout;
  input RS232_Uart_1_sin;
  input CLK;
  output nf10_10g_interface_0_xaui_tx_l0_p_pin;
  output nf10_10g_interface_0_xaui_tx_l0_n_pin;
  output nf10_10g_interface_0_xaui_tx_l1_p_pin;
  output nf10_10g_interface_0_xaui_tx_l1_n_pin;
  output nf10_10g_interface_0_xaui_tx_l2_p_pin;
  output nf10_10g_interface_0_xaui_tx_l3_n_pin;
  output nf10_10g_interface_0_xaui_tx_l2_n_pin;
  output nf10_10g_interface_0_xaui_tx_l3_p_pin;
  input nf10_10g_interface_0_xaui_rx_l0_n_pin;
  input nf10_10g_interface_0_xaui_rx_l1_p_pin;
  input nf10_10g_interface_0_xaui_rx_l1_n_pin;
  input nf10_10g_interface_0_xaui_rx_l2_p_pin;
  input nf10_10g_interface_0_xaui_rx_l2_n_pin;
  input nf10_10g_interface_0_xaui_rx_l3_p_pin;
  input nf10_10g_interface_0_xaui_rx_l3_n_pin;
  input nf10_10g_interface_0_xaui_rx_l0_p_pin;
  output nf10_10g_interface_1_xaui_tx_l3_n_pin;
  output nf10_10g_interface_1_xaui_tx_l1_n_pin;
  output nf10_10g_interface_1_xaui_tx_l3_p_pin;
  output nf10_10g_interface_1_xaui_tx_l0_p_pin;
  output nf10_10g_interface_1_xaui_tx_l0_n_pin;
  output nf10_10g_interface_1_xaui_tx_l1_p_pin;
  output nf10_10g_interface_1_xaui_tx_l2_n_pin;
  input nf10_10g_interface_1_xaui_rx_l0_p_pin;
  input nf10_10g_interface_1_xaui_rx_l0_n_pin;
  input nf10_10g_interface_1_xaui_rx_l1_p_pin;
  input nf10_10g_interface_1_xaui_rx_l1_n_pin;
  input nf10_10g_interface_1_xaui_rx_l2_p_pin;
  input nf10_10g_interface_1_xaui_rx_l2_n_pin;
  input nf10_10g_interface_1_xaui_rx_l3_p_pin;
  input nf10_10g_interface_1_xaui_rx_l3_n_pin;
  output nf10_10g_interface_1_xaui_tx_l2_p_pin;
  output nf10_10g_interface_2_xaui_tx_l3_p_pin;
  output nf10_10g_interface_2_xaui_tx_l3_n_pin;
  output nf10_10g_interface_2_xaui_tx_l0_p_pin;
  output nf10_10g_interface_2_xaui_tx_l0_n_pin;
  output nf10_10g_interface_2_xaui_tx_l1_p_pin;
  output nf10_10g_interface_2_xaui_tx_l2_p_pin;
  output nf10_10g_interface_2_xaui_tx_l2_n_pin;
  input nf10_10g_interface_2_xaui_rx_l0_p_pin;
  input nf10_10g_interface_2_xaui_rx_l0_n_pin;
  input nf10_10g_interface_2_xaui_rx_l1_p_pin;
  input nf10_10g_interface_2_xaui_rx_l1_n_pin;
  input nf10_10g_interface_2_xaui_rx_l2_p_pin;
  input nf10_10g_interface_2_xaui_rx_l2_n_pin;
  input nf10_10g_interface_2_xaui_rx_l3_p_pin;
  input nf10_10g_interface_2_xaui_rx_l3_n_pin;
  output nf10_10g_interface_2_xaui_tx_l1_n_pin;
  output nf10_10g_interface_3_xaui_tx_l3_p_pin;
  output nf10_10g_interface_3_xaui_tx_l3_n_pin;
  output nf10_10g_interface_3_xaui_tx_l0_p_pin;
  output nf10_10g_interface_3_xaui_tx_l0_n_pin;
  output nf10_10g_interface_3_xaui_tx_l1_p_pin;
  output nf10_10g_interface_3_xaui_tx_l2_p_pin;
  output nf10_10g_interface_3_xaui_tx_l2_n_pin;
  input nf10_10g_interface_3_xaui_rx_l0_p_pin;
  input nf10_10g_interface_3_xaui_rx_l0_n_pin;
  input nf10_10g_interface_3_xaui_rx_l1_p_pin;
  input nf10_10g_interface_3_xaui_rx_l1_n_pin;
  input nf10_10g_interface_3_xaui_rx_l2_p_pin;
  input nf10_10g_interface_3_xaui_rx_l2_n_pin;
  input nf10_10g_interface_3_xaui_rx_l3_p_pin;
  input nf10_10g_interface_3_xaui_rx_l3_n_pin;
  output nf10_10g_interface_3_xaui_tx_l1_n_pin;
  input refclk_A_p;
  input refclk_A_n;
  input refclk_B_p;
  input refclk_B_n;
  input refclk_C_p;
  input refclk_C_n;
  input refclk_D_p;
  input refclk_D_n;
  output MDC;
  inout MDIO;
  output PHY_RST_N;
  input pcie_clk_p;
  output pcie_top_0_pci_exp_0_txp_pin;
  input pcie_clk_n;
  input pcie_top_0_pci_exp_0_rxp_pin;
  input pcie_top_0_pci_exp_0_rxn_pin;
  output pcie_top_0_pci_exp_1_txp_pin;
  output pcie_top_0_pci_exp_1_txn_pin;
  input pcie_top_0_pci_exp_1_rxp_pin;
  input pcie_top_0_pci_exp_1_rxn_pin;
  output pcie_top_0_pci_exp_4_txp_pin;
  output pcie_top_0_pci_exp_2_txp_pin;
  output pcie_top_0_pci_exp_2_txn_pin;
  input pcie_top_0_pci_exp_2_rxp_pin;
  input pcie_top_0_pci_exp_2_rxn_pin;
  output pcie_top_0_pci_exp_3_txp_pin;
  output pcie_top_0_pci_exp_3_txn_pin;
  input pcie_top_0_pci_exp_3_rxp_pin;
  input pcie_top_0_pci_exp_3_rxn_pin;
  output pcie_top_0_pci_exp_4_txn_pin;
  input pcie_top_0_pci_exp_4_rxp_pin;
  input pcie_top_0_pci_exp_4_rxn_pin;
  output pcie_top_0_pci_exp_5_txp_pin;
  output pcie_top_0_pci_exp_5_txn_pin;
  input pcie_top_0_pci_exp_5_rxp_pin;
  input pcie_top_0_pci_exp_5_rxn_pin;
  output pcie_top_0_pci_exp_6_txp_pin;
  output pcie_top_0_pci_exp_6_txn_pin;
  input pcie_top_0_pci_exp_6_rxp_pin;
  input pcie_top_0_pci_exp_6_rxn_pin;
  output pcie_top_0_pci_exp_7_txn_pin;
  output pcie_top_0_pci_exp_7_txp_pin;
  input pcie_top_0_pci_exp_7_rxn_pin;
  input pcie_top_0_pci_exp_7_rxp_pin;
  output pcie_top_0_pci_exp_0_txn_pin;
  output [23:0] axi_emc_0_Mem_A_pin;
  output [0:0] axi_emc_0_Mem_CEN_pin;
  output [0:0] axi_emc_0_Mem_OEN_pin;
  output axi_emc_0_Mem_WEN_pin;
  inout [31:0] axi_emc_0_Mem_DQ_pin;
  inout [1:0] axi_cfg_fpga_0_GPIO_IO_pin;

  // Internal signals

  wire DIFF_INPUT_BUF_0_DIFF_INPUT_N;
  wire DIFF_INPUT_BUF_0_DIFF_INPUT_P;
  wire DIFF_INPUT_BUF_1_DIFF_INPUT_N;
  wire DIFF_INPUT_BUF_1_DIFF_INPUT_P;
  wire DIFF_INPUT_BUF_2_DIFF_INPUT_N;
  wire DIFF_INPUT_BUF_2_DIFF_INPUT_P;
  wire DIFF_INPUT_BUF_3_DIFF_INPUT_N;
  wire DIFF_INPUT_BUF_3_DIFF_INPUT_P;
  wire [0:0] Peripheral_aresetn;
  wire [1:0] axi_cfg_fpga_0_GPIO_IO_I;
  wire [1:0] axi_cfg_fpga_0_GPIO_IO_O;
  wire [1:0] axi_cfg_fpga_0_GPIO_IO_T;
  wire [23:0] axi_emc_0_Mem_A;
  wire [0:0] axi_emc_0_Mem_CEN;
  wire [31:0] axi_emc_0_Mem_DQ_I;
  wire [31:0] axi_emc_0_Mem_DQ_O;
  wire [31:0] axi_emc_0_Mem_DQ_T;
  wire [0:0] axi_emc_0_Mem_OEN;
  wire axi_emc_0_Mem_WEN;
  wire [223:0] axi_interconnect_0_M_ARADDR;
  wire [13:0] axi_interconnect_0_M_ARBURST;
  wire [27:0] axi_interconnect_0_M_ARCACHE;
  wire [6:0] axi_interconnect_0_M_ARESETN;
  wire [6:0] axi_interconnect_0_M_ARID;
  wire [55:0] axi_interconnect_0_M_ARLEN;
  wire [13:0] axi_interconnect_0_M_ARLOCK;
  wire [20:0] axi_interconnect_0_M_ARPROT;
  wire [6:0] axi_interconnect_0_M_ARREADY;
  wire [20:0] axi_interconnect_0_M_ARSIZE;
  wire [6:0] axi_interconnect_0_M_ARVALID;
  wire [223:0] axi_interconnect_0_M_AWADDR;
  wire [13:0] axi_interconnect_0_M_AWBURST;
  wire [27:0] axi_interconnect_0_M_AWCACHE;
  wire [6:0] axi_interconnect_0_M_AWID;
  wire [55:0] axi_interconnect_0_M_AWLEN;
  wire [13:0] axi_interconnect_0_M_AWLOCK;
  wire [20:0] axi_interconnect_0_M_AWPROT;
  wire [6:0] axi_interconnect_0_M_AWREADY;
  wire [20:0] axi_interconnect_0_M_AWSIZE;
  wire [6:0] axi_interconnect_0_M_AWVALID;
  wire [6:0] axi_interconnect_0_M_BID;
  wire [6:0] axi_interconnect_0_M_BREADY;
  wire [13:0] axi_interconnect_0_M_BRESP;
  wire [6:0] axi_interconnect_0_M_BVALID;
  wire [223:0] axi_interconnect_0_M_RDATA;
  wire [6:0] axi_interconnect_0_M_RID;
  wire [6:0] axi_interconnect_0_M_RLAST;
  wire [6:0] axi_interconnect_0_M_RREADY;
  wire [13:0] axi_interconnect_0_M_RRESP;
  wire [6:0] axi_interconnect_0_M_RVALID;
  wire [223:0] axi_interconnect_0_M_WDATA;
  wire [6:0] axi_interconnect_0_M_WLAST;
  wire [6:0] axi_interconnect_0_M_WREADY;
  wire [27:0] axi_interconnect_0_M_WSTRB;
  wire [6:0] axi_interconnect_0_M_WVALID;
  wire [63:0] axi_interconnect_0_S_ARADDR;
  wire [3:0] axi_interconnect_0_S_ARBURST;
  wire [7:0] axi_interconnect_0_S_ARCACHE;
  wire [1:0] axi_interconnect_0_S_ARID;
  wire [15:0] axi_interconnect_0_S_ARLEN;
  wire [3:0] axi_interconnect_0_S_ARLOCK;
  wire [5:0] axi_interconnect_0_S_ARPROT;
  wire [7:0] axi_interconnect_0_S_ARQOS;
  wire [1:0] axi_interconnect_0_S_ARREADY;
  wire [5:0] axi_interconnect_0_S_ARSIZE;
  wire [1:0] axi_interconnect_0_S_ARVALID;
  wire [63:0] axi_interconnect_0_S_AWADDR;
  wire [3:0] axi_interconnect_0_S_AWBURST;
  wire [7:0] axi_interconnect_0_S_AWCACHE;
  wire [1:0] axi_interconnect_0_S_AWID;
  wire [15:0] axi_interconnect_0_S_AWLEN;
  wire [3:0] axi_interconnect_0_S_AWLOCK;
  wire [5:0] axi_interconnect_0_S_AWPROT;
  wire [7:0] axi_interconnect_0_S_AWQOS;
  wire [1:0] axi_interconnect_0_S_AWREADY;
  wire [5:0] axi_interconnect_0_S_AWSIZE;
  wire [1:0] axi_interconnect_0_S_AWVALID;
  wire [1:0] axi_interconnect_0_S_BID;
  wire [1:0] axi_interconnect_0_S_BREADY;
  wire [3:0] axi_interconnect_0_S_BRESP;
  wire [1:0] axi_interconnect_0_S_BVALID;
  wire [63:0] axi_interconnect_0_S_RDATA;
  wire [1:0] axi_interconnect_0_S_RID;
  wire [1:0] axi_interconnect_0_S_RLAST;
  wire [1:0] axi_interconnect_0_S_RREADY;
  wire [3:0] axi_interconnect_0_S_RRESP;
  wire [1:0] axi_interconnect_0_S_RVALID;
  wire [63:0] axi_interconnect_0_S_WDATA;
  wire [1:0] axi_interconnect_0_S_WLAST;
  wire [1:0] axi_interconnect_0_S_WREADY;
  wire [7:0] axi_interconnect_0_S_WSTRB;
  wire [1:0] axi_interconnect_0_S_WVALID;
  wire [0:0] connectnetwork_0_reset_reset_0_Reset_2_adhoc;
  wire control_clk;
  wire core_clk;
  wire [255:0] crypto_0_M_AXIS_TDATA;
  wire crypto_0_M_AXIS_TLAST;
  wire crypto_0_M_AXIS_TREADY;
  wire [31:0] crypto_0_M_AXIS_TSTRB;
  wire [127:0] crypto_0_M_AXIS_TUSER;
  wire crypto_0_M_AXIS_TVALID;
  wire dcm_locked;
  wire [255:0] dma_0_M_AXIS_TDATA;
  wire dma_0_M_AXIS_TLAST;
  wire dma_0_M_AXIS_TREADY;
  wire [31:0] dma_0_M_AXIS_TSTRB;
  wire [127:0] dma_0_M_AXIS_TUSER;
  wire dma_0_M_AXIS_TVALID;
  wire microblaze_0_Reset_reset_0_Reset_0_adhoc;
  wire [0:31] microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Addr;
  wire microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Clk;
  wire [0:31] microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Din;
  wire [0:31] microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Dout;
  wire microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_EN;
  wire microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Rst;
  wire [0:3] microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_WEN;
  wire [0:31] microblaze_0_dlmb_LMB_ABus;
  wire microblaze_0_dlmb_LMB_AddrStrobe;
  wire [0:3] microblaze_0_dlmb_LMB_BE;
  wire [0:31] microblaze_0_dlmb_LMB_ReadDBus;
  wire microblaze_0_dlmb_LMB_ReadStrobe;
  wire microblaze_0_dlmb_LMB_Ready;
  wire microblaze_0_dlmb_LMB_Rst;
  wire [0:31] microblaze_0_dlmb_LMB_WriteDBus;
  wire microblaze_0_dlmb_LMB_WriteStrobe;
  wire [0:31] microblaze_0_dlmb_M_ABus;
  wire microblaze_0_dlmb_M_AddrStrobe;
  wire [0:3] microblaze_0_dlmb_M_BE;
  wire [0:31] microblaze_0_dlmb_M_DBus;
  wire microblaze_0_dlmb_M_ReadStrobe;
  wire microblaze_0_dlmb_M_WriteStrobe;
  wire [0:31] microblaze_0_dlmb_Sl_DBus;
  wire [0:0] microblaze_0_dlmb_Sl_Ready;
  wire [0:31] microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Addr;
  wire microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Clk;
  wire [0:31] microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Din;
  wire [0:31] microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Dout;
  wire microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_EN;
  wire microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Rst;
  wire [0:3] microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_WEN;
  wire [0:31] microblaze_0_ilmb_LMB_ABus;
  wire microblaze_0_ilmb_LMB_AddrStrobe;
  wire [0:3] microblaze_0_ilmb_LMB_BE;
  wire [0:31] microblaze_0_ilmb_LMB_ReadDBus;
  wire microblaze_0_ilmb_LMB_ReadStrobe;
  wire microblaze_0_ilmb_LMB_Ready;
  wire microblaze_0_ilmb_LMB_Rst;
  wire [0:31] microblaze_0_ilmb_LMB_WriteDBus;
  wire microblaze_0_ilmb_LMB_WriteStrobe;
  wire [0:31] microblaze_0_ilmb_M_ABus;
  wire microblaze_0_ilmb_M_AddrStrobe;
  wire microblaze_0_ilmb_M_ReadStrobe;
  wire [0:31] microblaze_0_ilmb_Sl_DBus;
  wire [0:0] microblaze_0_ilmb_Sl_Ready;
  wire net_gnd0;
  wire [0:0] net_gnd1;
  wire [1:0] net_gnd2;
  wire [0:3] net_gnd4;
  wire [6:0] net_gnd7;
  wire [0:7] net_gnd8;
  wire [0:31] net_gnd32;
  wire [255:0] nf10_10g_interface_0_M_AXIS_TDATA;
  wire nf10_10g_interface_0_M_AXIS_TLAST;
  wire nf10_10g_interface_0_M_AXIS_TREADY;
  wire [31:0] nf10_10g_interface_0_M_AXIS_TSTRB;
  wire [127:0] nf10_10g_interface_0_M_AXIS_TUSER;
  wire nf10_10g_interface_0_M_AXIS_TVALID;
  wire [255:0] nf10_10g_interface_1_M_AXIS_TDATA;
  wire nf10_10g_interface_1_M_AXIS_TLAST;
  wire nf10_10g_interface_1_M_AXIS_TREADY;
  wire [31:0] nf10_10g_interface_1_M_AXIS_TSTRB;
  wire [127:0] nf10_10g_interface_1_M_AXIS_TUSER;
  wire nf10_10g_interface_1_M_AXIS_TVALID;
  wire [255:0] nf10_10g_interface_2_M_AXIS_TDATA;
  wire nf10_10g_interface_2_M_AXIS_TLAST;
  wire nf10_10g_interface_2_M_AXIS_TREADY;
  wire [31:0] nf10_10g_interface_2_M_AXIS_TSTRB;
  wire [127:0] nf10_10g_interface_2_M_AXIS_TUSER;
  wire nf10_10g_interface_2_M_AXIS_TVALID;
  wire [255:0] nf10_10g_interface_3_M_AXIS_TDATA;
  wire nf10_10g_interface_3_M_AXIS_TLAST;
  wire nf10_10g_interface_3_M_AXIS_TREADY;
  wire [31:0] nf10_10g_interface_3_M_AXIS_TSTRB;
  wire [127:0] nf10_10g_interface_3_M_AXIS_TUSER;
  wire nf10_10g_interface_3_M_AXIS_TVALID;
  wire [255:0] nf10_bram_output_queues_0_M_AXIS_0_TDATA;
  wire nf10_bram_output_queues_0_M_AXIS_0_TLAST;
  wire nf10_bram_output_queues_0_M_AXIS_0_TREADY;
  wire [31:0] nf10_bram_output_queues_0_M_AXIS_0_TSTRB;
  wire [127:0] nf10_bram_output_queues_0_M_AXIS_0_TUSER;
  wire nf10_bram_output_queues_0_M_AXIS_0_TVALID;
  wire [255:0] nf10_bram_output_queues_0_M_AXIS_1_TDATA;
  wire nf10_bram_output_queues_0_M_AXIS_1_TLAST;
  wire nf10_bram_output_queues_0_M_AXIS_1_TREADY;
  wire [31:0] nf10_bram_output_queues_0_M_AXIS_1_TSTRB;
  wire [127:0] nf10_bram_output_queues_0_M_AXIS_1_TUSER;
  wire nf10_bram_output_queues_0_M_AXIS_1_TVALID;
  wire [255:0] nf10_bram_output_queues_0_M_AXIS_2_TDATA;
  wire nf10_bram_output_queues_0_M_AXIS_2_TLAST;
  wire nf10_bram_output_queues_0_M_AXIS_2_TREADY;
  wire [31:0] nf10_bram_output_queues_0_M_AXIS_2_TSTRB;
  wire [127:0] nf10_bram_output_queues_0_M_AXIS_2_TUSER;
  wire nf10_bram_output_queues_0_M_AXIS_2_TVALID;
  wire [255:0] nf10_bram_output_queues_0_M_AXIS_3_TDATA;
  wire nf10_bram_output_queues_0_M_AXIS_3_TLAST;
  wire nf10_bram_output_queues_0_M_AXIS_3_TREADY;
  wire [31:0] nf10_bram_output_queues_0_M_AXIS_3_TSTRB;
  wire [127:0] nf10_bram_output_queues_0_M_AXIS_3_TUSER;
  wire nf10_bram_output_queues_0_M_AXIS_3_TVALID;
  wire [255:0] nf10_bram_output_queues_0_M_AXIS_4_TDATA;
  wire nf10_bram_output_queues_0_M_AXIS_4_TLAST;
  wire nf10_bram_output_queues_0_M_AXIS_4_TREADY;
  wire [31:0] nf10_bram_output_queues_0_M_AXIS_4_TSTRB;
  wire [127:0] nf10_bram_output_queues_0_M_AXIS_4_TUSER;
  wire nf10_bram_output_queues_0_M_AXIS_4_TVALID;
  wire [255:0] nf10_endianess_manager_0_M_AXIS_INT_TDATA;
  wire nf10_endianess_manager_0_M_AXIS_INT_TLAST;
  wire nf10_endianess_manager_0_M_AXIS_INT_TREADY;
  wire [31:0] nf10_endianess_manager_0_M_AXIS_INT_TSTRB;
  wire [127:0] nf10_endianess_manager_0_M_AXIS_INT_TUSER;
  wire nf10_endianess_manager_0_M_AXIS_INT_TVALID;
  wire [255:0] nf10_endianess_manager_0_M_AXIS_TDATA;
  wire nf10_endianess_manager_0_M_AXIS_TLAST;
  wire nf10_endianess_manager_0_M_AXIS_TREADY;
  wire [31:0] nf10_endianess_manager_0_M_AXIS_TSTRB;
  wire [127:0] nf10_endianess_manager_0_M_AXIS_TUSER;
  wire nf10_endianess_manager_0_M_AXIS_TVALID;
  wire [255:0] nf10_input_arbiter_0_M_AXIS_TDATA;
  wire nf10_input_arbiter_0_M_AXIS_TLAST;
  wire nf10_input_arbiter_0_M_AXIS_TREADY;
  wire [31:0] nf10_input_arbiter_0_M_AXIS_TSTRB;
  wire [127:0] nf10_input_arbiter_0_M_AXIS_TUSER;
  wire nf10_input_arbiter_0_M_AXIS_TVALID;
  wire nf10_mdio_0_PHY_MDC;
  wire nf10_mdio_0_PHY_MDIO_I;
  wire nf10_mdio_0_PHY_MDIO_O;
  wire nf10_mdio_0_PHY_MDIO_T;
  wire nf10_mdio_0_PHY_rst_n;
  wire [255:0] nf10_nic_output_port_lookup_0_M_AXIS_TDATA;
  wire nf10_nic_output_port_lookup_0_M_AXIS_TLAST;
  wire nf10_nic_output_port_lookup_0_M_AXIS_TREADY;
  wire [31:0] nf10_nic_output_port_lookup_0_M_AXIS_TSTRB;
  wire [127:0] nf10_nic_output_port_lookup_0_M_AXIS_TUSER;
  wire nf10_nic_output_port_lookup_0_M_AXIS_TVALID;
  wire [0:5] pgassign1;
  wire [0:1] pgassign2;
  wire [1:0] pgassign3;
  wire [6:0] pgassign4;
  wire [31:0] pgassign5;
  wire [0:0] sys_bus_reset;

  // Internal assignments

  assign DIFF_INPUT_BUF_0_DIFF_INPUT_P = refclk_A_p;
  assign DIFF_INPUT_BUF_0_DIFF_INPUT_N = refclk_A_n;
  assign DIFF_INPUT_BUF_1_DIFF_INPUT_P = refclk_B_p;
  assign DIFF_INPUT_BUF_1_DIFF_INPUT_N = refclk_B_n;
  assign DIFF_INPUT_BUF_2_DIFF_INPUT_P = refclk_C_p;
  assign DIFF_INPUT_BUF_2_DIFF_INPUT_N = refclk_C_n;
  assign DIFF_INPUT_BUF_3_DIFF_INPUT_P = refclk_D_p;
  assign DIFF_INPUT_BUF_3_DIFF_INPUT_N = refclk_D_n;
  assign MDC = nf10_mdio_0_PHY_MDC;
  assign PHY_RST_N = nf10_mdio_0_PHY_rst_n;
  assign axi_emc_0_Mem_A_pin = axi_emc_0_Mem_A;
  assign axi_emc_0_Mem_CEN_pin[0:0] = axi_emc_0_Mem_CEN[0:0];
  assign axi_emc_0_Mem_OEN_pin[0:0] = axi_emc_0_Mem_OEN[0:0];
  assign axi_emc_0_Mem_WEN_pin = axi_emc_0_Mem_WEN;
  assign axi_interconnect_0_S_AWID[1:1] = 1'b0;
  assign axi_interconnect_0_S_AWLEN[15:8] = 8'b00000000;
  assign axi_interconnect_0_S_AWSIZE[5:3] = 3'b000;
  assign axi_interconnect_0_S_AWBURST[3:2] = 2'b00;
  assign axi_interconnect_0_S_AWLOCK[3:2] = 2'b00;
  assign axi_interconnect_0_S_AWCACHE[7:4] = 4'b0000;
  assign axi_interconnect_0_S_AWPROT[5:3] = 3'b000;
  assign axi_interconnect_0_S_AWQOS[7:4] = 4'b0000;
  assign axi_interconnect_0_S_WLAST[1:1] = 1'b0;
  assign axi_interconnect_0_S_ARID[1:1] = 1'b0;
  assign axi_interconnect_0_S_ARLEN[15:8] = 8'b00000000;
  assign axi_interconnect_0_S_ARSIZE[5:3] = 3'b000;
  assign axi_interconnect_0_S_ARBURST[3:2] = 2'b00;
  assign axi_interconnect_0_S_ARLOCK[3:2] = 2'b00;
  assign axi_interconnect_0_S_ARCACHE[7:4] = 4'b0000;
  assign axi_interconnect_0_S_ARPROT[5:3] = 3'b000;
  assign axi_interconnect_0_S_ARQOS[7:4] = 4'b0000;
  assign axi_interconnect_0_M_BID[0:0] = 1'b0;
  assign axi_interconnect_0_M_BID[2:2] = 1'b0;
  assign axi_interconnect_0_M_BID[3:3] = 1'b0;
  assign axi_interconnect_0_M_BID[5:5] = 1'b0;
  assign axi_interconnect_0_M_BID[6:6] = 1'b0;
  assign axi_interconnect_0_M_RID[0:0] = 1'b0;
  assign axi_interconnect_0_M_RID[2:2] = 1'b0;
  assign axi_interconnect_0_M_RID[3:3] = 1'b0;
  assign axi_interconnect_0_M_RID[5:5] = 1'b0;
  assign axi_interconnect_0_M_RID[6:6] = 1'b0;
  assign axi_interconnect_0_M_RLAST[0:0] = 1'b0;
  assign axi_interconnect_0_M_RLAST[2:2] = 1'b0;
  assign axi_interconnect_0_M_RLAST[3:3] = 1'b0;
  assign axi_interconnect_0_M_RLAST[5:5] = 1'b0;
  assign axi_interconnect_0_M_RLAST[6:6] = 1'b0;
  assign pgassign1[0:5] = 6'b000000;
  assign pgassign2[0:1] = 2'b00;
  assign pgassign3[1] = control_clk;
  assign pgassign3[0] = control_clk;
  assign pgassign4[6] = control_clk;
  assign pgassign4[5] = control_clk;
  assign pgassign4[4] = control_clk;
  assign pgassign4[3] = core_clk;
  assign pgassign4[2] = control_clk;
  assign pgassign4[1] = control_clk;
  assign pgassign4[0] = control_clk;
  assign axi_emc_0_Mem_A[23:0] = pgassign5[25:2];
  assign net_gnd0 = 1'b0;
  assign nf10_10g_interface_0_xaui_tx_l0_p_pin = net_gnd0;
  assign nf10_10g_interface_0_xaui_tx_l0_n_pin = net_gnd0;
  assign nf10_10g_interface_0_xaui_tx_l1_p_pin = net_gnd0;
  assign nf10_10g_interface_0_xaui_tx_l1_n_pin = net_gnd0;
  assign nf10_10g_interface_0_xaui_tx_l2_p_pin = net_gnd0;
  assign nf10_10g_interface_0_xaui_tx_l3_n_pin = net_gnd0;
  assign nf10_10g_interface_0_xaui_tx_l2_n_pin = net_gnd0;
  assign nf10_10g_interface_0_xaui_tx_l3_p_pin = net_gnd0;
  assign nf10_10g_interface_1_xaui_tx_l3_n_pin = net_gnd0;
  assign nf10_10g_interface_1_xaui_tx_l1_n_pin = net_gnd0;
  assign nf10_10g_interface_1_xaui_tx_l3_p_pin = net_gnd0;
  assign nf10_10g_interface_1_xaui_tx_l0_p_pin = net_gnd0;
  assign nf10_10g_interface_1_xaui_tx_l0_n_pin = net_gnd0;
  assign nf10_10g_interface_1_xaui_tx_l1_p_pin = net_gnd0;
  assign nf10_10g_interface_1_xaui_tx_l2_n_pin = net_gnd0;
  assign nf10_10g_interface_1_xaui_tx_l2_p_pin = net_gnd0;
  assign nf10_10g_interface_2_xaui_tx_l3_p_pin = net_gnd0;
  assign nf10_10g_interface_2_xaui_tx_l3_n_pin = net_gnd0;
  assign nf10_10g_interface_2_xaui_tx_l0_p_pin = net_gnd0;
  assign nf10_10g_interface_2_xaui_tx_l0_n_pin = net_gnd0;
  assign nf10_10g_interface_2_xaui_tx_l1_p_pin = net_gnd0;
  assign nf10_10g_interface_2_xaui_tx_l2_p_pin = net_gnd0;
  assign nf10_10g_interface_2_xaui_tx_l2_n_pin = net_gnd0;
  assign nf10_10g_interface_2_xaui_tx_l1_n_pin = net_gnd0;
  assign nf10_10g_interface_3_xaui_tx_l3_p_pin = net_gnd0;
  assign nf10_10g_interface_3_xaui_tx_l3_n_pin = net_gnd0;
  assign nf10_10g_interface_3_xaui_tx_l0_p_pin = net_gnd0;
  assign nf10_10g_interface_3_xaui_tx_l0_n_pin = net_gnd0;
  assign nf10_10g_interface_3_xaui_tx_l1_p_pin = net_gnd0;
  assign nf10_10g_interface_3_xaui_tx_l2_p_pin = net_gnd0;
  assign nf10_10g_interface_3_xaui_tx_l2_n_pin = net_gnd0;
  assign nf10_10g_interface_3_xaui_tx_l1_n_pin = net_gnd0;
  assign pcie_top_0_pci_exp_0_txp_pin = net_gnd0;
  assign pcie_top_0_pci_exp_1_txp_pin = net_gnd0;
  assign pcie_top_0_pci_exp_1_txn_pin = net_gnd0;
  assign pcie_top_0_pci_exp_4_txp_pin = net_gnd0;
  assign pcie_top_0_pci_exp_2_txp_pin = net_gnd0;
  assign pcie_top_0_pci_exp_2_txn_pin = net_gnd0;
  assign pcie_top_0_pci_exp_3_txp_pin = net_gnd0;
  assign pcie_top_0_pci_exp_3_txn_pin = net_gnd0;
  assign pcie_top_0_pci_exp_4_txn_pin = net_gnd0;
  assign pcie_top_0_pci_exp_5_txp_pin = net_gnd0;
  assign pcie_top_0_pci_exp_5_txn_pin = net_gnd0;
  assign pcie_top_0_pci_exp_6_txp_pin = net_gnd0;
  assign pcie_top_0_pci_exp_6_txn_pin = net_gnd0;
  assign pcie_top_0_pci_exp_7_txn_pin = net_gnd0;
  assign pcie_top_0_pci_exp_7_txp_pin = net_gnd0;
  assign pcie_top_0_pci_exp_0_txn_pin = net_gnd0;
  assign net_gnd1[0:0] = 1'b0;
  assign net_gnd2[1:0] = 2'b00;
  assign net_gnd32[0:31] = 32'b00000000000000000000000000000000;
  assign net_gnd4[0:3] = 4'b0000;
  assign net_gnd7[6:0] = 7'b0000000;
  assign net_gnd8[0:7] = 8'b00000000;

  axi_interconnect_0_wrapper
    axi_interconnect_0 (
      .INTERCONNECT_ACLK ( control_clk ),
      .INTERCONNECT_ARESETN ( connectnetwork_0_reset_reset_0_Reset_2_adhoc[0] ),
      .S_AXI_ARESET_OUT_N (  ),
      .M_AXI_ARESET_OUT_N ( axi_interconnect_0_M_ARESETN ),
      .IRQ (  ),
      .S_AXI_ACLK ( pgassign3 ),
      .S_AXI_AWID ( axi_interconnect_0_S_AWID ),
      .S_AXI_AWADDR ( axi_interconnect_0_S_AWADDR ),
      .S_AXI_AWLEN ( axi_interconnect_0_S_AWLEN ),
      .S_AXI_AWSIZE ( axi_interconnect_0_S_AWSIZE ),
      .S_AXI_AWBURST ( axi_interconnect_0_S_AWBURST ),
      .S_AXI_AWLOCK ( axi_interconnect_0_S_AWLOCK ),
      .S_AXI_AWCACHE ( axi_interconnect_0_S_AWCACHE ),
      .S_AXI_AWPROT ( axi_interconnect_0_S_AWPROT ),
      .S_AXI_AWQOS ( axi_interconnect_0_S_AWQOS ),
      .S_AXI_AWUSER ( net_gnd2 ),
      .S_AXI_AWVALID ( axi_interconnect_0_S_AWVALID ),
      .S_AXI_AWREADY ( axi_interconnect_0_S_AWREADY ),
      .S_AXI_WDATA ( axi_interconnect_0_S_WDATA ),
      .S_AXI_WSTRB ( axi_interconnect_0_S_WSTRB ),
      .S_AXI_WLAST ( axi_interconnect_0_S_WLAST ),
      .S_AXI_WUSER ( net_gnd2 ),
      .S_AXI_WVALID ( axi_interconnect_0_S_WVALID ),
      .S_AXI_WREADY ( axi_interconnect_0_S_WREADY ),
      .S_AXI_BID ( axi_interconnect_0_S_BID ),
      .S_AXI_BRESP ( axi_interconnect_0_S_BRESP ),
      .S_AXI_BUSER (  ),
      .S_AXI_BVALID ( axi_interconnect_0_S_BVALID ),
      .S_AXI_BREADY ( axi_interconnect_0_S_BREADY ),
      .S_AXI_ARID ( axi_interconnect_0_S_ARID ),
      .S_AXI_ARADDR ( axi_interconnect_0_S_ARADDR ),
      .S_AXI_ARLEN ( axi_interconnect_0_S_ARLEN ),
      .S_AXI_ARSIZE ( axi_interconnect_0_S_ARSIZE ),
      .S_AXI_ARBURST ( axi_interconnect_0_S_ARBURST ),
      .S_AXI_ARLOCK ( axi_interconnect_0_S_ARLOCK ),
      .S_AXI_ARCACHE ( axi_interconnect_0_S_ARCACHE ),
      .S_AXI_ARPROT ( axi_interconnect_0_S_ARPROT ),
      .S_AXI_ARQOS ( axi_interconnect_0_S_ARQOS ),
      .S_AXI_ARUSER ( net_gnd2 ),
      .S_AXI_ARVALID ( axi_interconnect_0_S_ARVALID ),
      .S_AXI_ARREADY ( axi_interconnect_0_S_ARREADY ),
      .S_AXI_RID ( axi_interconnect_0_S_RID ),
      .S_AXI_RDATA ( axi_interconnect_0_S_RDATA ),
      .S_AXI_RRESP ( axi_interconnect_0_S_RRESP ),
      .S_AXI_RLAST ( axi_interconnect_0_S_RLAST ),
      .S_AXI_RUSER (  ),
      .S_AXI_RVALID ( axi_interconnect_0_S_RVALID ),
      .S_AXI_RREADY ( axi_interconnect_0_S_RREADY ),
      .M_AXI_ACLK ( pgassign4 ),
      .M_AXI_AWID ( axi_interconnect_0_M_AWID ),
      .M_AXI_AWADDR ( axi_interconnect_0_M_AWADDR ),
      .M_AXI_AWLEN ( axi_interconnect_0_M_AWLEN ),
      .M_AXI_AWSIZE ( axi_interconnect_0_M_AWSIZE ),
      .M_AXI_AWBURST ( axi_interconnect_0_M_AWBURST ),
      .M_AXI_AWLOCK ( axi_interconnect_0_M_AWLOCK ),
      .M_AXI_AWCACHE ( axi_interconnect_0_M_AWCACHE ),
      .M_AXI_AWPROT ( axi_interconnect_0_M_AWPROT ),
      .M_AXI_AWREGION (  ),
      .M_AXI_AWQOS (  ),
      .M_AXI_AWUSER (  ),
      .M_AXI_AWVALID ( axi_interconnect_0_M_AWVALID ),
      .M_AXI_AWREADY ( axi_interconnect_0_M_AWREADY ),
      .M_AXI_WID (  ),
      .M_AXI_WDATA ( axi_interconnect_0_M_WDATA ),
      .M_AXI_WSTRB ( axi_interconnect_0_M_WSTRB ),
      .M_AXI_WLAST ( axi_interconnect_0_M_WLAST ),
      .M_AXI_WUSER (  ),
      .M_AXI_WVALID ( axi_interconnect_0_M_WVALID ),
      .M_AXI_WREADY ( axi_interconnect_0_M_WREADY ),
      .M_AXI_BID ( axi_interconnect_0_M_BID ),
      .M_AXI_BRESP ( axi_interconnect_0_M_BRESP ),
      .M_AXI_BUSER ( net_gnd7 ),
      .M_AXI_BVALID ( axi_interconnect_0_M_BVALID ),
      .M_AXI_BREADY ( axi_interconnect_0_M_BREADY ),
      .M_AXI_ARID ( axi_interconnect_0_M_ARID ),
      .M_AXI_ARADDR ( axi_interconnect_0_M_ARADDR ),
      .M_AXI_ARLEN ( axi_interconnect_0_M_ARLEN ),
      .M_AXI_ARSIZE ( axi_interconnect_0_M_ARSIZE ),
      .M_AXI_ARBURST ( axi_interconnect_0_M_ARBURST ),
      .M_AXI_ARLOCK ( axi_interconnect_0_M_ARLOCK ),
      .M_AXI_ARCACHE ( axi_interconnect_0_M_ARCACHE ),
      .M_AXI_ARPROT ( axi_interconnect_0_M_ARPROT ),
      .M_AXI_ARREGION (  ),
      .M_AXI_ARQOS (  ),
      .M_AXI_ARUSER (  ),
      .M_AXI_ARVALID ( axi_interconnect_0_M_ARVALID ),
      .M_AXI_ARREADY ( axi_interconnect_0_M_ARREADY ),
      .M_AXI_RID ( axi_interconnect_0_M_RID ),
      .M_AXI_RDATA ( axi_interconnect_0_M_RDATA ),
      .M_AXI_RRESP ( axi_interconnect_0_M_RRESP ),
      .M_AXI_RLAST ( axi_interconnect_0_M_RLAST ),
      .M_AXI_RUSER ( net_gnd7 ),
      .M_AXI_RVALID ( axi_interconnect_0_M_RVALID ),
      .M_AXI_RREADY ( axi_interconnect_0_M_RREADY ),
      .S_AXI_CTRL_AWADDR ( net_gnd32[0:31] ),
      .S_AXI_CTRL_AWVALID ( net_gnd0 ),
      .S_AXI_CTRL_AWREADY (  ),
      .S_AXI_CTRL_WDATA ( net_gnd32[0:31] ),
      .S_AXI_CTRL_WVALID ( net_gnd0 ),
      .S_AXI_CTRL_WREADY (  ),
      .S_AXI_CTRL_BRESP (  ),
      .S_AXI_CTRL_BVALID (  ),
      .S_AXI_CTRL_BREADY ( net_gnd0 ),
      .S_AXI_CTRL_ARADDR ( net_gnd32[0:31] ),
      .S_AXI_CTRL_ARVALID ( net_gnd0 ),
      .S_AXI_CTRL_ARREADY (  ),
      .S_AXI_CTRL_RDATA (  ),
      .S_AXI_CTRL_RRESP (  ),
      .S_AXI_CTRL_RVALID (  ),
      .S_AXI_CTRL_RREADY ( net_gnd0 )
    );

  microblaze_0_wrapper
    microblaze_0 (
      .CLK ( control_clk ),
      .RESET ( microblaze_0_dlmb_LMB_Rst ),
      .MB_RESET ( microblaze_0_Reset_reset_0_Reset_0_adhoc ),
      .INTERRUPT ( net_gnd0 ),
      .EXT_BRK ( net_gnd0 ),
      .EXT_NM_BRK ( net_gnd0 ),
      .DBG_STOP ( net_gnd0 ),
      .MB_Halted (  ),
      .MB_Error (  ),
      .INSTR ( microblaze_0_ilmb_LMB_ReadDBus ),
      .IREADY ( microblaze_0_ilmb_LMB_Ready ),
      .IWAIT ( net_gnd0 ),
      .ICE ( net_gnd0 ),
      .IUE ( net_gnd0 ),
      .INSTR_ADDR ( microblaze_0_ilmb_M_ABus ),
      .IFETCH ( microblaze_0_ilmb_M_ReadStrobe ),
      .I_AS ( microblaze_0_ilmb_M_AddrStrobe ),
      .IPLB_M_ABort (  ),
      .IPLB_M_ABus (  ),
      .IPLB_M_UABus (  ),
      .IPLB_M_BE (  ),
      .IPLB_M_busLock (  ),
      .IPLB_M_lockErr (  ),
      .IPLB_M_MSize (  ),
      .IPLB_M_priority (  ),
      .IPLB_M_rdBurst (  ),
      .IPLB_M_request (  ),
      .IPLB_M_RNW (  ),
      .IPLB_M_size (  ),
      .IPLB_M_TAttribute (  ),
      .IPLB_M_type (  ),
      .IPLB_M_wrBurst (  ),
      .IPLB_M_wrDBus (  ),
      .IPLB_MBusy ( net_gnd0 ),
      .IPLB_MRdErr ( net_gnd0 ),
      .IPLB_MWrErr ( net_gnd0 ),
      .IPLB_MIRQ ( net_gnd0 ),
      .IPLB_MWrBTerm ( net_gnd0 ),
      .IPLB_MWrDAck ( net_gnd0 ),
      .IPLB_MAddrAck ( net_gnd0 ),
      .IPLB_MRdBTerm ( net_gnd0 ),
      .IPLB_MRdDAck ( net_gnd0 ),
      .IPLB_MRdDBus ( net_gnd32 ),
      .IPLB_MRdWdAddr ( net_gnd4 ),
      .IPLB_MRearbitrate ( net_gnd0 ),
      .IPLB_MSSize ( net_gnd2[1:0] ),
      .IPLB_MTimeout ( net_gnd0 ),
      .DATA_READ ( microblaze_0_dlmb_LMB_ReadDBus ),
      .DREADY ( microblaze_0_dlmb_LMB_Ready ),
      .DWAIT ( net_gnd0 ),
      .DCE ( net_gnd0 ),
      .DUE ( net_gnd0 ),
      .DATA_WRITE ( microblaze_0_dlmb_M_DBus ),
      .DATA_ADDR ( microblaze_0_dlmb_M_ABus ),
      .D_AS ( microblaze_0_dlmb_M_AddrStrobe ),
      .READ_STROBE ( microblaze_0_dlmb_M_ReadStrobe ),
      .WRITE_STROBE ( microblaze_0_dlmb_M_WriteStrobe ),
      .BYTE_ENABLE ( microblaze_0_dlmb_M_BE ),
      .DPLB_M_ABort (  ),
      .DPLB_M_ABus (  ),
      .DPLB_M_UABus (  ),
      .DPLB_M_BE (  ),
      .DPLB_M_busLock (  ),
      .DPLB_M_lockErr (  ),
      .DPLB_M_MSize (  ),
      .DPLB_M_priority (  ),
      .DPLB_M_rdBurst (  ),
      .DPLB_M_request (  ),
      .DPLB_M_RNW (  ),
      .DPLB_M_size (  ),
      .DPLB_M_TAttribute (  ),
      .DPLB_M_type (  ),
      .DPLB_M_wrBurst (  ),
      .DPLB_M_wrDBus (  ),
      .DPLB_MBusy ( net_gnd0 ),
      .DPLB_MRdErr ( net_gnd0 ),
      .DPLB_MWrErr ( net_gnd0 ),
      .DPLB_MIRQ ( net_gnd0 ),
      .DPLB_MWrBTerm ( net_gnd0 ),
      .DPLB_MWrDAck ( net_gnd0 ),
      .DPLB_MAddrAck ( net_gnd0 ),
      .DPLB_MRdBTerm ( net_gnd0 ),
      .DPLB_MRdDAck ( net_gnd0 ),
      .DPLB_MRdDBus ( net_gnd32 ),
      .DPLB_MRdWdAddr ( net_gnd4 ),
      .DPLB_MRearbitrate ( net_gnd0 ),
      .DPLB_MSSize ( net_gnd2[1:0] ),
      .DPLB_MTimeout ( net_gnd0 ),
      .M_AXI_IP_AWID (  ),
      .M_AXI_IP_AWADDR (  ),
      .M_AXI_IP_AWLEN (  ),
      .M_AXI_IP_AWSIZE (  ),
      .M_AXI_IP_AWBURST (  ),
      .M_AXI_IP_AWLOCK (  ),
      .M_AXI_IP_AWCACHE (  ),
      .M_AXI_IP_AWPROT (  ),
      .M_AXI_IP_AWQOS (  ),
      .M_AXI_IP_AWVALID (  ),
      .M_AXI_IP_AWREADY ( net_gnd0 ),
      .M_AXI_IP_WDATA (  ),
      .M_AXI_IP_WSTRB (  ),
      .M_AXI_IP_WLAST (  ),
      .M_AXI_IP_WVALID (  ),
      .M_AXI_IP_WREADY ( net_gnd0 ),
      .M_AXI_IP_BID ( net_gnd1[0:0] ),
      .M_AXI_IP_BRESP ( net_gnd2 ),
      .M_AXI_IP_BVALID ( net_gnd0 ),
      .M_AXI_IP_BREADY (  ),
      .M_AXI_IP_ARID (  ),
      .M_AXI_IP_ARADDR (  ),
      .M_AXI_IP_ARLEN (  ),
      .M_AXI_IP_ARSIZE (  ),
      .M_AXI_IP_ARBURST (  ),
      .M_AXI_IP_ARLOCK (  ),
      .M_AXI_IP_ARCACHE (  ),
      .M_AXI_IP_ARPROT (  ),
      .M_AXI_IP_ARQOS (  ),
      .M_AXI_IP_ARVALID (  ),
      .M_AXI_IP_ARREADY ( net_gnd0 ),
      .M_AXI_IP_RID ( net_gnd1[0:0] ),
      .M_AXI_IP_RDATA ( net_gnd32[0:31] ),
      .M_AXI_IP_RRESP ( net_gnd2 ),
      .M_AXI_IP_RLAST ( net_gnd0 ),
      .M_AXI_IP_RVALID ( net_gnd0 ),
      .M_AXI_IP_RREADY (  ),
      .M_AXI_DP_AWID ( axi_interconnect_0_S_AWID[0:0] ),
      .M_AXI_DP_AWADDR ( axi_interconnect_0_S_AWADDR[31:0] ),
      .M_AXI_DP_AWLEN ( axi_interconnect_0_S_AWLEN[7:0] ),
      .M_AXI_DP_AWSIZE ( axi_interconnect_0_S_AWSIZE[2:0] ),
      .M_AXI_DP_AWBURST ( axi_interconnect_0_S_AWBURST[1:0] ),
      .M_AXI_DP_AWLOCK ( axi_interconnect_0_S_AWLOCK[0] ),
      .M_AXI_DP_AWCACHE ( axi_interconnect_0_S_AWCACHE[3:0] ),
      .M_AXI_DP_AWPROT ( axi_interconnect_0_S_AWPROT[2:0] ),
      .M_AXI_DP_AWQOS ( axi_interconnect_0_S_AWQOS[3:0] ),
      .M_AXI_DP_AWVALID ( axi_interconnect_0_S_AWVALID[0] ),
      .M_AXI_DP_AWREADY ( axi_interconnect_0_S_AWREADY[0] ),
      .M_AXI_DP_WDATA ( axi_interconnect_0_S_WDATA[31:0] ),
      .M_AXI_DP_WSTRB ( axi_interconnect_0_S_WSTRB[3:0] ),
      .M_AXI_DP_WLAST ( axi_interconnect_0_S_WLAST[0] ),
      .M_AXI_DP_WVALID ( axi_interconnect_0_S_WVALID[0] ),
      .M_AXI_DP_WREADY ( axi_interconnect_0_S_WREADY[0] ),
      .M_AXI_DP_BID ( axi_interconnect_0_S_BID[0:0] ),
      .M_AXI_DP_BRESP ( axi_interconnect_0_S_BRESP[1:0] ),
      .M_AXI_DP_BVALID ( axi_interconnect_0_S_BVALID[0] ),
      .M_AXI_DP_BREADY ( axi_interconnect_0_S_BREADY[0] ),
      .M_AXI_DP_ARID ( axi_interconnect_0_S_ARID[0:0] ),
      .M_AXI_DP_ARADDR ( axi_interconnect_0_S_ARADDR[31:0] ),
      .M_AXI_DP_ARLEN ( axi_interconnect_0_S_ARLEN[7:0] ),
      .M_AXI_DP_ARSIZE ( axi_interconnect_0_S_ARSIZE[2:0] ),
      .M_AXI_DP_ARBURST ( axi_interconnect_0_S_ARBURST[1:0] ),
      .M_AXI_DP_ARLOCK ( axi_interconnect_0_S_ARLOCK[0] ),
      .M_AXI_DP_ARCACHE ( axi_interconnect_0_S_ARCACHE[3:0] ),
      .M_AXI_DP_ARPROT ( axi_interconnect_0_S_ARPROT[2:0] ),
      .M_AXI_DP_ARQOS ( axi_interconnect_0_S_ARQOS[3:0] ),
      .M_AXI_DP_ARVALID ( axi_interconnect_0_S_ARVALID[0] ),
      .M_AXI_DP_ARREADY ( axi_interconnect_0_S_ARREADY[0] ),
      .M_AXI_DP_RID ( axi_interconnect_0_S_RID[0:0] ),
      .M_AXI_DP_RDATA ( axi_interconnect_0_S_RDATA[31:0] ),
      .M_AXI_DP_RRESP ( axi_interconnect_0_S_RRESP[1:0] ),
      .M_AXI_DP_RLAST ( axi_interconnect_0_S_RLAST[0] ),
      .M_AXI_DP_RVALID ( axi_interconnect_0_S_RVALID[0] ),
      .M_AXI_DP_RREADY ( axi_interconnect_0_S_RREADY[0] ),
      .M_AXI_IC_AWID (  ),
      .M_AXI_IC_AWADDR (  ),
      .M_AXI_IC_AWLEN (  ),
      .M_AXI_IC_AWSIZE (  ),
      .M_AXI_IC_AWBURST (  ),
      .M_AXI_IC_AWLOCK (  ),
      .M_AXI_IC_AWCACHE (  ),
      .M_AXI_IC_AWPROT (  ),
      .M_AXI_IC_AWQOS (  ),
      .M_AXI_IC_AWVALID (  ),
      .M_AXI_IC_AWREADY ( net_gnd0 ),
      .M_AXI_IC_WDATA (  ),
      .M_AXI_IC_WSTRB (  ),
      .M_AXI_IC_WLAST (  ),
      .M_AXI_IC_WVALID (  ),
      .M_AXI_IC_WREADY ( net_gnd0 ),
      .M_AXI_IC_BID ( net_gnd1[0:0] ),
      .M_AXI_IC_BRESP ( net_gnd2 ),
      .M_AXI_IC_BVALID ( net_gnd0 ),
      .M_AXI_IC_BREADY (  ),
      .M_AXI_IC_ARID (  ),
      .M_AXI_IC_ARADDR (  ),
      .M_AXI_IC_ARLEN (  ),
      .M_AXI_IC_ARSIZE (  ),
      .M_AXI_IC_ARBURST (  ),
      .M_AXI_IC_ARLOCK (  ),
      .M_AXI_IC_ARCACHE (  ),
      .M_AXI_IC_ARPROT (  ),
      .M_AXI_IC_ARQOS (  ),
      .M_AXI_IC_ARVALID (  ),
      .M_AXI_IC_ARREADY ( net_gnd0 ),
      .M_AXI_IC_RID ( net_gnd1[0:0] ),
      .M_AXI_IC_RDATA ( net_gnd32[0:31] ),
      .M_AXI_IC_RRESP ( net_gnd2 ),
      .M_AXI_IC_RLAST ( net_gnd0 ),
      .M_AXI_IC_RVALID ( net_gnd0 ),
      .M_AXI_IC_RREADY (  ),
      .M_AXI_DC_AWID (  ),
      .M_AXI_DC_AWADDR (  ),
      .M_AXI_DC_AWLEN (  ),
      .M_AXI_DC_AWSIZE (  ),
      .M_AXI_DC_AWBURST (  ),
      .M_AXI_DC_AWLOCK (  ),
      .M_AXI_DC_AWCACHE (  ),
      .M_AXI_DC_AWPROT (  ),
      .M_AXI_DC_AWQOS (  ),
      .M_AXI_DC_AWVALID (  ),
      .M_AXI_DC_AWREADY ( net_gnd0 ),
      .M_AXI_DC_WDATA (  ),
      .M_AXI_DC_WSTRB (  ),
      .M_AXI_DC_WLAST (  ),
      .M_AXI_DC_WVALID (  ),
      .M_AXI_DC_WREADY ( net_gnd0 ),
      .M_AXI_DC_BID ( net_gnd1[0:0] ),
      .M_AXI_DC_BRESP ( net_gnd2 ),
      .M_AXI_DC_BVALID ( net_gnd0 ),
      .M_AXI_DC_BREADY (  ),
      .M_AXI_DC_ARID (  ),
      .M_AXI_DC_ARADDR (  ),
      .M_AXI_DC_ARLEN (  ),
      .M_AXI_DC_ARSIZE (  ),
      .M_AXI_DC_ARBURST (  ),
      .M_AXI_DC_ARLOCK (  ),
      .M_AXI_DC_ARCACHE (  ),
      .M_AXI_DC_ARPROT (  ),
      .M_AXI_DC_ARQOS (  ),
      .M_AXI_DC_ARVALID (  ),
      .M_AXI_DC_ARREADY ( net_gnd0 ),
      .M_AXI_DC_RID ( net_gnd1[0:0] ),
      .M_AXI_DC_RDATA ( net_gnd32[0:31] ),
      .M_AXI_DC_RRESP ( net_gnd2 ),
      .M_AXI_DC_RLAST ( net_gnd0 ),
      .M_AXI_DC_RVALID ( net_gnd0 ),
      .M_AXI_DC_RREADY (  ),
      .DBG_CLK ( net_gnd0 ),
      .DBG_TDI ( net_gnd0 ),
      .DBG_TDO (  ),
      .DBG_REG_EN ( net_gnd8 ),
      .DBG_SHIFT ( net_gnd0 ),
      .DBG_CAPTURE ( net_gnd0 ),
      .DBG_UPDATE ( net_gnd0 ),
      .DEBUG_RST ( net_gnd0 ),
      .Trace_Instruction (  ),
      .Trace_Valid_Instr (  ),
      .Trace_PC (  ),
      .Trace_Reg_Write (  ),
      .Trace_Reg_Addr (  ),
      .Trace_MSR_Reg (  ),
      .Trace_PID_Reg (  ),
      .Trace_New_Reg_Value (  ),
      .Trace_Exception_Taken (  ),
      .Trace_Exception_Kind (  ),
      .Trace_Jump_Taken (  ),
      .Trace_Delay_Slot (  ),
      .Trace_Data_Address (  ),
      .Trace_Data_Access (  ),
      .Trace_Data_Read (  ),
      .Trace_Data_Write (  ),
      .Trace_Data_Write_Value (  ),
      .Trace_Data_Byte_Enable (  ),
      .Trace_DCache_Req (  ),
      .Trace_DCache_Hit (  ),
      .Trace_DCache_Rdy (  ),
      .Trace_DCache_Read (  ),
      .Trace_ICache_Req (  ),
      .Trace_ICache_Hit (  ),
      .Trace_ICache_Rdy (  ),
      .Trace_OF_PipeRun (  ),
      .Trace_EX_PipeRun (  ),
      .Trace_MEM_PipeRun (  ),
      .Trace_MB_Halted (  ),
      .Trace_Jump_Hit (  ),
      .FSL0_S_CLK (  ),
      .FSL0_S_READ (  ),
      .FSL0_S_DATA ( net_gnd32 ),
      .FSL0_S_CONTROL ( net_gnd0 ),
      .FSL0_S_EXISTS ( net_gnd0 ),
      .FSL0_M_CLK (  ),
      .FSL0_M_WRITE (  ),
      .FSL0_M_DATA (  ),
      .FSL0_M_CONTROL (  ),
      .FSL0_M_FULL ( net_gnd0 ),
      .FSL1_S_CLK (  ),
      .FSL1_S_READ (  ),
      .FSL1_S_DATA ( net_gnd32 ),
      .FSL1_S_CONTROL ( net_gnd0 ),
      .FSL1_S_EXISTS ( net_gnd0 ),
      .FSL1_M_CLK (  ),
      .FSL1_M_WRITE (  ),
      .FSL1_M_DATA (  ),
      .FSL1_M_CONTROL (  ),
      .FSL1_M_FULL ( net_gnd0 ),
      .FSL2_S_CLK (  ),
      .FSL2_S_READ (  ),
      .FSL2_S_DATA ( net_gnd32 ),
      .FSL2_S_CONTROL ( net_gnd0 ),
      .FSL2_S_EXISTS ( net_gnd0 ),
      .FSL2_M_CLK (  ),
      .FSL2_M_WRITE (  ),
      .FSL2_M_DATA (  ),
      .FSL2_M_CONTROL (  ),
      .FSL2_M_FULL ( net_gnd0 ),
      .FSL3_S_CLK (  ),
      .FSL3_S_READ (  ),
      .FSL3_S_DATA ( net_gnd32 ),
      .FSL3_S_CONTROL ( net_gnd0 ),
      .FSL3_S_EXISTS ( net_gnd0 ),
      .FSL3_M_CLK (  ),
      .FSL3_M_WRITE (  ),
      .FSL3_M_DATA (  ),
      .FSL3_M_CONTROL (  ),
      .FSL3_M_FULL ( net_gnd0 ),
      .FSL4_S_CLK (  ),
      .FSL4_S_READ (  ),
      .FSL4_S_DATA ( net_gnd32 ),
      .FSL4_S_CONTROL ( net_gnd0 ),
      .FSL4_S_EXISTS ( net_gnd0 ),
      .FSL4_M_CLK (  ),
      .FSL4_M_WRITE (  ),
      .FSL4_M_DATA (  ),
      .FSL4_M_CONTROL (  ),
      .FSL4_M_FULL ( net_gnd0 ),
      .FSL5_S_CLK (  ),
      .FSL5_S_READ (  ),
      .FSL5_S_DATA ( net_gnd32 ),
      .FSL5_S_CONTROL ( net_gnd0 ),
      .FSL5_S_EXISTS ( net_gnd0 ),
      .FSL5_M_CLK (  ),
      .FSL5_M_WRITE (  ),
      .FSL5_M_DATA (  ),
      .FSL5_M_CONTROL (  ),
      .FSL5_M_FULL ( net_gnd0 ),
      .FSL6_S_CLK (  ),
      .FSL6_S_READ (  ),
      .FSL6_S_DATA ( net_gnd32 ),
      .FSL6_S_CONTROL ( net_gnd0 ),
      .FSL6_S_EXISTS ( net_gnd0 ),
      .FSL6_M_CLK (  ),
      .FSL6_M_WRITE (  ),
      .FSL6_M_DATA (  ),
      .FSL6_M_CONTROL (  ),
      .FSL6_M_FULL ( net_gnd0 ),
      .FSL7_S_CLK (  ),
      .FSL7_S_READ (  ),
      .FSL7_S_DATA ( net_gnd32 ),
      .FSL7_S_CONTROL ( net_gnd0 ),
      .FSL7_S_EXISTS ( net_gnd0 ),
      .FSL7_M_CLK (  ),
      .FSL7_M_WRITE (  ),
      .FSL7_M_DATA (  ),
      .FSL7_M_CONTROL (  ),
      .FSL7_M_FULL ( net_gnd0 ),
      .FSL8_S_CLK (  ),
      .FSL8_S_READ (  ),
      .FSL8_S_DATA ( net_gnd32 ),
      .FSL8_S_CONTROL ( net_gnd0 ),
      .FSL8_S_EXISTS ( net_gnd0 ),
      .FSL8_M_CLK (  ),
      .FSL8_M_WRITE (  ),
      .FSL8_M_DATA (  ),
      .FSL8_M_CONTROL (  ),
      .FSL8_M_FULL ( net_gnd0 ),
      .FSL9_S_CLK (  ),
      .FSL9_S_READ (  ),
      .FSL9_S_DATA ( net_gnd32 ),
      .FSL9_S_CONTROL ( net_gnd0 ),
      .FSL9_S_EXISTS ( net_gnd0 ),
      .FSL9_M_CLK (  ),
      .FSL9_M_WRITE (  ),
      .FSL9_M_DATA (  ),
      .FSL9_M_CONTROL (  ),
      .FSL9_M_FULL ( net_gnd0 ),
      .FSL10_S_CLK (  ),
      .FSL10_S_READ (  ),
      .FSL10_S_DATA ( net_gnd32 ),
      .FSL10_S_CONTROL ( net_gnd0 ),
      .FSL10_S_EXISTS ( net_gnd0 ),
      .FSL10_M_CLK (  ),
      .FSL10_M_WRITE (  ),
      .FSL10_M_DATA (  ),
      .FSL10_M_CONTROL (  ),
      .FSL10_M_FULL ( net_gnd0 ),
      .FSL11_S_CLK (  ),
      .FSL11_S_READ (  ),
      .FSL11_S_DATA ( net_gnd32 ),
      .FSL11_S_CONTROL ( net_gnd0 ),
      .FSL11_S_EXISTS ( net_gnd0 ),
      .FSL11_M_CLK (  ),
      .FSL11_M_WRITE (  ),
      .FSL11_M_DATA (  ),
      .FSL11_M_CONTROL (  ),
      .FSL11_M_FULL ( net_gnd0 ),
      .FSL12_S_CLK (  ),
      .FSL12_S_READ (  ),
      .FSL12_S_DATA ( net_gnd32 ),
      .FSL12_S_CONTROL ( net_gnd0 ),
      .FSL12_S_EXISTS ( net_gnd0 ),
      .FSL12_M_CLK (  ),
      .FSL12_M_WRITE (  ),
      .FSL12_M_DATA (  ),
      .FSL12_M_CONTROL (  ),
      .FSL12_M_FULL ( net_gnd0 ),
      .FSL13_S_CLK (  ),
      .FSL13_S_READ (  ),
      .FSL13_S_DATA ( net_gnd32 ),
      .FSL13_S_CONTROL ( net_gnd0 ),
      .FSL13_S_EXISTS ( net_gnd0 ),
      .FSL13_M_CLK (  ),
      .FSL13_M_WRITE (  ),
      .FSL13_M_DATA (  ),
      .FSL13_M_CONTROL (  ),
      .FSL13_M_FULL ( net_gnd0 ),
      .FSL14_S_CLK (  ),
      .FSL14_S_READ (  ),
      .FSL14_S_DATA ( net_gnd32 ),
      .FSL14_S_CONTROL ( net_gnd0 ),
      .FSL14_S_EXISTS ( net_gnd0 ),
      .FSL14_M_CLK (  ),
      .FSL14_M_WRITE (  ),
      .FSL14_M_DATA (  ),
      .FSL14_M_CONTROL (  ),
      .FSL14_M_FULL ( net_gnd0 ),
      .FSL15_S_CLK (  ),
      .FSL15_S_READ (  ),
      .FSL15_S_DATA ( net_gnd32 ),
      .FSL15_S_CONTROL ( net_gnd0 ),
      .FSL15_S_EXISTS ( net_gnd0 ),
      .FSL15_M_CLK (  ),
      .FSL15_M_WRITE (  ),
      .FSL15_M_DATA (  ),
      .FSL15_M_CONTROL (  ),
      .FSL15_M_FULL ( net_gnd0 ),
      .M0_AXIS_TLAST (  ),
      .M0_AXIS_TDATA (  ),
      .M0_AXIS_TVALID (  ),
      .M0_AXIS_TREADY ( net_gnd0 ),
      .S0_AXIS_TLAST ( net_gnd0 ),
      .S0_AXIS_TDATA ( net_gnd32[0:31] ),
      .S0_AXIS_TVALID ( net_gnd0 ),
      .S0_AXIS_TREADY (  ),
      .M1_AXIS_TLAST (  ),
      .M1_AXIS_TDATA (  ),
      .M1_AXIS_TVALID (  ),
      .M1_AXIS_TREADY ( net_gnd0 ),
      .S1_AXIS_TLAST ( net_gnd0 ),
      .S1_AXIS_TDATA ( net_gnd32[0:31] ),
      .S1_AXIS_TVALID ( net_gnd0 ),
      .S1_AXIS_TREADY (  ),
      .M2_AXIS_TLAST (  ),
      .M2_AXIS_TDATA (  ),
      .M2_AXIS_TVALID (  ),
      .M2_AXIS_TREADY ( net_gnd0 ),
      .S2_AXIS_TLAST ( net_gnd0 ),
      .S2_AXIS_TDATA ( net_gnd32[0:31] ),
      .S2_AXIS_TVALID ( net_gnd0 ),
      .S2_AXIS_TREADY (  ),
      .M3_AXIS_TLAST (  ),
      .M3_AXIS_TDATA (  ),
      .M3_AXIS_TVALID (  ),
      .M3_AXIS_TREADY ( net_gnd0 ),
      .S3_AXIS_TLAST ( net_gnd0 ),
      .S3_AXIS_TDATA ( net_gnd32[0:31] ),
      .S3_AXIS_TVALID ( net_gnd0 ),
      .S3_AXIS_TREADY (  ),
      .M4_AXIS_TLAST (  ),
      .M4_AXIS_TDATA (  ),
      .M4_AXIS_TVALID (  ),
      .M4_AXIS_TREADY ( net_gnd0 ),
      .S4_AXIS_TLAST ( net_gnd0 ),
      .S4_AXIS_TDATA ( net_gnd32[0:31] ),
      .S4_AXIS_TVALID ( net_gnd0 ),
      .S4_AXIS_TREADY (  ),
      .M5_AXIS_TLAST (  ),
      .M5_AXIS_TDATA (  ),
      .M5_AXIS_TVALID (  ),
      .M5_AXIS_TREADY ( net_gnd0 ),
      .S5_AXIS_TLAST ( net_gnd0 ),
      .S5_AXIS_TDATA ( net_gnd32[0:31] ),
      .S5_AXIS_TVALID ( net_gnd0 ),
      .S5_AXIS_TREADY (  ),
      .M6_AXIS_TLAST (  ),
      .M6_AXIS_TDATA (  ),
      .M6_AXIS_TVALID (  ),
      .M6_AXIS_TREADY ( net_gnd0 ),
      .S6_AXIS_TLAST ( net_gnd0 ),
      .S6_AXIS_TDATA ( net_gnd32[0:31] ),
      .S6_AXIS_TVALID ( net_gnd0 ),
      .S6_AXIS_TREADY (  ),
      .M7_AXIS_TLAST (  ),
      .M7_AXIS_TDATA (  ),
      .M7_AXIS_TVALID (  ),
      .M7_AXIS_TREADY ( net_gnd0 ),
      .S7_AXIS_TLAST ( net_gnd0 ),
      .S7_AXIS_TDATA ( net_gnd32[0:31] ),
      .S7_AXIS_TVALID ( net_gnd0 ),
      .S7_AXIS_TREADY (  ),
      .M8_AXIS_TLAST (  ),
      .M8_AXIS_TDATA (  ),
      .M8_AXIS_TVALID (  ),
      .M8_AXIS_TREADY ( net_gnd0 ),
      .S8_AXIS_TLAST ( net_gnd0 ),
      .S8_AXIS_TDATA ( net_gnd32[0:31] ),
      .S8_AXIS_TVALID ( net_gnd0 ),
      .S8_AXIS_TREADY (  ),
      .M9_AXIS_TLAST (  ),
      .M9_AXIS_TDATA (  ),
      .M9_AXIS_TVALID (  ),
      .M9_AXIS_TREADY ( net_gnd0 ),
      .S9_AXIS_TLAST ( net_gnd0 ),
      .S9_AXIS_TDATA ( net_gnd32[0:31] ),
      .S9_AXIS_TVALID ( net_gnd0 ),
      .S9_AXIS_TREADY (  ),
      .M10_AXIS_TLAST (  ),
      .M10_AXIS_TDATA (  ),
      .M10_AXIS_TVALID (  ),
      .M10_AXIS_TREADY ( net_gnd0 ),
      .S10_AXIS_TLAST ( net_gnd0 ),
      .S10_AXIS_TDATA ( net_gnd32[0:31] ),
      .S10_AXIS_TVALID ( net_gnd0 ),
      .S10_AXIS_TREADY (  ),
      .M11_AXIS_TLAST (  ),
      .M11_AXIS_TDATA (  ),
      .M11_AXIS_TVALID (  ),
      .M11_AXIS_TREADY ( net_gnd0 ),
      .S11_AXIS_TLAST ( net_gnd0 ),
      .S11_AXIS_TDATA ( net_gnd32[0:31] ),
      .S11_AXIS_TVALID ( net_gnd0 ),
      .S11_AXIS_TREADY (  ),
      .M12_AXIS_TLAST (  ),
      .M12_AXIS_TDATA (  ),
      .M12_AXIS_TVALID (  ),
      .M12_AXIS_TREADY ( net_gnd0 ),
      .S12_AXIS_TLAST ( net_gnd0 ),
      .S12_AXIS_TDATA ( net_gnd32[0:31] ),
      .S12_AXIS_TVALID ( net_gnd0 ),
      .S12_AXIS_TREADY (  ),
      .M13_AXIS_TLAST (  ),
      .M13_AXIS_TDATA (  ),
      .M13_AXIS_TVALID (  ),
      .M13_AXIS_TREADY ( net_gnd0 ),
      .S13_AXIS_TLAST ( net_gnd0 ),
      .S13_AXIS_TDATA ( net_gnd32[0:31] ),
      .S13_AXIS_TVALID ( net_gnd0 ),
      .S13_AXIS_TREADY (  ),
      .M14_AXIS_TLAST (  ),
      .M14_AXIS_TDATA (  ),
      .M14_AXIS_TVALID (  ),
      .M14_AXIS_TREADY ( net_gnd0 ),
      .S14_AXIS_TLAST ( net_gnd0 ),
      .S14_AXIS_TDATA ( net_gnd32[0:31] ),
      .S14_AXIS_TVALID ( net_gnd0 ),
      .S14_AXIS_TREADY (  ),
      .M15_AXIS_TLAST (  ),
      .M15_AXIS_TDATA (  ),
      .M15_AXIS_TVALID (  ),
      .M15_AXIS_TREADY ( net_gnd0 ),
      .S15_AXIS_TLAST ( net_gnd0 ),
      .S15_AXIS_TDATA ( net_gnd32[0:31] ),
      .S15_AXIS_TVALID ( net_gnd0 ),
      .S15_AXIS_TREADY (  ),
      .ICACHE_FSL_IN_CLK (  ),
      .ICACHE_FSL_IN_READ (  ),
      .ICACHE_FSL_IN_DATA ( net_gnd32 ),
      .ICACHE_FSL_IN_CONTROL ( net_gnd0 ),
      .ICACHE_FSL_IN_EXISTS ( net_gnd0 ),
      .ICACHE_FSL_OUT_CLK (  ),
      .ICACHE_FSL_OUT_WRITE (  ),
      .ICACHE_FSL_OUT_DATA (  ),
      .ICACHE_FSL_OUT_CONTROL (  ),
      .ICACHE_FSL_OUT_FULL ( net_gnd0 ),
      .DCACHE_FSL_IN_CLK (  ),
      .DCACHE_FSL_IN_READ (  ),
      .DCACHE_FSL_IN_DATA ( net_gnd32 ),
      .DCACHE_FSL_IN_CONTROL ( net_gnd0 ),
      .DCACHE_FSL_IN_EXISTS ( net_gnd0 ),
      .DCACHE_FSL_OUT_CLK (  ),
      .DCACHE_FSL_OUT_WRITE (  ),
      .DCACHE_FSL_OUT_DATA (  ),
      .DCACHE_FSL_OUT_CONTROL (  ),
      .DCACHE_FSL_OUT_FULL ( net_gnd0 )
    );

  microblaze_0_ilmb_wrapper
    microblaze_0_ilmb (
      .LMB_Clk ( control_clk ),
      .SYS_Rst ( sys_bus_reset[0] ),
      .LMB_Rst ( microblaze_0_ilmb_LMB_Rst ),
      .M_ABus ( microblaze_0_ilmb_M_ABus ),
      .M_ReadStrobe ( microblaze_0_ilmb_M_ReadStrobe ),
      .M_WriteStrobe ( net_gnd0 ),
      .M_AddrStrobe ( microblaze_0_ilmb_M_AddrStrobe ),
      .M_DBus ( net_gnd32 ),
      .M_BE ( net_gnd4 ),
      .Sl_DBus ( microblaze_0_ilmb_Sl_DBus ),
      .Sl_Ready ( microblaze_0_ilmb_Sl_Ready[0:0] ),
      .LMB_ABus ( microblaze_0_ilmb_LMB_ABus ),
      .LMB_ReadStrobe ( microblaze_0_ilmb_LMB_ReadStrobe ),
      .LMB_WriteStrobe ( microblaze_0_ilmb_LMB_WriteStrobe ),
      .LMB_AddrStrobe ( microblaze_0_ilmb_LMB_AddrStrobe ),
      .LMB_ReadDBus ( microblaze_0_ilmb_LMB_ReadDBus ),
      .LMB_WriteDBus ( microblaze_0_ilmb_LMB_WriteDBus ),
      .LMB_Ready ( microblaze_0_ilmb_LMB_Ready ),
      .LMB_BE ( microblaze_0_ilmb_LMB_BE )
    );

  microblaze_0_dlmb_wrapper
    microblaze_0_dlmb (
      .LMB_Clk ( control_clk ),
      .SYS_Rst ( sys_bus_reset[0] ),
      .LMB_Rst ( microblaze_0_dlmb_LMB_Rst ),
      .M_ABus ( microblaze_0_dlmb_M_ABus ),
      .M_ReadStrobe ( microblaze_0_dlmb_M_ReadStrobe ),
      .M_WriteStrobe ( microblaze_0_dlmb_M_WriteStrobe ),
      .M_AddrStrobe ( microblaze_0_dlmb_M_AddrStrobe ),
      .M_DBus ( microblaze_0_dlmb_M_DBus ),
      .M_BE ( microblaze_0_dlmb_M_BE ),
      .Sl_DBus ( microblaze_0_dlmb_Sl_DBus ),
      .Sl_Ready ( microblaze_0_dlmb_Sl_Ready[0:0] ),
      .LMB_ABus ( microblaze_0_dlmb_LMB_ABus ),
      .LMB_ReadStrobe ( microblaze_0_dlmb_LMB_ReadStrobe ),
      .LMB_WriteStrobe ( microblaze_0_dlmb_LMB_WriteStrobe ),
      .LMB_AddrStrobe ( microblaze_0_dlmb_LMB_AddrStrobe ),
      .LMB_ReadDBus ( microblaze_0_dlmb_LMB_ReadDBus ),
      .LMB_WriteDBus ( microblaze_0_dlmb_LMB_WriteDBus ),
      .LMB_Ready ( microblaze_0_dlmb_LMB_Ready ),
      .LMB_BE ( microblaze_0_dlmb_LMB_BE )
    );

  microblaze_0_i_bram_ctrl_wrapper
    microblaze_0_i_bram_ctrl (
      .LMB_Clk ( control_clk ),
      .LMB_Rst ( microblaze_0_ilmb_LMB_Rst ),
      .LMB_ABus ( microblaze_0_ilmb_LMB_ABus ),
      .LMB_WriteDBus ( microblaze_0_ilmb_LMB_WriteDBus ),
      .LMB_AddrStrobe ( microblaze_0_ilmb_LMB_AddrStrobe ),
      .LMB_ReadStrobe ( microblaze_0_ilmb_LMB_ReadStrobe ),
      .LMB_WriteStrobe ( microblaze_0_ilmb_LMB_WriteStrobe ),
      .LMB_BE ( microblaze_0_ilmb_LMB_BE ),
      .Sl_DBus ( microblaze_0_ilmb_Sl_DBus ),
      .Sl_Ready ( microblaze_0_ilmb_Sl_Ready[0] ),
      .BRAM_Rst_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Rst ),
      .BRAM_Clk_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Clk ),
      .BRAM_EN_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_EN ),
      .BRAM_WEN_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_WEN ),
      .BRAM_Addr_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Addr ),
      .BRAM_Din_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Din ),
      .BRAM_Dout_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Dout )
    );

  microblaze_0_d_bram_ctrl_wrapper
    microblaze_0_d_bram_ctrl (
      .LMB_Clk ( control_clk ),
      .LMB_Rst ( microblaze_0_dlmb_LMB_Rst ),
      .LMB_ABus ( microblaze_0_dlmb_LMB_ABus ),
      .LMB_WriteDBus ( microblaze_0_dlmb_LMB_WriteDBus ),
      .LMB_AddrStrobe ( microblaze_0_dlmb_LMB_AddrStrobe ),
      .LMB_ReadStrobe ( microblaze_0_dlmb_LMB_ReadStrobe ),
      .LMB_WriteStrobe ( microblaze_0_dlmb_LMB_WriteStrobe ),
      .LMB_BE ( microblaze_0_dlmb_LMB_BE ),
      .Sl_DBus ( microblaze_0_dlmb_Sl_DBus ),
      .Sl_Ready ( microblaze_0_dlmb_Sl_Ready[0] ),
      .BRAM_Rst_A ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Rst ),
      .BRAM_Clk_A ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Clk ),
      .BRAM_EN_A ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_EN ),
      .BRAM_WEN_A ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_WEN ),
      .BRAM_Addr_A ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Addr ),
      .BRAM_Din_A ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Din ),
      .BRAM_Dout_A ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Dout )
    );

  microblaze_0_bram_block_wrapper
    microblaze_0_bram_block (
      .BRAM_Rst_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Rst ),
      .BRAM_Clk_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Clk ),
      .BRAM_EN_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_EN ),
      .BRAM_WEN_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_WEN ),
      .BRAM_Addr_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Addr ),
      .BRAM_Din_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Din ),
      .BRAM_Dout_A ( microblaze_0_i_bram_ctrl_2_microblaze_0_bram_block_BRAM_Dout ),
      .BRAM_Rst_B ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Rst ),
      .BRAM_Clk_B ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Clk ),
      .BRAM_EN_B ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_EN ),
      .BRAM_WEN_B ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_WEN ),
      .BRAM_Addr_B ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Addr ),
      .BRAM_Din_B ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Din ),
      .BRAM_Dout_B ( microblaze_0_d_bram_ctrl_2_microblaze_0_bram_block_BRAM_Dout )
    );

  reset_0_wrapper
    reset_0 (
      .Slowest_sync_clk ( control_clk ),
      .Ext_Reset_In ( RESET ),
      .Aux_Reset_In ( net_gnd0 ),
      .MB_Debug_Sys_Rst ( net_gnd0 ),
      .Core_Reset_Req_0 ( net_gnd0 ),
      .Chip_Reset_Req_0 ( net_gnd0 ),
      .System_Reset_Req_0 ( net_gnd0 ),
      .Core_Reset_Req_1 ( net_gnd0 ),
      .Chip_Reset_Req_1 ( net_gnd0 ),
      .System_Reset_Req_1 ( net_gnd0 ),
      .Dcm_locked ( dcm_locked ),
      .RstcPPCresetcore_0 (  ),
      .RstcPPCresetchip_0 (  ),
      .RstcPPCresetsys_0 (  ),
      .RstcPPCresetcore_1 (  ),
      .RstcPPCresetchip_1 (  ),
      .RstcPPCresetsys_1 (  ),
      .MB_Reset ( microblaze_0_Reset_reset_0_Reset_0_adhoc ),
      .Bus_Struct_Reset ( sys_bus_reset[0:0] ),
      .Peripheral_Reset (  ),
      .Interconnect_aresetn ( connectnetwork_0_reset_reset_0_Reset_2_adhoc[0:0] ),
      .Peripheral_aresetn ( Peripheral_aresetn[0:0] )
    );

  rs232_uart_1_wrapper
    RS232_Uart_1 (
      .S_AXI_ACLK ( control_clk ),
      .S_AXI_ARESETN ( axi_interconnect_0_M_ARESETN[0] ),
      .Interrupt (  ),
      .S_AXI_AWADDR ( axi_interconnect_0_M_AWADDR[31:0] ),
      .S_AXI_AWVALID ( axi_interconnect_0_M_AWVALID[0] ),
      .S_AXI_AWREADY ( axi_interconnect_0_M_AWREADY[0] ),
      .S_AXI_WDATA ( axi_interconnect_0_M_WDATA[31:0] ),
      .S_AXI_WSTRB ( axi_interconnect_0_M_WSTRB[3:0] ),
      .S_AXI_WVALID ( axi_interconnect_0_M_WVALID[0] ),
      .S_AXI_WREADY ( axi_interconnect_0_M_WREADY[0] ),
      .S_AXI_BRESP ( axi_interconnect_0_M_BRESP[1:0] ),
      .S_AXI_BVALID ( axi_interconnect_0_M_BVALID[0] ),
      .S_AXI_BREADY ( axi_interconnect_0_M_BREADY[0] ),
      .S_AXI_ARADDR ( axi_interconnect_0_M_ARADDR[31:0] ),
      .S_AXI_ARVALID ( axi_interconnect_0_M_ARVALID[0] ),
      .S_AXI_ARREADY ( axi_interconnect_0_M_ARREADY[0] ),
      .S_AXI_RDATA ( axi_interconnect_0_M_RDATA[31:0] ),
      .S_AXI_RRESP ( axi_interconnect_0_M_RRESP[1:0] ),
      .S_AXI_RVALID ( axi_interconnect_0_M_RVALID[0] ),
      .S_AXI_RREADY ( axi_interconnect_0_M_RREADY[0] ),
      .RX ( RS232_Uart_1_sin ),
      .TX ( RS232_Uart_1_sout )
    );

  clock_generator_0_wrapper
    clock_generator_0 (
      .CLKIN ( CLK ),
      .CLKOUT0 ( control_clk ),
      .CLKOUT1 ( core_clk ),
      .CLKOUT2 (  ),
      .CLKOUT3 (  ),
      .CLKOUT4 (  ),
      .CLKOUT5 (  ),
      .CLKOUT6 (  ),
      .CLKOUT7 (  ),
      .CLKOUT8 (  ),
      .CLKOUT9 (  ),
      .CLKOUT10 (  ),
      .CLKOUT11 (  ),
      .CLKOUT12 (  ),
      .CLKOUT13 (  ),
      .CLKOUT14 (  ),
      .CLKOUT15 (  ),
      .CLKFBIN ( net_gnd0 ),
      .CLKFBOUT (  ),
      .PSCLK ( net_gnd0 ),
      .PSEN ( net_gnd0 ),
      .PSINCDEC ( net_gnd0 ),
      .PSDONE (  ),
      .RST ( RESET ),
      .LOCKED ( dcm_locked )
    );

  stim_nf10_10g_interface_0_m_axis_wrapper
    stim_nf10_10g_interface_0_M_AXIS (
      .aclk ( core_clk ),
      .aresetn ( Peripheral_aresetn[0] ),
      .m_axis_tdata ( nf10_10g_interface_0_M_AXIS_TDATA ),
      .m_axis_tstrb ( nf10_10g_interface_0_M_AXIS_TSTRB ),
      .m_axis_tuser ( nf10_10g_interface_0_M_AXIS_TUSER ),
      .m_axis_tvalid ( nf10_10g_interface_0_M_AXIS_TVALID ),
      .m_axis_tready ( nf10_10g_interface_0_M_AXIS_TREADY ),
      .m_axis_tlast ( nf10_10g_interface_0_M_AXIS_TLAST )
    );

  record_nf10_bram_output_queues_0_m_axis_0_wrapper
    record_nf10_bram_output_queues_0_M_AXIS_0 (
      .aclk ( core_clk ),
      .s_axis_tdata ( nf10_bram_output_queues_0_M_AXIS_0_TDATA ),
      .s_axis_tstrb ( nf10_bram_output_queues_0_M_AXIS_0_TSTRB ),
      .s_axis_tuser ( nf10_bram_output_queues_0_M_AXIS_0_TUSER ),
      .s_axis_tvalid ( nf10_bram_output_queues_0_M_AXIS_0_TVALID ),
      .s_axis_tready ( nf10_bram_output_queues_0_M_AXIS_0_TREADY ),
      .s_axis_tlast ( nf10_bram_output_queues_0_M_AXIS_0_TLAST )
    );

  stim_nf10_10g_interface_1_m_axis_wrapper
    stim_nf10_10g_interface_1_M_AXIS (
      .aclk ( core_clk ),
      .aresetn ( Peripheral_aresetn[0] ),
      .m_axis_tdata ( nf10_10g_interface_1_M_AXIS_TDATA ),
      .m_axis_tstrb ( nf10_10g_interface_1_M_AXIS_TSTRB ),
      .m_axis_tuser ( nf10_10g_interface_1_M_AXIS_TUSER ),
      .m_axis_tvalid ( nf10_10g_interface_1_M_AXIS_TVALID ),
      .m_axis_tready ( nf10_10g_interface_1_M_AXIS_TREADY ),
      .m_axis_tlast ( nf10_10g_interface_1_M_AXIS_TLAST )
    );

  record_nf10_bram_output_queues_0_m_axis_1_wrapper
    record_nf10_bram_output_queues_0_M_AXIS_1 (
      .aclk ( core_clk ),
      .s_axis_tdata ( nf10_bram_output_queues_0_M_AXIS_1_TDATA ),
      .s_axis_tstrb ( nf10_bram_output_queues_0_M_AXIS_1_TSTRB ),
      .s_axis_tuser ( nf10_bram_output_queues_0_M_AXIS_1_TUSER ),
      .s_axis_tvalid ( nf10_bram_output_queues_0_M_AXIS_1_TVALID ),
      .s_axis_tready ( nf10_bram_output_queues_0_M_AXIS_1_TREADY ),
      .s_axis_tlast ( nf10_bram_output_queues_0_M_AXIS_1_TLAST )
    );

  stim_nf10_10g_interface_2_m_axis_wrapper
    stim_nf10_10g_interface_2_M_AXIS (
      .aclk ( core_clk ),
      .aresetn ( Peripheral_aresetn[0] ),
      .m_axis_tdata ( nf10_10g_interface_2_M_AXIS_TDATA ),
      .m_axis_tstrb ( nf10_10g_interface_2_M_AXIS_TSTRB ),
      .m_axis_tuser ( nf10_10g_interface_2_M_AXIS_TUSER ),
      .m_axis_tvalid ( nf10_10g_interface_2_M_AXIS_TVALID ),
      .m_axis_tready ( nf10_10g_interface_2_M_AXIS_TREADY ),
      .m_axis_tlast ( nf10_10g_interface_2_M_AXIS_TLAST )
    );

  record_nf10_bram_output_queues_0_m_axis_2_wrapper
    record_nf10_bram_output_queues_0_M_AXIS_2 (
      .aclk ( core_clk ),
      .s_axis_tdata ( nf10_bram_output_queues_0_M_AXIS_2_TDATA ),
      .s_axis_tstrb ( nf10_bram_output_queues_0_M_AXIS_2_TSTRB ),
      .s_axis_tuser ( nf10_bram_output_queues_0_M_AXIS_2_TUSER ),
      .s_axis_tvalid ( nf10_bram_output_queues_0_M_AXIS_2_TVALID ),
      .s_axis_tready ( nf10_bram_output_queues_0_M_AXIS_2_TREADY ),
      .s_axis_tlast ( nf10_bram_output_queues_0_M_AXIS_2_TLAST )
    );

  stim_nf10_10g_interface_3_m_axis_wrapper
    stim_nf10_10g_interface_3_M_AXIS (
      .aclk ( core_clk ),
      .aresetn ( Peripheral_aresetn[0] ),
      .m_axis_tdata ( nf10_10g_interface_3_M_AXIS_TDATA ),
      .m_axis_tstrb ( nf10_10g_interface_3_M_AXIS_TSTRB ),
      .m_axis_tuser ( nf10_10g_interface_3_M_AXIS_TUSER ),
      .m_axis_tvalid ( nf10_10g_interface_3_M_AXIS_TVALID ),
      .m_axis_tready ( nf10_10g_interface_3_M_AXIS_TREADY ),
      .m_axis_tlast ( nf10_10g_interface_3_M_AXIS_TLAST )
    );

  record_nf10_bram_output_queues_0_m_axis_3_wrapper
    record_nf10_bram_output_queues_0_M_AXIS_3 (
      .aclk ( core_clk ),
      .s_axis_tdata ( nf10_bram_output_queues_0_M_AXIS_3_TDATA ),
      .s_axis_tstrb ( nf10_bram_output_queues_0_M_AXIS_3_TSTRB ),
      .s_axis_tuser ( nf10_bram_output_queues_0_M_AXIS_3_TUSER ),
      .s_axis_tvalid ( nf10_bram_output_queues_0_M_AXIS_3_TVALID ),
      .s_axis_tready ( nf10_bram_output_queues_0_M_AXIS_3_TREADY ),
      .s_axis_tlast ( nf10_bram_output_queues_0_M_AXIS_3_TLAST )
    );

  diff_input_buf_0_wrapper
    diff_input_buf_0 (
      .SINGLE_ENDED_INPUT (  ),
      .DIFF_INPUT_P ( DIFF_INPUT_BUF_0_DIFF_INPUT_P ),
      .DIFF_INPUT_N ( DIFF_INPUT_BUF_0_DIFF_INPUT_N )
    );

  diff_input_buf_1_wrapper
    diff_input_buf_1 (
      .SINGLE_ENDED_INPUT (  ),
      .DIFF_INPUT_P ( DIFF_INPUT_BUF_1_DIFF_INPUT_P ),
      .DIFF_INPUT_N ( DIFF_INPUT_BUF_1_DIFF_INPUT_N )
    );

  diff_input_buf_2_wrapper
    diff_input_buf_2 (
      .SINGLE_ENDED_INPUT (  ),
      .DIFF_INPUT_P ( DIFF_INPUT_BUF_2_DIFF_INPUT_P ),
      .DIFF_INPUT_N ( DIFF_INPUT_BUF_2_DIFF_INPUT_N )
    );

  diff_input_buf_3_wrapper
    diff_input_buf_3 (
      .SINGLE_ENDED_INPUT (  ),
      .DIFF_INPUT_P ( DIFF_INPUT_BUF_3_DIFF_INPUT_P ),
      .DIFF_INPUT_N ( DIFF_INPUT_BUF_3_DIFF_INPUT_N )
    );

  nf10_mdio_0_wrapper
    nf10_mdio_0 (
      .S_AXI_ACLK ( control_clk ),
      .S_AXI_ARESETN ( axi_interconnect_0_M_ARESETN[1] ),
      .IP2INTC_Irpt (  ),
      .S_AXI_AWID ( axi_interconnect_0_M_AWID[1:1] ),
      .S_AXI_AWADDR ( axi_interconnect_0_M_AWADDR[63:32] ),
      .S_AXI_AWLEN ( axi_interconnect_0_M_AWLEN[15:8] ),
      .S_AXI_AWSIZE ( axi_interconnect_0_M_AWSIZE[5:3] ),
      .S_AXI_AWBURST ( axi_interconnect_0_M_AWBURST[3:2] ),
      .S_AXI_AWCACHE ( axi_interconnect_0_M_AWCACHE[7:4] ),
      .S_AXI_AWVALID ( axi_interconnect_0_M_AWVALID[1] ),
      .S_AXI_AWREADY ( axi_interconnect_0_M_AWREADY[1] ),
      .S_AXI_WDATA ( axi_interconnect_0_M_WDATA[63:32] ),
      .S_AXI_WSTRB ( axi_interconnect_0_M_WSTRB[7:4] ),
      .S_AXI_WLAST ( axi_interconnect_0_M_WLAST[1] ),
      .S_AXI_WVALID ( axi_interconnect_0_M_WVALID[1] ),
      .S_AXI_WREADY ( axi_interconnect_0_M_WREADY[1] ),
      .S_AXI_BID ( axi_interconnect_0_M_BID[1:1] ),
      .S_AXI_BRESP ( axi_interconnect_0_M_BRESP[3:2] ),
      .S_AXI_BVALID ( axi_interconnect_0_M_BVALID[1] ),
      .S_AXI_BREADY ( axi_interconnect_0_M_BREADY[1] ),
      .S_AXI_ARID ( axi_interconnect_0_M_ARID[1:1] ),
      .S_AXI_ARADDR ( axi_interconnect_0_M_ARADDR[63:32] ),
      .S_AXI_ARLEN ( axi_interconnect_0_M_ARLEN[15:8] ),
      .S_AXI_ARSIZE ( axi_interconnect_0_M_ARSIZE[5:3] ),
      .S_AXI_ARBURST ( axi_interconnect_0_M_ARBURST[3:2] ),
      .S_AXI_ARCACHE ( axi_interconnect_0_M_ARCACHE[7:4] ),
      .S_AXI_ARVALID ( axi_interconnect_0_M_ARVALID[1] ),
      .S_AXI_ARREADY ( axi_interconnect_0_M_ARREADY[1] ),
      .S_AXI_RID ( axi_interconnect_0_M_RID[1:1] ),
      .S_AXI_RDATA ( axi_interconnect_0_M_RDATA[63:32] ),
      .S_AXI_RRESP ( axi_interconnect_0_M_RRESP[3:2] ),
      .S_AXI_RLAST ( axi_interconnect_0_M_RLAST[1] ),
      .S_AXI_RVALID ( axi_interconnect_0_M_RVALID[1] ),
      .S_AXI_RREADY ( axi_interconnect_0_M_RREADY[1] ),
      .PHY_rst_n ( nf10_mdio_0_PHY_rst_n ),
      .PHY_MDC ( nf10_mdio_0_PHY_MDC ),
      .PHY_MDIO_I ( nf10_mdio_0_PHY_MDIO_I ),
      .PHY_MDIO_O ( nf10_mdio_0_PHY_MDIO_O ),
      .PHY_MDIO_T ( nf10_mdio_0_PHY_MDIO_T )
    );

  axi_timebase_wdt_0_wrapper
    axi_timebase_wdt_0 (
      .WDT_Reset (  ),
      .Timebase_Interrupt (  ),
      .WDT_Interrupt (  ),
      .Freeze ( net_gnd0 ),
      .S_AXI_ACLK ( control_clk ),
      .S_AXI_ARESETN ( axi_interconnect_0_M_ARESETN[2] ),
      .S_AXI_AWADDR ( axi_interconnect_0_M_AWADDR[95:64] ),
      .S_AXI_AWVALID ( axi_interconnect_0_M_AWVALID[2] ),
      .S_AXI_AWREADY ( axi_interconnect_0_M_AWREADY[2] ),
      .S_AXI_WDATA ( axi_interconnect_0_M_WDATA[95:64] ),
      .S_AXI_WSTRB ( axi_interconnect_0_M_WSTRB[11:8] ),
      .S_AXI_WVALID ( axi_interconnect_0_M_WVALID[2] ),
      .S_AXI_WREADY ( axi_interconnect_0_M_WREADY[2] ),
      .S_AXI_BRESP ( axi_interconnect_0_M_BRESP[5:4] ),
      .S_AXI_BVALID ( axi_interconnect_0_M_BVALID[2] ),
      .S_AXI_BREADY ( axi_interconnect_0_M_BREADY[2] ),
      .S_AXI_ARADDR ( axi_interconnect_0_M_ARADDR[95:64] ),
      .S_AXI_ARVALID ( axi_interconnect_0_M_ARVALID[2] ),
      .S_AXI_ARREADY ( axi_interconnect_0_M_ARREADY[2] ),
      .S_AXI_RDATA ( axi_interconnect_0_M_RDATA[95:64] ),
      .S_AXI_RRESP ( axi_interconnect_0_M_RRESP[5:4] ),
      .S_AXI_RVALID ( axi_interconnect_0_M_RVALID[2] ),
      .S_AXI_RREADY ( axi_interconnect_0_M_RREADY[2] )
    );

  nf10_input_arbiter_0_wrapper
    nf10_input_arbiter_0 (
      .axi_aclk ( core_clk ),
      .axi_resetn ( Peripheral_aresetn[0] ),
      .m_axis_tdata ( nf10_input_arbiter_0_M_AXIS_TDATA ),
      .m_axis_tstrb ( nf10_input_arbiter_0_M_AXIS_TSTRB ),
      .m_axis_tuser ( nf10_input_arbiter_0_M_AXIS_TUSER ),
      .m_axis_tvalid ( nf10_input_arbiter_0_M_AXIS_TVALID ),
      .m_axis_tready ( nf10_input_arbiter_0_M_AXIS_TREADY ),
      .m_axis_tlast ( nf10_input_arbiter_0_M_AXIS_TLAST ),
      .s_axis_tdata_0 ( nf10_10g_interface_0_M_AXIS_TDATA ),
      .s_axis_tstrb_0 ( nf10_10g_interface_0_M_AXIS_TSTRB ),
      .s_axis_tuser_0 ( nf10_10g_interface_0_M_AXIS_TUSER ),
      .s_axis_tvalid_0 ( nf10_10g_interface_0_M_AXIS_TVALID ),
      .s_axis_tready_0 ( nf10_10g_interface_0_M_AXIS_TREADY ),
      .s_axis_tlast_0 ( nf10_10g_interface_0_M_AXIS_TLAST ),
      .s_axis_tdata_1 ( nf10_10g_interface_1_M_AXIS_TDATA ),
      .s_axis_tstrb_1 ( nf10_10g_interface_1_M_AXIS_TSTRB ),
      .s_axis_tuser_1 ( nf10_10g_interface_1_M_AXIS_TUSER ),
      .s_axis_tvalid_1 ( nf10_10g_interface_1_M_AXIS_TVALID ),
      .s_axis_tready_1 ( nf10_10g_interface_1_M_AXIS_TREADY ),
      .s_axis_tlast_1 ( nf10_10g_interface_1_M_AXIS_TLAST ),
      .s_axis_tdata_2 ( nf10_10g_interface_2_M_AXIS_TDATA ),
      .s_axis_tstrb_2 ( nf10_10g_interface_2_M_AXIS_TSTRB ),
      .s_axis_tuser_2 ( nf10_10g_interface_2_M_AXIS_TUSER ),
      .s_axis_tvalid_2 ( nf10_10g_interface_2_M_AXIS_TVALID ),
      .s_axis_tready_2 ( nf10_10g_interface_2_M_AXIS_TREADY ),
      .s_axis_tlast_2 ( nf10_10g_interface_2_M_AXIS_TLAST ),
      .s_axis_tdata_3 ( nf10_10g_interface_3_M_AXIS_TDATA ),
      .s_axis_tstrb_3 ( nf10_10g_interface_3_M_AXIS_TSTRB ),
      .s_axis_tuser_3 ( nf10_10g_interface_3_M_AXIS_TUSER ),
      .s_axis_tvalid_3 ( nf10_10g_interface_3_M_AXIS_TVALID ),
      .s_axis_tready_3 ( nf10_10g_interface_3_M_AXIS_TREADY ),
      .s_axis_tlast_3 ( nf10_10g_interface_3_M_AXIS_TLAST ),
      .s_axis_tdata_4 ( dma_0_M_AXIS_TDATA ),
      .s_axis_tstrb_4 ( dma_0_M_AXIS_TSTRB ),
      .s_axis_tuser_4 ( dma_0_M_AXIS_TUSER ),
      .s_axis_tvalid_4 ( dma_0_M_AXIS_TVALID ),
      .s_axis_tready_4 ( dma_0_M_AXIS_TREADY ),
      .s_axis_tlast_4 ( dma_0_M_AXIS_TLAST )
    );

  nf10_bram_output_queues_0_wrapper
    nf10_bram_output_queues_0 (
      .axi_aclk ( core_clk ),
      .axi_resetn ( Peripheral_aresetn[0] ),
      .s_axis_tdata ( nf10_endianess_manager_0_M_AXIS_TDATA ),
      .s_axis_tstrb ( nf10_endianess_manager_0_M_AXIS_TSTRB ),
      .s_axis_tuser ( nf10_endianess_manager_0_M_AXIS_TUSER ),
      .s_axis_tvalid ( nf10_endianess_manager_0_M_AXIS_TVALID ),
      .s_axis_tready ( nf10_endianess_manager_0_M_AXIS_TREADY ),
      .s_axis_tlast ( nf10_endianess_manager_0_M_AXIS_TLAST ),
      .m_axis_tdata_0 ( nf10_bram_output_queues_0_M_AXIS_0_TDATA ),
      .m_axis_tstrb_0 ( nf10_bram_output_queues_0_M_AXIS_0_TSTRB ),
      .m_axis_tuser_0 ( nf10_bram_output_queues_0_M_AXIS_0_TUSER ),
      .m_axis_tvalid_0 ( nf10_bram_output_queues_0_M_AXIS_0_TVALID ),
      .m_axis_tready_0 ( nf10_bram_output_queues_0_M_AXIS_0_TREADY ),
      .m_axis_tlast_0 ( nf10_bram_output_queues_0_M_AXIS_0_TLAST ),
      .m_axis_tdata_1 ( nf10_bram_output_queues_0_M_AXIS_1_TDATA ),
      .m_axis_tstrb_1 ( nf10_bram_output_queues_0_M_AXIS_1_TSTRB ),
      .m_axis_tuser_1 ( nf10_bram_output_queues_0_M_AXIS_1_TUSER ),
      .m_axis_tvalid_1 ( nf10_bram_output_queues_0_M_AXIS_1_TVALID ),
      .m_axis_tready_1 ( nf10_bram_output_queues_0_M_AXIS_1_TREADY ),
      .m_axis_tlast_1 ( nf10_bram_output_queues_0_M_AXIS_1_TLAST ),
      .m_axis_tdata_2 ( nf10_bram_output_queues_0_M_AXIS_2_TDATA ),
      .m_axis_tstrb_2 ( nf10_bram_output_queues_0_M_AXIS_2_TSTRB ),
      .m_axis_tuser_2 ( nf10_bram_output_queues_0_M_AXIS_2_TUSER ),
      .m_axis_tvalid_2 ( nf10_bram_output_queues_0_M_AXIS_2_TVALID ),
      .m_axis_tready_2 ( nf10_bram_output_queues_0_M_AXIS_2_TREADY ),
      .m_axis_tlast_2 ( nf10_bram_output_queues_0_M_AXIS_2_TLAST ),
      .m_axis_tdata_3 ( nf10_bram_output_queues_0_M_AXIS_3_TDATA ),
      .m_axis_tstrb_3 ( nf10_bram_output_queues_0_M_AXIS_3_TSTRB ),
      .m_axis_tuser_3 ( nf10_bram_output_queues_0_M_AXIS_3_TUSER ),
      .m_axis_tvalid_3 ( nf10_bram_output_queues_0_M_AXIS_3_TVALID ),
      .m_axis_tready_3 ( nf10_bram_output_queues_0_M_AXIS_3_TREADY ),
      .m_axis_tlast_3 ( nf10_bram_output_queues_0_M_AXIS_3_TLAST ),
      .m_axis_tdata_4 ( nf10_bram_output_queues_0_M_AXIS_4_TDATA ),
      .m_axis_tstrb_4 ( nf10_bram_output_queues_0_M_AXIS_4_TSTRB ),
      .m_axis_tuser_4 ( nf10_bram_output_queues_0_M_AXIS_4_TUSER ),
      .m_axis_tvalid_4 ( nf10_bram_output_queues_0_M_AXIS_4_TVALID ),
      .m_axis_tready_4 ( nf10_bram_output_queues_0_M_AXIS_4_TREADY ),
      .m_axis_tlast_4 ( nf10_bram_output_queues_0_M_AXIS_4_TLAST )
    );

  nf10_nic_output_port_lookup_0_wrapper
    nf10_nic_output_port_lookup_0 (
      .axi_aclk ( core_clk ),
      .axi_resetn ( Peripheral_aresetn[0] ),
      .m_axis_tdata ( nf10_nic_output_port_lookup_0_M_AXIS_TDATA ),
      .m_axis_tstrb ( nf10_nic_output_port_lookup_0_M_AXIS_TSTRB ),
      .m_axis_tuser ( nf10_nic_output_port_lookup_0_M_AXIS_TUSER ),
      .m_axis_tvalid ( nf10_nic_output_port_lookup_0_M_AXIS_TVALID ),
      .m_axis_tready ( nf10_nic_output_port_lookup_0_M_AXIS_TREADY ),
      .m_axis_tlast ( nf10_nic_output_port_lookup_0_M_AXIS_TLAST ),
      .s_axis_tdata ( nf10_endianess_manager_0_M_AXIS_INT_TDATA ),
      .s_axis_tstrb ( nf10_endianess_manager_0_M_AXIS_INT_TSTRB ),
      .s_axis_tuser ( nf10_endianess_manager_0_M_AXIS_INT_TUSER ),
      .s_axis_tvalid ( nf10_endianess_manager_0_M_AXIS_INT_TVALID ),
      .s_axis_tready ( nf10_endianess_manager_0_M_AXIS_INT_TREADY ),
      .s_axis_tlast ( nf10_endianess_manager_0_M_AXIS_INT_TLAST )
    );

  nf10_axi_sim_transactor_0_wrapper
    nf10_axi_sim_transactor_0 (
      .M_AXI_ACLK ( control_clk ),
      .M_AXI_ARESETN ( Peripheral_aresetn[0] ),
      .M_AXI_AWADDR ( axi_interconnect_0_S_AWADDR[63:32] ),
      .M_AXI_AWVALID ( axi_interconnect_0_S_AWVALID[1] ),
      .M_AXI_AWREADY ( axi_interconnect_0_S_AWREADY[1] ),
      .M_AXI_WDATA ( axi_interconnect_0_S_WDATA[63:32] ),
      .M_AXI_WSTRB ( axi_interconnect_0_S_WSTRB[7:4] ),
      .M_AXI_WVALID ( axi_interconnect_0_S_WVALID[1] ),
      .M_AXI_WREADY ( axi_interconnect_0_S_WREADY[1] ),
      .M_AXI_BRESP ( axi_interconnect_0_S_BRESP[3:2] ),
      .M_AXI_BVALID ( axi_interconnect_0_S_BVALID[1] ),
      .M_AXI_BREADY ( axi_interconnect_0_S_BREADY[1] ),
      .M_AXI_ARADDR ( axi_interconnect_0_S_ARADDR[63:32] ),
      .M_AXI_ARVALID ( axi_interconnect_0_S_ARVALID[1] ),
      .M_AXI_ARREADY ( axi_interconnect_0_S_ARREADY[1] ),
      .M_AXI_RDATA ( axi_interconnect_0_S_RDATA[63:32] ),
      .M_AXI_RRESP ( axi_interconnect_0_S_RRESP[3:2] ),
      .M_AXI_RVALID ( axi_interconnect_0_S_RVALID[1] ),
      .M_AXI_RREADY ( axi_interconnect_0_S_RREADY[1] )
    );

  stim_dma_0_m_axis_wrapper
    stim_dma_0_M_AXIS (
      .aclk ( core_clk ),
      .aresetn ( Peripheral_aresetn[0] ),
      .m_axis_tdata ( dma_0_M_AXIS_TDATA ),
      .m_axis_tstrb ( dma_0_M_AXIS_TSTRB ),
      .m_axis_tuser ( dma_0_M_AXIS_TUSER ),
      .m_axis_tvalid ( dma_0_M_AXIS_TVALID ),
      .m_axis_tready ( dma_0_M_AXIS_TREADY ),
      .m_axis_tlast ( dma_0_M_AXIS_TLAST )
    );

  record_nf10_bram_output_queues_0_m_axis_4_wrapper
    record_nf10_bram_output_queues_0_M_AXIS_4 (
      .aclk ( core_clk ),
      .s_axis_tdata ( nf10_bram_output_queues_0_M_AXIS_4_TDATA ),
      .s_axis_tstrb ( nf10_bram_output_queues_0_M_AXIS_4_TSTRB ),
      .s_axis_tuser ( nf10_bram_output_queues_0_M_AXIS_4_TUSER ),
      .s_axis_tvalid ( nf10_bram_output_queues_0_M_AXIS_4_TVALID ),
      .s_axis_tready ( nf10_bram_output_queues_0_M_AXIS_4_TREADY ),
      .s_axis_tlast ( nf10_bram_output_queues_0_M_AXIS_4_TLAST )
    );

  nf10_endianess_manager_0_wrapper
    nf10_endianess_manager_0 (
      .ACLK ( core_clk ),
      .ARESETN ( Peripheral_aresetn[0] ),
      .S_AXIS_TREADY ( nf10_input_arbiter_0_M_AXIS_TREADY ),
      .S_AXIS_TDATA ( nf10_input_arbiter_0_M_AXIS_TDATA ),
      .S_AXIS_TLAST ( nf10_input_arbiter_0_M_AXIS_TLAST ),
      .S_AXIS_TVALID ( nf10_input_arbiter_0_M_AXIS_TVALID ),
      .S_AXIS_TSTRB ( nf10_input_arbiter_0_M_AXIS_TSTRB ),
      .S_AXIS_TUSER ( nf10_input_arbiter_0_M_AXIS_TUSER ),
      .M_AXIS_TVALID_INT ( nf10_endianess_manager_0_M_AXIS_INT_TVALID ),
      .M_AXIS_TDATA_INT ( nf10_endianess_manager_0_M_AXIS_INT_TDATA ),
      .M_AXIS_TLAST_INT ( nf10_endianess_manager_0_M_AXIS_INT_TLAST ),
      .M_AXIS_TREADY_INT ( nf10_endianess_manager_0_M_AXIS_INT_TREADY ),
      .M_AXIS_TSTRB_INT ( nf10_endianess_manager_0_M_AXIS_INT_TSTRB ),
      .M_AXIS_TUSER_INT ( nf10_endianess_manager_0_M_AXIS_INT_TUSER ),
      .S_AXIS_TREADY_INT ( crypto_0_M_AXIS_TREADY ),
      .S_AXIS_TDATA_INT ( crypto_0_M_AXIS_TDATA ),
      .S_AXIS_TLAST_INT ( crypto_0_M_AXIS_TLAST ),
      .S_AXIS_TVALID_INT ( crypto_0_M_AXIS_TVALID ),
      .S_AXIS_TSTRB_INT ( crypto_0_M_AXIS_TSTRB ),
      .S_AXIS_TUSER_INT ( crypto_0_M_AXIS_TUSER ),
      .M_AXIS_TVALID ( nf10_endianess_manager_0_M_AXIS_TVALID ),
      .M_AXIS_TDATA ( nf10_endianess_manager_0_M_AXIS_TDATA ),
      .M_AXIS_TLAST ( nf10_endianess_manager_0_M_AXIS_TLAST ),
      .M_AXIS_TREADY ( nf10_endianess_manager_0_M_AXIS_TREADY ),
      .M_AXIS_TSTRB ( nf10_endianess_manager_0_M_AXIS_TSTRB ),
      .M_AXIS_TUSER ( nf10_endianess_manager_0_M_AXIS_TUSER )
    );

  nf10_crypto_0_wrapper
    nf10_crypto_0 (
      .s_axi_aclk ( core_clk ),
      .s_axi_aresetn ( Peripheral_aresetn[0] ),
      .s_axi_awaddr ( axi_interconnect_0_M_AWADDR[127:96] ),
      .s_axi_awvalid ( axi_interconnect_0_M_AWVALID[3] ),
      .s_axi_wdata ( axi_interconnect_0_M_WDATA[127:96] ),
      .s_axi_wstrb ( axi_interconnect_0_M_WSTRB[15:12] ),
      .s_axi_wvalid ( axi_interconnect_0_M_WVALID[3] ),
      .s_axi_bready ( axi_interconnect_0_M_BREADY[3] ),
      .s_axi_araddr ( axi_interconnect_0_M_ARADDR[127:96] ),
      .s_axi_arvalid ( axi_interconnect_0_M_ARVALID[3] ),
      .s_axi_rready ( axi_interconnect_0_M_RREADY[3] ),
      .s_axi_arready ( axi_interconnect_0_M_ARREADY[3] ),
      .s_axi_rdata ( axi_interconnect_0_M_RDATA[127:96] ),
      .s_axi_rresp ( axi_interconnect_0_M_RRESP[7:6] ),
      .s_axi_rvalid ( axi_interconnect_0_M_RVALID[3] ),
      .s_axi_wready ( axi_interconnect_0_M_WREADY[3] ),
      .s_axi_bresp ( axi_interconnect_0_M_BRESP[7:6] ),
      .s_axi_bvalid ( axi_interconnect_0_M_BVALID[3] ),
      .s_axi_awready ( axi_interconnect_0_M_AWREADY[3] ),
      .m_axis_tdata ( crypto_0_M_AXIS_TDATA ),
      .m_axis_tstrb ( crypto_0_M_AXIS_TSTRB ),
      .m_axis_tuser ( crypto_0_M_AXIS_TUSER ),
      .m_axis_tvalid ( crypto_0_M_AXIS_TVALID ),
      .m_axis_tready ( crypto_0_M_AXIS_TREADY ),
      .m_axis_tlast ( crypto_0_M_AXIS_TLAST ),
      .s_axis_tdata ( nf10_nic_output_port_lookup_0_M_AXIS_TDATA ),
      .s_axis_tstrb ( nf10_nic_output_port_lookup_0_M_AXIS_TSTRB ),
      .s_axis_tuser ( nf10_nic_output_port_lookup_0_M_AXIS_TUSER ),
      .s_axis_tvalid ( nf10_nic_output_port_lookup_0_M_AXIS_TVALID ),
      .s_axis_tready ( nf10_nic_output_port_lookup_0_M_AXIS_TREADY ),
      .s_axis_tlast ( nf10_nic_output_port_lookup_0_M_AXIS_TLAST )
    );

  axi_emc_0_wrapper
    axi_emc_0 (
      .S_AXI_ACLK ( control_clk ),
      .S_AXI_ARESETN ( axi_interconnect_0_M_ARESETN[4] ),
      .S_AXI_REG_AWADDR ( net_gnd32[0:31] ),
      .S_AXI_REG_AWVALID ( net_gnd0 ),
      .S_AXI_REG_AWREADY (  ),
      .S_AXI_REG_WDATA ( net_gnd32[0:31] ),
      .S_AXI_REG_WSTRB ( net_gnd4[0:3] ),
      .S_AXI_REG_WVALID ( net_gnd0 ),
      .S_AXI_REG_WREADY (  ),
      .S_AXI_REG_BRESP (  ),
      .S_AXI_REG_BVALID (  ),
      .S_AXI_REG_BREADY ( net_gnd0 ),
      .S_AXI_REG_ARADDR ( net_gnd32[0:31] ),
      .S_AXI_REG_ARVALID ( net_gnd0 ),
      .S_AXI_REG_ARREADY (  ),
      .S_AXI_REG_RDATA (  ),
      .S_AXI_REG_RRESP (  ),
      .S_AXI_REG_RVALID (  ),
      .S_AXI_REG_RREADY ( net_gnd0 ),
      .S_AXI_MEM_AWLEN ( axi_interconnect_0_M_AWLEN[39:32] ),
      .S_AXI_MEM_AWSIZE ( axi_interconnect_0_M_AWSIZE[14:12] ),
      .S_AXI_MEM_AWBURST ( axi_interconnect_0_M_AWBURST[9:8] ),
      .S_AXI_MEM_AWLOCK ( axi_interconnect_0_M_AWLOCK[8] ),
      .S_AXI_MEM_AWCACHE ( axi_interconnect_0_M_AWCACHE[19:16] ),
      .S_AXI_MEM_AWPROT ( axi_interconnect_0_M_AWPROT[14:12] ),
      .S_AXI_MEM_WLAST ( axi_interconnect_0_M_WLAST[4] ),
      .S_AXI_MEM_BID ( axi_interconnect_0_M_BID[4:4] ),
      .S_AXI_MEM_ARID ( axi_interconnect_0_M_ARID[4:4] ),
      .S_AXI_MEM_ARLEN ( axi_interconnect_0_M_ARLEN[39:32] ),
      .S_AXI_MEM_ARSIZE ( axi_interconnect_0_M_ARSIZE[14:12] ),
      .S_AXI_MEM_ARBURST ( axi_interconnect_0_M_ARBURST[9:8] ),
      .S_AXI_MEM_ARLOCK ( axi_interconnect_0_M_ARLOCK[8] ),
      .S_AXI_MEM_ARCACHE ( axi_interconnect_0_M_ARCACHE[19:16] ),
      .S_AXI_MEM_ARPROT ( axi_interconnect_0_M_ARPROT[14:12] ),
      .S_AXI_MEM_RID ( axi_interconnect_0_M_RID[4:4] ),
      .S_AXI_MEM_RLAST ( axi_interconnect_0_M_RLAST[4] ),
      .S_AXI_MEM_AWID ( axi_interconnect_0_M_AWID[4:4] ),
      .S_AXI_MEM_AWADDR ( axi_interconnect_0_M_AWADDR[159:128] ),
      .S_AXI_MEM_AWVALID ( axi_interconnect_0_M_AWVALID[4] ),
      .S_AXI_MEM_AWREADY ( axi_interconnect_0_M_AWREADY[4] ),
      .S_AXI_MEM_WDATA ( axi_interconnect_0_M_WDATA[159:128] ),
      .S_AXI_MEM_WSTRB ( axi_interconnect_0_M_WSTRB[19:16] ),
      .S_AXI_MEM_WVALID ( axi_interconnect_0_M_WVALID[4] ),
      .S_AXI_MEM_WREADY ( axi_interconnect_0_M_WREADY[4] ),
      .S_AXI_MEM_BRESP ( axi_interconnect_0_M_BRESP[9:8] ),
      .S_AXI_MEM_BVALID ( axi_interconnect_0_M_BVALID[4] ),
      .S_AXI_MEM_BREADY ( axi_interconnect_0_M_BREADY[4] ),
      .S_AXI_MEM_ARADDR ( axi_interconnect_0_M_ARADDR[159:128] ),
      .S_AXI_MEM_ARVALID ( axi_interconnect_0_M_ARVALID[4] ),
      .S_AXI_MEM_ARREADY ( axi_interconnect_0_M_ARREADY[4] ),
      .S_AXI_MEM_RDATA ( axi_interconnect_0_M_RDATA[159:128] ),
      .S_AXI_MEM_RRESP ( axi_interconnect_0_M_RRESP[9:8] ),
      .S_AXI_MEM_RVALID ( axi_interconnect_0_M_RVALID[4] ),
      .S_AXI_MEM_RREADY ( axi_interconnect_0_M_RREADY[4] ),
      .RdClk ( control_clk ),
      .Mem_A ( pgassign5 ),
      .Mem_RPN (  ),
      .Mem_CE (  ),
      .Mem_CEN ( axi_emc_0_Mem_CEN[0:0] ),
      .Mem_OEN ( axi_emc_0_Mem_OEN[0:0] ),
      .Mem_WEN ( axi_emc_0_Mem_WEN ),
      .Mem_QWEN (  ),
      .Mem_BEN (  ),
      .Mem_ADV_LDN (  ),
      .Mem_LBON (  ),
      .Mem_CKEN (  ),
      .Mem_RNW (  ),
      .Mem_DQ_I ( axi_emc_0_Mem_DQ_I ),
      .Mem_DQ_O ( axi_emc_0_Mem_DQ_O ),
      .Mem_DQ_T ( axi_emc_0_Mem_DQ_T ),
      .MEM_DQ_PARITY_I ( net_gnd4[0:3] ),
      .MEM_DQ_PARITY_O (  ),
      .MEM_DQ_PARITY_T (  ),
      .Mem_CRE (  )
    );

  axi_cfg_fpga_0_wrapper
    axi_cfg_fpga_0 (
      .S_AXI_ACLK ( control_clk ),
      .S_AXI_ARESETN ( axi_interconnect_0_M_ARESETN[5] ),
      .S_AXI_AWADDR ( axi_interconnect_0_M_AWADDR[191:160] ),
      .S_AXI_AWVALID ( axi_interconnect_0_M_AWVALID[5] ),
      .S_AXI_AWREADY ( axi_interconnect_0_M_AWREADY[5] ),
      .S_AXI_WDATA ( axi_interconnect_0_M_WDATA[191:160] ),
      .S_AXI_WSTRB ( axi_interconnect_0_M_WSTRB[23:20] ),
      .S_AXI_WVALID ( axi_interconnect_0_M_WVALID[5] ),
      .S_AXI_WREADY ( axi_interconnect_0_M_WREADY[5] ),
      .S_AXI_BRESP ( axi_interconnect_0_M_BRESP[11:10] ),
      .S_AXI_BVALID ( axi_interconnect_0_M_BVALID[5] ),
      .S_AXI_BREADY ( axi_interconnect_0_M_BREADY[5] ),
      .S_AXI_ARADDR ( axi_interconnect_0_M_ARADDR[191:160] ),
      .S_AXI_ARVALID ( axi_interconnect_0_M_ARVALID[5] ),
      .S_AXI_ARREADY ( axi_interconnect_0_M_ARREADY[5] ),
      .S_AXI_RDATA ( axi_interconnect_0_M_RDATA[191:160] ),
      .S_AXI_RRESP ( axi_interconnect_0_M_RRESP[11:10] ),
      .S_AXI_RVALID ( axi_interconnect_0_M_RVALID[5] ),
      .S_AXI_RREADY ( axi_interconnect_0_M_RREADY[5] ),
      .IP2INTC_Irpt (  ),
      .GPIO_IO_I ( axi_cfg_fpga_0_GPIO_IO_I ),
      .GPIO_IO_O ( axi_cfg_fpga_0_GPIO_IO_O ),
      .GPIO_IO_T ( axi_cfg_fpga_0_GPIO_IO_T ),
      .GPIO2_IO_I ( net_gnd32[0:31] ),
      .GPIO2_IO_O (  ),
      .GPIO2_IO_T (  )
    );

  nf10_identifier_0_wrapper
    nf10_identifier_0 (
      .S_AXI_ACLK ( control_clk ),
      .S_AXI_ARESETN ( Peripheral_aresetn[0] ),
      .S_AXI_AWADDR ( axi_interconnect_0_M_AWADDR[223:192] ),
      .S_AXI_AWVALID ( axi_interconnect_0_M_AWVALID[6] ),
      .S_AXI_WDATA ( axi_interconnect_0_M_WDATA[223:192] ),
      .S_AXI_WSTRB ( axi_interconnect_0_M_WSTRB[27:24] ),
      .S_AXI_WVALID ( axi_interconnect_0_M_WVALID[6] ),
      .S_AXI_BREADY ( axi_interconnect_0_M_BREADY[6] ),
      .S_AXI_ARADDR ( axi_interconnect_0_M_ARADDR[223:192] ),
      .S_AXI_ARVALID ( axi_interconnect_0_M_ARVALID[6] ),
      .S_AXI_RREADY ( axi_interconnect_0_M_RREADY[6] ),
      .S_AXI_ARREADY ( axi_interconnect_0_M_ARREADY[6] ),
      .S_AXI_RDATA ( axi_interconnect_0_M_RDATA[223:192] ),
      .S_AXI_RRESP ( axi_interconnect_0_M_RRESP[13:12] ),
      .S_AXI_RVALID ( axi_interconnect_0_M_RVALID[6] ),
      .S_AXI_WREADY ( axi_interconnect_0_M_WREADY[6] ),
      .S_AXI_BRESP ( axi_interconnect_0_M_BRESP[13:12] ),
      .S_AXI_BVALID ( axi_interconnect_0_M_BVALID[6] ),
      .S_AXI_AWREADY ( axi_interconnect_0_M_AWREADY[6] )
    );

  IOBUF
    iobuf_0 (
      .I ( nf10_mdio_0_PHY_MDIO_O ),
      .IO ( MDIO ),
      .O ( nf10_mdio_0_PHY_MDIO_I ),
      .T ( nf10_mdio_0_PHY_MDIO_T )
    );

  IOBUF
    iobuf_1 (
      .I ( axi_emc_0_Mem_DQ_O[31] ),
      .IO ( axi_emc_0_Mem_DQ_pin[31] ),
      .O ( axi_emc_0_Mem_DQ_I[31] ),
      .T ( axi_emc_0_Mem_DQ_T[31] )
    );

  IOBUF
    iobuf_2 (
      .I ( axi_emc_0_Mem_DQ_O[30] ),
      .IO ( axi_emc_0_Mem_DQ_pin[30] ),
      .O ( axi_emc_0_Mem_DQ_I[30] ),
      .T ( axi_emc_0_Mem_DQ_T[30] )
    );

  IOBUF
    iobuf_3 (
      .I ( axi_emc_0_Mem_DQ_O[29] ),
      .IO ( axi_emc_0_Mem_DQ_pin[29] ),
      .O ( axi_emc_0_Mem_DQ_I[29] ),
      .T ( axi_emc_0_Mem_DQ_T[29] )
    );

  IOBUF
    iobuf_4 (
      .I ( axi_emc_0_Mem_DQ_O[28] ),
      .IO ( axi_emc_0_Mem_DQ_pin[28] ),
      .O ( axi_emc_0_Mem_DQ_I[28] ),
      .T ( axi_emc_0_Mem_DQ_T[28] )
    );

  IOBUF
    iobuf_5 (
      .I ( axi_emc_0_Mem_DQ_O[27] ),
      .IO ( axi_emc_0_Mem_DQ_pin[27] ),
      .O ( axi_emc_0_Mem_DQ_I[27] ),
      .T ( axi_emc_0_Mem_DQ_T[27] )
    );

  IOBUF
    iobuf_6 (
      .I ( axi_emc_0_Mem_DQ_O[26] ),
      .IO ( axi_emc_0_Mem_DQ_pin[26] ),
      .O ( axi_emc_0_Mem_DQ_I[26] ),
      .T ( axi_emc_0_Mem_DQ_T[26] )
    );

  IOBUF
    iobuf_7 (
      .I ( axi_emc_0_Mem_DQ_O[25] ),
      .IO ( axi_emc_0_Mem_DQ_pin[25] ),
      .O ( axi_emc_0_Mem_DQ_I[25] ),
      .T ( axi_emc_0_Mem_DQ_T[25] )
    );

  IOBUF
    iobuf_8 (
      .I ( axi_emc_0_Mem_DQ_O[24] ),
      .IO ( axi_emc_0_Mem_DQ_pin[24] ),
      .O ( axi_emc_0_Mem_DQ_I[24] ),
      .T ( axi_emc_0_Mem_DQ_T[24] )
    );

  IOBUF
    iobuf_9 (
      .I ( axi_emc_0_Mem_DQ_O[23] ),
      .IO ( axi_emc_0_Mem_DQ_pin[23] ),
      .O ( axi_emc_0_Mem_DQ_I[23] ),
      .T ( axi_emc_0_Mem_DQ_T[23] )
    );

  IOBUF
    iobuf_10 (
      .I ( axi_emc_0_Mem_DQ_O[22] ),
      .IO ( axi_emc_0_Mem_DQ_pin[22] ),
      .O ( axi_emc_0_Mem_DQ_I[22] ),
      .T ( axi_emc_0_Mem_DQ_T[22] )
    );

  IOBUF
    iobuf_11 (
      .I ( axi_emc_0_Mem_DQ_O[21] ),
      .IO ( axi_emc_0_Mem_DQ_pin[21] ),
      .O ( axi_emc_0_Mem_DQ_I[21] ),
      .T ( axi_emc_0_Mem_DQ_T[21] )
    );

  IOBUF
    iobuf_12 (
      .I ( axi_emc_0_Mem_DQ_O[20] ),
      .IO ( axi_emc_0_Mem_DQ_pin[20] ),
      .O ( axi_emc_0_Mem_DQ_I[20] ),
      .T ( axi_emc_0_Mem_DQ_T[20] )
    );

  IOBUF
    iobuf_13 (
      .I ( axi_emc_0_Mem_DQ_O[19] ),
      .IO ( axi_emc_0_Mem_DQ_pin[19] ),
      .O ( axi_emc_0_Mem_DQ_I[19] ),
      .T ( axi_emc_0_Mem_DQ_T[19] )
    );

  IOBUF
    iobuf_14 (
      .I ( axi_emc_0_Mem_DQ_O[18] ),
      .IO ( axi_emc_0_Mem_DQ_pin[18] ),
      .O ( axi_emc_0_Mem_DQ_I[18] ),
      .T ( axi_emc_0_Mem_DQ_T[18] )
    );

  IOBUF
    iobuf_15 (
      .I ( axi_emc_0_Mem_DQ_O[17] ),
      .IO ( axi_emc_0_Mem_DQ_pin[17] ),
      .O ( axi_emc_0_Mem_DQ_I[17] ),
      .T ( axi_emc_0_Mem_DQ_T[17] )
    );

  IOBUF
    iobuf_16 (
      .I ( axi_emc_0_Mem_DQ_O[16] ),
      .IO ( axi_emc_0_Mem_DQ_pin[16] ),
      .O ( axi_emc_0_Mem_DQ_I[16] ),
      .T ( axi_emc_0_Mem_DQ_T[16] )
    );

  IOBUF
    iobuf_17 (
      .I ( axi_emc_0_Mem_DQ_O[15] ),
      .IO ( axi_emc_0_Mem_DQ_pin[15] ),
      .O ( axi_emc_0_Mem_DQ_I[15] ),
      .T ( axi_emc_0_Mem_DQ_T[15] )
    );

  IOBUF
    iobuf_18 (
      .I ( axi_emc_0_Mem_DQ_O[14] ),
      .IO ( axi_emc_0_Mem_DQ_pin[14] ),
      .O ( axi_emc_0_Mem_DQ_I[14] ),
      .T ( axi_emc_0_Mem_DQ_T[14] )
    );

  IOBUF
    iobuf_19 (
      .I ( axi_emc_0_Mem_DQ_O[13] ),
      .IO ( axi_emc_0_Mem_DQ_pin[13] ),
      .O ( axi_emc_0_Mem_DQ_I[13] ),
      .T ( axi_emc_0_Mem_DQ_T[13] )
    );

  IOBUF
    iobuf_20 (
      .I ( axi_emc_0_Mem_DQ_O[12] ),
      .IO ( axi_emc_0_Mem_DQ_pin[12] ),
      .O ( axi_emc_0_Mem_DQ_I[12] ),
      .T ( axi_emc_0_Mem_DQ_T[12] )
    );

  IOBUF
    iobuf_21 (
      .I ( axi_emc_0_Mem_DQ_O[11] ),
      .IO ( axi_emc_0_Mem_DQ_pin[11] ),
      .O ( axi_emc_0_Mem_DQ_I[11] ),
      .T ( axi_emc_0_Mem_DQ_T[11] )
    );

  IOBUF
    iobuf_22 (
      .I ( axi_emc_0_Mem_DQ_O[10] ),
      .IO ( axi_emc_0_Mem_DQ_pin[10] ),
      .O ( axi_emc_0_Mem_DQ_I[10] ),
      .T ( axi_emc_0_Mem_DQ_T[10] )
    );

  IOBUF
    iobuf_23 (
      .I ( axi_emc_0_Mem_DQ_O[9] ),
      .IO ( axi_emc_0_Mem_DQ_pin[9] ),
      .O ( axi_emc_0_Mem_DQ_I[9] ),
      .T ( axi_emc_0_Mem_DQ_T[9] )
    );

  IOBUF
    iobuf_24 (
      .I ( axi_emc_0_Mem_DQ_O[8] ),
      .IO ( axi_emc_0_Mem_DQ_pin[8] ),
      .O ( axi_emc_0_Mem_DQ_I[8] ),
      .T ( axi_emc_0_Mem_DQ_T[8] )
    );

  IOBUF
    iobuf_25 (
      .I ( axi_emc_0_Mem_DQ_O[7] ),
      .IO ( axi_emc_0_Mem_DQ_pin[7] ),
      .O ( axi_emc_0_Mem_DQ_I[7] ),
      .T ( axi_emc_0_Mem_DQ_T[7] )
    );

  IOBUF
    iobuf_26 (
      .I ( axi_emc_0_Mem_DQ_O[6] ),
      .IO ( axi_emc_0_Mem_DQ_pin[6] ),
      .O ( axi_emc_0_Mem_DQ_I[6] ),
      .T ( axi_emc_0_Mem_DQ_T[6] )
    );

  IOBUF
    iobuf_27 (
      .I ( axi_emc_0_Mem_DQ_O[5] ),
      .IO ( axi_emc_0_Mem_DQ_pin[5] ),
      .O ( axi_emc_0_Mem_DQ_I[5] ),
      .T ( axi_emc_0_Mem_DQ_T[5] )
    );

  IOBUF
    iobuf_28 (
      .I ( axi_emc_0_Mem_DQ_O[4] ),
      .IO ( axi_emc_0_Mem_DQ_pin[4] ),
      .O ( axi_emc_0_Mem_DQ_I[4] ),
      .T ( axi_emc_0_Mem_DQ_T[4] )
    );

  IOBUF
    iobuf_29 (
      .I ( axi_emc_0_Mem_DQ_O[3] ),
      .IO ( axi_emc_0_Mem_DQ_pin[3] ),
      .O ( axi_emc_0_Mem_DQ_I[3] ),
      .T ( axi_emc_0_Mem_DQ_T[3] )
    );

  IOBUF
    iobuf_30 (
      .I ( axi_emc_0_Mem_DQ_O[2] ),
      .IO ( axi_emc_0_Mem_DQ_pin[2] ),
      .O ( axi_emc_0_Mem_DQ_I[2] ),
      .T ( axi_emc_0_Mem_DQ_T[2] )
    );

  IOBUF
    iobuf_31 (
      .I ( axi_emc_0_Mem_DQ_O[1] ),
      .IO ( axi_emc_0_Mem_DQ_pin[1] ),
      .O ( axi_emc_0_Mem_DQ_I[1] ),
      .T ( axi_emc_0_Mem_DQ_T[1] )
    );

  IOBUF
    iobuf_32 (
      .I ( axi_emc_0_Mem_DQ_O[0] ),
      .IO ( axi_emc_0_Mem_DQ_pin[0] ),
      .O ( axi_emc_0_Mem_DQ_I[0] ),
      .T ( axi_emc_0_Mem_DQ_T[0] )
    );

  IOBUF
    iobuf_33 (
      .I ( axi_cfg_fpga_0_GPIO_IO_O[1] ),
      .IO ( axi_cfg_fpga_0_GPIO_IO_pin[1] ),
      .O ( axi_cfg_fpga_0_GPIO_IO_I[1] ),
      .T ( axi_cfg_fpga_0_GPIO_IO_T[1] )
    );

  IOBUF
    iobuf_34 (
      .I ( axi_cfg_fpga_0_GPIO_IO_O[0] ),
      .IO ( axi_cfg_fpga_0_GPIO_IO_pin[0] ),
      .O ( axi_cfg_fpga_0_GPIO_IO_I[0] ),
      .T ( axi_cfg_fpga_0_GPIO_IO_T[0] )
    );

endmodule

