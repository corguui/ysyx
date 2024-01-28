#include <common.h>
#include <cpu/cpu.h>
#include "Vysyx_23060111_top___024root.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
void isa_reg_display() {
	int length=32;
	int i;
	printf("$ pc --> 0x%x \n",top->pc);
	for(i=0;i<length;i++)
	{
	printf("$%3s --> 0x%x \n", regs[i],top->rootp->ysyx_23060111_top__DOT__reg___0240__DOT__rf[i]);
	}
}

uint32_t isa_reg_str2val(const char *s, bool *success) {
  if (!strcmp(s, "$0")) {
    return top->rootp->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0];
	}
  if (!strcmp(s, "$pc")) {
    return top->pc;
  }
  for (int i = 1; i < 32; i++) {
    if (!strcmp(s+1, regs[i])) {
      return top->rootp->ysyx_23060111_top__DOT__reg___0240__DOT__rf[i];

    }
  }
  *success = true;
  return 0;
}
