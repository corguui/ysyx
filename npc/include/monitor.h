#ifndef __MONITOR_H
#define __MONITOR_H
#include<common.h>

#ifdef CONFIG_FTRACE
typedef struct function
{
           uint32_t value;
           int      size;
           char     name[128];
 }FUN;
  
#endif

#endif
