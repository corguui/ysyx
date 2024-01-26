#include <common.h>
#include <stdio.h>
#include <string.h>

void init_mem();
void init_log();

void init_monitor() {

        init_log();

	init_mem();
}
