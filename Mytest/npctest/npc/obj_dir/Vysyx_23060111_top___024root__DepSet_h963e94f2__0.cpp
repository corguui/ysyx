// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060111_top___024root.h"

VL_INLINE_OPT void Vysyx_23060111_top___024root___ico_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->val = vlSelf->inst;
    vlSelf->imm = (vlSelf->inst >> 0x14U);
    vlSelf->rs1 = (0x1fU & (vlSelf->inst >> 0xfU));
    vlSelf->funct3 = (7U & (vlSelf->inst >> 0xcU));
    vlSelf->reg_out = ((0U >= (1U & (vlSelf->inst >> 0xfU)))
                        ? vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_src1__DOT__rf
                       [(1U & (vlSelf->inst >> 0xfU))]
                        : 0U);
    vlSelf->reg_out1 = ((0U >= (1U & (vlSelf->inst 
                                      >> 7U))) ? vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf
                        [(1U & (vlSelf->inst >> 7U))]
                         : 0U);
    vlSelf->rd = (0x1fU & (vlSelf->inst >> 7U));
    vlSelf->opcode = (0x7fU & vlSelf->inst);
    vlSelf->rbb = (((IData)(vlSelf->rd) << 0xfU) | 
                   ((0x7f80U & (vlSelf->inst >> 5U)) 
                    | (IData)(vlSelf->opcode)));
}

void Vysyx_23060111_top___024root___eval_ico(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_23060111_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vysyx_23060111_top___024root___eval_act(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_act\n"); );
}

void Vysyx_23060111_top___024root____Vdpiimwrap_ysyx_23060111_top__DOT__ebreak_TOP(IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_23060111_top___024root___nba_sequent__TOP__0(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    Vysyx_23060111_top___024root____Vdpiimwrap_ysyx_23060111_top__DOT__ebreak_TOP(vlSelf->inst);
}

VL_INLINE_OPT void Vysyx_23060111_top___024root___nba_sequent__TOP__1(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT____Vlvbound_h9dec41c8__0;
    ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT____Vlvbound_h9dec41c8__0 = 0;
    CData/*0:0*/ __Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0;
    __Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0;
    __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0;
    __Vdlyvset__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 0U;
    ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT____Vlvbound_h9dec41c8__0 
        = (vlSelf->reg_out + (vlSelf->inst >> 0x14U));
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->snpc);
    vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0U] = 0U;
    if ((0U >= (1U & (vlSelf->inst >> 7U)))) {
        __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 
            = ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT____Vlvbound_h9dec41c8__0;
        __Vdlyvset__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0 
            = (1U & (vlSelf->inst >> 7U));
    }
    if (__Vdlyvset__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0) {
        vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf[__Vdlyvdim0__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0] 
            = __Vdlyvval__ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf__v0;
    }
    vlSelf->reg_out1 = ((0U >= (1U & (vlSelf->inst 
                                      >> 7U))) ? vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__reg_rd__DOT__rf
                        [(1U & (vlSelf->inst >> 7U))]
                         : 0U);
    vlSelf->out = vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
        [0U];
    vlSelf->snpc = ((IData)(4U) + vlSelf->pc);
    vlSelf->dnpc = vlSelf->snpc;
}

void Vysyx_23060111_top___024root___eval_nba(Vysyx_23060111_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_23060111_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vysyx_23060111_top___024root___eval_triggers__ico(Vysyx_23060111_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060111_top___024root___dump_triggers__ico(Vysyx_23060111_top___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_23060111_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060111_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_23060111_top___024root___eval_ico(vlSelf);
        }
    }
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
                    VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/ysyx_23060111_top.v", 1, "", "NBA region did not converge.");
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
