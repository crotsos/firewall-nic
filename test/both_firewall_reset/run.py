#!/usr/bin/env python

from NFTest import *
import random
import sys
import os
from crypto_nic_lib import *
from scapy.layers.all import * # Ether, IP, TCP
import struct
import socket

conn = ('../connections/crossover', [])
nftest_init(sim_loop = ['nf0', 'nf1', 'nf2', 'nf3'], hw_config = [conn])
nftest_start()

# set parameters
SA = "aa:bb:cc:dd:ee:ff"
DA = "00:ca:fe:00:00:02"
TTL = 64
DST_IP = "192.168.1.1"
#SRC_IP = "192.168.0.1"
SRC_IP = "170.170.170.170"
nextHopMAC = "dd:55:dd:66:dd:77"

BOGUS_IP = "100.100.100.100"
SRC_PORT = 10000
DST_PORT = 22

# define the key we want to use to encrypt the packet
key = 0x1234567


MAX_RULE_NUM = 20

SRC_IP_OFFS = 0x4
DST_IP_OFFS = 0x8
PORT_OFFS = 0xc
ENABLED_OFFS = 0x10

BASE_ADDR = 0x79600000

def ip_to_hex(ip): 
  return struct.unpack("!I", socket.inet_aton(ip))[0] 
def port_to_hex(sp, dp):
  return ((dp << 16) & 0xFFFF0000) | (0xFFFF & sp) 

def write_firewall_rule(rule_num, src_ip, dst_ip, src_port, dst_port):

  if (rule_num < 0 or rule_num >= MAX_RULE_NUM):
    assert 0, "Only 10 rules available"

  rule_addr = BASE_ADDR + (rule_num * 0x10 )
  #src ip address
  nftest_regwrite(rule_addr + SRC_IP_OFFS, ip_to_hex(src_ip))
  #dst ip address
  nftest_regwrite(rule_addr + DST_IP_OFFS, ip_to_hex(dst_ip))
  # src and dst port
  nftest_regwrite(rule_addr + PORT_OFFS, port_to_hex(src_port, dst_port))
  # rule to update and lookup flag
  nftest_regwrite(rule_addr + ENABLED_OFFS, 1)

def disable_firewall_rule(rule_num): 
  # rule to update and lookup flag
  rule_addr = BASE_ADDR + (rule_num * 0x10 )
  nftest_regwrite(rule_addr + ENABLED_OFFS, 0)

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
  NUM_PKTS = 6

  print "Sending now: "
	
  pkts=[]
  exp_pkts = []
  normal_pkts = []
  
  # A simple TCP/IP packet embedded in an Ethernet II frame
  for i in range(NUM_PKTS):
    if i % 2 == 0:
      src_ip = SRC_IP
    else:
      src_ip = BOGUS_IP
 
     
#    pkt = make_TCP_pkt(src_MAC=SA, dst_MAC=DA, src_IP=src_ip, dst_IP=DST_IP,
#        sport_TCP=SRC_PORT, dport_TCP=DST_PORT, flags="S", pkt_len=500)
#    pkt = make_IP_pkt(src_MAC=SA, dst_MAC=DA, src_IP=src_ip, dst_IP=DST_IP,
#        pkt_len=100)

    pkt = (Ether(src=SA, dst=DA)/
           IP(src=src_ip, dst=DST_IP)/
           TCP(sport=SRC_PORT, dport=DST_PORT)/
           (("%d" % random.randrange(200)) * 20))

    pkt.tuser_sport = 1
    pkts.append(pkt)
  
    if i % 2 == 0:
      exp_pkts.append(pkt)
    else:
      normal_pkts.append(pkt)
  
  for i, pkt in enumerate(pkts):
    pkt.time = (i + 10)*(1e-6)
  
  for i in range(3):
    disable_firewall_rule(i)
  
  pkt = (Ether(src=SA, dst=DA)/
    IP(src="1.1.1.1", dst=DST_IP)/
    TCP(sport=SRC_PORT, dport=DST_PORT)/
    (("%d" % random.randrange(200)) * 20))
  pkt.tuser_sport = 1
  i += 1
  pkt.time = (i + 1)*(1e-6)
  pkts.append(pkt)

  # PCI interface
  #nftest_barrier()
  write_firewall_rule(0, BOGUS_IP, DST_IP, SRC_PORT, DST_PORT)
  #write_firewall_rule(1, SRC_IP, DST_IP, SRC_PORT, DST_PORT)
  write_firewall_rule(19, "1.1.1.1", DST_IP, SRC_PORT, DST_PORT)

  nftest_send_phy('nf0', pkts)
  nftest_expect_phy('nf0', pkts)
  nftest_expect_dma('nf0', [])

print ""
mres=[]
nftest_finish(mres)
