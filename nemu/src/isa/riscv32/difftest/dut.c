/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int num=MUXDEF(CONFIG_RVE,16,32);
  for(int i=0;i<num;i++)
  {
  	if(ref_r->gpr[i]!=cpu.gpr[i])
	{
    printf("the No:%d nemu.gpr0x%x\n         spik.gpr0x%x\n",i+1,cpu.gpr[i],ref_r->gpr[i]);
		return false;
	}
  }
 
/*
  if(cpu.csr.mcause!=0xb)
	{
    printf("the nemu.csr.mcause0x%x\n         spik.csr.mcause0x%x\n",cpu.csr.mcause,ref_r->csr.mcause);
		return false;
	}
  if(ref_r->csr.mepc!=cpu.csr.mepc)
	{
    printf("the nemu.csr.mepc0x%x\n         spik.csr.mepc0x%x\n",cpu.csr.mepc,ref_r->csr.mepc);
		return false;
	}
  if(ref_r->csr.mstatus!=cpu.csr.mstatus)
	{
    printf("the nemu.csr.mstatus0x%x\n         spik.csr.mstatus0x%x\n",cpu.csr.mstatus,ref_r->csr.mstatus);
		return false;
	} 
  if(ref_r->csr.mtvec!=cpu.csr.mtvec)
	{
    printf("the nemu.csr.mtvec0x%x\n         spik.csr.mtvec0x%x\n",cpu.csr.mtvec,ref_r->csr.mtvec);
		return false;
	} 
*/

  if(ref_r->pc!=cpu.pc)
  {
    printf("nemu-pc0x%x\nspik-pc0x%x\n",pc,ref_r->pc);
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
