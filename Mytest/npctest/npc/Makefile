Vfile=$(wildcard ./vsrc/*.v)
Cfile=$(wildcard ./csrc/*.cpp)
Wavefile=$(wildcard ./*.vcd)
TOPfile=vsrc/ysyx_23060111_top.v


#nvboard
TOPNAME = top
NXDC_FILES = ~/ysyx-workbench/nvboard/example/constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: $(BIN)
	@$^
all:
	@echo "Write this Makefile by your self."

sim:$(Vfile) $(Cfile) $(TOPfile)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	verilator -Wall --cc --trace --exe --build $(TOPfile) $(subst $(TOPfile),,$^)
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
