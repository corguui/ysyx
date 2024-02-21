// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060111_top___024root.h"

VL_INLINE_OPT void Vysyx_23060111_top___024root___act_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___act_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                  >> 6U)))) {
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
                                if ((0x4000U & vlSelf->ysyx_23060111_top__DOT__inst)) {
                                    if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                                                  >> 0xdU)))) {
                                        vlSelf->ysyx_23060111_top__DOT__m_raddr 
                                            = ((0x1000U 
                                                & vlSelf->ysyx_23060111_top__DOT__inst)
                                                ? (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                   + (IData)(
                                                             (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                              >> 1U)))
                                                : (vlSelf->ysyx_23060111_top__DOT__rout1 
                                                   + (IData)(
                                                             (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                              >> 1U))));
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->ysyx_23060111_top__DOT__inst)) {
                                    if ((1U & (~ (vlSelf->ysyx_23060111_top__DOT__inst 
                                                  >> 0xcU)))) {
                                        vlSelf->ysyx_23060111_top__DOT__m_raddr 
                                            = (vlSelf->ysyx_23060111_top__DOT__rout1 
                                               + (IData)(
                                                         (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                          >> 1U)));
                                    }
                                } else {
                                    vlSelf->ysyx_23060111_top__DOT__m_raddr 
                                        = ((0x1000U 
                                            & vlSelf->ysyx_23060111_top__DOT__inst)
                                            ? (vlSelf->ysyx_23060111_top__DOT__rout1 
                                               + (IData)(
                                                         (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                          >> 1U)))
                                            : (vlSelf->ysyx_23060111_top__DOT__rout1 
                                               + (IData)(
                                                         (vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                                          >> 1U))));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vysyx_23060111_top___024root___act_sequent__TOP__1(Vysyx_23060111_top___024root* vlSelf);

void Vysyx_23060111_top___024root___eval_act(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        Vysyx_23060111_top___024root___act_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        Vysyx_23060111_top___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vysyx_23060111_top___024root___nba_sequent__TOP__3(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ysyx_23060111_top__DOT__rout2 = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                   >> 0x14U))];
    vlSelf->ysyx_23060111_top__DOT__rout1 = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                   >> 0xfU))];
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->ysyx_23060111_top__DOT__dnpc);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq 
        = (vlSelf->ysyx_23060111_top__DOT__rout1 == vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge 
        = VL_GTES_III(32, vlSelf->ysyx_23060111_top__DOT__rout1, vlSelf->ysyx_23060111_top__DOT__rout2);
    vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu 
        = (vlSelf->ysyx_23060111_top__DOT__rout1 >= vlSelf->ysyx_23060111_top__DOT__rout2);
}

void Vysyx_23060111_top___024root___nba_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf);
void Vysyx_23060111_top___024root___nba_sequent__TOP__1(Vysyx_23060111_top___024root* vlSelf);
void Vysyx_23060111_top___024root___nba_sequent__TOP__2(Vysyx_23060111_top___024root* vlSelf);

void Vysyx_23060111_top___024root___eval_nba(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vysyx_23060111_top___024root___eval_triggers__act(Vysyx_23060111_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__act(Vysyx_23060111_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__nba(Vysyx_23060111_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060111_top___024root___eval(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_23060111_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_23060111_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_23060111_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060111_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_23060111_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_23060111_top___024root___eval_debug_assertions(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
