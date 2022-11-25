// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_axistream);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_axistream.configure(this, name(), "axistream", "axistream", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_axistream);

    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"axi_clk", &(TOP.axi_clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tdata", &(TOP.m_axis_tdata), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tlast", &(TOP.m_axis_tlast), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tready", &(TOP.m_axis_tready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"m_axis_tvalid", &(TOP.m_axis_tvalid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tdata", &(TOP.s_axis_tdata), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tlast", &(TOP.s_axis_tlast), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tready", &(TOP.s_axis_tready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axis_tvalid", &(TOP.s_axis_tvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_axistream.varInsert(__Vfinal,"axi_clk", &(TOP.axistream__DOT__axi_clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_axistream.varInsert(__Vfinal,"m_axis_tdata", &(TOP.axistream__DOT__m_axis_tdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_axistream.varInsert(__Vfinal,"m_axis_tlast", &(TOP.axistream__DOT__m_axis_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_axistream.varInsert(__Vfinal,"m_axis_tready", &(TOP.axistream__DOT__m_axis_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_axistream.varInsert(__Vfinal,"m_axis_tvalid", &(TOP.axistream__DOT__m_axis_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_axistream.varInsert(__Vfinal,"s_axis_tdata", &(TOP.axistream__DOT__s_axis_tdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_axistream.varInsert(__Vfinal,"s_axis_tlast", &(TOP.axistream__DOT__s_axis_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_axistream.varInsert(__Vfinal,"s_axis_tready", &(TOP.axistream__DOT__s_axis_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_axistream.varInsert(__Vfinal,"s_axis_tvalid", &(TOP.axistream__DOT__s_axis_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
