Vfile=$(wildcard ./vsrc/*.v)
Cfile=$(wildcard ./csrc/*.cpp)
Cfile +=$(shell find -L ./csrc -name "*.c")
Wavefile=$(wildcard ./*.vcd)
TOPfile=vsrc/ysyx_23060111_top.v
TOPname=ysyx_23060111_top

IMG ?= 

ifneq ($(CONFIG_ITRACE)$(CONFIG_IQUEUE),)
Cfile += csrc/utils/disasm.cc
CFLAGS = $(shell llvm-config --cxxflags) -fPIE
LIBS = $(shell llvm-config --libs)                                           
endif



INC_PATH = $(HOME)/ysyx-workbench/npc/include
all:
	@echo "Write this Makefile by your self."

sim:$(Vfile) $(Cfile) $(TOPfile) 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --cc --trace --exe --build -Wno-lint -top $(TOPname) $(TOPfile) $(subst $(TOPfile),,$^) -CFLAGS -I$(INC_PATH) -CFLAGS -DIMG='\"$(IMG)\"' -LDFLAGS -lreadline -LDFLAGS $(CFLAGS) -LDFLAGS $(LIBS) 
	./obj_dir/V$(basename $(subst vsrc/,,$(TOPfile))) 
wave:$(Wavefile)
	gtkwave $(Wavefile)
lint:$(Vfile)
	verilator --lint-only $(Vfile)





.PHONY:clean
clean:
	rm -rf obj_dir wave.vcd
	rm -rf $(BUILD_DIR)
include ../Makefile
