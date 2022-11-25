// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(axi_clk,0,0);
    VL_IN8(s_axis_tvalid,0,0);
    VL_OUT8(s_axis_tready,0,0);
    VL_IN8(s_axis_tlast,0,0);
    VL_OUT8(m_axis_tvalid,0,0);
    VL_IN8(m_axis_tready,0,0);
    VL_OUT8(m_axis_tlast,0,0);
    CData/*0:0*/ axistream__DOT__axi_clk;
    CData/*0:0*/ axistream__DOT__s_axis_tvalid;
    CData/*0:0*/ axistream__DOT__s_axis_tready;
    CData/*0:0*/ axistream__DOT__s_axis_tlast;
    CData/*0:0*/ axistream__DOT__m_axis_tvalid;
    CData/*0:0*/ axistream__DOT__m_axis_tready;
    CData/*0:0*/ axistream__DOT__m_axis_tlast;
    CData/*0:0*/ __Vclklast__TOP__axi_clk;
    VL_IN(s_axis_tdata,31,0);
    VL_OUT(m_axis_tdata,31,0);
    IData/*31:0*/ axistream__DOT__s_axis_tdata;
    IData/*31:0*/ axistream__DOT__m_axis_tdata;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
