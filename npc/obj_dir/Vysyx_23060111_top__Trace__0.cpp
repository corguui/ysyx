// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060111_top__Syms.h"


void Vysyx_23060111_top___024root__trace_chg_sub_0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060111_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060111_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_top___024root*>(voidSelf);
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060111_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060111_top___024root__trace_chg_sub_0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[8]),7);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[9]),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+10,(vlSelf->ysyx_23060111_top__DOT__inst),32);
        bufp->chgCData(oldp+11,((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst)),7);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+13,((7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+14,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+16,((vlSelf->ysyx_23060111_top__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+17,((IData)((vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                         >> 1U))),32);
        bufp->chgQData(oldp+18,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1),33);
        bufp->chgWData(oldp+20,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4),400);
        bufp->chgQData(oldp+33,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+35,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+37,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+39,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[3]),40);
        bufp->chgQData(oldp+41,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[4]),40);
        bufp->chgQData(oldp+43,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[5]),40);
        bufp->chgQData(oldp+45,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[6]),40);
        bufp->chgQData(oldp+47,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[7]),40);
        bufp->chgQData(oldp+49,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[8]),40);
        bufp->chgQData(oldp+51,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[9]),40);
        bufp->chgQData(oldp+53,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[0]),33);
        bufp->chgQData(oldp+55,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[1]),33);
        bufp->chgQData(oldp+57,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[2]),33);
        bufp->chgQData(oldp+59,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[3]),33);
        bufp->chgQData(oldp+61,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[4]),33);
        bufp->chgQData(oldp+63,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[5]),33);
        bufp->chgQData(oldp+65,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[6]),33);
        bufp->chgQData(oldp+67,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[7]),33);
        bufp->chgQData(oldp+69,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[8]),33);
        bufp->chgQData(oldp+71,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[9]),33);
        bufp->chgQData(oldp+73,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out),33);
        bufp->chgBit(oldp+75,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+76,(vlSelf->ysyx_23060111_top__DOT__rout1),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_23060111_top__DOT__rout2),32);
        bufp->chgBit(oldp+78,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq));
        bufp->chgBit(oldp+79,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge));
        bufp->chgBit(oldp+80,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+81,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[5]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[6]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[7]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[8]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[9]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[10]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[11]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[12]),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[13]),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[14]),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[15]),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[16]),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[17]),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[18]),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[19]),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[20]),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[21]),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[22]),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[23]),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[24]),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[25]),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[26]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[27]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[28]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[29]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[30]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+113,(vlSelf->ysyx_23060111_top__DOT__dnpc),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_23060111_top__DOT__wdata),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_23060111_top__DOT__m_waddr),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_23060111_top__DOT__m_wdata),32);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_23060111_top__DOT__m_wmask),32);
        bufp->chgBit(oldp+118,(vlSelf->ysyx_23060111_top__DOT__m_wen));
        bufp->chgBit(oldp+119,(vlSelf->ysyx_23060111_top__DOT__m_ren));
    }
    bufp->chgBit(oldp+120,(vlSelf->rst));
    bufp->chgBit(oldp+121,(vlSelf->clk));
    bufp->chgIData(oldp+122,(vlSelf->pc),32);
    bufp->chgBit(oldp+123,(vlSelf->inv_flag));
    bufp->chgIData(oldp+124,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgBit(oldp+125,(vlSelf->ysyx_23060111_top__DOT__wen));
    bufp->chgIData(oldp+126,(vlSelf->ysyx_23060111_top__DOT__m_rdata),32);
    bufp->chgIData(oldp+127,(vlSelf->ysyx_23060111_top__DOT__m_raddr),32);
}

void Vysyx_23060111_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060111_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_top___024root*>(voidSelf);
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
