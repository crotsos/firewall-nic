#!/usr/bin/env python

from NFTest import *
import random
import os
import sys
from crypto_nic_lib import *
from ctypes import *
from reg_defines_crypto_nic_solution import *
from scapy.layers.all import Ether, IP, TCP



conn = ('../connections/crossover', [])
nftest_init(sim_loop = ['nf0', 'nf1', 'nf2', 'nf3'], hw_config = [conn])
nftest_start()

# set parameters
SA = "aa:bb:cc:dd:ee:ff"
DA = "00:ca:fe:00:00:02"
TTL = 64
DST_IP = "192.168.1.1"
SRC_IP = "192.168.0.1"
nextHopMAC = "dd:55:dd:66:dd:77"

KEY = 0xFFFFFFFF

if isHW():

######################################################################################
# DO NOT REMOVE

	# Loading the nf10_lib shared library
	print "loading the nf10_lib library.."
	lib_path=os.path.join( os.environ['NF_ROOT'], 'tools','lib','nf10_lib.so')
	nf10_lib=cdll.LoadLibrary(lib_path)

	# Declare the argument types for the read/write register functions
	nf10_lib.regread.argtypes = [c_uint]
	nf10_lib.regwrite.argtypes= [c_uint, c_uint]
######################################################################################


# write your HW test here.




else:


# write your simulation test here
	NUM_PACKETS = 10
	packets = []
	encrypted_packets = []

	for i in range(NUM_PACKETS):
		pkt = make_IP_pkt(src_MAC=SA, dst_MAC=DA, src_IP=SRC_IP, dst_IP=DST_IP, pkt_len=200)
		time_val = i * (1e-8)
		pkt.time = time_val
		pkt.tuser_sport = 1
		packets.append(pkt)
		
		# encrypt packet
		encrypted_pkt = encrypt_pkt(KEY, pkt)
		encrypted_pkt.time = time_val
		encrypted_packets.append(encrypted_pkt)

	phy = "nf0"
	nftest_send_phy(phy, packets)
	nftest_expect_dma(phy, encrypted_packets)


########################################################
# DO NOT REMOVE UNDER THIS LINE

print ""
mres=[]
nftest_finish(mres)
