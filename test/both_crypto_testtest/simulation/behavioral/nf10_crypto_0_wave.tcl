#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     nf10_crypto_0_wave.tcl (Tue Sep  3 17:45:27 2013)
#
#  Module   nf10_crypto_0_wrapper
#  Instance nf10_crypto_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_axisim_tb${ps}dut" }

# wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_aclk -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_aresetn -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_awaddr -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_awvalid -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_wdata -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_wstrb -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_wvalid -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_bready -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_araddr -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_arvalid -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_rready -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_arready -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_rdata -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_rresp -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_rvalid -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_wready -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_bresp -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_bvalid -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}s_axi_awready -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}m_axis_tdata -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}m_axis_tstrb -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}m_axis_tuser -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}m_axis_tvalid -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}m_axis_tready -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}m_axis_tlast -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axis_tdata -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axis_tstrb -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axis_tuser -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axis_tvalid -into $id
  wave add $tbpath${ps}nf10_crypto_0${ps}s_axis_tready -into $id
# wave add $tbpath${ps}nf10_crypto_0${ps}s_axis_tlast -into $id

