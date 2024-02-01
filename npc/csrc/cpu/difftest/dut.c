#include <cstdio>
#include <dlfcn.h>
#include <cpu/cpu.h>
#include <mem.h>
#include <utils.h>

#ifdef CONFIG_DIFFTEST
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut,uint32_t*pc, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
void (*ref_difftest_init)(int port) = NULL;

void isa_reg_display();
static void checkregs(NPC_CPU_state *ref, uint32_t pc);
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

 *(void**)(&ref_difftest_memcpy) = dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  *(void**)(&ref_difftest_regcpy) = dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  *(void**)(&ref_difftest_exec) = dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  *(void**)(&ref_difftest_raise_intr) = dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  *(void**)(&ref_difftest_init) = dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(0x80000000, NPC_guest_to_host(0x80000000), img_size, DIFFTEST_TO_REF);
  cpu_read_reg();
  ref_difftest_regcpy(cpu.gpr,&cpu.pc, DIFFTEST_TO_REF);
}

void difftest_step(uint32_t pc, uint32_t npc) {
  NPC_CPU_state ref_r;

  ref_difftest_exec(1);
  ref_difftest_regcpy(ref_r.gpr,&ref_r.pc, DIFFTEST_TO_DUT);

  checkregs(&ref_r, npc);
}

bool isa_difftest_checkregs(NPC_CPU_state *ref_r, uint32_t pc) {
  int num=32;
  for(int i=0;i<num;i++)
  {
    cpu_read_reg();
  	if(ref_r->gpr[i]!=cpu.gpr[i])
	{
    printf("the No:%d npc-gpr:%x\n        nmeu-gpr:%x\n",i,cpu.gpr[i],ref_r->gpr[i]);
		return false;
	}
  }
  if(ref_r->pc!=pc)
  {
    printf(" npc-pc:%x\nnemu-pc%x\n",cpu.pc,ref_r->pc);
    return false;
  }
  return true;
}

static void checkregs(NPC_CPU_state *ref, uint32_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    isa_reg_display();
  }
}

#endif