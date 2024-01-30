
Vfile=$(wildcard ./vsrc/*.v)
Cfile=$(wildcard ./csrc/*.cpp)
Cfile +=$(shell find -L ./csrc -name "*.c")
Wavefile=$(wildcard ./*.vcd)
TOPfile=vsrc/ysyx_23060111_top.v
TOPname=ysyx_23060111_top

IMG ?= 
ELF =$(IMG:.bin=.elf)
Cfile += csrc/utils/disasm.cc
LLVM = -CFLAGS -I/usr/lib/llvm-14/include -CFLAGS -std=c++17  -CFLAGS -fno-exceptions  -CFLAGS -fPIE -LDFLAGS -lLLVM-14

READLINE = -LDFLAGS -lreadline

LIB_PATH = $(HOME)/ysyx-workbench/nemu/build/
LIB = $(HOME)/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so
NPC_LIB =  -CFLAGS -L$(LIB_PATH) -CFLAGS -lriscv32-nemu-interpreter-so -CFLAGS -DDIFF='\"$(LIB)\"'


INC_PATH = $(HOME)/ysyx-workbench/npc/include
NPC_INC = -CFLAGS -I$(INC_PATH) 
NPC_DEF = -CFLAGS -DIMG='\"$(IMG)\"' -CFLAGS -DELF='\"$(ELF)\"'
NPC_GDB = -CFLAGS -g 

all:
	@echo "Write this Makefile by your self."
sim:$(Vfile) $(Cfile) $(TOPfile) 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --cc --trace --exe --build -Wno-lint -top $(TOPname) $(TOPfile) $(subst $(TOPfile),,$^) $(NPC_INC) $(NPC_DEF)  $(READLINE) $(LLVM) $(NPC_LIB)
	export LD_LIBRARY_PATH=$(LIB_PATH)
	./obj_dir/V$(basename $(subst vsrc/,,$(TOPfile))) 
	@ctags -R -u

gdb:$(Vfile) $(Cfile) $(TOPfile) 
	verilator -Wall --cc --trace --exe --build -Wno-lint -top $(TOPname) $(TOPfile) $(subst $(TOPfile),,$^) $(NPC_INC) $(NPC_DEF) $(READLINE) $(LLVM) $(NPC_GDB) $(NPC_LIB)
	gdb obj_dir/V$(basename $(subst vsrc/,,$(TOPfile))) 
	export LD_LIBRARY_PATH=$(LIB_PATH)
	@ctags -R -u

wave:$(Wavefile)
	gtkwave $(Wavefile)
lint:$(Vfile)
	verilator --lint-only $(Vfile)

.PHONY:clean
clean:
	rm -rf obj_dir wave.vcd
	rm -rf $(BUILD_DIR)
include ../Makefile
