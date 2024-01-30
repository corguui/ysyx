#include <cpu/cpu.h>
#include <cstdint>
#include <cpu/decode.h>
#include<common.h>
#include <sched.h>
#include <sdb.h>
#include <stdio.h>
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code,int nbyte);

#ifdef CONFIG_FTRACE
#include <monitor.h>
extern FUN *symbol;
extern int func_num;
int space_num=-1;
int space_flat=0;
#endif


//ringbuf val
#ifdef CONFIG_ITRACE
#define BUF_LEN 18
#define NEXT_POS(x) ((x+1)%BUF_LEN)
char ringbuf[BUF_LEN][128];
int w=0;//ringbuf's write flag
void iringbuf_put_char(char *p);
void print_ringbuf();
#endif

NPC_CPU_state cpu{};
static bool g_print_step = false;  

void cpu_read_reg()
{
	cpu.pc=top->pc;
	for(int i=0;i<32;i++)
	{
		cpu.gpr[i]=top->rootp->ysyx_23060111_top__DOT__reg___0240__DOT__rf[i];
	}

}
void cpu_write_reg()
{
	top->pc=cpu.pc;
	for(int i=0;i<32;i++)
	{
		top->rootp->ysyx_23060111_top__DOT__reg___0240__DOT__rf[i]=cpu.gpr[i];
	}
}

#ifdef CONFIG_DIFFTEST
void difftest_step(uint32_t pc, uint32_t npc);
#endif

static void trace_and_difftest(Decode *_this) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  //IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

//watchpoint
  if(check_wp()!=true)
  {
  npc_state.state=NPC_STOP;
  printf("error the npc stop\n");
  return ;
  }
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
		s->pc=top->pc;
		top->inst =pc_read(top->pc);
		s->inst=top->inst;
		tfp->dump(main_time);
		main_time++;
		top->eval();
		top->clk =1; top->eval();
		tfp->dump(main_time);
		main_time++;
    	s->dnpc=top->rootp->ysyx_23060111_top__DOT__dnpc;
		top->eval();




#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf),  "0x%x:", s->pc);
 int ilen = 0x4;
  int i;
  uint8_t *inst = (uint8_t *)&s->inst;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }

  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  #ifdef CONFIG_ITRACE
  //itrace the wrong instruct
  iringbuf_put_char(s->logbuf);
  #endif
  //p[0] = '\0'; // the upstream llvm does not support loongarch32r
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,s->pc, (uint8_t *)&s->inst, ilen);
#endif

#ifdef CONFIG_FTRACE
  char ar[]="jal";//read the jal and jalr
  char ar1[]="jalr";
  char ar2[]="00 00 80 67";//funbuf 0x8--------: 00 00 80 67 jalr  ..... the ret is 80 67
  //00 07 80 67 jr mean call to but no printf the ret//in f1 have jr call to f0 the f1 no ret
  char *q = s->funbuf;
  q += snprintf(q, sizeof(s->funbuf), "0x%x:", s->pc);
  int funlen = 0x4;
  int j;
  uint8_t *funinst = (uint8_t *)&s->inst;
  for (j = funlen - 1; j >= 0; j --) {
    q += snprintf(q, 4, " %02x", funinst[j]);
  }

  int funlen_max = 4;
  int fspace_len = funlen_max - funlen;
  if (fspace_len < 0) fspace_len = 0;
  fspace_len = fspace_len * 3 + 1;
  memset(q, ' ', fspace_len);
  q += fspace_len;
  disassemble(q, s->funbuf + sizeof(s->funbuf) - q,s->pc, (uint8_t *)&s->inst, funlen);
if(strncmp(s->funbuf+24,ar,3)==0)
 {
 	int flat_ret=0;
	int f,g;
 	for(g=0;g<func_num;g++)
	{
		if(s->dnpc>=symbol[g].value&&s->dnpc<symbol[g].value+symbol[g].size)//read the next pc
		{
		   if(strncmp(s->funbuf+24,ar1,4)==0&&strncmp(s->funbuf+12,ar2,5)==0)//ret or not ret 
		   {
		   for(f=0;f<func_num;f++)
		   {
		       if(s->pc>=symbol[f].value&&s->pc<symbol[f].size+symbol[f].value)	
		       {
		          flat_ret=1;
			  break;
		       }
		   }
		   }
		   if(flat_ret==1)//ret
		   {
		     if(space_flat==1)
		     {
		     	space_num--;
		     }
		     printf("0x%x:",s->pc);
		     printf("---num: %d   ret [fun:%s  @%x]\n",space_num,symbol[f].name,symbol[f].value); 
		     space_flat=1;
		     break;
		   }
		   else if(flat_ret==0)//call
		   {
		     if(space_flat==0)
		     {
		     	space_num++;
		     }
		     printf("0x%x:",s->pc);
		     printf("---num: %d  call [fun:%s  @%x]\n",space_num,symbol[g].name,symbol[g].value);
			space_flat=0;
			break;
		   }
		}
		else if(g==func_num-1)
		{
			Log("error no funcion error\n");
      
			
		}
	}
 }
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

      Log("npc: %s at pc = 0x%x",
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :  ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))), top->pc);

      #ifdef CONFIG_ITRACE
	    //print the ringbuf
	    if(npc_state.halt_ret !=0)
	    print_ringbuf();
	    else if(npc_state.state==NPC_ABORT)
	    print_ringbuf();
	    #endif
    }


}

#ifdef CONFIG_ITRACE
void iringbuf_put_char(char *p)
{
		int n=sizeof(ringbuf[w]);
		memset(ringbuf[w],'\0',n);
		strcpy(ringbuf[w],p);
		w=NEXT_POS(w);

}

void print_ringbuf(){
	for(int num=0;num<BUF_LEN;num++)
		{
			if((num!=w-1)&&(ringbuf[num]!=NULL))
			printf("    %s\n",ringbuf[num]);
			else
			printf("--> %s\n",ringbuf[num]);
		}

}
#endif
