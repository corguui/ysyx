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
        bufp->chgIData(oldp+10,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
                                [0xfU]),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                [0U]),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                [2U]),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                [3U]),32);
        bufp->chgIData(oldp+14,((0x80U | (8U & (vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                                [2U] 
                                                >> 4U)))),32);
        bufp->chgIData(oldp+15,((0x80U | (vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                          [2U] | (8U 
                                                  & (vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                                     [2U] 
                                                     >> 4U))))),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[5]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[6]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[7]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[8]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[9]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[10]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[11]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[12]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[13]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[14]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[15]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[16]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[17]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[18]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[19]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[20]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[21]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[22]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[23]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[24]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[25]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[26]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[27]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[28]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[29]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[30]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[31]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[0]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[1]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[2]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[3]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+52,(vlSelf->ysyx_23060111_top__DOT__inst),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_23060111_top__DOT__dnpc),32);
        bufp->chgCData(oldp+54,((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst)),7);
        bufp->chgCData(oldp+55,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+56,((7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+57,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+58,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+59,((vlSelf->ysyx_23060111_top__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+60,((IData)((vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                         >> 1U))),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_23060111_top__DOT__csr_imm),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_23060111_top__DOT__wdata),32);
        bufp->chgBit(oldp+63,(vlSelf->ysyx_23060111_top__DOT__wen));
        bufp->chgIData(oldp+64,(vlSelf->ysyx_23060111_top__DOT__rout1),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_23060111_top__DOT__rout2),32);
        bufp->chgCData(oldp+66,(vlSelf->ysyx_23060111_top__DOT__csr_waddr),2);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_23060111_top__DOT__csr_wdata),32);
        bufp->chgCData(oldp+68,(vlSelf->ysyx_23060111_top__DOT__csr_raddr),2);
        bufp->chgBit(oldp+69,(vlSelf->ysyx_23060111_top__DOT__csr_wen));
        bufp->chgBit(oldp+70,(vlSelf->ysyx_23060111_top__DOT__csr_mepc_wen));
        bufp->chgBit(oldp+71,(vlSelf->ysyx_23060111_top__DOT__csr_mcause_wen));
        bufp->chgBit(oldp+72,(vlSelf->ysyx_23060111_top__DOT__csr_mstatus_wen));
        bufp->chgIData(oldp+73,(vlSelf->ysyx_23060111_top__DOT__csr_rout),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_23060111_top__DOT__csr_mcause_wdata),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_23060111_top__DOT__csr_mepc_wdata),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_23060111_top__DOT__csr_mstatus_wdata),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_23060111_top__DOT__m_waddr),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_23060111_top__DOT__m_wdata),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_23060111_top__DOT__m_wmask),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_23060111_top__DOT__m_rdata),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_23060111_top__DOT__m_raddr),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_23060111_top__DOT__m_rmask),32);
        bufp->chgBit(oldp+83,(vlSelf->ysyx_23060111_top__DOT__m_wen));
        bufp->chgBit(oldp+84,(vlSelf->ysyx_23060111_top__DOT__m_ren));
        bufp->chgCData(oldp+85,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__csr_flag),2);
        bufp->chgBit(oldp+86,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq));
        bufp->chgBit(oldp+87,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge));
        bufp->chgBit(oldp+88,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu));
        bufp->chgQData(oldp+89,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1),33);
        bufp->chgWData(oldp+91,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4),400);
        bufp->chgQData(oldp+104,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+106,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+108,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+110,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[3]),40);
        bufp->chgQData(oldp+112,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[4]),40);
        bufp->chgQData(oldp+114,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[5]),40);
        bufp->chgQData(oldp+116,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[6]),40);
        bufp->chgQData(oldp+118,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[7]),40);
        bufp->chgQData(oldp+120,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[8]),40);
        bufp->chgQData(oldp+122,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[9]),40);
        bufp->chgQData(oldp+124,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[0]),33);
        bufp->chgQData(oldp+126,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[1]),33);
        bufp->chgQData(oldp+128,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[2]),33);
        bufp->chgQData(oldp+130,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[3]),33);
        bufp->chgQData(oldp+132,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[4]),33);
        bufp->chgQData(oldp+134,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[5]),33);
        bufp->chgQData(oldp+136,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[6]),33);
        bufp->chgQData(oldp+138,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[7]),33);
        bufp->chgQData(oldp+140,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[8]),33);
        bufp->chgQData(oldp+142,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[9]),33);
        bufp->chgQData(oldp+144,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out),33);
        bufp->chgBit(oldp+146,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+147,((0x1fU & vlSelf->ysyx_23060111_top__DOT__csr_mcause_wdata)),5);
        bufp->chgCData(oldp+148,((0x1fU & vlSelf->ysyx_23060111_top__DOT__csr_mepc_wdata)),5);
        bufp->chgCData(oldp+149,((0x1fU & vlSelf->ysyx_23060111_top__DOT__csr_mstatus_wdata)),5);
    }
    bufp->chgBit(oldp+150,(vlSelf->rst));
    bufp->chgBit(oldp+151,(vlSelf->clk));
    bufp->chgIData(oldp+152,(vlSelf->pc),32);
    bufp->chgBit(oldp+153,(vlSelf->inv_flag));
    bufp->chgIData(oldp+154,(((IData)(4U) + vlSelf->pc)),32);
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
}
