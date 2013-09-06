#!/usr/bin/env python

from NFTest import *
import sys
import getopt
import NFTest.hwReg
import struct
import socket

# number of rules for the ACL
MAX_RULE_NUM = 3

SRC_IP_OFFS = 0x4
DST_IP_OFFS = 0x8
PORT_OFFS = 0xc
ENABLED_OFFS = 0x10

BASE_ADDR = 0x79600000

def ip_to_hex(ip): 
  return struct.unpack("!I", socket.inet_aton(ip))[0] 
def int_to_ip(ip): 
  return socket.inet_ntoa(struct.pack('!L', int(ip, 16) ))

def port_to_hex(sp, dp): 
  return ((int(dp) << 16) & 0xFFFF0000) | (0xFFFF & int(sp)) 

def write_firewall_rule(rule_num, src_ip, dst_ip, src_port, dst_port):

  print rule_num
  if (rule_num < 0 or rule_num >= MAX_RULE_NUM):
    assert 0, "Only 3 rules available"

  rule_addr = BASE_ADDR + (rule_num * 0x10 )
  #src ip address
  hwReg.writeReg( ("0x%x"%(rule_addr + SRC_IP_OFFS)), ("0x%x"%(ip_to_hex(src_ip))) )
  #dst ip address
  hwReg.writeReg( ("0x%x"%(rule_addr + DST_IP_OFFS)), ("0x%x"%(ip_to_hex(dst_ip))) )
  # src and dst port
  hwReg.writeReg( ("0x%x"%(rule_addr + PORT_OFFS)), ("0x%x"%(port_to_hex(src_port, dst_port))) )
  # rule to update and lookup flag
  hwReg.writeReg(  ("0x%x"%(rule_addr + ENABLED_OFFS)), "0x1" )

def disable_firewall_rule(rule_num): 
  # rule to update and lookup flag
  rule_addr = BASE_ADDR + (rule_num * 0x10 )
  hwReg.writeReg( ("1x%x"%(rule_addr + ENABLED_OFFS)), "0x0")
def enable_firewall_rule(rule_num): 
  # rule to update and lookup flag
  rule_addr = BASE_ADDR + (rule_num * 0x10 )
  hwReg.writeReg( ("0x%x"%(rule_addr + ENABLED_OFFS)), "0x1")

def read_firewall_rule(rule_num):

  if (rule_num < 0 or rule_num >= MAX_RULE_NUM):
    assert 0, "Only 10 rules available"

  rule_addr = BASE_ADDR + (rule_num * 0x10 )
  
  #src ip address
  src_ip = hwReg.readReg( ("0x%x"%(rule_addr + SRC_IP_OFFS)) )
  #dst ip address
  dst_ip = hwReg.readReg( ("0x%x"%(rule_addr + DST_IP_OFFS)) )
  # src and dst port
  ports = hwReg.readReg( ("0x%x"%(rule_addr + PORT_OFFS)) )
  # rule to update and lookup flag
  enable = hwReg.readReg(  ("0x%x"%(rule_addr + ENABLED_OFFS)) )

  return (int_to_ip(src_ip), int_to_ip(dst_ip), (int(ports,16) & 0xFFFF), ((int(ports, 16) >> 16) & 0xffff), (int(enable,16) == 1))

def main():
  if sys.argv[1] == "write":
    if len(sys.argv) < 7:
      print "enable requires a parameter value"
    print "writting rule"
    write_firewall_rule(int(sys.argv[2]), sys.argv[3], sys.argv[4], sys.argv[5], sys.argv[6])

  elif sys.argv[1] == "enable":
    if len(sys.argv) < 3:
      print "enable requires a parameter value" 
    print "enabling rule %s"%(sys.argv[2])
    enable_firewall_rule(int(sys.argv[2]))

  elif sys.argv[1] == "disable":
    if len(sys.argv) < 3:
      print "disable requires a parameter value"
    
    print "disabling rule %s"%(sys.argv[2])
    disable_firewall_rule(int(sys.argv[2]))


  elif sys.argv[1] == "show":
    print "showing firewall rules"

    for i in range(MAX_RULE_NUM) :
      (src_ip, dst_ip, src_port, dst_port, enabled) = read_firewall_rule(i)
      print ("rule %02d: %s:%s->%s:%s %s"%(i, src_ip, src_port, dst_ip, dst_port, enabled))


  else :
    print "Invalid operation "+sys.argv[1]


if __name__ == "__main__":
  main()
