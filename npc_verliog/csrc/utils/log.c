#include <common.h>

FILE *log_fp=NULL;

void init_log(char* log_file){
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    if(fp==NULL)
    {
    printf("Can not open '%s'", log_file);
    assert(1);
    }
    log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
}
bool log_enable()
{
	return 1;
}
