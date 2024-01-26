#include <cpu/cpu.h>
#include <cstdint>
#include <cpu/decode.h>

static bool g_print_step = false;  

static void trace_and_difftest(Decode *_this) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  //IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

#ifdef CONFIG_CC_WATCHPOINT

  if(check_wp()!=true)
  {
  npc_state.state=NPC_STOP;
  printf("error the npc stop\n");
  return ;
  }
#endif
}



void cpu_init()
{
	top->rst=1;
	top->clk =0; top->eval();
	tfp->dump(main_time);
	main_time++;
	top->eval();
	top->clk =1; top->eval();
	top->rst=0;
	tfp->dump(main_time);
	main_time++;
	top->eval();

	
}
void cpu_exec_once(VerilatedVcdC* tfp,Decode *s)
{

		top->clk =0; top->eval();
		top->inst =pc_read(top->pc);
		s->isa.inst.val=top->inst;
		s->pc=top->pc;
		tfp->dump(main_time);
		main_time++;
		top->eval();
		top->clk =1; top->eval();
		tfp->dump(main_time);
		main_time++;
		top->eval();

#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf),  "0x%x:", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }

  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  p[0] = '\0'; // the upstream llvm does not support loongarch32r
#endif

}

static void execute(uint64_t n)
{
	Decode s;
	for(;n>0;n--)
	{
		cpu_exec_once(tfp,&s);
		trace_and_difftest(&s); 
		if(npc_state.state !=NPC_RUNNING) break;
	}
}

void cpu_exec(uint64_t n)
{
   switch (npc_state.state) {
     case NPC_END: case NPC_ABORT:
       printf("Program execution has ended. To restart the program, exit npc and run again.\n");
       return;
     default: npc_state.state = NPC_RUNNING;
}                                                                           
	execute(n);
   switch(npc_state.state){
     case NPC_RUNNING: npc_state.state =NPC_STOP;break;

     case NPC_END: case NPC_ABORT:
     /*
     printf("npc: %s at pc = 0x%x\n",
     (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :        ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED)))  ,top->pc);  
     */

      Log("npc: %s at pc = 0x%x",
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :  ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))), top->pc);
     }

}


