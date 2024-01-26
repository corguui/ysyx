#include <common.h>
#include <stdio.h>
#include <string.h>

void init_mem();
void init_log();
extern "C" void init_disasm(const char *triple);

void init_monitor() {

        init_log();

	init_mem();

	init_disasm("riscv32");
}
