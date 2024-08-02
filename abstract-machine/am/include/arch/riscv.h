#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
#ifdef __riscv_e
  uintptr_t  gpr[16], mcause, mstatus, mepc;
  void *pdir;
#else
  uintptr_t  gpr[32], mcause, mstatus, mepc;
  void *pdir;

#endif
   
};

#ifdef __riscv_e
#define GPR1 gpr[15] // a5
#else
#define GPR1 gpr[17] // a7

#endif



#endif
