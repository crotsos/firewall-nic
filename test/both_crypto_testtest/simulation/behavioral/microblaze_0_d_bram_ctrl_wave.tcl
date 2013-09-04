#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     microblaze_0_d_bram_ctrl_wave.tcl (Tue Sep  3 17:45:27 2013)
#
#  Module   microblaze_0_d_bram_ctrl_wrapper
#  Instance microblaze_0_d_bram_ctrl
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_axisim_tb${ps}dut" }

# wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}LMB_Clk -into $id
# wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}LMB_Rst -into $id
# wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}LMB_ABus -into $id
# wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}LMB_WriteDBus -into $id
# wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}LMB_AddrStrobe -into $id
# wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}LMB_ReadStrobe -into $id
# wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}LMB_WriteStrobe -into $id
# wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}LMB_BE -into $id
  wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}Sl_DBus -into $id
  wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}Sl_Ready -into $id
  wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}BRAM_Rst_A -into $id
  wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}BRAM_Clk_A -into $id
  wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}BRAM_EN_A -into $id
  wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}BRAM_WEN_A -into $id
  wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}BRAM_Addr_A -into $id
# wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}BRAM_Din_A -into $id
  wave add $tbpath${ps}microblaze_0_d_bram_ctrl${ps}BRAM_Dout_A -into $id

