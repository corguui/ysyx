#include<stdio.h>
//#include"svdpi.h"

#include <cpu/cpu.h>
#include <sdb.h>
#include "Vysyx_23060111_top___024root.h"

VerilatedContext* contextp=NULL; 
Vysyx_23060111_top *top=NULL; 
VerilatedVcdC* tfp=NULL;

void init_monitor();
void init_mode();

int main_time=0;


int main(int argc ,char** argv, char** env)
{
	contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	top = new Vysyx_23060111_top{contextp};
	contextp->traceEverOn(true);
	tfp=new VerilatedVcdC;

	top->trace(tfp,0);
	tfp->open("wave.vcd");

	//init mode
	init_mode();

	//init_monitor
	init_monitor();

	sdb_mainloop();
	delete top;
	tfp->close();
	delete contextp;
	return is_exit_status_bad();
}
void ebreak (int inst)
{
	if(inst == 0x00100073 )
	{
	   NPCTRAP(top->rootp->ysyx_23060111_top__DOT__reg___0240__DOT__rf[10]);
	}
	if(inst!=0&&top->inv_flag==1)
	{
		INV();
	}
	else if(inst==0&&top->inv_flag==1)
	{
		top->inv_flag=0;
	}
}


