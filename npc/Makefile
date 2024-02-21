
Vfile=$(wildcard ./vsrc/*.v)
Cfile=$(wildcard ./csrc/*.cpp)
Cfile +=$(shell find -L ./csrc -name "*.c")
Wavefile=$(wildcard ./*.vcd)
TOPfile=vsrc/ysyx_23060111_top.v
TOPname=ysyx_23060111_top

#init
IMG ?= 
VLTFLAGS =-Wall --cc --trace --exe --build -Wno-lint -top\
 $(TOPname) $(TOPfile) $(subst $(TOPfile),,$^) 

RUN_FLAGS = $(IMG)

INC_PATH = $(HOME)/ysyx-workbench/npc/include
VLTFLAGS += -CFLAGS -I$(INC_PATH) 

NPC_SIM_RUN = ./obj_dir/V$(basename $(subst vsrc/,,$(TOPfile))) 
NPC_GDB_RUN = obj_dir/V$(basename $(subst vsrc/,,$(TOPfile))) 

#logfile
NPC_LOG = ./npc-log.txt
RUN_FLAGS +=  $(NPC_LOG)

-include config.mk

#ftrace
ifdef CONFIG_FTRACE
ELF =$(IMG:.bin=.elf)
RUN_FLAGS += $(ELF)
endif

#itrace llvm--反汇编
ifdef CONFIG_ITRACE
Cfile += csrc/utils/disasm.cc
VLTFLAGS += -CFLAGS -I/usr/lib/llvm-14/include -CFLAGS -std=c++17\
  -CFLAGS -fno-exceptions  -CFLAGS -fPIE -LDFLAGS -lLLVM-14
VLTFLAGS += -LDFLAGS -lreadline
endif

#difftest  链接nemu-so动态库
ifdef CONFIG_DIFFTEST
LIB_PATH = $(HOME)/ysyx-workbench/nemu/build/
LIB = $(HOME)/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
VLTFLAGS +=  -CFLAGS -L$(LIB_PATH) -CFLAGS -lriscv32-nemu-interpreter-so
RUN_FLAGS += $(LIB)
NPC_SIM_RUN := LD_PRELOAD=/usr/lib/gcc/x86_64-linux-gnu/11/libasan.so $(NPC_SIM_RUN)
NPC_GDB_RUN := -ex 'set env LD_PRELOAD /usr/lib/gcc/x86_64-linux-gnu/11/libasan.so' 
endif
#gdb
NPC_GDB = -CFLAGS -g 


all:
	@echo "Write this Makefile by your self."

#  create the  Makefile config.mk 
CONFIG: ./include/config.h 
	@sed -e 's/^#define \(.*\) \(.*\)/\1=\2/' -e '/^#\(.*\)/d' -e '/^\/\(.*\)/d' -e '/^_\(.*\)/d' ./include/config.h > ./config.mk


sim:$(Vfile) $(Cfile) $(TOPfile) 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator $(VLTFLAGS) 
	$(NPC_SIM_RUN) $(RUN_FLAGS)
	@ctags -R -u

gdb:$(Vfile) $(Cfile) $(TOPfile) 
	verilator $(VLTFLAGS) $(NPC_GDB) 
	gdb $(NPC_GDB_RUN) $(RUN_FLAGS)
	@ctags -R -u

wave:$(Wavefile)
	gtkwave $(Wavefile)

lint:$(Vfile)
	verilator --lint-only $(Vfile)

.PHONY:clean
clean:
	rm -rf obj_dir wave.vcd
	rm -rf $(BUILD_DIR)
	rm -rf $(NPC_LOG)
include ../Makefile
