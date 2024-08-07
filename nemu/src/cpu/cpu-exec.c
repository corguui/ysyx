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

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>

#include "../monitor/sdb/watchpoint.h"
#include "utils.h"

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

#ifdef CONFIG_FTRACE
#include "../monitor/monitor.h"
extern FUN *symbol;
extern int func_num;
int space_num=-1;
int space_flat=0;
int print_flat=0;
#endif

//ringbuf val
#define BUF_LEN 18
#define NEXT_POS(x) ((x+1)%BUF_LEN)
char ringbuf[BUF_LEN][128];
int w=0;//ringbuf's write flag
void iringbuf_put_char(char *p);
void print_ringbuf();

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
#ifdef CONFIG_FTRACE
  if (CONFIG_FTRACE&&print_flat==1) { print_flat=0; log_write("%s\n", _this->fun_printf_buf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

#ifdef CONFIG_CC_WATCHPOINT

  if(check_wp()!=true)
  {
  nemu_state.state=NEMU_STOP;
  printf("error the nemu stop\n");
  return ;
  }
#endif
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_FTRACE
  char ar[]="jal";//read the jal and jalr
  char ar1[]="jalr";
  char ar2[]="00 00 80 67";//funbuf 0x8--------: 00 00 80 67 jalr  ..... the ret is 80 67
  //00 07 80 67 jr mean call to but no printf the ret//in f1 have jr call to f0 the f1 no ret
  char *q = s->funbuf;
  char *pr= s->fun_printf_buf;
  q += snprintf(q, sizeof(s->funbuf), FMT_WORD ":", s->pc);
  int funlen = s->snpc - s->pc;
  int j;
  uint8_t *funinst = (uint8_t *)&s->isa.inst.val;
  for (j = funlen - 1; j >= 0; j --) {
    q += snprintf(q, 4, " %02x", funinst[j]);
  }

  int funlen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int fspace_len = funlen_max - funlen;
  if (fspace_len < 0) fspace_len = 0;
  fspace_len = fspace_len * 3 + 1;
  memset(q, ' ', fspace_len);
  q += fspace_len;


  #ifndef CONFIG_ISA_loongarch32r
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(q, s->funbuf + sizeof(s->funbuf) - q,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, funlen);
#else
  q[0] = '\0'; // the upstream llvm does not support loongarch32r
#endif
/*
if(pc!=0x80000000)
{
 printf("%s\n",s->funbuf);
}
*/
 //read jal and jalr
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
		     pr+=sprintf(pr,"0x%x:",s->pc);
		     pr+=sprintf(pr,"---num: %d   ret [fun:%s  @%x]\n",space_num,symbol[f].name,symbol[f].value); 
		     space_flat=1;
         print_flat=1;
		     break;
		   }
		   else if(flat_ret==0)//call
		   {
		     if(space_flat==0)
		     {
		     	space_num++;
		     }
		     pr+=sprintf(pr,"0x%x:",s->pc);
		     pr+=sprintf(pr,"---num: %d  call [fun:%s  @%x]\n",space_num,symbol[g].name,symbol[g].value);
			space_flat=0;
      print_flat=1;
			break;
		   }
		}

	}
  	if(g==func_num)
		{
      if(space_flat==1)
      {
        space_num--;
      }
      else {
        space_num++;
      }
			printf("error no funcion\nsrc/cpu/cpu-exec.c:166:error\n");
      log_write("error no funcion\nsrc/cpu/cpu-exec.c:166:error\n");
		}
 }
 
#endif

#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }

  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

#ifndef CONFIG_ISA_loongarch32r
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#else
  p[0] = '\0'; // the upstream llvm does not support loongarch32r
#endif
  //itrace the wrong instruct
  iringbuf_put_char(s->logbuf);
#endif
}



static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break; 
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);

	#ifdef CONFIG_ITRACE
	  //print the ringbuf
	  if(nemu_state.halt_ret !=0)
	  print_ringbuf();
	  else if(nemu_state.state==NEMU_ABORT)
	  print_ringbuf();
	#endif


      // fall through
    case NEMU_QUIT: statistic();

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
