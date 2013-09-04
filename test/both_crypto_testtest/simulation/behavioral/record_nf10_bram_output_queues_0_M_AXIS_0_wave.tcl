#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     record_nf10_bram_output_queues_0_M_AXIS_0_wave.tcl (Tue Sep  3 17:45:27 2013)
#
#  Module   record_nf10_bram_output_queues_0_m_axis_0_wrapper
#  Instance record_nf10_bram_output_queues_0_M_AXIS_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_axisim_tb${ps}dut" }

# wave add $tbpath${ps}record_nf10_bram_output_queues_0_M_AXIS_0${ps}aclk -into $id
# wave add $tbpath${ps}record_nf10_bram_output_queues_0_M_AXIS_0${ps}s_axis_tdata -into $id
# wave add $tbpath${ps}record_nf10_bram_output_queues_0_M_AXIS_0${ps}s_axis_tstrb -into $id
# wave add $tbpath${ps}record_nf10_bram_output_queues_0_M_AXIS_0${ps}s_axis_tuser -into $id
# wave add $tbpath${ps}record_nf10_bram_output_queues_0_M_AXIS_0${ps}s_axis_tvalid -into $id
  wave add $tbpath${ps}record_nf10_bram_output_queues_0_M_AXIS_0${ps}s_axis_tready -into $id
# wave add $tbpath${ps}record_nf10_bram_output_queues_0_M_AXIS_0${ps}s_axis_tlast -into $id

