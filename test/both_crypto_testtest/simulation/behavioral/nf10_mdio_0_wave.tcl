#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     nf10_mdio_0_wave.tcl (Tue Sep  3 17:45:27 2013)
#
#  Module   nf10_mdio_0_wrapper
#  Instance nf10_mdio_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_axisim_tb${ps}dut" }

# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_ACLK -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_ARESETN -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}IP2INTC_Irpt -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_AWID -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_AWADDR -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_AWLEN -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_AWSIZE -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_AWBURST -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_AWCACHE -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_AWVALID -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_AWREADY -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_WDATA -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_WSTRB -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_WLAST -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_WVALID -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_WREADY -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_BID -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_BRESP -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_BVALID -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_BREADY -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_ARID -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_ARADDR -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_ARLEN -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_ARSIZE -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_ARBURST -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_ARCACHE -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_ARVALID -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_ARREADY -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_RID -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_RDATA -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_RRESP -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_RLAST -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_RVALID -into $id
# wave add $tbpath${ps}nf10_mdio_0${ps}S_AXI_RREADY -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}PHY_rst_n -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}PHY_MDC -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}PHY_MDIO_I -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}PHY_MDIO_O -into $id
  wave add $tbpath${ps}nf10_mdio_0${ps}PHY_MDIO_T -into $id

