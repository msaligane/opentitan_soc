##########################################################################################
#
## ROUTING SHORTHAND
#
##########################################################################################

export OPENTITAN_TOP=$(OPENTITAN_ROOT)/soc_top
export OPENTITAN_TB=$(OPENTITAN_ROOT)/tb
export OPENTITAN_IBEX=$(OPENTITAN_ROOT)/ibex
export OPENTITAN_PKGS=$(OPENTITAN_ROOT)/ip

##########################################################################################
#
## DEPENDENCIES
#
##########################################################################################

##########################################################################################
#
# TESTBENCHES
#
##########################################################################################

### Top Level Testbench
# TESTBENCH   = $(OPENTITAN_TB)/opentitan_soc_top_tb.sv

### Top Level Testbench to test UART
# TESTBENCH   = $(OPENTITAN_TB)/opentitan_soc_top_dpi.sv
# TESTBENCH  += $(OPENTITAN_TB)/opentitan_soc_top_dpi.cpp
# TESTBENCH  += $(OPENTITAN_TB)/opentitan_soc_top_dpi.c

### SPI Testbench
TESTBENCH   = $(OPENTITAN_TB)/opentitan_soc_top_spi.sv
TESTBENCH  += $(OPENTITAN_TB)/opentitan_soc_top_spi.cpp
# TESTBENCH   = $(OPENTITAN_ROOT)/SPI_tb.sv
# TESTBENCH  += $(OPENTITAN_ROOT)/SPI_tb.cpp

##########################################################################################
#
# STANDARD CELL LIBRARIES -- GF12 
#
##########################################################################################

# Standard Cell Track Architecture - sc9mcpp84, sc10p5mcpp84
# export SC_TRACK_10 = sc10p5mcpp84
# export SC_TRACK_9  = sc9mcpp84
# export DESIGN_PDK_DIR = /afs/eecs.umich.edu/kits/ARM/GF12LP/arm/gf/12lp
# 
# # Standard Cell Library Locations
# export SC10_BASE_LVT_DIR  = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_base_lvt_c14/r0p0/verilog
# export SC10_BASE_RVT_DIR  = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_base_rvt_c14/r0p0/verilog
# export SC10_BASE_SLVT_DIR = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_base_slvt_c14/r0p0/verilog
# export SC10_ECO_LVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_eco_lvt_c14/r0p0/verilog
# export SC10_ECO_RVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_eco_rvt_c14/r0p0/verilog
# export SC10_ECO_SLVT_DIR  = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_eco_slvt_c14/r0p0/verilog
# export SC10_PMK_LVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_pmk_lvt_c14/r0p0/verilog
# export SC10_PMK_RVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_pmk_rvt_c14/r0p0/verilog
# export SC10_PMK_SLVT_DIR  = $(DESIGN_PDK_DIR)/$(SC_TRACK_10)_pmk_slvt_c14/r0p0/verilog
# 
# export SC9_BASE_LVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_base_lvt_c14/r0p0/verilog
# export SC9_BASE_RVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_base_rvt_c14/r0p0/verilog
# export SC9_BASE_SLVT_DIR  = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_base_slvt_c14/r0p0/verilog
# export SC9_ECO_LVT_DIR    = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_eco_lvt_c14/r0p0/verilog
# export SC9_ECO_RVT_DIR    = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_eco_rvt_c14/r0p0/verilog
# export SC9_ECO_SLVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_eco_slvt_c14/r0p0/verilog
# export SC9_PMK_LVT_DIR    = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_pmk_lvt_c14/r0p0/verilog
# export SC9_PMK_RVT_DIR    = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_pmk_rvt_c14/r0p0/verilog
# export SC9_PMK_SLVT_DIR   = $(DESIGN_PDK_DIR)/$(SC_TRACK_9)_pmk_slvt_c14/r0p0/verilog
# 
# LIB         = $(SC10_BASE_LVT_DIR)/sc10p5mcpp84_12lp_base_lvt_c14.v
# LIB        += $(SC10_BASE_RVT_DIR)/sc10p5mcpp84_12lp_base_rvt_c14.v
# LIB        += $(SC10_BASE_SLVT_DIR)/sc10p5mcpp84_12lp_base_slvt_c14.v
# LIB        += $(SC10_ECO_LVT_DIR)/sc10p5mcpp84_12lp_eco_lvt_c14.v
# LIB        += $(SC10_ECO_RVT_DIR)/sc10p5mcpp84_12lp_eco_rvt_c14.v
# LIB        += $(SC10_ECO_SLVT_DIR)/sc10p5mcpp84_12lp_eco_slvt_c14.v
# LIB        += $(SC10_PMK_LVT_DIR)/sc10p5mcpp84_12lp_pmk_lvt_c14.v
# LIB        += $(SC10_PMK_RVT_DIR)/sc10p5mcpp84_12lp_pmk_rvt_c14.v
# LIB        += $(SC10_PMK_SLVT_DIR)/sc10p5mcpp84_12lp_pmk_slvt_c14.v
# 
# LIB        += $(SC9_BASE_LVT_DIR)/sc9mcpp84_12lp_base_lvt_c14.v
# LIB        += $(SC9_BASE_RVT_DIR)/sc9mcpp84_12lp_base_rvt_c14.v
# LIB        += $(SC9_BASE_SLVT_DIR)/sc9mcpp84_12lp_base_slvt_c14.v
# LIB        += $(SC9_ECO_LVT_DIR)/sc9mcpp84_12lp_eco_lvt_c14.v
# LIB        += $(SC9_ECO_RVT_DIR)/sc9mcpp84_12lp_eco_rvt_c14.v
# LIB        += $(SC9_ECO_SLVT_DIR)/sc9mcpp84_12lp_eco_slvt_c14.v
# LIB        += $(SC9_PMK_LVT_DIR)/sc9mcpp84_12lp_pmk_lvt_c14.v
# LIB        += $(SC9_PMK_RVT_DIR)/sc9mcpp84_12lp_pmk_rvt_c14.v
# LIB        += $(SC9_PMK_SLVT_DIR)/sc9mcpp84_12lp_pmk_slvt_c14.v

#export PLATFORMS = /afs/eecs.umich.edu/vlsida/projects/restricted/google/platforms
#LIB        += $(PLATFORMS)/memory/gf12lp_1rw_lg12_w32_bit.v

########################################
##### GF12 TEMP SENSOR
########################################
# LIB        += $(OpenROAD)/opentitan_soc_macros/tempsenseInst_error_inv6_head9/export/tempsenseInst_error_inv6_head9.mapped.v
# LIB        += $(OpenROAD)/opentitan_soc_macros/tempsenseInst_error_inv8_head7/export/tempsenseInst_error_inv8_head7.mapped.v
# LIB        += $(OpenROAD)/opentitan_soc_macros/tempsenseInst_error_inv8_head5/export/tempsenseInst_error_inv8_head5.mapped.v
# LIB        += $(OpenROAD)/opentitan_soc_macros/tempsenseInst_error_inv8_head3/export/tempsenseInst_error_inv8_head3.mapped.v


##########################################################################################
#
# STANDARD CELL LIBRARIES -- SKY130_HD
#
##########################################################################################

########################################
##### s8 version of sky130 std cell libraries (deprecated)
########################################
#LIB        = $(GOOGLE)/skywater-src-nda/scs8hd/V0.0.2/verilog/scs8hd_*.v
#LIB        += $(shell find $(GOOGLE)/skywater-src-nda/scs8hvl/V0.0.2/verilog -name 'scs8hvl*.v')
#LIB        += $(shell find $(GOOGLE)/skywater-src-nda/scs8hd/V0.0.2/verilog -name 'scs8hd*.v')
# DIR_LIST = $(shell find skywater-pdk-libs-sky130_fd_sc_hd/cells -maxdepth 1 -mindepth 1 -type d -printf '%f\n')
# LIB += $(foreach DIR, $(DIR_LIST), $(addsuffix .behavioral.v, skywater-pdk-libs-sky130_fd_sc_hd/cells/$(DIR)/sky130_fd_sc_hd__$(DIR)))
# LIB += $(foreach DIR, $(DIR_LIST), $(addsuffix .v, skywater-pdk-libs-sky130_fd_sc_hd/cells/$(DIR)/sky130_fd_sc_hd__$(DIR)))
# LIB += $(foreach DIR, $(DIR_LIST), $(addsuffix _1.v, skywater-pdk-libs-sky130_fd_sc_hd/cells/$(DIR)/sky130_fd_sc_hd__$(DIR)))
# LIB += $(foreach DIR, $(DIR_LIST), $(addsuffix _2.v, skywater-pdk-libs-sky130_fd_sc_hd/cells/$(DIR)/sky130_fd_sc_hd__$(DIR)))
# LIB += $(foreach DIR, $(DIR_LIST), $(addsuffix _4.v, skywater-pdk-libs-sky130_fd_sc_hd/cells/$(DIR)/sky130_fd_sc_hd__$(DIR)))


########################################
##### Newest std cell library
########################################
LIB  += sky130/sajjad_sky130_fd_sc_hd.v
LIB  += sky130/primitives.v
LIB  += $(OPENTITAN_ROOT)/memory/sky130/sky130_sram_4kbyte_1rw1r_32x1024_8.v

export OpenROAD = /afs/eecs.umich.edu/vlsida/projects/restricted/google/khtaur/OpenROAD-flow-scripts/flow



########################################
##### SKY130 TEMP SENSOR
########################################
# LIB        += $(OPENTITAN_ROOT)/opentitan_soc_macros/temp_sense/sky130/blocks/temp_hd_inv6_header9/export/temp_hd_inv6_header9.v
# LIB        += $(OPENTITAN_ROOT)/opentitan_soc_macros/temp_sense/sky130/blocks/temp_hd_inv8_header3/export/temp_hd_inv8_header3.v
# LIB        += $(OPENTITAN_ROOT)/opentitan_soc_macros/temp_sense/sky130/blocks/temp_hd_inv8_header5/export/temp_hd_inv8_header5.v
# LIB        += $(OPENTITAN_ROOT)/opentitan_soc_macros/temp_sense/sky130/blocks/temp_hd_inv8_header7/export/temp_hd_inv8_header7.v

LIB        += $(OpenROAD)/opentitan_soc_macros/SLC_cell/SLC_cell.v
LIB        += $(OpenROAD)/opentitan_soc_macros/HEAD14/HEAD14.v

##########################################################################################
#
# REQUIRED PACKAGES FOR BEHAVORIAL
#
##########################################################################################
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

##########################################################################################
#
# SYNTHESIS NETLIST / POST-APR NETLIST
#
##########################################################################################
# SYNFILES    =$(OPENTITAN_ROOT)/post_process/1_synth.v
SYNFILES    =$(OPENTITAN_ROOT)/post_process/opentitan_soc_top.mapped.v

##########################################################################################
#
# BEHAVIORAL SIMULATION FILES 
#
##########################################################################################
SIMFILES    =$(OPENTITAN_TOP)/opentitan_soc_top.sv
SIMFILES   +=$(OPENTITAN_TOP)/opentitan_soc_core.sv
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

SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/opentitan_soc.sv
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/opentitan_soc_top.sv
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/uart_receiver.v
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/SPI_slave.sv
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/iccm_controller.v
SIMFILES   +=$(OPENTITAN_ROOT)/soc_top/prim_clock_gating.sv

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

### Updated missing registers DONE/DREG
SIMFILES   +=$(OPENTITAN_ROOT)/ip/tempsens/tlul_adapter_tempsensor.sv

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

SIMFILES   +=$(OPENTITAN_ROOT)/memory/data_mem_tlul.sv
SIMFILES   +=$(OPENTITAN_ROOT)/memory/inst_mem_tlul.sv
SIMFILES   +=$(OPENTITAN_ROOT)/memory/instr_mem_top.sv
SIMFILES   +=$(OPENTITAN_ROOT)/memory/sky130/sky130_sram_4kbyte_1rw1r_32x1024_8.v
# SIMFILES   +=$(OPENTITAN_ROOT)/memory/sram.v
# SIMFILES   +=$(OPENTITAN_ROOT)/memory/gf12/gf12lp_1rw_lg12_w32_bit.v
# SIMFILES   +=$(OPENTITAN_ROOT)/memory/DFFRAM.sv
# SIMFILES   +=$(OPENTITAN_ROOT)/memory/instr_mem_tlul.sv                        

##### sv2v converted files
# SIMFILES := $(shell find $(OPENTITAN_ROOT)/opentitan_ibex_sysverilog/ -name '*.v')

##########################################################################################
#
# TIMING INFORMATION (SDF) FILES 
#
##########################################################################################
SDFFILE    =$(OPENTITAN_ROOT)/post_process/opentitan_soc_top.mapped.sdf

##########################################################################################
#
# FINAL NETLIST FILES 
#
##########################################################################################
FINALFILE  =$(OPENTITAN_ROOT)/post_process/6_final.v

##########################################################################################
#
# COMMAND SHORT-HANDS 
#
##########################################################################################
# VCS command shorthand
VCS = SW_VCS=2017.12-SP2-1 vcs -sverilog -debug_pp\
		+vc +v2k -Mupdate -line -full64 -timescale=1ps/1fs \
		+notimingcheck +memcbk +vcs+dumparrays +sdfverbose\
		+define+DUMP_VCD=1 +define+ARM_UD_MODEL 

#VCS = SW_VCS=2017.12-SP2-1 vcs -sverilog -debug_pp\
#		+vc +v2k -Mupdate -line -full64 -timescale=1ps/1fs \
#		+notimingcheck +memcbk +vcs+dumparrays +sdfverbose\
#		+define+DUMP_VCD=1 +define+ARM_UD_MODEL +define+DEBUG +define+BEHAVIORAL

VCS_debug = SW_VCS=2017.12-SP2-1 vcs -sverilog -debug_pp\
			+vc +v2k -Mupdate -line -full64  -timescale=1ps/1fs\
			+memcbk +typdelays +neg_tchk +vcs+dumparrays +sdfverbose\
			+define+DUMP_VCD=1 +define+ARM_UD_MODEL +define+DEBUG +define+SDF

# VCS_debug = SW_VCS=2017.12-SP2-1 vcs -sverilog -debug_pp\
# 			+vc +v2k -Mupdate -line -full64  -timescale=1ps/1fs\
# 			+memcbk +notimingcheck +vcs+dumparrays +sdfverbose\
# 			+define+DUMP_VCD=1 +define+ARM_UD_MODEL +define+DEBUG +define+FUNCTIONAL +define+UNIT_DELAY

# VCS_final = SW_VCS=2017.12-SP2-1 vcs -sverilog -debug_pp\
# 			+vc +v2k -Mupdate -line -full64  -timescale=1ps/1fs\
# 			+memcbk +vcs+dumparrays +sdfverbose\
# 			+define+DUMP_VCD=1 +define+ARM_UD_MODEL +define+DEBUG +define+SDF

VCS_final = SW_VCS=2017.12-SP2-1 vcs -sverilog -debug_pp\
			+vc +v2k -Mupdate -line -full64  -timescale=1ps/1fs\
			+memcbk +vcs+dumparrays +sdfverbose\
			+define+DUMP_VCD=1 +define+ARM_UD_MODEL +define+DEBUG +define+FUNCTIONAL +define+UNIT_DELAY

IVERILOG_SYN = iverilog -g2005 -c iverilog.flist -v
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
# Post-synthesis verification targets:
syn_simv:	$(SYNFILES) $(TESTBENCH)
	$(VCS_debug) $^ $(LIB) -o syn_simv 

syn_dve:	syn_simv
	./syn_simv -gui &
	
syn:	syn_simv
	./syn_simv | tee syn_program.out

.PHONY: final final_simv
final_simv:	$(FINALFILE) $(TESTBENCH) 
	sed -i 's#["].*sdf["]#"$(SDFFILE)"#' $(TESTBENCH)
	$(VCS_final) $^ $(LIB) -o final_simv 

final_dve:	final_simv
	./final_simv -gui &
	
final:	final_simv
	./final_simv | tee final_program.out

.PHONY: iverilog_syn_simv iverilog_syn_dve iverilog_syn
iverilog_syn_simv:	$(SYNFILES) $(TESTBENCH) iverilog.flist
	$(IVERILOG_SYN) -o iverilog_syn.bin
	
iverilog_syn:	iverilog_syn_simv
	vvp -v iverilog_syn.bin -sdf-verbose
	
# Print variables in Makefile
test:
	$(error   VAR is $(LIB))

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
	@rm -rf DVE_sessions
	@rm -rf syn_simv syn_simv.daidir
	@rm -rf synth/*.vg synth/*.rep synth/*.ddc synth/*.chk synth/*.log synth/*.syn synth/*.res
	@rm -rf synth/*.out synth/*.db synth/*.svf synth/*.mr synth/*.pvl
	@rm -rf synth/*_svsim.sv
	@rm -rf syn_simv.vdb
	@rm -f synth/.__*
