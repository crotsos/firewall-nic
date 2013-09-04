#!/usr/bin/env python

from NFTest import *
import random
import sys
import os
from crypto_nic_lib import *
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

# define the key we want to use to encrypt the packet
key = 0x1234567

if isHW():
	NUM_PKTS = 5

	print "Sending now: "
	for i in range(NUM_PKTS):
	    sys.stdout.write('\r'+str(i))
	    sys.stdout.flush()
	   

	    pkt = make_IP_pkt(dst_MAC=DA, src_MAC=SA, dst_IP=DST_IP,
		              src_IP=SRC_IP, TTL=TTL,
		              pkt_len=random.randint(60,1514))

	    nftest_send_phy('nf2', pkt)
	    nftest_expect_dma('nf2', encrypt_pkt(key,pkt))

else:
	NUM_PKTS = 5

	print "Sending now: "

	pkts=[]
	encrypt_pkts=[]
	# A simple TCP/IP packet embedded in an Ethernet II frame
	for i in range(NUM_PKTS):
	    pkt = make_IP_pkt(src_MAC=SA, dst_MAC=DA, src_IP=SRC_IP, dst_IP=DST_IP,
		              pkt_len=100)
	    #pkt.time = i*(1e-8)
	    # Set source network interface for DMA stream
	    #pkt.tuser_sport = 1 << (2%4*2 + 1) # PCI ports are odd-numbered
	    pkt.tuser_sport = 1
	    pkts.append(pkt)
	    encrypt_pkts.append(encrypt_pkt(key, pkt))

	for i in range(NUM_PKTS):
	    for pkt in pkts:
	        pkt.time = i*(1e-8)

	    for pkt in encrypt_pkts:
	        pkt.time = i*(1e-8)

	# PCI interface

	nftest_send_phy('nf0', pkts)
	nftest_expect_dma('nf0', encrypt_pkts)

print ""
mres=[]
nftest_finish(mres)
