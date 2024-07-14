#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t  gpr[32], mcause, mstatus, mepc;
  void *pdir;
};

#ifdef __riscv_e
#define GPR1 gpr[15] // a5
#else
#define GPR1 gpr[17] // a7

#endif

//#define GPR2 gpr[0]  //a0   //[0]
//#define GPR3 gpr[0]
//#define GPR4 gpr[0]
#define GPR2 gpr[12] // a2   //[0]
#define GPR3 gpr[13] // a3
#define GPR4 gpr[14] // a4
#define GPR5 gpr[15] // a5
#define GPRx gpr[0]

#endif
