# Directory
TBDIR = ${IBEX_COLLAB}/tests
TEST_DIR = ${TBDIR}/asm
HEX_DIR = ${TBDIR}/hex

# Try later (see usage in /home/zain/Documents/Code/tf)
#RTLSRC=../src

# Define test name
TEST = add

# Constants
RISCV_PREFIX = riscv32-unknown-elf-
GCC_PREFIX = $(RISCV_PREFIX)gcc
GCC_FLAGS = -march=rv32i -mabi=ilp32 -mcmodel=medany -std=gnu99 -g
LINK_FLAGS = -march=rv32i -mabi=ilp32 -static -nostdlib -nostartfiles -T $(TEST_DIR)/common/link.ld
OBJDUMP_PREFIX = $(RISCV_PREFIX)objdump
OBJDUMP_FLAGS = --disassemble-all --disassemble-zeroes --section=.text --section=.text.startup --section=.text.init --section=.data
VERILATOR = verilator


TBFILES = $(IBEX_COLLAB)/soc_top/opentitan_soc_top.sv
# Package imports
defines = $(IBEX_COLLAB)/ip/prim/rtl/prim_pkg.sv
defines = $(IBEX_COLLAB)/ip/prim/rtl/prim_util_pkg.sv
defines += $(IBEX_COLLAB)/soc_top/top_pkg.sv
defines += $(IBEX_COLLAB)/ibex/rtl/ibex_pkg.sv
defines += $(IBEX_COLLAB)/ip/uart/rtl/uart_reg_pkg.sv
defines += $(IBEX_COLLAB)/ip/tlul/rtl/tlul_pkg.sv
defines += $(IBEX_COLLAB)/ip/xbar/xbar_pkg.sv
defines += $(IBEX_COLLAB)/ip/rv_plic/rtl/rv_plic_reg_pkg.sv
defines += $(IBEX_COLLAB)/ip/gpio/rtl/gpio_reg_pkg.sv

# CFLAGS for verilator generated Makefiles. Without -std=c++11 it
# complains for `auto` variables
CFLAGS += "-std=c++11"

# Optimization for better performance; alternative is nothing for
# slower runtime (faster compiles) -O2 for faster runtime (slower
# compiles), or -O for balance.
VERILATOR_MAKE_FLAGS = OPT_FAST="-O2"

# Targets
all: clean build verilator

clean:
	rm -rf logs *.log *.s *.hex *.dis *.tbl irun* vcs* simv* snapshots \
	verilator* *.exe obj* *.o ucli.key vc_hdrs.h csrc *.csv work


verilator-build: ${TBFILES} sim_main.cpp
	$(VERILATOR) --cc -CFLAGS ${CFLAGS} $(defines) \
	  -I${IBEX_COLLAB}/tests -f ${IBEX_COLLAB}/tests/flist \
	  --trace --trace-structs --trace-params --trace-max-array 1024 -CFLAGS -DVL_DEBUG -Wno-IMPLICIT -Wno-UNSIGNED -Wno-PINMISSING -Wno-UNOPTTHREADS -Wno-MODDUP -Wno-WIDTH -Wno-UNOPTFLAT -Wno-BLKANDNBLK --threads 4 -Wno-ALWCOMBORDER ${TBFILES} -LDFLAGS -lpthread --top-module opentitan_soc_top \
	  -exe sim_main.cpp dmidpi.c jtagdpi.c tcp_server.c --autoflush --trace -DSYNTHESIS
#	cp ${IBEX_COLLAB}/tests/sim_main.cpp obj_dir/
	$(MAKE) -C obj_dir/ -f Vopentitan_soc_top.mk $(VERILATOR_MAKE_FLAGS)
	touch verilator-build

verilator: verilator-build
	./obj_dir/Vopentitan_soc_top

build:
	@rm -rf $(TEST_DIR)/output 
	@mkdir $(TEST_DIR)/output
	$(GCC_PREFIX) $(GCC_FLAGS) -c $(TEST_DIR)/$(TEST).c -o $(TEST_DIR)/output/$(TEST) -lm -lgcc
	$(GCC_PREFIX) $(GCC_FLAGS) -c $(TEST_DIR)/common/plic_driver.c -o $(TEST_DIR)/output/plic -lm -lgcc
	$(GCC_PREFIX) $(GCC_FLAGS) -c $(TEST_DIR)/common/init.c -o $(TEST_DIR)/output/init -lm -lgcc
	$(GCC_PREFIX) $(GCC_FLAGS) -c $(TEST_DIR)/common/traps.c -o $(TEST_DIR)/output/traps -lm -lgcc
	$(GCC_PREFIX) $(LINK_FLAGS) $(TEST_DIR)/common/start.S $(TEST_DIR)/common/trap.S $(TEST_DIR)/output/$(TEST) $(TEST_DIR)/output/plic $(TEST_DIR)/output/traps $(TEST_DIR)/output/init -o $(TEST_DIR)/output/$(TEST).merl -lgcc
	$(OBJDUMP_PREFIX) $(OBJDUMP_FLAGS) $(TEST_DIR)/output/$(TEST).merl > $(TEST_DIR)/output/$(TEST).dump
	$(RISCV_PREFIX)elf2hex --bit-width 32 --input $(TEST_DIR)/output/$(TEST).merl --output $(TEST_DIR)/output/program.hex

help:
	@echo Make sure the environment variable IBEX_COLLAB is set.
	@echo Possible targets: verilator vcs irun vlog help clean all verilator-build irun-build vcs-build program.hex

.PHONY: help build clean verilator
