#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     nf10_input_arbiter_0_wave.tcl (Tue Sep  3 17:45:27 2013)
#
#  Module   nf10_input_arbiter_0_wrapper
#  Instance nf10_input_arbiter_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_axisim_tb${ps}dut" }

# wave add $tbpath${ps}nf10_input_arbiter_0${ps}axi_aclk -into $id
  wave add $tbpath${ps}nf10_input_arbiter_0${ps}axi_resetn -into $id
  wave add $tbpath${ps}nf10_input_arbiter_0${ps}m_axis_tdata -into $id
  wave add $tbpath${ps}nf10_input_arbiter_0${ps}m_axis_tstrb -into $id
  wave add $tbpath${ps}nf10_input_arbiter_0${ps}m_axis_tuser -into $id
  wave add $tbpath${ps}nf10_input_arbiter_0${ps}m_axis_tvalid -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}m_axis_tready -into $id
  wave add $tbpath${ps}nf10_input_arbiter_0${ps}m_axis_tlast -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tdata_0 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tstrb_0 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tuser_0 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tvalid_0 -into $id
  wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tready_0 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tlast_0 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tdata_1 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tstrb_1 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tuser_1 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tvalid_1 -into $id
  wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tready_1 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tlast_1 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tdata_2 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tstrb_2 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tuser_2 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tvalid_2 -into $id
  wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tready_2 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tlast_2 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tdata_3 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tstrb_3 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tuser_3 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tvalid_3 -into $id
  wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tready_3 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tlast_3 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tdata_4 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tstrb_4 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tuser_4 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tvalid_4 -into $id
  wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tready_4 -into $id
# wave add $tbpath${ps}nf10_input_arbiter_0${ps}s_axis_tlast_4 -into $id

