// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060111_top__Syms.h"
#include "Vysyx_23060111_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__act(Vysyx_23060111_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060111_top___024root___eval_triggers__act(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((~ (IData)(vlSelf->clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__VactTriggered.at(1U) = ((vlSelf->ysyx_23060111_top__DOT__inst 
                                       != vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__inst) 
                                      | (vlSelf->ysyx_23060111_top__DOT__m_rdata 
                                         != vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__m_rdata));
    vlSelf->__VactTriggered.at(2U) = ((vlSelf->ysyx_23060111_top__DOT__m_raddr 
                                       != vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__m_raddr) 
                                      | ((IData)(vlSelf->ysyx_23060111_top__DOT__m_ren) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__m_ren)));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(4U) = (vlSelf->ysyx_23060111_top__DOT__inst 
                                      != vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__inst);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__inst 
        = vlSelf->ysyx_23060111_top__DOT__inst;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__m_rdata 
        = vlSelf->ysyx_23060111_top__DOT__m_rdata;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__m_raddr 
        = vlSelf->ysyx_23060111_top__DOT__m_raddr;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__m_ren 
        = vlSelf->ysyx_23060111_top__DOT__m_ren;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060111_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(IData/*31:0*/ m_raddr, IData/*31:0*/ &vlg_pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vysyx_23060111_top___024root___act_sequent__TOP__1(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___act_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_vlg_pmem_read__2__Vfuncout;
    __Vfunc_vlg_pmem_read__2__Vfuncout = 0;
    // Body
    if (vlSelf->ysyx_23060111_top__DOT__m_ren) {
        Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(vlSelf->ysyx_23060111_top__DOT__m_raddr, __Vfunc_vlg_pmem_read__2__Vfuncout);
        vlSelf->ysyx_23060111_top__DOT__m_rdata = __Vfunc_vlg_pmem_read__2__Vfuncout;
    }
}

void Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ &vlg_pc_read__Vfuncrtn);

VL_INLINE_OPT void Vysyx_23060111_top___024root___act_sequent__TOP__2(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___act_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_vlg_pc_read__0__Vfuncout;
    __Vfunc_vlg_pc_read__0__Vfuncout = 0;
    // Body
    Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pc_read_TOP____024unit(vlSelf->pc, __Vfunc_vlg_pc_read__0__Vfuncout);
    vlSelf->ysyx_23060111_top__DOT__inst = __Vfunc_vlg_pc_read__0__Vfuncout;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[8U] 
        = (0x6e00000000ULL | ((QData)((IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                               >> 0xcU))) 
                              << 0xdU));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[9U] 
        = (0x2e00000000ULL | ((QData)((IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                               >> 0xcU))) 
                              << 0xdU));
    vlSelf->__VdfgTmp_h327dca1e__0 = (((QData)((IData)(
                                                       (0x7ffU 
                                                        & (- (IData)(
                                                                     (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                      >> 0x1fU)))))) 
                                       << 0x16U) | (QData)((IData)(
                                                                   ((0x200000U 
                                                                     & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                        >> 0xaU)) 
                                                                    | ((0x1fe000U 
                                                                        & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                           << 1U)) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                              >> 8U)) 
                                                                          | (0xffcU 
                                                                             & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                                >> 0x13U))))))));
    vlSelf->__VdfgTmp_h170abfaf__0 = (((QData)((IData)(
                                                       (0xfffffU 
                                                        & (- (IData)(
                                                                     (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                      >> 0x1fU)))))) 
                                       << 0xdU) | (QData)((IData)(
                                                                  ((0x1fc0U 
                                                                    & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                       >> 0x13U)) 
                                                                   | (0x3eU 
                                                                      & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                         >> 6U))))));
    vlSelf->ysyx_23060111_top__DOT__rout1 = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                   >> 0xfU))];
    vlSelf->ysyx_23060111_top__DOT__rout2 = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                   >> 0x14U))];
    vlSelf->__VdfgTmp_h9a359807__0 = (((QData)((IData)(
                                                       (0x7ffffU 
                                                        & (- (IData)(
                                                                     (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                      >> 0x1fU)))))) 
                                       << 0xeU) | (QData)((IData)(
                                                                  ((0x2000U 
                                                                    & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                       >> 0x12U)) 
                                                                   | ((0x1000U 
                                                                       & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                          << 5U)) 
                                                                      | ((0xfc0U 
                                                                          & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                             >> 0x13U)) 
                                                                         | (0x3cU 
                                                                            & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                               >> 6U))))))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)((0x7ffffU & (- (IData)(
                                                   (vlSelf->ysyx_23060111_top__DOT__inst 
                                                    >> 0x1fU)))))) 
            << 0xeU) | (QData)((IData)(((0x2000U & 
                                         (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 0x12U)) 
                                        | ((0x1000U 
                                            & (vlSelf->ysyx_23060111_top__DOT__inst 
                                               << 5U)) 
                                           | ((0xfc0U 
                                               & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                  >> 0x13U)) 
                                              | (0x3cU 
                                                 & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                    >> 6U))))))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[1U] 
        = ((QData)((IData)((((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSelf->ysyx_23060111_top__DOT__inst 
                                         >> 0x14U)))) 
           << 1U);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)((0xfffffU & (- (IData)(
                                                   (vlSelf->ysyx_23060111_top__DOT__inst 
                                                    >> 0x1fU)))))) 
            << 0xdU) | (QData)((IData)(((0x1fc0U & 
                                         (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 0x13U)) 
                                        | (0x3eU & 
                                           (vlSelf->ysyx_23060111_top__DOT__inst 
                                            >> 6U))))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[5U] 
        = ((QData)((IData)((((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSelf->ysyx_23060111_top__DOT__inst 
                                         >> 0x14U)))) 
           << 1U);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[6U] 
        = ((QData)((IData)((((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSelf->ysyx_23060111_top__DOT__inst 
                                         >> 0x14U)))) 
           << 1U);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)((0x7ffU & (- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                                  >> 0x1fU)))))) 
            << 0x16U) | (QData)((IData)(((0x200000U 
                                          & (vlSelf->ysyx_23060111_top__DOT__inst 
                                             >> 0xaU)) 
                                         | ((0x1fe000U 
                                             & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                << 1U)) 
                                            | ((0x1000U 
                                                & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                   >> 8U)) 
                                               | (0xffcU 
                                                  & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                     >> 0x13U))))))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[8U] 
        = ((QData)((IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                            >> 0xcU))) << 0xdU);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[9U] 
        = ((QData)((IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                            >> 0xcU))) << 0xdU);
    vlSelf->__VdfgTmp_hc90cd392__0 = ((QData)((IData)(
                                                      (((- (IData)(
                                                                   (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->ysyx_23060111_top__DOT__inst 
                                                          >> 0x14U)))) 
                                      << 1U);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[7U] 
        = (0xde00000000ULL | vlSelf->__VdfgTmp_h327dca1e__0);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[3U] 
        = (0x4600000000ULL | vlSelf->__VdfgTmp_h170abfaf__0);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq 
        = (vlSelf->ysyx_23060111_top__DOT__rout1 == vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge 
        = VL_GTES_III(32, vlSelf->ysyx_23060111_top__DOT__rout1, vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu 
        = (vlSelf->ysyx_23060111_top__DOT__rout1 >= vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[0U] 
        = (IData)((0xc600000000ULL | vlSelf->__VdfgTmp_h9a359807__0));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[1U] 
        = ((0xfffffe00U & (((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                        >> 0x1fU))) 
                            << 0x15U) | (0x1ffe00U 
                                         & (vlSelf->ysyx_23060111_top__DOT__inst 
                                            >> 0xbU)))) 
           | (IData)(((0xc600000000ULL | vlSelf->__VdfgTmp_h9a359807__0) 
                      >> 0x20U)));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[2U] 
        = (0x600U | (0x1ffU & ((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                           >> 0x1fU))) 
                               >> 0xbU)));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[3U] 
        = (0x660000U | ((0xc0000000U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                        << 5U)) | (0x3e000000U 
                                                   & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                      << 0x12U))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[4U] 
        = (0x46000000U | ((0x1ffffe0U & ((- (IData)(
                                                    (vlSelf->ysyx_23060111_top__DOT__inst 
                                                     >> 0x1fU))) 
                                         << 5U)) | 
                          (0x3fffffffU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 0x1bU))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[5U] = 0U;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[6U] 
        = (0xe6U | (0xfffffe00U & (((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0x15U) | (0x1ffe00U 
                                                 & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                    >> 0xbU)))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[7U] 
        = (0xce00U | ((0xfffe0000U & (((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                                   >> 0x1fU))) 
                                       << 0x1dU) | 
                                      (0x1ffe0000U 
                                       & (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 3U)))) 
                      | (0x1ffU & ((- (IData)((vlSelf->ysyx_23060111_top__DOT__inst 
                                               >> 0x1fU))) 
                                   >> 0xbU))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[8U] 
        = (0x260000U | ((0xfc000000U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                        << 5U)) | (0x1ffffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                  >> 0x1fU))) 
                                                      >> 3U))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[9U] 
        = (0xde000000U | ((0x1ffc000U & ((- (IData)(
                                                    (vlSelf->ysyx_23060111_top__DOT__inst 
                                                     >> 0x1fU))) 
                                         << 0xeU)) 
                          | ((0x2000U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                         >> 0x12U)) 
                             | ((0x1fe0U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                            >> 7U)) 
                                | ((0x10U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                             >> 0x10U)) 
                                   | (0xfU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                              >> 0x1bU)))))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[0xaU] 
        = (0xffffe000U & (vlSelf->ysyx_23060111_top__DOT__inst 
                          << 1U));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[0xbU] 
        = (0x6eU | ((0xffe00000U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                    << 9U)) | (0x1fffU 
                                               & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                  >> 0x1fU))));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4[0xcU] 
        = (0x2e00U | (0x1fffffU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                   >> 0x17U)));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[0U] 
        = (0xc600000000ULL | vlSelf->__VdfgTmp_h9a359807__0);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
                               == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
           == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
                                  == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst) 
              == vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
        = ((IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out
            : 1ULL);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[1U] 
        = (0x600000000ULL | vlSelf->__VdfgTmp_hc90cd392__0);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[5U] 
        = (0xce00000000ULL | vlSelf->__VdfgTmp_hc90cd392__0);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[6U] 
        = (0x2600000000ULL | vlSelf->__VdfgTmp_hc90cd392__0);
    vlSelf->inv_flag = (1U & (IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1));
}

void Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

VL_INLINE_OPT void Vysyx_23060111_top___024root___nba_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0;
    __Vdlyvdim0__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0;
    __Vdlyvval__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0;
    __Vdlyvset__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 = 0;
    // Body
    if (vlSelf->ysyx_23060111_top__DOT__m_wen) {
        Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit(vlSelf->ysyx_23060111_top__DOT__m_waddr, vlSelf->ysyx_23060111_top__DOT__m_wdata, vlSelf->ysyx_23060111_top__DOT__m_wmask);
    }
    __Vdlyvset__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->ysyx_23060111_top__DOT__wen) 
         & (0U != (0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                            >> 7U))))) {
        __Vdlyvval__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 
            = vlSelf->ysyx_23060111_top__DOT__wdata;
        __Vdlyvset__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                        >> 7U));
    }
    if (__Vdlyvset__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0) {
        vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[__Vdlyvdim0__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0] 
            = __Vdlyvval__ysyx_23060111_top__DOT__reg___0240__DOT__rf__v0;
    }
}

void Vysyx_23060111_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_23060111_top___024root___nba_sequent__TOP__1(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    Vysyx_23060111_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(vlSelf->ysyx_23060111_top__DOT__inst);
}
