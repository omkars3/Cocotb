// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->s_axis_tready = vlSelf->axistream__DOT__s_axis_tready;
    vlSelf->axistream__DOT__axi_clk = vlSelf->axi_clk;
    vlSelf->axistream__DOT__s_axis_tvalid = vlSelf->s_axis_tvalid;
    vlSelf->axistream__DOT__s_axis_tlast = vlSelf->s_axis_tlast;
    vlSelf->axistream__DOT__s_axis_tdata = vlSelf->s_axis_tdata;
    vlSelf->axistream__DOT__m_axis_tready = vlSelf->m_axis_tready;
    vlSelf->m_axis_tlast = vlSelf->axistream__DOT__m_axis_tlast;
    vlSelf->m_axis_tdata = vlSelf->axistream__DOT__m_axis_tdata;
    vlSelf->m_axis_tvalid = vlSelf->axistream__DOT__m_axis_tvalid;
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__axi_clk = vlSelf->axi_clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->axi_clk = VL_RAND_RESET_I(1);
    vlSelf->s_axis_tvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axis_tready = VL_RAND_RESET_I(1);
    vlSelf->s_axis_tlast = VL_RAND_RESET_I(1);
    vlSelf->s_axis_tdata = VL_RAND_RESET_I(32);
    vlSelf->m_axis_tvalid = VL_RAND_RESET_I(1);
    vlSelf->m_axis_tready = VL_RAND_RESET_I(1);
    vlSelf->m_axis_tlast = VL_RAND_RESET_I(1);
    vlSelf->m_axis_tdata = VL_RAND_RESET_I(32);
    vlSelf->axistream__DOT__axi_clk = VL_RAND_RESET_I(1);
    vlSelf->axistream__DOT__s_axis_tvalid = VL_RAND_RESET_I(1);
    vlSelf->axistream__DOT__s_axis_tready = VL_RAND_RESET_I(1);
    vlSelf->axistream__DOT__s_axis_tlast = VL_RAND_RESET_I(1);
    vlSelf->axistream__DOT__s_axis_tdata = VL_RAND_RESET_I(32);
    vlSelf->axistream__DOT__m_axis_tvalid = VL_RAND_RESET_I(1);
    vlSelf->axistream__DOT__m_axis_tready = VL_RAND_RESET_I(1);
    vlSelf->axistream__DOT__m_axis_tlast = VL_RAND_RESET_I(1);
    vlSelf->axistream__DOT__m_axis_tdata = VL_RAND_RESET_I(32);
}
