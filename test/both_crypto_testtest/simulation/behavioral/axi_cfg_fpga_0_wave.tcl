#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     axi_cfg_fpga_0_wave.tcl (Tue Sep  3 17:45:27 2013)
#
#  Module   axi_cfg_fpga_0_wrapper
#  Instance axi_cfg_fpga_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_axisim_tb${ps}dut" }

# wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_ACLK -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_ARESETN -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_AWADDR -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_AWVALID -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_AWREADY -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_WDATA -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_WSTRB -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_WVALID -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_WREADY -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_BRESP -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_BVALID -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_BREADY -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_ARADDR -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_ARVALID -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_ARREADY -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_RDATA -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_RRESP -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_RVALID -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}S_AXI_RREADY -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}IP2INTC_Irpt -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}GPIO_IO_I -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}GPIO_IO_O -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}GPIO_IO_T -into $id
  wave add $tbpath${ps}axi_cfg_fpga_0${ps}GPIO2_IO_I -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}GPIO2_IO_O -into $id
# wave add $tbpath${ps}axi_cfg_fpga_0${ps}GPIO2_IO_T -into $id

