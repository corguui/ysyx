// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_23060111_TOP__DPI_H_
#define VERILATED_VYSYX_23060111_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/ysyx_23060111_IDU.v:1:30
    extern void ebreak(int inst);
    // DPI import at vsrc/ysyx_23060111_IFU.v:1:29
    extern int vlg_pc_read(int pc);
    // DPI import at vsrc/ysyx_23060111_mem.v:1:29
    extern int vlg_pmem_read(int m_raddr, int rmask);
    // DPI import at vsrc/ysyx_23060111_mem.v:2:30
    extern void vlg_pmem_write(int waddr, int wdata, int wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
