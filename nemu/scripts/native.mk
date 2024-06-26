#***************************************************************************************
# Copyright (c) 2014-2022 Zihao Yu, Nanjing University
#
# NEMU is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#          http://license.coscl.org.cn/MulanPSL2
#
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
#
# See the Mulan PSL v2 for more details.
#**************************************************************************************/

-include $(NEMU_HOME)/../Makefile
include $(NEMU_HOME)/scripts/build.mk

include $(NEMU_HOME)/tools/difftest.mk

compile_git:
	$(call git_commit, "compile NEMU")
$(BINARY): compile_git

# Some convenient rules

override ARGS_RUN ?= --log=$(BUILD_DIR)/nemu-log.txt 
ifdef CONFIG_FTRACE
ELF_FILE=$(subst bin,elf,$(IMG))
override ARGS_RUN += $(ELF_FILE) 
override ARGS_GDB += $(ELF_FILE)
endif
override ARGS_GDB ?= --log=$(BUILD_DIR)/nemu-log.txt
override ARGS_RUN += $(ARGS_DIFF)
override ARGS_GDB += $(ARGS_DIFF)

# Command to execute NEMU
IMG ?=
NEMU_EXEC_GDB := $(BINARY) $(ARGS_GDB) $(IMG)
NEMU_EXEC_RUN := $(BINARY) $(ARGS_RUN) $(IMG)


run-env: $(BINARY) $(DIFF_REF_SO)

run: run-env
	$(call git_commit, "run NEMU")
	$(NEMU_EXEC_RUN)
	@ctags -R -u

gdb: run-env
	$(call git_commit, "gdb NEMU")
	gdb -s $(BINARY) --args $(NEMU_EXEC_GDB)
	@ctags -R -u


clean-tools = $(dir $(shell find ./tools -maxdepth 2 -mindepth 2 -name "Makefile"))
$(clean-tools):
	-@$(MAKE) -s -C $@ clean
clean-tools: $(clean-tools)
clean-all: clean distclean clean-tools

.PHONY: run gdb run-env clean-tools clean-all $(clean-tools)

count:
	@echo "Counting the .c and .h files"
	@find . -name "*.c" -or -name "*.c" | xargs cat|grep -v ^.+$$|wc -l
	


