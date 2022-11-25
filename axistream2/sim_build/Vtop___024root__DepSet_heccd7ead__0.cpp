// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->s_axis_tready = vlSelf->axistream__DOT__s_axis_tready;
    vlSelf->axistream__DOT__axi_clk = vlSelf->axi_clk;
    vlSelf->axistream__DOT__s_axis_tvalid = vlSelf->s_axis_tvalid;
    vlSelf->axistream__DOT__s_axis_tlast = vlSelf->s_axis_tlast;
    vlSelf->axistream__DOT__s_axis_tdata = vlSelf->s_axis_tdata;
    vlSelf->axistream__DOT__m_axis_tready = vlSelf->m_axis_tready;
    vlSelf->m_axis_tvalid = vlSelf->axistream__DOT__m_axis_tvalid;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->axistream__DOT__m_axis_tlast = vlSelf->s_axis_tlast;
    if (((IData)(vlSelf->s_axis_tvalid) & (IData)(vlSelf->axistream__DOT__s_axis_tready))) {
        vlSelf->axistream__DOT__m_axis_tdata = vlSelf->s_axis_tdata;
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->m_axis_tlast = vlSelf->axistream__DOT__m_axis_tlast;
    vlSelf->m_axis_tdata = vlSelf->axistream__DOT__m_axis_tdata;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->axi_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__axi_clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    Vtop___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__axi_clk = vlSelf->axi_clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->axi_clk & 0xfeU))) {
        Verilated::overWidthError("axi_clk");}
    if (VL_UNLIKELY((vlSelf->s_axis_tvalid & 0xfeU))) {
        Verilated::overWidthError("s_axis_tvalid");}
    if (VL_UNLIKELY((vlSelf->s_axis_tlast & 0xfeU))) {
        Verilated::overWidthError("s_axis_tlast");}
    if (VL_UNLIKELY((vlSelf->m_axis_tready & 0xfeU))) {
        Verilated::overWidthError("m_axis_tready");}
}
#endif  // VL_DEBUG
