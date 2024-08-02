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
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->declBus(c+90,"dnpc", false,-1, 31,0);
    tracep->declBus(c+155,"snpc", false,-1, 31,0);
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->declBus(c+13,"rd", false,-1, 11,7);
    tracep->declBus(c+14,"funct3", false,-1, 14,12);
    tracep->declBus(c+15,"rs1", false,-1, 19,15);
    tracep->declBus(c+16,"rs2", false,-1, 24,20);
    tracep->declBus(c+17,"funct7", false,-1, 31,25);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+19,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+91,"wdata", false,-1, 31,0);
    tracep->declBus(c+13,"waddr", false,-1, 4,0);
    tracep->declBus(c+15,"raddr1", false,-1, 4,0);
    tracep->declBus(c+16,"raddr2", false,-1, 4,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->declBus(c+92,"rout1", false,-1, 31,0);
    tracep->declBus(c+93,"rout2", false,-1, 31,0);
    tracep->declBus(c+21,"csr_waddr", false,-1, 1,0);
    tracep->declBus(c+94,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"csr_raddr", false,-1, 1,0);
    tracep->declBit(c+23,"csr_wen", false,-1);
    tracep->declBit(c+24,"csr_mepc_wen", false,-1);
    tracep->declBit(c+25,"csr_mcause_wen", false,-1);
    tracep->declBit(c+26,"csr_mstatus_wen", false,-1);
    tracep->declBus(c+95,"csr_rout", false,-1, 31,0);
    tracep->declBus(c+109,"csr_a5", false,-1, 31,0);
    tracep->declBus(c+110,"csrr_mepc", false,-1, 31,0);
    tracep->declBus(c+111,"csrr_mstatus", false,-1, 31,0);
    tracep->declBus(c+112,"csrr_mtvec", false,-1, 31,0);
    tracep->declBus(c+96,"csr_mcause_wdata", false,-1, 31,0);
    tracep->declBus(c+97,"csr_mepc_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"csr_mstatus_wdata", false,-1, 31,0);
    tracep->declBus(c+99,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+100,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+27,"m_wmask", false,-1, 31,0);
    tracep->declBus(c+101,"m_rdata", false,-1, 31,0);
    tracep->declBus(c+102,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+28,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+29,"m_wen", false,-1);
    tracep->declBit(c+30,"m_ren", false,-1);
    tracep->pushNamePrefix("init_EXU ");
    tracep->declBus(c+92,"rout1", false,-1, 31,0);
    tracep->declBus(c+93,"rout2", false,-1, 31,0);
    tracep->declBus(c+153,"pc", false,-1, 31,0);
    tracep->declBus(c+90,"dnpc", false,-1, 31,0);
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->declBus(c+13,"rd", false,-1, 11,7);
    tracep->declBus(c+14,"funct3", false,-1, 14,12);
    tracep->declBus(c+15,"rs1", false,-1, 19,15);
    tracep->declBus(c+16,"rs2", false,-1, 24,20);
    tracep->declBus(c+17,"funct7", false,-1, 31,25);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+19,"csr_imm", false,-1, 31,0);
    tracep->declBus(c+91,"wdata", false,-1, 31,0);
    tracep->declBus(c+13,"waddr", false,-1, 4,0);
    tracep->declBus(c+15,"raddr1", false,-1, 4,0);
    tracep->declBus(c+16,"raddr2", false,-1, 4,0);
    tracep->declBus(c+155,"snpc", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->declBus(c+99,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+100,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+27,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+29,"m_wen", false,-1);
    tracep->declBus(c+102,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+28,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+30,"m_ren", false,-1);
    tracep->declBus(c+101,"m_rdata", false,-1, 31,0);
    tracep->declBus(c+95,"csr_rout", false,-1, 31,0);
    tracep->declBus(c+109,"csr_a5", false,-1, 31,0);
    tracep->declBus(c+94,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+21,"csr_waddr", false,-1, 1,0);
    tracep->declBus(c+22,"csr_raddr", false,-1, 1,0);
    tracep->declBus(c+110,"csrr_mepc", false,-1, 31,0);
    tracep->declBus(c+112,"csrr_mtvec", false,-1, 31,0);
    tracep->declBus(c+111,"csrr_mstatus", false,-1, 31,0);
    tracep->declBus(c+97,"csr_mepc_wdata", false,-1, 31,0);
    tracep->declBus(c+96,"csr_mcause_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"csr_mstatus_wdata", false,-1, 31,0);
    tracep->declBit(c+24,"csr_mepc_wen", false,-1);
    tracep->declBit(c+25,"csr_mcause_wen", false,-1);
    tracep->declBit(c+26,"csr_mstatus_wen", false,-1);
    tracep->declBit(c+23,"csr_wen", false,-1);
    tracep->declBus(c+31,"csr_flag", false,-1, 1,0);
    tracep->pushNamePrefix("ALU_init ");
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->declBus(c+14,"funct3", false,-1, 14,12);
    tracep->declBus(c+17,"funct7", false,-1, 31,25);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+92,"rout1", false,-1, 31,0);
    tracep->declBus(c+93,"rout2", false,-1, 31,0);
    tracep->declBus(c+109,"csr_a5", false,-1, 31,0);
    tracep->declBus(c+110,"csrr_mepc", false,-1, 31,0);
    tracep->declBus(c+111,"csrr_mstatus", false,-1, 31,0);
    tracep->declBus(c+112,"csrr_mtvec", false,-1, 31,0);
    tracep->declBus(c+95,"csr_rout", false,-1, 31,0);
    tracep->declBus(c+153,"pc", false,-1, 31,0);
    tracep->declBus(c+155,"snpc", false,-1, 31,0);
    tracep->declBus(c+90,"dnpc", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->declBit(c+23,"csr_wen", false,-1);
    tracep->declBit(c+24,"csr_mepc_wen", false,-1);
    tracep->declBit(c+25,"csr_mcause_wen", false,-1);
    tracep->declBit(c+26,"csr_mstatus_wen", false,-1);
    tracep->declBus(c+97,"csr_mepc_wdata", false,-1, 31,0);
    tracep->declBus(c+96,"csr_mcause_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"csr_mstatus_wdata", false,-1, 31,0);
    tracep->declBus(c+91,"wdata", false,-1, 31,0);
    tracep->declBus(c+94,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+99,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+100,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+27,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+29,"m_wen", false,-1);
    tracep->declBus(c+102,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+28,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+30,"m_ren", false,-1);
    tracep->declBus(c+31,"csr_flag", false,-1, 1,0);
    tracep->declBus(c+101,"m_rdata", false,-1, 31,0);
    tracep->declBit(c+103,"cond_beq", false,-1);
    tracep->declBit(c+104,"cond_bge", false,-1);
    tracep->declBit(c+105,"cond_bgeu", false,-1);
    tracep->declBus(c+92,"src1", false,-1, 31,0);
    tracep->declBus(c+93,"src2", false,-1, 31,0);
    tracep->declBus(c+95,"csr", false,-1, 31,0);
    tracep->declBus(c+113,"shifted_mstatus", false,-1, 31,0);
    tracep->declBus(c+114,"mstatus", false,-1, 31,0);
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
    tracep->declBus(c+19,"csr_imm", false,-1, 31,0);
    tracep->declBit(c+154,"inv_flag", false,-1);
    tracep->pushNamePrefix("typeMux ");
    tracep->declBus(c+156,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+157,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+158,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+32,"out", false,-1, 32,0);
    tracep->declBus(c+12,"key", false,-1, 6,0);
    tracep->declQuad(c+159,"default_out", false,-1, 32,0);
    tracep->declArray(c+34,"lut", false,-1, 399,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+156,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+157,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+158,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+161,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+32,"out", false,-1, 32,0);
    tracep->declBus(c+12,"key", false,-1, 6,0);
    tracep->declQuad(c+159,"default_out", false,-1, 32,0);
    tracep->declArray(c+34,"lut", false,-1, 399,0);
    tracep->declBus(c+162,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declQuad(c+47+i*2,"pair_list", true,(i+0), 39,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declQuad(c+67+i*2,"data_list", true,(i+0), 32,0);
    }
    tracep->declQuad(c+87,"lut_out", false,-1, 32,0);
    tracep->declBit(c+89,"hit", false,-1);
    tracep->declBus(c+163,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("init_IFU ");
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBus(c+153,"pc", false,-1, 31,0);
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("init_mem ");
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBus(c+99,"m_waddr", false,-1, 31,0);
    tracep->declBus(c+100,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+27,"m_wmask", false,-1, 31,0);
    tracep->declBit(c+29,"m_wen", false,-1);
    tracep->declBus(c+102,"m_raddr", false,-1, 31,0);
    tracep->declBus(c+28,"m_rmask", false,-1, 31,0);
    tracep->declBit(c+30,"m_ren", false,-1);
    tracep->declBus(c+101,"m_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_renew ");
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+155,"snpc", false,-1, 31,0);
    tracep->declBus(c+90,"dnpc", false,-1, 31,0);
    tracep->declBus(c+153,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("renew_pc ");
    tracep->declBus(c+164,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+165,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBit(c+151,"rst", false,-1);
    tracep->declBus(c+90,"din", false,-1, 31,0);
    tracep->declBus(c+153,"dout", false,-1, 31,0);
    tracep->declBit(c+166,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_$0 ");
    tracep->declBus(c+167,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+164,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+152,"clk", false,-1);
    tracep->declBus(c+91,"wdata", false,-1, 31,0);
    tracep->declBus(c+13,"waddr", false,-1, 4,0);
    tracep->declBus(c+21,"csr_waddr", false,-1, 1,0);
    tracep->declBus(c+94,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+106,"csr_mcause_wdata", false,-1, 4,0);
    tracep->declBus(c+107,"csr_mepc_wdata", false,-1, 4,0);
    tracep->declBus(c+108,"csr_mstatus_wdata", false,-1, 4,0);
    tracep->declBus(c+22,"csr_raddr", false,-1, 1,0);
    tracep->declBus(c+15,"raddr1", false,-1, 4,0);
    tracep->declBus(c+16,"raddr2", false,-1, 4,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->declBit(c+23,"csr_wen", false,-1);
    tracep->declBit(c+25,"csr_mcause_wen", false,-1);
    tracep->declBit(c+24,"csr_mepc_wen", false,-1);
    tracep->declBit(c+26,"csrr_mstatus_wen", false,-1);
    tracep->declBus(c+92,"rout1", false,-1, 31,0);
    tracep->declBus(c+93,"rout2", false,-1, 31,0);
    tracep->declBus(c+109,"csr_a5", false,-1, 31,0);
    tracep->declBus(c+112,"csrr_mtvec", false,-1, 31,0);
    tracep->declBus(c+110,"csrr_mepc", false,-1, 31,0);
    tracep->declBus(c+111,"csrr_mstatus", false,-1, 31,0);
    tracep->declBus(c+95,"csr_rout", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+115+i*1,"rf", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+147+i*1,"csr", true,(i+0), 31,0);
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
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060111_top__DOT__csr_imm),32);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_23060111_top__DOT__wen));
    bufp->fullCData(oldp+21,(vlSelf->ysyx_23060111_top__DOT__csr_waddr),2);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_23060111_top__DOT__csr_raddr),2);
    bufp->fullBit(oldp+23,(vlSelf->ysyx_23060111_top__DOT__csr_wen));
    bufp->fullBit(oldp+24,(vlSelf->ysyx_23060111_top__DOT__csr_mepc_wen));
    bufp->fullBit(oldp+25,(vlSelf->ysyx_23060111_top__DOT__csr_mcause_wen));
    bufp->fullBit(oldp+26,(vlSelf->ysyx_23060111_top__DOT__csr_mstatus_wen));
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060111_top__DOT__m_wmask),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060111_top__DOT__m_rmask),32);
    bufp->fullBit(oldp+29,(vlSelf->ysyx_23060111_top__DOT__m_wen));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_23060111_top__DOT__m_ren));
    bufp->fullCData(oldp+31,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__csr_flag),2);
    bufp->fullQData(oldp+32,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellout__typeMux____pinNumber1),33);
    bufp->fullWData(oldp+34,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT____Vcellinp__typeMux____pinNumber4),400);
    bufp->fullQData(oldp+47,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+49,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullQData(oldp+51,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[2]),40);
    bufp->fullQData(oldp+53,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[3]),40);
    bufp->fullQData(oldp+55,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[4]),40);
    bufp->fullQData(oldp+57,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[5]),40);
    bufp->fullQData(oldp+59,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[6]),40);
    bufp->fullQData(oldp+61,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[7]),40);
    bufp->fullQData(oldp+63,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[8]),40);
    bufp->fullQData(oldp+65,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__pair_list[9]),40);
    bufp->fullQData(oldp+67,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[0]),33);
    bufp->fullQData(oldp+69,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[1]),33);
    bufp->fullQData(oldp+71,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[2]),33);
    bufp->fullQData(oldp+73,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[3]),33);
    bufp->fullQData(oldp+75,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[4]),33);
    bufp->fullQData(oldp+77,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[5]),33);
    bufp->fullQData(oldp+79,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[6]),33);
    bufp->fullQData(oldp+81,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[7]),33);
    bufp->fullQData(oldp+83,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[8]),33);
    bufp->fullQData(oldp+85,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__data_list[9]),33);
    bufp->fullQData(oldp+87,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__lut_out),33);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_23060111_top__DOT__init_IDU__DOT__typeMux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+90,(vlSelf->ysyx_23060111_top__DOT__dnpc),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_23060111_top__DOT__wdata),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_23060111_top__DOT__rout1),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_23060111_top__DOT__rout2),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_23060111_top__DOT__csr_wdata),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_23060111_top__DOT__csr_rout),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_23060111_top__DOT__csr_mcause_wdata),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_23060111_top__DOT__csr_mepc_wdata),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_23060111_top__DOT__csr_mstatus_wdata),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_23060111_top__DOT__m_waddr),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_23060111_top__DOT__m_wdata),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_23060111_top__DOT__m_rdata),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_23060111_top__DOT__m_raddr),32);
    bufp->fullBit(oldp+103,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_beq));
    bufp->fullBit(oldp+104,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bge));
    bufp->fullBit(oldp+105,(vlSelf->ysyx_23060111_top__DOT__init_EXU__DOT__ALU_init__DOT__cond_bgeu));
    bufp->fullCData(oldp+106,((0x1fU & vlSelf->ysyx_23060111_top__DOT__csr_mcause_wdata)),5);
    bufp->fullCData(oldp+107,((0x1fU & vlSelf->ysyx_23060111_top__DOT__csr_mepc_wdata)),5);
    bufp->fullCData(oldp+108,((0x1fU & vlSelf->ysyx_23060111_top__DOT__csr_mstatus_wdata)),5);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf
                              [0xfU]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                              [0U]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                              [2U]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                              [3U]),32);
    bufp->fullIData(oldp+113,((0x80U | (8U & (vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                              [2U] 
                                              >> 4U)))),32);
    bufp->fullIData(oldp+114,((0x80U | (vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                        [2U] | (8U 
                                                & (vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr
                                                   [2U] 
                                                   >> 4U))))),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[1]),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[2]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[3]),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[4]),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[5]),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[6]),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[7]),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[8]),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[9]),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[10]),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[11]),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[12]),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[13]),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[14]),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[15]),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[16]),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[17]),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[18]),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[19]),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[20]),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[21]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[22]),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[23]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[24]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[25]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[26]),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[27]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[28]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[29]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[30]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__rf[31]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[0]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[1]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[2]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_23060111_top__DOT__reg___0240__DOT__csr[3]),32);
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
