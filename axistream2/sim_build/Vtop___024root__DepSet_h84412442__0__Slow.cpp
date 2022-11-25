// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    VL_PRINTF_MT("-Info: C:/Users/hp/Downloads/Cocotb/axistream/axistream.v:30: $dumpvar ignored, as Verilated without --trace\n");
    vlSelf->axistream__DOT__m_axis_tvalid = ((IData)(vlSelf->s_axis_tvalid) 
                                             & (IData)(vlSelf->axistream__DOT__s_axis_tready));
}
