// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060111_top__Syms.h"


VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_init_sub__TOP__0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBus(c+95,"pc", false,-1, 31,0);
    tracep->declBit(c+96,"inv_flag", false,-1);
    tracep->pushNamePrefix("ysyx_23060111_top ");
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBus(c+95,"pc", false,-1, 31,0);
    tracep->declBit(c+96,"inv_flag", false,-1);
    tracep->declBus(c+9,"inst", false,-1, 31,0);
    tracep->declBus(c+97,"dnpc", false,-1, 31,0);
    tracep->declBus(c+98,"snpc", false,-1, 31,0);
    tracep->declBus(c+10,"opcode", false,-1, 6,0);
    tracep->declBus(c+11,"rd", false,-1, 11,7);
    tracep->declBus(c+12,"funct3", false,-1, 14,12);
    tracep->declBus(c+13,"rs1", false,-1, 19,15);
    tracep->declBus(c+14,"rs2", false,-1, 24,20);
    tracep->declBus(c+15,"funct7", false,-1, 31,25);
    tracep->declBus(c+16,"type_i", false,-1, 3,0);
    tracep->declBus(c+17,"imm", false,-1, 31,0);
    tracep->declBus(c+99,"wdata", false,-1, 31,0);
    tracep->declBus(c+11,"waddr", false,-1, 4,0);
    tracep->declBus(c+13,"raddr", false,-1, 4,0);
    tracep->declBit(c+101,"wen", false,-1);
    tracep->declBus(c+100,"rout", false,-1, 31,0);
    tracep->declBus(c+102,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+103,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+104,"m_wmask", false,-1, 31,0);
    tracep->declBus(c+1,"m_rdata", false,-1, 31,0);
    tracep->declBus(c+105,"m_raddr", false,-1, 31,0);
    tracep->declBit(c+101,"m_wen", false,-1);
    tracep->pushNamePrefix("init_EXU ");
    tracep->declBus(c+100,"rout", false,-1, 31,0);
    tracep->declBus(c+95,"pc", false,-1, 31,0);
    tracep->declBus(c+97,"dnpc", false,-1, 31,0);
    tracep->declBus(c+10,"opcode", false,-1, 6,0);
    tracep->declBus(c+11,"rd", false,-1, 11,7);
    tracep->declBus(c+12,"funct3", false,-1, 14,12);
    tracep->declBus(c+13,"rs1", false,-1, 19,15);
    tracep->declBus(c+14,"rs2", false,-1, 24,20);
    tracep->declBus(c+15,"funct7", false,-1, 31,25);
    tracep->declBus(c+16,"type_i", false,-1, 3,0);
    tracep->declBus(c+17,"imm", false,-1, 31,0);
    tracep->declBus(c+99,"wdata", false,-1, 31,0);
    tracep->declBus(c+11,"waddr", false,-1, 4,0);
    tracep->declBus(c+13,"raddr", false,-1, 4,0);
    tracep->declBus(c+98,"snpc", false,-1, 31,0);
    tracep->declBit(c+101,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("init_IDU ");
    tracep->declBus(c+9,"inst", false,-1, 31,0);
    tracep->declBus(c+10,"opcode", false,-1, 6,0);
    tracep->declBus(c+11,"rd", false,-1, 11,7);
    tracep->declBus(c+12,"funct3", false,-1, 14,12);
    tracep->declBus(c+13,"rs1", false,-1, 19,15);
    tracep->declBus(c+14,"rs2", false,-1, 24,20);
    tracep->declBus(c+15,"funct7", false,-1, 31,25);
    tracep->declBus(c+16,"type_i", false,-1, 3,0);
    tracep->declBus(c+17,"imm", false,-1, 31,0);
    tracep->declBit(c+96,"inv_flag", false,-1);
    tracep->pushNamePrefix("typeMux ");
    tracep->declBus(c+106,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+106,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+18,"out", false,-1, 36,0);
    tracep->declBus(c+10,"key", false,-1, 6,0);
    tracep->declQuad(c+108,"default_out", false,-1, 36,0);
    tracep->declArray(c+20,"lut", false,-1, 307,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+106,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+106,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+110,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+18,"out", false,-1, 36,0);
    tracep->declBus(c+10,"key", false,-1, 6,0);
    tracep->declQuad(c+108,"default_out", false,-1, 36,0);
    tracep->declArray(c+20,"lut", false,-1, 307,0);
    tracep->declBus(c+111,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+30+i*2,"pair_list", true,(i+0), 43,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+2+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+44+i*2,"data_list", true,(i+0), 36,0);
    }
    tracep->declQuad(c+58,"lut_out", false,-1, 36,0);
    tracep->declBit(c+60,"hit", false,-1);
    tracep->declBus(c+112,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("init_IFU ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBus(c+95,"pc", false,-1, 31,0);
    tracep->declBus(c+9,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("init_the_mem ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBus(c+102,"waddr", false,-1, 31,0);
    tracep->declBus(c+103,"wdata", false,-1, 31,0);
    tracep->declBus(c+104,"wmask", false,-1, 31,0);
    tracep->declBit(c+101,"wen", false,-1);
    tracep->declBus(c+105,"raddr", false,-1, 31,0);
    tracep->declBus(c+1,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_renew ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBus(c+98,"snpc", false,-1, 31,0);
    tracep->declBus(c+97,"dnpc", false,-1, 31,0);
    tracep->declBus(c+95,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("renew_pc ");
    tracep->declBus(c+113,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+93,"rst", false,-1);
    tracep->declBus(c+97,"din", false,-1, 31,0);
    tracep->declBus(c+95,"dout", false,-1, 31,0);
    tracep->declBit(c+101,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_$0 ");
    tracep->declBus(c+115,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+113,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBus(c+99,"wdata", false,-1, 31,0);
    tracep->declBus(c+11,"waddr", false,-1, 4,0);
    tracep->declBus(c+13,"raddr", false,-1, 4,0);
    tracep->declBit(c+101,"wen", false,-1);
    tracep->declBus(c+100,"rout", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+61+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_init_top(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060111_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060111_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060111_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_register(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060111_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060111_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060111_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_sub_0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060111_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060111_top___024root*>(voidSelf);
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060111_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060111_top___024root__trace_full_sub_0(Vysyx_23060111_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060111_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060111_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_23060111_top__DOT__m_rdata),32);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060111_top__DOT__inst),32);
    bufp->fullCData(oldp+10,((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst)),7);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+12,((7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+15,((vlSelf->ysyx_23060111_top__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_23060111_top__DOT__type_i),4);
    bufp->fullIData(oldp+17,((IData)((vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                      >> 1U))),32);
    bufp->fullQData(oldp+18,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1),37);
    bufp->fullWData(oldp+20,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4),308);
    bufp->fullQData(oldp+30,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[0]),44);
    bufp->fullQData(oldp+32,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[1]),44);
    bufp->fullQData(oldp+34,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[2]),44);
    bufp->fullQData(oldp+36,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[3]),44);
    bufp->fullQData(oldp+38,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[4]),44);
    bufp->fullQData(oldp+40,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[5]),44);
    bufp->fullQData(oldp+42,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[6]),44);
    bufp->fullQData(oldp+44,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[0]),37);
    bufp->fullQData(oldp+46,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[1]),37);
    bufp->fullQData(oldp+48,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[2]),37);
    bufp->fullQData(oldp+50,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[3]),37);
    bufp->fullQData(oldp+52,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[4]),37);
    bufp->fullQData(oldp+54,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[5]),37);
    bufp->fullQData(oldp+56,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[6]),37);
    bufp->fullQData(oldp+58,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out),37);
    bufp->fullBit(oldp+60,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+61,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[5]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[6]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[7]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[8]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[9]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[10]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[11]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[12]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[13]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[14]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[15]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[16]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[17]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[18]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[19]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[20]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[21]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[22]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[23]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[24]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[25]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[26]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[27]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[28]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[29]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[30]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[31]),32);
    bufp->fullBit(oldp+93,(vlSelf->rst));
    bufp->fullBit(oldp+94,(vlSelf->clk));
    bufp->fullIData(oldp+95,(vlSelf->pc),32);
    bufp->fullBit(oldp+96,(vlSelf->inv_flag));
    bufp->fullIData(oldp+97,(vlSelf->ysyx_23060111_top__DOT__dnpc),32);
    bufp->fullIData(oldp+98,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_23060111_top__DOT__wdata),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_23060111_top__DOT__rout),32);
    bufp->fullBit(oldp+101,(1U));
    bufp->fullIData(oldp+102,(0x80000040U),32);
    bufp->fullIData(oldp+103,(0x9117U),32);
    bufp->fullIData(oldp+104,(4U),32);
    bufp->fullIData(oldp+105,(0x80000004U),32);
    bufp->fullIData(oldp+106,(7U),32);
    bufp->fullIData(oldp+107,(0x25U),32);
    bufp->fullQData(oldp+108,(1ULL),37);
    bufp->fullIData(oldp+110,(1U),32);
    bufp->fullIData(oldp+111,(0x2cU),32);
    bufp->fullIData(oldp+112,(7U),32);
    bufp->fullIData(oldp+113,(0x20U),32);
    bufp->fullIData(oldp+114,(0x80000000U),32);
    bufp->fullIData(oldp+115,(5U),32);
}
