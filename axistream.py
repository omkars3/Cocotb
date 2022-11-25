import random
import cocotb
import cocotb_bus.scoreboard
from cocotb.clock import Clock
from cocotbext.axi import AxiStreamBus, AxiStreamSource, AxiStreamSink, AxiStreamMonitor,AxiStreamFrame
from cocotb.triggers import Timer
from cocotb.triggers import FallingEdge
from cocotbext.axistream import *
import itertools

@cocotb.test()
async def test_axistream_passthrough(dut):
    """ Test that AXI4Stream Master-Slave communication """

    clock = Clock(dut.axi_clk, 8, units="ns")
    cocotb.start_soon(clock.start())

    #expected_out = []

    #master = AXI4StreamMaster(dut, "s_axis", dut.axi_clk)
    

    monitor_1= AxiStreamSource(AxiStreamBus.from_prefix(dut, "s_axis"), dut.axi_clk)
    #monitor_1.add_callback(lambda frame: expected_out.append(frame))
    monitor_2= AxiStreamSink(AxiStreamBus.from_prefix(dut, "m_axis"), dut.axi_clk)
    
   # sb = cocotb_bus.scoreboard.Scoreboard(dut)
    for _ in range(10):  
        val = [1,2,3,4,5]   
        r = await monitor_1.send(b'val')
        
        #await monitor_1.wait()
        dut.s_axis_tvalid.value=1
        dut.s_axis_tready.value=1 
        dut.m_axis_tready.value=1
        dut.s_axis_tlast.value=random.randint(0,1)
        await Timer(4, units="ns")
        await Timer(4, units="ns")
        dut.s_axis_tvalid.value=0
        dut.s_axis_tready.value=0 
        dut.m_axis_tready.value=0
        await Timer(4, units="ns")
        await Timer(4, units="ns")
    
    # for j in range(10):
        # val = [0x01,0x02,0x03,0x04]
        # r = await monitor_1.send(b'val')
   
    
