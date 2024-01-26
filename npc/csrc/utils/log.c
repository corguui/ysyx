#include <common.h>

FILE *log_fp=NULL;

void init_log(){
   log_fp =stdout;
   Log("Log is written to stdout");
}
bool log_enable()
{
	return 1;
}
