
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

#ftrace
ELF =$(IMG:.bin=.elf)
RUN_FLAGS += $(ELF)

#itrace
Cfile += csrc/utils/disasm.cc
VLTFLAGS += -CFLAGS -I/usr/lib/llvm-14/include -CFLAGS -std=c++17\
  -CFLAGS -fno-exceptions  -CFLAGS -fPIE -LDFLAGS -lLLVM-14
VLTFLAGS += -LDFLAGS -lreadline

#difftest
LIB_PATH = $(HOME)/ysyx-workbench/nemu/build/
LIB = $(HOME)/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
VLTFLAGS +=  -CFLAGS -L$(LIB_PATH) -CFLAGS -lriscv32-nemu-interpreter-so
RUN_FLAGS += $(LIB)
NPC_SIM_RUN := LD_PRELOAD=/usr/lib/gcc/x86_64-linux-gnu/11/libasan.so $(NPC_SIM_RUN)
NPC_GDB_RUN := -ex 'set env LD_PRELOAD /usr/lib/gcc/x86_64-linux-gnu/11/libasan.so' 
#gdb
NPC_GDB = -CFLAGS -g 


CONFIG: ./include/config.h
	@touch config.mk
	@sed 's/^#define \(.*\) \(.*\)/\1=\2/' ./include/config.h >./config.mk
all:
	@echo "Write this Makefile by your self."

sim:$(Vfile) $(Cfile) $(TOPfile) $(CONFIG) 
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
