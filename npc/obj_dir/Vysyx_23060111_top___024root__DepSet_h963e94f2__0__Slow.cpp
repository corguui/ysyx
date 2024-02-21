// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060111_top___024root.h"

VL_ATTR_COLD void Vysyx_23060111_top___024root___eval_static(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_23060111_top___024root___eval_initial__TOP(Vysyx_23060111_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060111_top___024root___eval_initial(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_initial\n"); );
    // Body
    Vysyx_23060111_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__inst 
        = vlSelf->ysyx_23060111_top__DOT__inst;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__m_raddr 
        = vlSelf->ysyx_23060111_top__DOT__m_raddr;
}

VL_ATTR_COLD void Vysyx_23060111_top___024root___eval_initial__TOP(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[0U] = 0x63U;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[2U] = 0x33U;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[3U] = 0x23U;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[4U] = 0x73U;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[5U] = 0x67U;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[6U] = 0x13U;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[7U] = 0x6fU;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[8U] = 0x37U;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[9U] = 0x17U;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[2U] = 0ULL;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[4U] = 0ULL;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[2U] = 0x6600000000ULL;
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[4U] = 0xe600000000ULL;
}

VL_ATTR_COLD void Vysyx_23060111_top___024root___eval_final(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_23060111_top___024root___eval_triggers__stl(Vysyx_23060111_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__stl(Vysyx_23060111_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___eval_stl(Vysyx_23060111_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060111_top___024root___eval_settle(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_23060111_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060111_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_23060111_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__stl(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060111_top___024root___stl_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___stl_sequent__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vysyx_23060111_top___024root___eval_stl(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_23060111_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__act(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] ysyx_23060111_top.inst)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] ysyx_23060111_top.m_raddr)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__nba(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] ysyx_23060111_top.inst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] ysyx_23060111_top.m_raddr)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060111_top___024root___ctor_var_reset(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->inv_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060111_top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060111_top__DOT__dnpc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060111_top__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060111_top__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060111_top__DOT__rout1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060111_top__DOT__rout2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060111_top__DOT__m_waddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060111_top__DOT__m_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060111_top__DOT__m_wmask = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060111_top__DOT__m_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060111_top__DOT__m_raddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060111_top__DOT__m_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060111_top__DOT__m_ren = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(400, vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(33);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h9a359807__0 = 0;
    vlSelf->__VdfgTmp_hc90cd392__0 = 0;
    vlSelf->__VdfgTmp_h170abfaf__0 = 0;
    vlSelf->__VdfgTmp_h327dca1e__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__ysyx_23060111_top__DOT__m_raddr = VL_RAND_RESET_I(32);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
