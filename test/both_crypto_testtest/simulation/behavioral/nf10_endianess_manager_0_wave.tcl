#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     nf10_endianess_manager_0_wave.tcl (Tue Sep  3 17:45:27 2013)
#
#  Module   nf10_endianess_manager_0_wrapper
#  Instance nf10_endianess_manager_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_axisim_tb${ps}dut" }

# wave add $tbpath${ps}nf10_endianess_manager_0${ps}ACLK -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}ARESETN -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TREADY -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TDATA -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TLAST -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TVALID -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TSTRB -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TUSER -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TVALID_INT -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TDATA_INT -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TLAST_INT -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TREADY_INT -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TSTRB_INT -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TUSER_INT -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TREADY_INT -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TDATA_INT -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TLAST_INT -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TVALID_INT -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TSTRB_INT -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}S_AXIS_TUSER_INT -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TVALID -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TDATA -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TLAST -into $id
# wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TREADY -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TSTRB -into $id
  wave add $tbpath${ps}nf10_endianess_manager_0${ps}M_AXIS_TUSER -into $id

