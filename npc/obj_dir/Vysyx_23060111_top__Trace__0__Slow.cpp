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
    tracep->declBit(c+121,"rst", false,-1);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBus(c+123,"pc", false,-1, 31,0);
    tracep->declBit(c+124,"inv_flag", false,-1);
    tracep->pushNamePrefix("ysyx_23060111_top ");
    tracep->declBit(c+121,"rst", false,-1);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBus(c+123,"pc", false,-1, 31,0);
    tracep->declBit(c+124,"inv_flag", false,-1);
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->declBus(c+114,"dnpc", false,-1, 31,0);
    tracep->declBus(c+125,"snpc", false,-1, 31,0);
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->declBus(c+13,"rd", false,-1, 11,7);
    tracep->declBus(c+14,"funct3", false,-1, 14,12);
    tracep->declBus(c+15,"rs1", false,-1, 19,15);
    tracep->declBus(c+16,"rs2", false,-1, 24,20);
    tracep->declBus(c+17,"funct7", false,-1, 31,25);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+115,"wdata", false,-1, 31,0);
    tracep->declBus(c+13,"waddr", false,-1, 4,0);
    tracep->declBus(c+15,"raddr1", false,-1, 4,0);
    tracep->declBus(c+16,"raddr2", false,-1, 4,0);
    tracep->declBit(c+116,"wen", false,-1);
    tracep->declBus(c+77,"rout1", false,-1, 31,0);
    tracep->declBus(c+78,"rout2", false,-1, 31,0);
    tracep->declBus(c+117,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+118,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+119,"m_wmask", false,-1, 31,0);
    tracep->declBus(c+126,"m_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"m_raddr", false,-1, 31,0);
    tracep->declBit(c+120,"m_wen", false,-1);
    tracep->declBit(c+128,"m_ren", false,-1);
    tracep->pushNamePrefix("init_EXU ");
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->declBus(c+77,"rout1", false,-1, 31,0);
    tracep->declBus(c+78,"rout2", false,-1, 31,0);
    tracep->declBus(c+123,"pc", false,-1, 31,0);
    tracep->declBus(c+114,"dnpc", false,-1, 31,0);
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->declBus(c+13,"rd", false,-1, 11,7);
    tracep->declBus(c+14,"funct3", false,-1, 14,12);
    tracep->declBus(c+15,"rs1", false,-1, 19,15);
    tracep->declBus(c+16,"rs2", false,-1, 24,20);
    tracep->declBus(c+17,"funct7", false,-1, 31,25);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+115,"wdata", false,-1, 31,0);
    tracep->declBus(c+13,"waddr", false,-1, 4,0);
    tracep->declBus(c+15,"raddr1", false,-1, 4,0);
    tracep->declBus(c+16,"raddr2", false,-1, 4,0);
    tracep->declBus(c+125,"snpc", false,-1, 31,0);
    tracep->declBit(c+116,"wen", false,-1);
    tracep->declBus(c+117,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+118,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+119,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+120,"m_wen", false,-1);
    tracep->declBus(c+127,"m_raddr", false,-1, 31,0);
    tracep->declBit(c+128,"m_ren", false,-1);
    tracep->declBus(c+126,"m_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("ALU_init ");
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->declBus(c+14,"funct3", false,-1, 14,12);
    tracep->declBus(c+17,"funct7", false,-1, 31,25);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+77,"rout1", false,-1, 31,0);
    tracep->declBus(c+78,"rout2", false,-1, 31,0);
    tracep->declBus(c+123,"pc", false,-1, 31,0);
    tracep->declBus(c+125,"snpc", false,-1, 31,0);
    tracep->declBus(c+114,"dnpc", false,-1, 31,0);
    tracep->declBit(c+116,"wen", false,-1);
    tracep->declBus(c+115,"wdata", false,-1, 31,0);
    tracep->declBus(c+117,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+118,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+119,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+120,"m_wen", false,-1);
    tracep->declBus(c+127,"m_raddr", false,-1, 31,0);
    tracep->declBit(c+128,"m_ren", false,-1);
    tracep->declBus(c+126,"m_rdata", false,-1, 31,0);
    tracep->declBit(c+79,"cond_beq", false,-1);
    tracep->declBit(c+80,"cond_bge", false,-1);
    tracep->declBit(c+81,"cond_bgeu", false,-1);
    tracep->declBus(c+77,"src1", false,-1, 31,0);
    tracep->declBus(c+78,"src2", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("init_IDU ");
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->declBus(c+13,"rd", false,-1, 11,7);
    tracep->declBus(c+14,"funct3", false,-1, 14,12);
    tracep->declBus(c+15,"rs1", false,-1, 19,15);
    tracep->declBus(c+16,"rs2", false,-1, 24,20);
    tracep->declBus(c+17,"funct7", false,-1, 31,25);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBit(c+124,"inv_flag", false,-1);
    tracep->pushNamePrefix("typeMux ");
    tracep->declBus(c+129,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+130,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+131,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+19,"out", false,-1, 32,0);
    tracep->declBus(c+12,"key", false,-1, 6,0);
    tracep->declQuad(c+132,"default_out", false,-1, 32,0);
    tracep->declArray(c+21,"lut", false,-1, 399,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+129,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+130,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+131,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+134,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+19,"out", false,-1, 32,0);
    tracep->declBus(c+12,"key", false,-1, 6,0);
    tracep->declQuad(c+132,"default_out", false,-1, 32,0);
    tracep->declArray(c+21,"lut", false,-1, 399,0);
    tracep->declBus(c+135,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declQuad(c+34+i*2,"pair_list", true,(i+0), 39,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declQuad(c+54+i*2,"data_list", true,(i+0), 32,0);
    }
    tracep->declQuad(c+74,"lut_out", false,-1, 32,0);
    tracep->declBit(c+76,"hit", false,-1);
    tracep->declBus(c+136,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("init_IFU ");
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBus(c+123,"pc", false,-1, 31,0);
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("init_mem ");
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBus(c+117,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+118,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+119,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+120,"m_wen", false,-1);
    tracep->declBus(c+127,"m_raddr", false,-1, 31,0);
    tracep->declBit(c+128,"m_ren", false,-1);
    tracep->declBus(c+126,"m_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_renew ");
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+121,"rst", false,-1);
    tracep->declBus(c+125,"snpc", false,-1, 31,0);
    tracep->declBus(c+114,"dnpc", false,-1, 31,0);
    tracep->declBus(c+123,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("renew_pc ");
    tracep->declBus(c+137,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+138,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+121,"rst", false,-1);
    tracep->declBus(c+114,"din", false,-1, 31,0);
    tracep->declBus(c+123,"dout", false,-1, 31,0);
    tracep->declBit(c+139,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_$0 ");
    tracep->declBus(c+140,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBus(c+115,"wdata", false,-1, 31,0);
    tracep->declBus(c+13,"waddr", false,-1, 4,0);
    tracep->declBus(c+15,"raddr1", false,-1, 4,0);
    tracep->declBus(c+16,"raddr2", false,-1, 4,0);
    tracep->declBit(c+116,"wen", false,-1);
    tracep->declBus(c+77,"rout1", false,-1, 31,0);
    tracep->declBus(c+78,"rout2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+82+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__key_list[9]),7);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060111_top__DOT__inst),32);
    bufp->fullCData(oldp+12,((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst)),7);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+14,((7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+17,((vlSelf->ysyx_23060111_top__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+18,((IData)((vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                      >> 1U))),32);
    bufp->fullQData(oldp+19,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1),33);
    bufp->fullWData(oldp+21,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4),400);
    bufp->fullQData(oldp+34,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+36,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullQData(oldp+38,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[2]),40);
    bufp->fullQData(oldp+40,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[3]),40);
    bufp->fullQData(oldp+42,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[4]),40);
    bufp->fullQData(oldp+44,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[5]),40);
    bufp->fullQData(oldp+46,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[6]),40);
    bufp->fullQData(oldp+48,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[7]),40);
    bufp->fullQData(oldp+50,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[8]),40);
    bufp->fullQData(oldp+52,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[9]),40);
    bufp->fullQData(oldp+54,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[0]),33);
    bufp->fullQData(oldp+56,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[1]),33);
    bufp->fullQData(oldp+58,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[2]),33);
    bufp->fullQData(oldp+60,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[3]),33);
    bufp->fullQData(oldp+62,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[4]),33);
    bufp->fullQData(oldp+64,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[5]),33);
    bufp->fullQData(oldp+66,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[6]),33);
    bufp->fullQData(oldp+68,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[7]),33);
    bufp->fullQData(oldp+70,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[8]),33);
    bufp->fullQData(oldp+72,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[9]),33);
    bufp->fullQData(oldp+74,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out),33);
    bufp->fullBit(oldp+76,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+77,(vlSelf->ysyx_23060111_top__DOT__rout1),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_23060111_top__DOT__rout2),32);
    bufp->fullBit(oldp+79,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq));
    bufp->fullBit(oldp+80,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu));
    bufp->fullIData(oldp+82,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[5]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[6]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[7]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[8]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[9]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[10]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[11]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[12]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[13]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[14]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[15]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[16]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[17]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[18]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[19]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[20]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[21]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[22]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[23]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[24]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[25]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[26]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[27]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[28]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[29]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[30]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[31]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_23060111_top__DOT__dnpc),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060111_top__DOT__wdata),32);
    bufp->fullBit(oldp+116,(vlSelf->ysyx_23060111_top__DOT__wen));
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060111_top__DOT__m_waddr),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_23060111_top__DOT__m_wdata),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_23060111_top__DOT__m_wmask),32);
    bufp->fullBit(oldp+120,(vlSelf->ysyx_23060111_top__DOT__m_wen));
    bufp->fullBit(oldp+121,(vlSelf->rst));
    bufp->fullBit(oldp+122,(vlSelf->clk));
    bufp->fullIData(oldp+123,(vlSelf->pc),32);
    bufp->fullBit(oldp+124,(vlSelf->inv_flag));
    bufp->fullIData(oldp+125,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_23060111_top__DOT__m_rdata),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_23060111_top__DOT__m_raddr),32);
    bufp->fullBit(oldp+128,(vlSelf->ysyx_23060111_top__DOT__m_ren));
    bufp->fullIData(oldp+129,(0xaU),32);
    bufp->fullIData(oldp+130,(7U),32);
    bufp->fullIData(oldp+131,(0x21U),32);
    bufp->fullQData(oldp+132,(1ULL),33);
    bufp->fullIData(oldp+134,(1U),32);
    bufp->fullIData(oldp+135,(0x28U),32);
    bufp->fullIData(oldp+136,(0xaU),32);
    bufp->fullIData(oldp+137,(0x20U),32);
    bufp->fullIData(oldp+138,(0x80000000U),32);
    bufp->fullBit(oldp+139,(1U));
    bufp->fullIData(oldp+140,(5U),32);
}
