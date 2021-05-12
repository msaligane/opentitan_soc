################################################################################
## OUTING SHORTHAND
################################################################################

OPENTITAN_TOP  = $(OPENTITAN_ROOT)/soc_top
OPENTITAN_TB   = $(OPENTITAN_ROOT)/tb
OPENTITAN_IBEX = $(OPENTITAN_ROOT)/ibex
OPENTITAN_PKGS = $(OPENTITAN_ROOT)/ip

################################################################################
## DEPENDENCIES
################################################################################

### Top Level Testbench
# TESTBENCH   = $(OPENTITAN_TB)/opentitan_soc_top_tb.sv

### Top Level Testbench to test UART
TESTBENCH   = $(OPENTITAN_TB)/opentitan_soc_top_dpi.sv
TESTBENCH  += $(OPENTITAN_TB)/opentitan_soc_top_dpi.cpp

### UART Testbench from Ghazdi
# TESTBENCH   = $(OPENTITAN_TB)/opentitan_soc_top_uart.sv

### Adding required files by BRUTE FORCE (to-be copied from test/flist.f)
HEADERS     = $(OPENTITAN_PKGS)/prim/rtl/prim_pkg.sv
HEADERS    += $(OPENTITAN_PKGS)/prim/rtl/prim_util_pkg.sv
HEADERS    += $(OPENTITAN_TOP)/top_pkg.sv
HEADERS    += $(OPENTITAN_IBEX)/rtl/ibex_pkg.sv
HEADERS    += $(OPENTITAN_IBEX)/vendor/lowrisc_ip/ip/prim/rtl/prim_ram_1p_pkg.sv
HEADERS    += $(OPENTITAN_PKGS)/uart/rtl/uart_reg_pkg.sv
HEADERS    += $(OPENTITAN_PKGS)/tlul/rtl/tlul_pkg.sv
HEADERS    += $(OPENTITAN_PKGS)/xbar/xbar_pkg.sv
HEADERS    += $(OPENTITAN_PKGS)/rv_plic/rtl/rv_plic_reg_pkg.sv
HEADERS    += $(OPENTITAN_PKGS)/gpio/rtl/gpio_reg_pkg.sv

SIMFILES    =$(OPENTITAN_TOP)/opentitan_soc_top.sv
SIMFILES   +=$(OPENTITAN_TOP)/rstmgr.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/gpio/rtl/gpio_reg_top.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/gpio/rtl/gpio.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/rv_plic/rtl/rv_plic_reg_top.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/rv_plic/rtl/rv_plic_gateway.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/rv_plic/rtl/rv_plic_target.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/rv_plic/rtl/rv_plic.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tlul/rtl/tlul_host_adapter.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tlul/rtl/tlul_adapter_reg.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tlul/rtl/tlul_sram_adapter.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tlul/rtl/tlul_err_resp.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tlul/rtl/tlul_err.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tlul/rtl/tlul_fifo_async.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tlul/rtl/tlul_fifo_sync.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tlul/rtl/tlul_socket_1n.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tlul/rtl/tlul_socket_m1.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tlul/rtl/fifo_sync.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tlul/rtl/fifo_async.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/xbar/xbar_periph.sv
SIMFILES   +=$(OPENTITAN_ROOT)/memory/data_mem_tlul.sv
SIMFILES   +=$(OPENTITAN_ROOT)/memory/DFFRAM.sv
SIMFILES   +=$(OPENTITAN_ROOT)/memory/instr_mem_top.sv
SIMFILES   +=$(OPENTITAN_ROOT)/memory/sram.v
SIMFILES   +=$(OPENTITAN_ROOT)/memory/gf12/gf12lp_1rw_lg12_w32_bit.v
# SIMFILES   +=$(OPENTITAN_ROOT)/memory/instr_mem_tlul.sv
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/opentitan_soc.sv
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/opentitan_soc_top.sv
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/uart_receiver.v
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/iccm_controller.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_branch_predict.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_alu.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_compressed_decoder.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_controller.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_core.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_top.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_counter.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_cs_registers.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_csr.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_decoder.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_dummy_instr.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_ex_block.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_fetch_fifo.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_icache.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_id_stage.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_if_stage.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_load_store_unit.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_lockstep.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_multdiv_fast.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_multdiv_slow.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_pmp.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_prefetch_buffer.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_register_file_ff.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_register_file_latch.v
SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_wb_stage.v

### Commented out used files in APR and synthesis
#SIMFILES   +=$(OPENTITAN_ROOT)/ibex/rtl/ibex_top_tracing.v

### Updated missing registers DONE/DREG
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tempsens/tlul_adapter_tempsensor.sv

SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/prim_clock_gating.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/uart/rtl/uart_rx.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/uart/rtl/uart_tx.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/uart/rtl/uart_core.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/uart/rtl/uart_reg_top.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/uart/rtl/uart.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_arbiter_ppc.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_filter_ctr.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_filter.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_generic_clock_gating.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_generic_clock_inv.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_generic_clock_mux2.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_generic_flop_2sync.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_generic_flop.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_intr_hw.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_subreg_arb.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_subreg_ext.sv
SIMFILES   +=$(OPENTITAN_ROOT)/ip/prim/rtl/prim_subreg.sv


# Flags
# DEBUG_FLAG = -g
# CFLAGS     =  -mno-relax -march=rv32im -mabi=ilp32 -nostartfiles -std=gnu11 -mstrict-align -mno-div 
# OFLAGS     = -O0
# ASFLAGS    = -mno-relax -march=rv32im -mabi=ilp32 -nostartfiles -Wno-main -mstrict-align
# OBJFLAGS   = -SD -M no-aliases 
# OBJDFLAGS  = -SD -M numeric,no-aliases
#
# # Headers
# GCC     = riscv32-unknown-elf-gcc
# OBJDUMP = riscv32-unknown-elf-objdump
# AS      = riscv32-unknown-elf-as
# ELF2HEX = elf2hex


# # VCS command shorthand
VCS = SW_VCS=2017.12-SP2-1 vcs -sverilog -debug_pp +vc +v2k -Mupdate -line -full64  -timescale=1ps/1fs +define+DUMP_VCD=1 +memcbk +vcs+dumparrays +sdfverbose +define+ARM_UD_MODEL

################################################################################
## RULES
################################################################################

.PHONY: all sim simv dve

# Default target:
all:    simv
	./simv | tee program.out

# Simulation:
sim:	simv
	./simv | tee program.out

simv:  $(HEADERS) $(SIMFILES) $(TESTBENCH)
	$(VCS) $^ -o simv

dve:	sim
	./simv -gui &

.PHONY:	clean
clean:
	@rm -rf *simv *simv.daidir csrc vcs.key *.key
	@rm -rf *testv *test.daidir csrc vcs.key *.key
	@rm -rf vis_simv vis_simv.daidir
	@rm -rf dve* inter.vpd DVEfiles
	@rm -rf csrc vcdplus.vpd vc_hdrs.h
	@rm -f *.out *.elf *.dump *.mem *.log
	@rm -f debug_bin
	@rm -f .__*
	@rm -f default.svf
	@rm -rf simv.vdb
	@rm -rf urgReport

.PHONY:	nuke
nuke:   clean
	@rm -rf syn_simv syn_simv.daidir
	@rm -rf synth/*.vg synth/*.rep synth/*.ddc synth/*.chk synth/*.log synth/*.syn synth/*.res
	@rm -rf synth/*.out synth/*.db synth/*.svf synth/*.mr synth/*.pvl
	@rm -rf synth/*_svsim.sv
	@rm -rf syn_simv.vdb
	@rm -f synth/.__*
