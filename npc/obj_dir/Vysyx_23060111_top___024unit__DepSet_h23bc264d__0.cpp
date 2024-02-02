// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060111_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060111_top__Syms.h"
#include "Vysyx_23060111_top___024unit.h"

extern "C" void ebreak(int inst);

VL_INLINE_OPT void Vysyx_23060111_top___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_23060111_top___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    ebreak(inst__Vcvt);
}

extern "C" int vlg_pmem_read(int pc, int flag);

VL_INLINE_OPT void Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ flag, IData/*31:0*/ &vlg_pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_read_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int flag__Vcvt;
    for (size_t flag__Vidx = 0; flag__Vidx < 1; ++flag__Vidx) flag__Vcvt = flag;
    int vlg_pmem_read__Vfuncrtn__Vcvt;
    vlg_pmem_read__Vfuncrtn__Vcvt = vlg_pmem_read(pc__Vcvt, flag__Vcvt);
    vlg_pmem_read__Vfuncrtn = vlg_pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void vlg_pmem_write(int waddr, int wdata, int wmask);

VL_INLINE_OPT void Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_23060111_top___024unit____Vdpiimwrap_vlg_pmem_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    int wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    vlg_pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}
