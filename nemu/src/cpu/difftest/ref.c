
__EXPORT void difftest_memcpy(uint32_t addr, void *buf, size_t n, bool direction) {
  if(direction==DIFFTEST_TO_DUT)
  {
    memcpy(buf,guest_to_host(addr), n );
  }
  else if(direction==DIFFTEST_TO_REF)
  {
    memcpy(guest_to_host(addr),buf, n );
  }
  else
  printf("direction error\n");
  printf("please type DIFFTEST_TO_REF or DIFFTEST_TO_DUT");
  assert(0);
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
  printf("direction error\n");
  printf("please type DIFFTEST_TO_REF or DIFFTEST_TO_DUT");
  assert(0);
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