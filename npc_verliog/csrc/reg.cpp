#include <common.h>
#include <cpu/cpu.h>


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
void isa_reg_display() {
	int length=32;
	int i;
  cpu_read_reg();
  printf("$ pc --> 0x%x \n",cpu.pc);
	for(i=0;i<length;i++)
	{
	//printf("$%3s --> 0x%x \n", regs[i],top->rootp->ysyx_23060111_top__DOT__reg___0240__DOT__rf[i]);
  printf("$%3s --> 0x%x \n", regs[i],cpu.gpr[i]);
	}
  printf ("$mepc --> 0x%x \n",cpu.csr[0]);
  printf("$mcause --> 0x%x \n",cpu.csr[1]);
  printf("$mstatus --> 0x%x \n",cpu.csr[2]);
  printf("$mtvec --> 0x%x \n",cpu.csr[3]);
}

uint32_t isa_reg_str2val(const char *s, bool *success) {
  cpu_read_reg();
  if (!strcmp(s, "$0")) {
    //return top->rootp->ysyx_23060111_top__DOT__reg___0240__DOT__rf[0];
    return cpu.gpr[0];

	}
  if (!strcmp(s, "$pc")) {
    //return top->pc;
    return cpu.pc;
  }
  for (int i = 1; i < 32; i++) {
    if (!strcmp(s+1, regs[i])) {
      //return top->rootp->ysyx_23060111_top__DOT__reg___0240__DOT__rf[i];
      return cpu.gpr[i];
    }
  }
  if (!strcmp(s, "$mepc")) {
    return cpu.csr[0];
  }
  if (!strcmp(s, "$mcause")) {
    return cpu.csr[1];
  }
  if (!strcmp(s, "$mstatus")) {
    return cpu.csr[2];
  }
  if (!strcmp(s, "$mtvec")) {
    return cpu.csr[3];
  }
  *success = true;
  return 0;
}
