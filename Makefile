TOPLEVEL_LANG=verilog
VERILOG_SOURCES=$(shell pwd)/axistream.v
TOPLEVEL=axistream
MODULE=axistream

COCOTB_HDL_TIMEPRECISION = 1ns

include $(shell cocotb-config --makefiles)/Makefile.sim
