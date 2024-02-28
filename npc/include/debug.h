#ifndef __DEBUG_H_
#define __DEBUG_H_

#include  <utils.h>
#include <stdio.h> 
#include <common.h>

#define Log(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)
#define Log_color(color,format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, color) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)
#endif
