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
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBus(c+153,"pc", false,-1, 31,0);
    tracep->declBit(c+154,"inv_flag", false,-1);
    tracep->pushNamePrefix("ysyx_23060111_top ");
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBus(c+153,"pc", false,-1, 31,0);
    tracep->declBit(c+154,"inv_flag", false,-1);
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->declBus(c+54,"dnpc", false,-1, 31,0);
    tracep->declBus(c+155,"snpc", false,-1, 31,0);
    tracep->declBus(c+55,"opcode", false,-1, 6,0);
    tracep->declBus(c+56,"rd", false,-1, 11,7);
    tracep->declBus(c+57,"funct3", false,-1, 14,12);
    tracep->declBus(c+58,"rs1", false,-1, 19,15);
    tracep->declBus(c+59,"rs2", false,-1, 24,20);
    tracep->declBus(c+60,"funct7", false,-1, 31,25);
    tracep->declBus(c+61,"imm", false,-1, 31,0);
    tracep->declBus(c+62,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+63,"wdata", false,-1, 31,0);
    tracep->declBus(c+56,"waddr", false,-1, 4,0);
    tracep->declBus(c+58,"raddr1", false,-1, 4,0);
    tracep->declBus(c+59,"raddr2", false,-1, 4,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->declBus(c+65,"rout1", false,-1, 31,0);
    tracep->declBus(c+66,"rout2", false,-1, 31,0);
    tracep->declBus(c+67,"csr_waddr", false,-1, 1,0);
    tracep->declBus(c+68,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+69,"csr_raddr", false,-1, 1,0);
    tracep->declBit(c+70,"csr_wen", false,-1);
    tracep->declBit(c+71,"csr_mepc_wen", false,-1);
    tracep->declBit(c+72,"csr_mcause_wen", false,-1);
    tracep->declBit(c+73,"csr_mstatus_wen", false,-1);
    tracep->declBus(c+74,"csr_rout", false,-1, 31,0);
    tracep->declBus(c+11,"csr_a5", false,-1, 31,0);
    tracep->declBus(c+12,"csrr_mepc", false,-1, 31,0);
    tracep->declBus(c+13,"csrr_mstatus", false,-1, 31,0);
    tracep->declBus(c+14,"csrr_mtvec", false,-1, 31,0);
    tracep->declBus(c+75,"csr_mcause_wdata", false,-1, 31,0);
    tracep->declBus(c+76,"csr_mepc_wdata", false,-1, 31,0);
    tracep->declBus(c+77,"csr_mstatus_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+79,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+80,"m_wmask", false,-1, 31,0);
    tracep->declBus(c+81,"m_rdata", false,-1, 31,0);
    tracep->declBus(c+82,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+83,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+84,"m_wen", false,-1);
    tracep->declBit(c+85,"m_ren", false,-1);
    tracep->pushNamePrefix("init_EXU ");
    tracep->declBus(c+65,"rout1", false,-1, 31,0);
    tracep->declBus(c+66,"rout2", false,-1, 31,0);
    tracep->declBus(c+153,"pc", false,-1, 31,0);
    tracep->declBus(c+54,"dnpc", false,-1, 31,0);
    tracep->declBus(c+55,"opcode", false,-1, 6,0);
    tracep->declBus(c+56,"rd", false,-1, 11,7);
    tracep->declBus(c+57,"funct3", false,-1, 14,12);
    tracep->declBus(c+58,"rs1", false,-1, 19,15);
    tracep->declBus(c+59,"rs2", false,-1, 24,20);
    tracep->declBus(c+60,"funct7", false,-1, 31,25);
    tracep->declBus(c+61,"imm", false,-1, 31,0);
    tracep->declBus(c+62,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+63,"wdata", false,-1, 31,0);
    tracep->declBus(c+56,"waddr", false,-1, 4,0);
    tracep->declBus(c+58,"raddr1", false,-1, 4,0);
    tracep->declBus(c+59,"raddr2", false,-1, 4,0);
    tracep->declBus(c+155,"snpc", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->declBus(c+78,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+79,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+80,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+84,"m_wen", false,-1);
    tracep->declBus(c+82,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+83,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+85,"m_ren", false,-1);
    tracep->declBus(c+81,"m_rdata", false,-1, 31,0);
    tracep->declBus(c+74,"csr_rout", false,-1, 31,0);
    tracep->declBus(c+11,"csr_a5", false,-1, 31,0);
    tracep->declBus(c+68,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+67,"csr_waddr", false,-1, 1,0);
    tracep->declBus(c+69,"csr_raddr", false,-1, 1,0);
    tracep->declBus(c+12,"csrr_mepc", false,-1, 31,0);
    tracep->declBus(c+14,"csrr_mtvec", false,-1, 31,0);
    tracep->declBus(c+13,"csrr_mstatus", false,-1, 31,0);
    tracep->declBus(c+76,"csr_mepc_wdata", false,-1, 31,0);
    tracep->declBus(c+75,"csr_mcause_wdata", false,-1, 31,0);
    tracep->declBus(c+77,"csr_mstatus_wdata", false,-1, 31,0);
    tracep->declBit(c+71,"csr_mepc_wen", false,-1);
    tracep->declBit(c+72,"csr_mcause_wen", false,-1);
    tracep->declBit(c+73,"csr_mstatus_wen", false,-1);
    tracep->declBit(c+70,"csr_wen", false,-1);
    tracep->declBus(c+86,"csr_flag", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_init ");
    tracep->declBus(c+55,"opcode", false,-1, 6,0);
    tracep->declBus(c+57,"funct3", false,-1, 14,12);
    tracep->declBus(c+60,"funct7", false,-1, 31,25);
    tracep->declBus(c+61,"imm", false,-1, 31,0);
    tracep->declBus(c+65,"rout1", false,-1, 31,0);
    tracep->declBus(c+66,"rout2", false,-1, 31,0);
    tracep->declBus(c+11,"csr_a5", false,-1, 31,0);
    tracep->declBus(c+12,"csrr_mepc", false,-1, 31,0);
    tracep->declBus(c+13,"csrr_mstatus", false,-1, 31,0);
    tracep->declBus(c+14,"csrr_mtvec", false,-1, 31,0);
    tracep->declBus(c+74,"csr_rout", false,-1, 31,0);
    tracep->declBus(c+153,"pc", false,-1, 31,0);
    tracep->declBus(c+155,"snpc", false,-1, 31,0);
    tracep->declBus(c+54,"dnpc", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->declBit(c+70,"csr_wen", false,-1);
    tracep->declBit(c+71,"csr_mepc_wen", false,-1);
    tracep->declBit(c+72,"csr_mcause_wen", false,-1);
    tracep->declBit(c+73,"csr_mstatus_wen", false,-1);
    tracep->declBus(c+76,"csr_mepc_wdata", false,-1, 31,0);
    tracep->declBus(c+75,"csr_mcause_wdata", false,-1, 31,0);
    tracep->declBus(c+77,"csr_mstatus_wdata", false,-1, 31,0);
    tracep->declBus(c+63,"wdata", false,-1, 31,0);
    tracep->declBus(c+68,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+78,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+79,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+80,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+84,"m_wen", false,-1);
    tracep->declBus(c+82,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+83,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+85,"m_ren", false,-1);
    tracep->declBus(c+86,"csr_flag", false,-1, 1,0);
    tracep->declBus(c+81,"m_rdata", false,-1, 31,0);
    tracep->declBit(c+87,"cond_beq", false,-1);
    tracep->declBit(c+88,"cond_bge", false,-1);
    tracep->declBit(c+89,"cond_bgeu", false,-1);
    tracep->declBus(c+65,"src1", false,-1, 31,0);
    tracep->declBus(c+66,"src2", false,-1, 31,0);
    tracep->declBus(c+74,"csr", false,-1, 31,0);
    tracep->declBus(c+15,"shifted_mstatus", false,-1, 31,0);
    tracep->declBus(c+16,"mstatus", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("init_IDU ");
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->declBus(c+55,"opcode", false,-1, 6,0);
    tracep->declBus(c+56,"rd", false,-1, 11,7);
    tracep->declBus(c+57,"funct3", false,-1, 14,12);
    tracep->declBus(c+58,"rs1", false,-1, 19,15);
    tracep->declBus(c+59,"rs2", false,-1, 24,20);
    tracep->declBus(c+60,"funct7", false,-1, 31,25);
    tracep->declBus(c+61,"imm", false,-1, 31,0);
    tracep->declBus(c+62,"csr_imm", false,-1, 31,0);
    tracep->declBit(c+154,"inv_flag", false,-1);
    tracep->pushNamePrefix("typeMux ");
    tracep->declBus(c+156,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+157,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+158,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+90,"out", false,-1, 32,0);
    tracep->declBus(c+55,"key", false,-1, 6,0);
    tracep->declQuad(c+159,"default_out", false,-1, 32,0);
    tracep->declArray(c+92,"lut", false,-1, 399,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+156,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+157,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+158,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+161,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+90,"out", false,-1, 32,0);
    tracep->declBus(c+55,"key", false,-1, 6,0);
    tracep->declQuad(c+159,"default_out", false,-1, 32,0);
    tracep->declArray(c+92,"lut", false,-1, 399,0);
    tracep->declBus(c+162,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declQuad(c+105+i*2,"pair_list", true,(i+0), 39,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declQuad(c+125+i*2,"data_list", true,(i+0), 32,0);
    }
    tracep->declQuad(c+145,"lut_out", false,-1, 32,0);
    tracep->declBit(c+147,"hit", false,-1);
    tracep->declBus(c+163,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("init_IFU ");
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBus(c+153,"pc", false,-1, 31,0);
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("init_mem ");
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBus(c+78,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+79,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+80,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+84,"m_wen", false,-1);
    tracep->declBus(c+82,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+83,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+85,"m_ren", false,-1);
    tracep->declBus(c+81,"m_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_renew ");
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+155,"snpc", false,-1, 31,0);
    tracep->declBus(c+54,"dnpc", false,-1, 31,0);
    tracep->declBus(c+153,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("renew_pc ");
    tracep->declBus(c+164,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+165,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+54,"din", false,-1, 31,0);
    tracep->declBus(c+153,"dout", false,-1, 31,0);
    tracep->declBit(c+166,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_$0 ");
    tracep->declBus(c+167,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+164,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBus(c+63,"wdata", false,-1, 31,0);
    tracep->declBus(c+56,"waddr", false,-1, 4,0);
    tracep->declBus(c+67,"csr_waddr", false,-1, 1,0);
    tracep->declBus(c+68,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+148,"csr_mcause_wdata", false,-1, 4,0);
    tracep->declBus(c+149,"csr_mepc_wdata", false,-1, 4,0);
    tracep->declBus(c+150,"csr_mstatus_wdata", false,-1, 4,0);
    tracep->declBus(c+69,"csr_raddr", false,-1, 1,0);
    tracep->declBus(c+58,"raddr1", false,-1, 4,0);
    tracep->declBus(c+59,"raddr2", false,-1, 4,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->declBit(c+70,"csr_wen", false,-1);
    tracep->declBit(c+72,"csr_mcause_wen", false,-1);
    tracep->declBit(c+71,"csr_mepc_wen", false,-1);
    tracep->declBit(c+73,"csrr_mstatus_wen", false,-1);
    tracep->declBus(c+65,"rout1", false,-1, 31,0);
    tracep->declBus(c+66,"rout2", false,-1, 31,0);
    tracep->declBus(c+11,"csr_a5", false,-1, 31,0);
    tracep->declBus(c+14,"csrr_mtvec", false,-1, 31,0);
    tracep->declBus(c+12,"csrr_mepc", false,-1, 31,0);
    tracep->declBus(c+13,"csrr_mstatus", false,-1, 31,0);
    tracep->declBus(c+74,"csr_rout", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+17+i*1,"rf", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+49+i*1,"csr", true,(i+0), 31,0);
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
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
                             [0xfU]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                             [0U]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                             [2U]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                             [3U]),32);
    bufp->fullIData(oldp+15,((0x80U | (8U & (vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                             [2U] >> 4U)))),32);
    bufp->fullIData(oldp+16,((0x80U | (vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                       [2U] | (8U & 
                                               (vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                                [2U] 
                                                >> 4U))))),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[5]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[6]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[7]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[8]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[9]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[10]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[11]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[12]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[13]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[14]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[15]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[16]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[17]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[18]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[19]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[20]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[21]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[22]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[23]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[24]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[25]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[26]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[27]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[28]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[29]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[30]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[31]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[0]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[1]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[2]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[3]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_23060111_top__DOT__inst),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_23060111_top__DOT__dnpc),32);
    bufp->fullCData(oldp+55,((0x7fU & vlSelf->ysyx_23060111_top__DOT__inst)),7);
    bufp->fullCData(oldp+56,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+57,((7U & (vlSelf->ysyx_23060111_top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+58,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+59,((0x1fU & (vlSelf->ysyx_23060111_top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+60,((vlSelf->ysyx_23060111_top__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+61,((IData)((vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1 
                                      >> 1U))),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_23060111_top__DOT__csr_imm),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_23060111_top__DOT__wdata),32);
    bufp->fullBit(oldp+64,(vlSelf->ysyx_23060111_top__DOT__wen));
    bufp->fullIData(oldp+65,(vlSelf->ysyx_23060111_top__DOT__rout1),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_23060111_top__DOT__rout2),32);
    bufp->fullCData(oldp+67,(vlSelf->ysyx_23060111_top__DOT__csr_waddr),2);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_23060111_top__DOT__csr_wdata),32);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_23060111_top__DOT__csr_raddr),2);
    bufp->fullBit(oldp+70,(vlSelf->ysyx_23060111_top__DOT__csr_wen));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_23060111_top__DOT__csr_mepc_wen));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_23060111_top__DOT__csr_mcause_wen));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_23060111_top__DOT__csr_mstatus_wen));
    bufp->fullIData(oldp+74,(vlSelf->ysyx_23060111_top__DOT__csr_rout),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_23060111_top__DOT__csr_mcause_wdata),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_23060111_top__DOT__csr_mepc_wdata),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_23060111_top__DOT__csr_mstatus_wdata),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_23060111_top__DOT__m_waddr),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_23060111_top__DOT__m_wdata),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_23060111_top__DOT__m_wmask),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_23060111_top__DOT__m_rdata),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_23060111_top__DOT__m_raddr),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_23060111_top__DOT__m_rmask),32);
    bufp->fullBit(oldp+84,(vlSelf->ysyx_23060111_top__DOT__m_wen));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_23060111_top__DOT__m_ren));
    bufp->fullCData(oldp+86,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__csr_flag),2);
    bufp->fullBit(oldp+87,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq));
    bufp->fullBit(oldp+88,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge));
    bufp->fullBit(oldp+89,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu));
    bufp->fullQData(oldp+90,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1),33);
    bufp->fullWData(oldp+92,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4),400);
    bufp->fullQData(oldp+105,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+107,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullQData(oldp+109,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[2]),40);
    bufp->fullQData(oldp+111,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[3]),40);
    bufp->fullQData(oldp+113,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[4]),40);
    bufp->fullQData(oldp+115,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[5]),40);
    bufp->fullQData(oldp+117,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[6]),40);
    bufp->fullQData(oldp+119,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[7]),40);
    bufp->fullQData(oldp+121,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[8]),40);
    bufp->fullQData(oldp+123,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[9]),40);
    bufp->fullQData(oldp+125,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[0]),33);
    bufp->fullQData(oldp+127,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[1]),33);
    bufp->fullQData(oldp+129,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[2]),33);
    bufp->fullQData(oldp+131,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[3]),33);
    bufp->fullQData(oldp+133,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[4]),33);
    bufp->fullQData(oldp+135,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[5]),33);
    bufp->fullQData(oldp+137,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[6]),33);
    bufp->fullQData(oldp+139,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[7]),33);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[8]),33);
    bufp->fullQData(oldp+143,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[9]),33);
    bufp->fullQData(oldp+145,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out),33);
    bufp->fullBit(oldp+147,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+148,((0x1fU & vlSelf->ysyx_23060111_top__DOT__csr_mcause_wdata)),5);
    bufp->fullCData(oldp+149,((0x1fU & vlSelf->ysyx_23060111_top__DOT__csr_mepc_wdata)),5);
    bufp->fullCData(oldp+150,((0x1fU & vlSelf->ysyx_23060111_top__DOT__csr_mstatus_wdata)),5);
    bufp->fullBit(oldp+151,(vlSelf->rst));
    bufp->fullBit(oldp+152,(vlSelf->clk));
    bufp->fullIData(oldp+153,(vlSelf->pc),32);
    bufp->fullBit(oldp+154,(vlSelf->inv_flag));
    bufp->fullIData(oldp+155,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+156,(0xaU),32);
    bufp->fullIData(oldp+157,(7U),32);
    bufp->fullIData(oldp+158,(0x21U),32);
    bufp->fullQData(oldp+159,(1ULL),33);
    bufp->fullIData(oldp+161,(1U),32);
    bufp->fullIData(oldp+162,(0x28U),32);
    bufp->fullIData(oldp+163,(0xaU),32);
    bufp->fullIData(oldp+164,(0x20U),32);
    bufp->fullIData(oldp+165,(0x80000000U),32);
    bufp->fullBit(oldp+166,(1U));
    bufp->fullIData(oldp+167,(5U),32);
}
