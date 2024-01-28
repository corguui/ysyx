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

