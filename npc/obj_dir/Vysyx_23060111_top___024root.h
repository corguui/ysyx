// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060111_top.h for the primary calling header

#ifndef VERILATED_VYSYX_23060111_TOP___024ROOT_H_
#define VERILATED_VYSYX_23060111_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_23060111_top__Syms;
class Vysyx_23060111_top___024unit;


class Vysyx_23060111_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_23060111_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(inv_flag,0,0);
    CData/*6:0*/ ysyx_23060111_top__DOT__opcode;
    CData/*0:0*/ ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*6:0*/ __Vtrigrprev__TOP__ysyx_23060111_top__DOT__opcode;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_23060111_top__DOT__inst;
    IData/*31:0*/ ysyx_23060111_top__DOT__dnpc;
    IData/*31:0*/ ysyx_23060111_top__DOT__wdata;
    IData/*31:0*/ ysyx_23060111_top__DOT__rout1;
    IData/*31:0*/ ysyx_23060111_top__DOT__m_rdata;
    VlWide<9>/*279:0*/ ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __Vtrigrprev__TOP__ysyx_23060111_top__DOT__inst;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1;
    QData/*32:0*/ ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out;
    QData/*32:0*/ __VdfgTmp_hc90cd392__0;
    QData/*32:0*/ __VdfgTmp_h327dca1e__0;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0240__DOT__rf;
    VlUnpacked<QData/*39:0*/, 7> ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 7> ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*32:0*/, 7> ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060111_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060111_top___024root(Vysyx_23060111_top__Syms* symsp, const char* v__name);
    ~Vysyx_23060111_top___024root();
    VL_UNCOPYABLE(Vysyx_23060111_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
