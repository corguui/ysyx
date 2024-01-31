/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v3.
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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#include <string.h>
#include <stdio.h>


__EXPORT void difftest_memcpy(uint32_t addr, void *buf, size_t n, bool direction) {
  uint8_t*NPC_buf=(uint8_t*)buf;
  if(direction==DIFFTEST_TO_DUT)
  {
    memcpy(NPC_buf,guest_to_host(addr), n );
  }
  else if(direction==DIFFTEST_TO_REF)
  {
    memcpy(guest_to_host(addr),NPC_buf, n );
  }
  else
  {
  printf("direction error\n");
  printf("please type DIFFTEST_TO_REF or DIFFTEST_TO_DUT");
  assert(0);
  }
}

__EXPORT void difftest_regcpy(void *dut,uint32_t *pc, bool direction) {
  uint32_t* gpr=(uint32_t*) dut;
  if(direction==DIFFTEST_TO_DUT)
  {
      *pc=cpu.pc;
    for(int i = 0;i<32;i++ )
    {
      gpr[i]=cpu.gpr[i];
    }
  }
  else if(direction==DIFFTEST_TO_REF)
  {
      cpu.pc=*pc;
    for(int i = 0;i<32;i++ )
    {
      cpu.gpr[i]=gpr[i];
    }
  }
  else
  {
  printf("direction error\n");
  printf("please type DIFFTEST_TO_REF or DIFFTEST_TO_DUT");
  assert(0);
  }
}

__EXPORT void difftest_exec(uint64_t n) {
   cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}