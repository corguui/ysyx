// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060111_top__Syms.h"
#include "Vysyx_23060111_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__stl(Vysyx_23060111_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060111_top___024root___eval_triggers__stl(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060111_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(IData/*31:0*/ m_raddr, IData/*31:0*/ &vlg_pmem_read__Vfuncrtn);

VL_ATTR_COLD void Vysyx_23060111_top___024root___stl_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060111_top__DOT__m_wen = (IData)(
                                                    ((0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_23060111_top__DOT__inst)) 
                                                     & ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                             >> 0xcU))) 
                                                        | ((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                >> 0xcU))) 
                                                           | (2U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                  >> 0xcU)))))));
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
    vlSelf->ysyx_23060111_top__DOT__m_ren = (1U & (IData)(
                                                          ((3U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_23060111_top__DOT__inst)) 
                                                           & ((0x4000U 
                                                               & vlSelf->ysyx_23060111_top__DOT__inst)
                                                               ? 
                                                              (~ 
                                                               (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                >> 0xdU))
                                                               : (IData)(
                                                                         (0x3000U 
                                                                          != 
                                                                          (0x3000U 
                                                                           & vlSelf->ysyx_23060111_top__DOT__inst)))))));
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
    vlSelf->__VdfgTmp_hc90cd392__0 = ((QData)((IData)(
                                                      (((- (IData)(
                                                                   (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->ysyx_23060111_top__DOT__inst 
                                                          >> 0x14U)))) 
                                      << 1U);
    vlSelf->ysyx_23060111_top__DOT__rout2 = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                   >> 0x14U))];
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
    vlSelf->ysyx_23060111_top__DOT__rout1 = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                   >> 0xfU))];
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[7U] 
        = (0xde00000000ULL | vlSelf->__VdfgTmp_h327dca1e__0);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[3U] 
        = (0x4600000000ULL | vlSelf->__VdfgTmp_h170abfaf__0);
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
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[1U] 
        = (0x600000000ULL | vlSelf->__VdfgTmp_hc90cd392__0);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[5U] 
        = (0xce00000000ULL | vlSelf->__VdfgTmp_hc90cd392__0);
    vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[6U] 
        = (0x2600000000ULL | vlSelf->__VdfgTmp_hc90cd392__0);
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
    if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                  >> 6U)))) {
        if ((0x20U & vlSelf->ysyx_23060111_top__DOT__inst)) {
            if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                                if ((0U == (7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_23060111_top__DOT__m_wmask = 1U;
                                    vlSelf->ysyx_23060111_top__DOT__m_wdata 
                                        = vlSelf->ysyx_23060111_top__DOT__rout2;
                                    vlSelf->ysyx_23060111_top__DOT__m_waddr 
                                        = (vlSelf->ysyx_23060111_top__DOT__rout1 
                                           + (IData)(
                                                     (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                      >> 1U)));
                                } else if ((1U == (7U 
                                                   & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060111_top__DOT__m_wmask = 2U;
                                    vlSelf->ysyx_23060111_top__DOT__m_wdata 
                                        = vlSelf->ysyx_23060111_top__DOT__rout2;
                                    vlSelf->ysyx_23060111_top__DOT__m_waddr 
                                        = (vlSelf->ysyx_23060111_top__DOT__rout1 
                                           + (IData)(
                                                     (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                      >> 1U)));
                                } else if ((2U == (7U 
                                                   & (vlSelf->ysyx_23060111_top__DOT__inst 
                                                      >> 0xcU)))) {
                                    vlSelf->ysyx_23060111_top__DOT__m_wmask = 4U;
                                    vlSelf->ysyx_23060111_top__DOT__m_wdata 
                                        = vlSelf->ysyx_23060111_top__DOT__rout2;
                                    vlSelf->ysyx_23060111_top__DOT__m_waddr 
                                        = (vlSelf->ysyx_23060111_top__DOT__rout1 
                                           + (IData)(
                                                     (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                      >> 1U)));
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                            if ((1U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                                vlSelf->ysyx_23060111_top__DOT__m_raddr 
                                    = ((0x4000U & vlSelf->ysyx_23060111_top__DOT__inst)
                                        ? ((0x2000U 
                                            & vlSelf->ysyx_23060111_top__DOT__inst)
                                            ? 0U : 
                                           ((0x1000U 
                                             & vlSelf->ysyx_23060111_top__DOT__inst)
                                             ? (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                + (IData)(
                                                          (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                           >> 1U)))
                                             : (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                + (IData)(
                                                          (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                           >> 1U)))))
                                        : ((0x2000U 
                                            & vlSelf->ysyx_23060111_top__DOT__inst)
                                            ? ((0x1000U 
                                                & vlSelf->ysyx_23060111_top__DOT__inst)
                                                ? 0U
                                                : (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                   + (IData)(
                                                             (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                              >> 1U))))
                                            : ((0x1000U 
                                                & vlSelf->ysyx_23060111_top__DOT__inst)
                                                ? (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                   + (IData)(
                                                             (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                              >> 1U)))
                                                : (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                   + (IData)(
                                                             (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                              >> 1U))))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq 
        = (vlSelf->ysyx_23060111_top__DOT__rout1 == vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge 
        = VL_GTES_III(32, vlSelf->ysyx_23060111_top__DOT__rout1, vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu 
        = (vlSelf->ysyx_23060111_top__DOT__rout1 >= vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->inv_flag = (1U & (IData)(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1));
    if ((0x40U & vlSelf->ysyx_23060111_top__DOT__inst)) {
        if ((0x20U & vlSelf->ysyx_23060111_top__DOT__inst)) {
            if ((0x10U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                vlSelf->ysyx_23060111_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->pc);
            } else if ((8U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                vlSelf->ysyx_23060111_top__DOT__wen 
                    = (IData)((7U == (7U & vlSelf->ysyx_23060111_top__DOT__inst)));
                vlSelf->ysyx_23060111_top__DOT__dnpc 
                    = ((4U & vlSelf->ysyx_23060111_top__DOT__inst)
                        ? ((2U & vlSelf->ysyx_23060111_top__DOT__inst)
                            ? ((1U & vlSelf->ysyx_23060111_top__DOT__inst)
                                ? (vlSelf->pc + (IData)(
                                                        (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                         >> 1U)))
                                : ((IData)(4U) + vlSelf->pc))
                            : ((IData)(4U) + vlSelf->pc))
                        : ((IData)(4U) + vlSelf->pc));
            } else if ((4U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                vlSelf->ysyx_23060111_top__DOT__wen 
                    = (IData)((3U == (3U & vlSelf->ysyx_23060111_top__DOT__inst)));
                vlSelf->ysyx_23060111_top__DOT__dnpc 
                    = ((2U & vlSelf->ysyx_23060111_top__DOT__inst)
                        ? ((1U & vlSelf->ysyx_23060111_top__DOT__inst)
                            ? ((IData)((vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                        >> 1U)) + vlSelf->ysyx_23060111_top__DOT__rout1)
                            : ((IData)(4U) + vlSelf->pc))
                        : ((IData)(4U) + vlSelf->pc));
            } else if ((2U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                    vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                    if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                                  >> 0xeU)))) {
                        if ((0x2000U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                            vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                        }
                    }
                    vlSelf->ysyx_23060111_top__DOT__dnpc 
                        = ((0x4000U & vlSelf->ysyx_23060111_top__DOT__inst)
                            ? ((0x2000U & vlSelf->ysyx_23060111_top__DOT__inst)
                                ? ((0x1000U & vlSelf->ysyx_23060111_top__DOT__inst)
                                    ? ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu)
                                        ? (vlSelf->pc 
                                           + (IData)(
                                                     (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                      >> 1U)))
                                        : ((IData)(4U) 
                                           + vlSelf->pc))
                                    : ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu)
                                        ? ((IData)(4U) 
                                           + vlSelf->pc)
                                        : (vlSelf->pc 
                                           + (IData)(
                                                     (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                      >> 1U)))))
                                : ((0x1000U & vlSelf->ysyx_23060111_top__DOT__inst)
                                    ? ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge)
                                        ? (vlSelf->pc 
                                           + (IData)(
                                                     (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                      >> 1U)))
                                        : ((IData)(4U) 
                                           + vlSelf->pc))
                                    : ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge)
                                        ? ((IData)(4U) 
                                           + vlSelf->pc)
                                        : (vlSelf->pc 
                                           + (IData)(
                                                     (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                      >> 1U))))))
                            : ((0x2000U & vlSelf->ysyx_23060111_top__DOT__inst)
                                ? ((IData)(4U) + vlSelf->pc)
                                : ((0x1000U & vlSelf->ysyx_23060111_top__DOT__inst)
                                    ? ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq)
                                        ? ((IData)(4U) 
                                           + vlSelf->pc)
                                        : (vlSelf->pc 
                                           + (IData)(
                                                     (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                      >> 1U))))
                                    : ((IData)(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq)
                                        ? (vlSelf->pc 
                                           + (IData)(
                                                     (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                      >> 1U)))
                                        : ((IData)(4U) 
                                           + vlSelf->pc)))));
                } else {
                    vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                    vlSelf->ysyx_23060111_top__DOT__dnpc 
                        = ((IData)(4U) + vlSelf->pc);
                }
            } else {
                vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                vlSelf->ysyx_23060111_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else {
            vlSelf->ysyx_23060111_top__DOT__wen = 0U;
            vlSelf->ysyx_23060111_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->pc);
        }
    } else if ((0x20U & vlSelf->ysyx_23060111_top__DOT__inst)) {
        if ((0x10U & vlSelf->ysyx_23060111_top__DOT__inst)) {
            vlSelf->ysyx_23060111_top__DOT__wen = (1U 
                                                   & ((~ 
                                                       (vlSelf->ysyx_23060111_top__DOT__inst 
                                                        >> 3U)) 
                                                      & ((4U 
                                                          & vlSelf->ysyx_23060111_top__DOT__inst)
                                                          ? 
                                                         ((vlSelf->ysyx_23060111_top__DOT__inst 
                                                           >> 1U) 
                                                          & vlSelf->ysyx_23060111_top__DOT__inst)
                                                          : 
                                                         ((vlSelf->ysyx_23060111_top__DOT__inst 
                                                           >> 1U) 
                                                          & vlSelf->ysyx_23060111_top__DOT__inst))));
            vlSelf->ysyx_23060111_top__DOT__dnpc = 
                ((8U & vlSelf->ysyx_23060111_top__DOT__inst)
                  ? ((IData)(4U) + vlSelf->pc) : ((4U 
                                                   & vlSelf->ysyx_23060111_top__DOT__inst)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->ysyx_23060111_top__DOT__inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyx_23060111_top__DOT__inst)
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->pc)
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->pc))
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc))
                                                   : 
                                                  ((2U 
                                                    & vlSelf->ysyx_23060111_top__DOT__inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyx_23060111_top__DOT__inst)
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->pc)
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->pc))
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc))));
        } else if ((8U & vlSelf->ysyx_23060111_top__DOT__inst)) {
            vlSelf->ysyx_23060111_top__DOT__wen = 0U;
            vlSelf->ysyx_23060111_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->pc);
        } else if ((4U & vlSelf->ysyx_23060111_top__DOT__inst)) {
            vlSelf->ysyx_23060111_top__DOT__wen = 0U;
            vlSelf->ysyx_23060111_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->pc);
        } else if ((2U & vlSelf->ysyx_23060111_top__DOT__inst)) {
            if ((1U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                if ((0U != (7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                  >> 0xcU)))) {
                    if ((1U != (7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                      >> 0xcU)))) {
                        if ((2U != (7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 0xcU)))) {
                            vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                        }
                    }
                }
                vlSelf->ysyx_23060111_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->pc);
            } else {
                vlSelf->ysyx_23060111_top__DOT__wen = 0U;
                vlSelf->ysyx_23060111_top__DOT__dnpc 
                    = ((IData)(4U) + vlSelf->pc);
            }
        } else {
            vlSelf->ysyx_23060111_top__DOT__wen = 0U;
            vlSelf->ysyx_23060111_top__DOT__dnpc = 
                ((IData)(4U) + vlSelf->pc);
        }
    } else if ((0x10U & vlSelf->ysyx_23060111_top__DOT__inst)) {
        vlSelf->ysyx_23060111_top__DOT__wen = (1U & 
                                               ((~ 
                                                 (vlSelf->ysyx_23060111_top__DOT__inst 
                                                  >> 3U)) 
                                                & ((4U 
                                                    & vlSelf->ysyx_23060111_top__DOT__inst)
                                                    ? 
                                                   ((vlSelf->ysyx_23060111_top__DOT__inst 
                                                     >> 1U) 
                                                    & vlSelf->ysyx_23060111_top__DOT__inst)
                                                    : 
                                                   ((vlSelf->ysyx_23060111_top__DOT__inst 
                                                     >> 1U) 
                                                    & vlSelf->ysyx_23060111_top__DOT__inst))));
        vlSelf->ysyx_23060111_top__DOT__dnpc = ((8U 
                                                 & vlSelf->ysyx_23060111_top__DOT__inst)
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelf->pc)
                                                 : 
                                                ((4U 
                                                  & vlSelf->ysyx_23060111_top__DOT__inst)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->ysyx_23060111_top__DOT__inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyx_23060111_top__DOT__inst)
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc))
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc))
                                                  : 
                                                 ((2U 
                                                   & vlSelf->ysyx_23060111_top__DOT__inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyx_23060111_top__DOT__inst)
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc))
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc))));
    } else {
        vlSelf->ysyx_23060111_top__DOT__wen = (1U & (IData)(
                                                            ((3U 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->ysyx_23060111_top__DOT__inst)) 
                                                             & ((0x4000U 
                                                                 & vlSelf->ysyx_23060111_top__DOT__inst)
                                                                 ? 
                                                                (~ 
                                                                 (vlSelf->ysyx_23060111_top__DOT__inst 
                                                                  >> 0xdU))
                                                                 : (IData)(
                                                                           (0x3000U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->ysyx_23060111_top__DOT__inst)))))));
        vlSelf->ysyx_23060111_top__DOT__dnpc = ((8U 
                                                 & vlSelf->ysyx_23060111_top__DOT__inst)
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelf->pc)
                                                 : 
                                                ((4U 
                                                  & vlSelf->ysyx_23060111_top__DOT__inst)
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSelf->pc)
                                                  : 
                                                 ((2U 
                                                   & vlSelf->ysyx_23060111_top__DOT__inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyx_23060111_top__DOT__inst)
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc))
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc))));
    }
    if (vlSelf->ysyx_23060111_top__DOT__m_ren) {
        Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(vlSelf->ysyx_23060111_top__DOT__m_raddr, vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout);
        vlSelf->ysyx_23060111_top__DOT__m_rdata = vlSelf->__Vfunc_vlg_pmem_read__2__Vfuncout;
    } else {
        vlSelf->ysyx_23060111_top__DOT__m_rdata = 0U;
    }
    if ((0x40U & vlSelf->ysyx_23060111_top__DOT__inst)) {
        if ((0x20U & vlSelf->ysyx_23060111_top__DOT__inst)) {
            if ((0x10U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
            } else if ((8U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                vlSelf->ysyx_23060111_top__DOT__wdata 
                    = ((4U & vlSelf->ysyx_23060111_top__DOT__inst)
                        ? ((2U & vlSelf->ysyx_23060111_top__DOT__inst)
                            ? ((1U & vlSelf->ysyx_23060111_top__DOT__inst)
                                ? ((IData)(4U) + vlSelf->pc)
                                : 0U) : 0U) : 0U);
            } else if ((4U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                vlSelf->ysyx_23060111_top__DOT__wdata 
                    = ((2U & vlSelf->ysyx_23060111_top__DOT__inst)
                        ? ((1U & vlSelf->ysyx_23060111_top__DOT__inst)
                            ? ((IData)(4U) + vlSelf->pc)
                            : 0U) : 0U);
            } else if ((2U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                if ((1U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                    if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                                  >> 0xeU)))) {
                        if ((0x2000U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                            vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                        }
                    }
                } else {
                    vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                }
            } else {
                vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
            }
        } else {
            vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
        }
    } else if ((0x20U & vlSelf->ysyx_23060111_top__DOT__inst)) {
        if ((0x10U & vlSelf->ysyx_23060111_top__DOT__inst)) {
            vlSelf->ysyx_23060111_top__DOT__wdata = 
                ((8U & vlSelf->ysyx_23060111_top__DOT__inst)
                  ? 0U : ((4U & vlSelf->ysyx_23060111_top__DOT__inst)
                           ? ((2U & vlSelf->ysyx_23060111_top__DOT__inst)
                               ? ((1U & vlSelf->ysyx_23060111_top__DOT__inst)
                                   ? (IData)((vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                              >> 1U))
                                   : 0U) : 0U) : ((2U 
                                                   & vlSelf->ysyx_23060111_top__DOT__inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->ysyx_23060111_top__DOT__inst)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->ysyx_23060111_top__DOT__inst)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->ysyx_23060111_top__DOT__inst)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->ysyx_23060111_top__DOT__inst)
                                                       ? 
                                                      (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                       & vlSelf->ysyx_23060111_top__DOT__rout2)
                                                       : 
                                                      (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                       | vlSelf->ysyx_23060111_top__DOT__rout2))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->ysyx_23060111_top__DOT__inst)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlSelf->ysyx_23060111_top__DOT__inst)
                                                        ? 
                                                       VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_23060111_top__DOT__rout1, 
                                                                      (0x1fU 
                                                                       & vlSelf->ysyx_23060111_top__DOT__rout2))
                                                        : 
                                                       (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_23060111_top__DOT__rout2)))
                                                       : 
                                                      (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                       ^ vlSelf->ysyx_23060111_top__DOT__rout2)))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->ysyx_23060111_top__DOT__inst)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->ysyx_23060111_top__DOT__inst)
                                                       ? 
                                                      ((vlSelf->ysyx_23060111_top__DOT__rout1 
                                                        < vlSelf->ysyx_23060111_top__DOT__rout2)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      (VL_LTS_III(32, vlSelf->ysyx_23060111_top__DOT__rout1, vlSelf->ysyx_23060111_top__DOT__rout2)
                                                        ? 1U
                                                        : 0U))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->ysyx_23060111_top__DOT__inst)
                                                       ? 
                                                      (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                       << 
                                                       (0x1fU 
                                                        & vlSelf->ysyx_23060111_top__DOT__rout2))
                                                       : 
                                                      ((0x40000000U 
                                                        & vlSelf->ysyx_23060111_top__DOT__inst)
                                                        ? 
                                                       (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                        - vlSelf->ysyx_23060111_top__DOT__rout2)
                                                        : 
                                                       (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                        + vlSelf->ysyx_23060111_top__DOT__rout2)))))
                                                    : 0U)
                                                   : 0U)));
        } else if ((8U & vlSelf->ysyx_23060111_top__DOT__inst)) {
            vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
        } else if ((4U & vlSelf->ysyx_23060111_top__DOT__inst)) {
            vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
        } else if ((2U & vlSelf->ysyx_23060111_top__DOT__inst)) {
            if ((1U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                if ((0U != (7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                  >> 0xcU)))) {
                    if ((1U != (7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                      >> 0xcU)))) {
                        if ((2U != (7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 0xcU)))) {
                            vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
                        }
                    }
                }
            } else {
                vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
            }
        } else {
            vlSelf->ysyx_23060111_top__DOT__wdata = 0U;
        }
    } else {
        vlSelf->ysyx_23060111_top__DOT__wdata = ((0x10U 
                                                  & vlSelf->ysyx_23060111_top__DOT__inst)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->ysyx_23060111_top__DOT__inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->ysyx_23060111_top__DOT__inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->ysyx_23060111_top__DOT__inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->ysyx_23060111_top__DOT__inst)
                                                      ? 
                                                     (vlSelf->pc 
                                                      + (IData)(
                                                                (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                                 >> 1U)))
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->ysyx_23060111_top__DOT__inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->ysyx_23060111_top__DOT__inst)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->ysyx_23060111_top__DOT__inst)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->ysyx_23060111_top__DOT__inst)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_23060111_top__DOT__inst)
                                                         ? 
                                                        (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                                    >> 1U)))
                                                         : 
                                                        (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                         | (IData)(
                                                                   (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                                    >> 1U))))
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_23060111_top__DOT__inst)
                                                         ? 
                                                        ((0x40000000U 
                                                          & vlSelf->ysyx_23060111_top__DOT__inst)
                                                          ? 
                                                         VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_23060111_top__DOT__rout1, 
                                                                        (0x1fU 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                                                >> 1U))))
                                                          : 
                                                         (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                          >> 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                                      >> 1U)))))
                                                         : 
                                                        (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                         ^ (IData)(
                                                                   (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                                    >> 1U)))))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->ysyx_23060111_top__DOT__inst)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_23060111_top__DOT__inst)
                                                         ? 
                                                        ((vlSelf->ysyx_23060111_top__DOT__rout1 
                                                          < (IData)(
                                                                    (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                                     >> 1U)))
                                                          ? 1U
                                                          : 0U)
                                                         : 
                                                        (VL_LTS_III(32, vlSelf->ysyx_23060111_top__DOT__rout1, (IData)(
                                                                                (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                                                >> 1U)))
                                                          ? 1U
                                                          : 0U))
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_23060111_top__DOT__inst)
                                                         ? 
                                                        (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                         << 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                                     >> 1U))))
                                                         : 
                                                        (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                         + (IData)(
                                                                   (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                                    >> 1U))))))
                                                      : 0U)
                                                     : 0U)))
                                                  : 
                                                 ((8U 
                                                   & vlSelf->ysyx_23060111_top__DOT__inst)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->ysyx_23060111_top__DOT__inst)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->ysyx_23060111_top__DOT__inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->ysyx_23060111_top__DOT__inst)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->ysyx_23060111_top__DOT__inst)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->ysyx_23060111_top__DOT__inst)
                                                        ? 0U
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_23060111_top__DOT__inst)
                                                         ? 
                                                        (0xffffU 
                                                         & vlSelf->ysyx_23060111_top__DOT__m_rdata)
                                                         : 
                                                        (0xffU 
                                                         & vlSelf->ysyx_23060111_top__DOT__m_rdata)))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->ysyx_23060111_top__DOT__inst)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_23060111_top__DOT__inst)
                                                         ? 0U
                                                         : vlSelf->ysyx_23060111_top__DOT__m_rdata)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_23060111_top__DOT__inst)
                                                         ? 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_23060111_top__DOT__m_rdata 
                                                                         >> 0xfU)))) 
                                                          << 0x10U) 
                                                         | (0xffffU 
                                                            & vlSelf->ysyx_23060111_top__DOT__m_rdata))
                                                         : 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_23060111_top__DOT__m_rdata 
                                                                         >> 7U)))) 
                                                          << 8U) 
                                                         | (0xffU 
                                                            & vlSelf->ysyx_23060111_top__DOT__m_rdata)))))
                                                      : 0U)
                                                     : 0U))));
    }
}
