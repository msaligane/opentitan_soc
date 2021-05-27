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
# TESTBENCH   = $(OPENTITAN_TB)/opentitan_soc_top_dpi.sv
# TESTBENCH  += $(OPENTITAN_TB)/opentitan_soc_top_dpi.cpp
# TESTBENCH  += $(OPENTITAN_TB)/opentitan_soc_top_dpi.c

### UART Testbench from Ghazdi
# TESTBENCH   = $(OPENTITAN_TB)/opentitan_soc_top_uart.sv

### SPI Testbench
TESTBENCH   = $(OPENTITAN_TB)/opentitan_soc_top_spi.sv
TESTBENCH  += $(OPENTITAN_TB)/opentitan_soc_top_spi.cpp
# TESTBENCH   = $(OPENTITAN_ROOT)/spi/tb/SPI_test.v
# TESTBENCH   = $(OPENTITAN_ROOT)/SPI_tb.sv
# TESTBENCH  += $(OPENTITAN_ROOT)/SPI_tb.cpp

### Libraries
# Standard Cell Track Architecture - sc9mcpp84, sc10p5mcpp84
export SC_TRACK_10 = sc10p5mcpp84
export SC_TRACK_9  = sc9mcpp84
export DESIGN_PDK_DIR = /afs/eecs.umich.edu/kits/ARM/GF12LP/arm/gf/12lp

# Standard Cell Library Locations
export SC10_BASE_LVT_DIR  = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_base_lvt_c14/r0p0/verilog
export SC10_BASE_RVT_DIR  = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_base_rvt_c14/r0p0/verilog
export SC10_BASE_SLVT_DIR = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_base_slvt_c14/r0p0/verilog
export SC10_ECO_LVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_eco_lvt_c14/r0p0/verilog
export SC10_ECO_RVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_eco_rvt_c14/r0p0/verilog
export SC10_ECO_SLVT_DIR  = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_eco_slvt_c14/r0p0/verilog
export SC10_PMK_LVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_pmk_lvt_c14/r0p0/verilog
export SC10_PMK_RVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_pmk_rvt_c14/r0p0/verilog
export SC10_PMK_SLVT_DIR  = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_pmk_slvt_c14/r0p0/verilog

export SC9_BASE_LVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_base_lvt_c14/r0p0/verilog
export SC9_BASE_RVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_base_rvt_c14/r0p0/verilog
export SC9_BASE_SLVT_DIR  = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_base_slvt_c14/r0p0/verilog
export SC9_ECO_LVT_DIR    = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_eco_lvt_c14/r0p0/verilog
export SC9_ECO_RVT_DIR    = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_eco_rvt_c14/r0p0/verilog
export SC9_ECO_SLVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_eco_slvt_c14/r0p0/verilog
export SC9_PMK_LVT_DIR    = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_pmk_lvt_c14/r0p0/verilog
export SC9_PMK_RVT_DIR    = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_pmk_rvt_c14/r0p0/verilog
export SC9_PMK_SLVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_pmk_slvt_c14/r0p0/verilog

LIB         = $(SC10_BASE_LVT_DIR)/sc10p5mcpp84_12lp_base_lvt_c14.v
LIB        += $(SC10_BASE_RVT_DIR)/sc10p5mcpp84_12lp_base_rvt_c14.v
LIB        += $(SC10_BASE_SLVT_DIR)/sc10p5mcpp84_12lp_base_slvt_c14.v
LIB        += $(SC10_ECO_LVT_DIR)/sc10p5mcpp84_12lp_eco_lvt_c14.v
LIB        += $(SC10_ECO_RVT_DIR)/sc10p5mcpp84_12lp_eco_rvt_c14.v
LIB        += $(SC10_ECO_SLVT_DIR)/sc10p5mcpp84_12lp_eco_slvt_c14.v
LIB        += $(SC10_PMK_LVT_DIR)/sc10p5mcpp84_12lp_pmk_lvt_c14.v
LIB        += $(SC10_PMK_RVT_DIR)/sc10p5mcpp84_12lp_pmk_rvt_c14.v
LIB        += $(SC10_PMK_SLVT_DIR)/sc10p5mcpp84_12lp_pmk_slvt_c14.v

LIB        += $(SC9_BASE_LVT_DIR)/sc9mcpp84_12lp_base_lvt_c14.v
LIB        += $(SC9_BASE_RVT_DIR)/sc9mcpp84_12lp_base_rvt_c14.v
LIB        += $(SC9_BASE_SLVT_DIR)/sc9mcpp84_12lp_base_slvt_c14.v
LIB        += $(SC9_ECO_LVT_DIR)/sc9mcpp84_12lp_eco_lvt_c14.v
LIB        += $(SC9_ECO_RVT_DIR)/sc9mcpp84_12lp_eco_rvt_c14.v
LIB        += $(SC9_ECO_SLVT_DIR)/sc9mcpp84_12lp_eco_slvt_c14.v
LIB        += $(SC9_PMK_LVT_DIR)/sc9mcpp84_12lp_pmk_lvt_c14.v
LIB        += $(SC9_PMK_RVT_DIR)/sc9mcpp84_12lp_pmk_rvt_c14.v
LIB        += $(SC9_PMK_SLVT_DIR)/sc9mcpp84_12lp_pmk_slvt_c14.v

export PLATFORMS = /afs/eecs.umich.edu/vlsida/projects/restricted/google/platforms
LIB        += $(PLATFORMS)/memory/gf12lp_1rw_lg12_w32_bit.v

export OpenROAD = /afs/eecs.umich.edu/vlsida/projects/restricted/google/khtaur/OpenROAD-flow-scripts/flow
LIB        += $(OpenROAD)/opentitan_soc_macros/tempsenseInst_error_inv6_head9/export/tempsenseInst_error_inv6_head9.mapped.v
LIB        += $(OpenROAD)/opentitan_soc_macros/tempsenseInst_error_inv8_head7/export/tempsenseInst_error_inv8_head7.mapped.v
LIB        += $(OpenROAD)/opentitan_soc_macros/tempsenseInst_error_inv8_head5/export/tempsenseInst_error_inv8_head5.mapped.v
LIB        += $(OpenROAD)/opentitan_soc_macros/tempsenseInst_error_inv8_head3/export/tempsenseInst_error_inv8_head3.mapped.v

LIB        += $(OpenROAD)/opentitan_soc_macros/SLC_cell/SLC_cell.v
LIB        += $(OpenROAD)/opentitan_soc_macros/HEAD14/HEAD14.v

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

SYNFILES    =$(OPENTITAN_TOP)/opentitan_soc_top.mapped.v
# SYNFILES    =$(OPENTITAN_TOP)/debug/opentitan_soc_top.mapped.v

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
SIMFILES   +=$(OPENTITAN_ROOT)/memory/instr_mem_top.sv
SIMFILES   +=$(OPENTITAN_ROOT)/memory/sram.v
SIMFILES   +=$(OPENTITAN_ROOT)/memory/gf12/gf12lp_1rw_lg12_w32_bit.v
# SIMFILES   +=$(OPENTITAN_ROOT)/memory/DFFRAM.sv
# SIMFILES   +=$(OPENTITAN_ROOT)/memory/instr_mem_tlul.sv
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/opentitan_soc.sv
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/opentitan_soc_top.sv
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/uart_receiver.v
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/SPI_slave.sv
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
VCS = SW_VCS=2017.12-SP2-1 vcs -sverilog -debug_pp\
		+vc +v2k -Mupdate -line -full64 -timescale=1ps/1fs \
		+notimingcheck +memcbk +vcs+dumparrays +sdfverbose\
		+define+DUMP_VCD=1 +define+ARM_UD_MODEL

VCS_debug = SW_VCS=2017.12-SP2-1 vcs -sverilog -debug_pp\
			+vc +v2k -Mupdate -line -full64  -timescale=1ps/1fs\
			+notimingcheck +memcbk +vcs+dumparrays +sdfverbose\
			+define+DEBUG +define+DUMP_VCD=1 +define+ARM_UD_MODEL 

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

.PHONY: syn syn_simv
syn_simv:	$(HEADERS) $(SYNFILES) $(TESTBENCH)
	$(VCS_debug) $^ $(LIB) -o syn_simv 

syn_dve:	syn_simv
	./syn_simv -gui &
	
syn:	syn_simv
	./syn_simv | tee syn_program.out


.PHONY:	clean
clean:
	@rm -rf *simv *simv.daidir csrc vcs.key *.key
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
