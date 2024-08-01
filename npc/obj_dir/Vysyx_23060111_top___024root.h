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
    CData/*0:0*/ ysyx_23060111_top__DOT__wen;
    CData/*1:0*/ ysyx_23060111_top__DOT__csr_waddr;
    CData/*1:0*/ ysyx_23060111_top__DOT__csr_raddr;
    CData/*0:0*/ ysyx_23060111_top__DOT__csr_wen;
    CData/*0:0*/ ysyx_23060111_top__DOT__csr_mepc_wen;
    CData/*0:0*/ ysyx_23060111_top__DOT__csr_mcause_wen;
    CData/*0:0*/ ysyx_23060111_top__DOT__csr_mstatus_wen;
    CData/*0:0*/ ysyx_23060111_top__DOT__m_wen;
    CData/*0:0*/ ysyx_23060111_top__DOT__m_ren;
    CData/*0:0*/ ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit;
    CData/*1:0*/ ysyx_23060111_top__DOT__init_EXU__DOT__csr_flag;
    CData/*0:0*/ ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq;
    CData/*0:0*/ ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge;
    CData/*0:0*/ ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_23060111_top__DOT__inst;
    IData/*31:0*/ ysyx_23060111_top__DOT__dnpc;
    IData/*31:0*/ ysyx_23060111_top__DOT__csr_imm;
    IData/*31:0*/ ysyx_23060111_top__DOT__wdata;
    IData/*31:0*/ ysyx_23060111_top__DOT__rout1;
    IData/*31:0*/ ysyx_23060111_top__DOT__rout2;
    IData/*31:0*/ ysyx_23060111_top__DOT__csr_wdata;
    IData/*31:0*/ ysyx_23060111_top__DOT__csr_rout;
    IData/*31:0*/ ysyx_23060111_top__DOT__csr_mcause_wdata;
    IData/*31:0*/ ysyx_23060111_top__DOT__csr_mepc_wdata;
    IData/*31:0*/ ysyx_23060111_top__DOT__csr_mstatus_wdata;
    IData/*31:0*/ ysyx_23060111_top__DOT__m_waddr;
    IData/*31:0*/ ysyx_23060111_top__DOT__m_wdata;
    IData/*31:0*/ ysyx_23060111_top__DOT__m_wmask;
    IData/*31:0*/ ysyx_23060111_top__DOT__m_rdata;
    IData/*31:0*/ ysyx_23060111_top__DOT__m_raddr;
    IData/*31:0*/ ysyx_23060111_top__DOT__m_rmask;
    VlWide<13>/*399:0*/ ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4;
    IData/*31:0*/ __Vfunc_vlg_pmem_read__2__Vfuncout;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __Vtrigrprev__TOP__ysyx_23060111_top__DOT__inst;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1;
    QData/*32:0*/ ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out;
    QData/*32:0*/ __VdfgTmp_h9a359807__0;
    QData/*32:0*/ __VdfgTmp_hc90cd392__0;
    QData/*32:0*/ __VdfgTmp_h170abfaf__0;
    QData/*32:0*/ __VdfgTmp_h327dca1e__0;
    VlUnpacked<QData/*39:0*/, 10> ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 10> ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*32:0*/, 10> ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060111_top__DOT__reg___0240__DOT__rf;
    VlUnpacked<IData/*31:0*/, 4> ysyx_23060111_top__DOT__reg___0240__DOT__csr;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

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
