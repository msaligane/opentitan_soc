// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VOPENTITAN_SOC_TOP_H_
#define VERILATED_VOPENTITAN_SOC_TOP_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "Vopentitan_soc_top__Dpi.h"

//==========

class Vopentitan_soc_top__Syms;
class Vopentitan_soc_top_VerilatedVcd;
class Vopentitan_soc_top_gpio_reg_pkg;
class Vopentitan_soc_top_rv_plic_reg_pkg;
class Vopentitan_soc_top_tlul_socket_1n__pi2;
class Vopentitan_soc_top_tlul_socket_m1__pi3;


//----------

VL_MODULE(Vopentitan_soc_top) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vopentitan_soc_top_gpio_reg_pkg* __PVT__gpio_reg_pkg;
    Vopentitan_soc_top_rv_plic_reg_pkg* __PVT__rv_plic_reg_pkg;
    Vopentitan_soc_top_tlul_socket_1n__pi2* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10;
    Vopentitan_soc_top_tlul_socket_1n__pi2* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__ICCM;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__DCCM;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__GPIO;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__LDO1;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__LDO2;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__DCDC;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__PLL1;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__DAP;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__PLIC;
    Vopentitan_soc_top_tlul_socket_m1__pi3* __PVT__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint all: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 21 22 25 26 27 28 43 
    VL_IN8(rst_ni,0,0);
    // Begin mtask footprint all: 1 2 3 4 5 6 7 8 9 10 11 14 15 16 21 22 25 26 27 28 33 
    VL_IN8(clk_i,0,0);
    // Begin mtask footprint all: 2 3 4 21 33 
    VL_IN(gpio_i,19,0);
    // Begin mtask footprint all: 3 
    VL_OUT(gpio_o,19,0);
    // Begin mtask footprint all: 15 
    VL_IN8(jtag_tck_i,0,0);
    VL_IN8(jtag_tms_i,0,0);
    VL_IN8(jtag_trst_ni,0,0);
    VL_IN8(jtag_tdi_i,0,0);
    // Begin mtask footprint all: 22 
    VL_OUT8(jtag_tdo_o,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 24 25 26 27 28 30 34 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d[13][3];
        // Begin mtask footprint all: 23 25 26 27 28 30 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[13][3];
        // Begin mtask footprint all: 23 
        CData/*3:0*/ opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10;
        // Begin mtask footprint all: 10 13 17 18 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type;
        // Begin mtask footprint all: 10 13 17 18 49 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id;
        // Begin mtask footprint all: 13 17 18 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match;
        // Begin mtask footprint all: 13 17 18 19 
        QData/*33:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
        // Begin mtask footprint all: 17 18 19 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b;
        // Begin mtask footprint all: 11 17 18 19 
        WData/*67:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[3];
        // Begin mtask footprint all: 11 17 18 19 50 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q;
        // Begin mtask footprint all: 17 18 19 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel;
        // Begin mtask footprint all: 18 19 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd;
        // Begin mtask footprint all: 13 19 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
        // Begin mtask footprint all: 13 18 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_write_wb;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
        // Begin mtask footprint all: 10 13 18 43 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q;
        // Begin mtask footprint all: 10 18 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q;
        // Begin mtask footprint all: 10 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d;
        // Begin mtask footprint all: 5 17 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__outstanding_load_wb;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run;
        // Begin mtask footprint all: 5 17 43 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
        // Begin mtask footprint all: 17 43 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id;
        // Begin mtask footprint all: 43 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wb_exception;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done;
        // Begin mtask footprint all: 43 49 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending;
        // Begin mtask footprint all: 43 49 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill;
        // Begin mtask footprint all: 5 43 49 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err;
        // Begin mtask footprint all: 17 43 49 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz;
        // Begin mtask footprint all: 17 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr;
        // Begin mtask footprint all: 5 17 19 47 48 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
        // Begin mtask footprint all: 5 17 19 46 47 48 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
        // Begin mtask footprint all: 17 19 46 47 48 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id;
        // Begin mtask footprint all: 17 19 45 46 47 48 
        SData/*11:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save;
        // Begin mtask footprint all: 43 45 46 47 48 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int;
        // Begin mtask footprint all: 39 40 41 42 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 12 
        WData/*991:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[31];
        // Begin mtask footprint all: 12 18 
        WData/*1023:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[32];
        // Begin mtask footprint all: 12 44 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        IData/*30:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec;
        // Begin mtask footprint all: 44 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
        // Begin mtask footprint all: 11 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe;
        // Begin mtask footprint all: 11 18 
        QData/*32:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req;
        // Begin mtask footprint all: 11 18 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__data_req;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
        // Begin mtask footprint all: 11 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns;
        // Begin mtask footprint all: 11 19 
        WData/*67:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[3];
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        // Begin mtask footprint all: 11 50 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex;
        // Begin mtask footprint all: 11 17 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal;
        // Begin mtask footprint all: 17 50 
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    };
    struct {
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal;
        // Begin mtask footprint all: 5 19 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d;
        IData/*17:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d;
        IData/*17:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d;
        IData/*17:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d;
        // Begin mtask footprint all: 5 19 45 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init;
        // Begin mtask footprint all: 5 45 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en;
        // Begin mtask footprint all: 5 32 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set;
        // Begin mtask footprint all: 32 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__le;
        // Begin mtask footprint all: 8 16 
        WData/*255:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[8];
        // Begin mtask footprint all: 16 21 
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int;
        // Begin mtask footprint all: 15 16 21 
        IData/*29:0*/ opentitan_soc_top__DOT__debug_module__DOT__addr_w;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__req;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__we;
        // Begin mtask footprint all: 10 15 16 21 
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q;
        // Begin mtask footprint all: 15 16 
        WData/*511:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[16];
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__rvalid;
        CData/*4:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*4:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        // Begin mtask footprint all: 15 
        QData/*40:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[4];
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3;
        SData/*14:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0;
        SData/*9:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__testmode_i;
        CData/*4:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n;
        // Begin mtask footprint all: 15 20 
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__haltreq;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__exception;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_d;
        // Begin mtask footprint all: 15 21 
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__sberror_valid;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__sberror;
        // Begin mtask footprint all: 15 21 22 
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart;
        // Begin mtask footprint all: 10 15 21 22 
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q;
    };
    struct {
        // Begin mtask footprint all: 8 10 15 21 22 
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q;
        // Begin mtask footprint all: 8 10 15 21 22 36 37 
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q;
        // Begin mtask footprint all: 8 15 21 22 36 37 
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q;
        // Begin mtask footprint all: 15 16 20 21 22 36 37 
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty;
        // Begin mtask footprint all: 15 16 20 21 22 
        IData/*19:0*/ opentitan_soc_top__DOT__debug_module__DOT__hartsel;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__cmdbusy;
        // Begin mtask footprint all: 5 15 16 20 22 
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q;
        // Begin mtask footprint all: 5 15 16 20 
        WData/*69:0*/ opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[3];
        // Begin mtask footprint all: 15 16 20 
        WData/*85:0*/ opentitan_soc_top__DOT__dbgrom_to_xbar[3];
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__resumereq;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_q;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 10 16 20 
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q;
        // Begin mtask footprint all: 16 20 
        QData/*51:0*/ opentitan_soc_top__DOT__xbar_to_dbgrom;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__data_valid;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__going;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned;
        // Begin mtask footprint all: 5 16 20 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q;
        // Begin mtask footprint all: 5 16 
        CData/*5:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned;
        // Begin mtask footprint all: 5 16 38 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__ip;
        // Begin mtask footprint all: 38 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__ie[1];
        // Begin mtask footprint all: 7 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        // Begin mtask footprint all: 7 20 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next;
        // Begin mtask footprint all: 7 30 
        QData/*51:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 7 30 32 37 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 7 20 30 32 37 
        QData/*37:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit;
        // Begin mtask footprint all: 9 30 32 35 37 38 
        WData/*171:0*/ opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[6];
        // Begin mtask footprint all: 7 9 32 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we;
        // Begin mtask footprint all: 2 
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__CLK_SEL;
        // Begin mtask footprint all: 2 33 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 33 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__data_in_d;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__data_in_q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event;
        // Begin mtask footprint all: 6 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d;
        // Begin mtask footprint all: 2 9 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we;
        // Begin mtask footprint all: 9 20 
        QData/*51:0*/ opentitan_soc_top__DOT__tsen1_to_xbar;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__a_ack;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__wr_req;
        // Begin mtask footprint all: 9 
        IData/*31:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__rdata;
        IData/*23:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__DOUT_REG;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__outstanding;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__error;
        CData/*7:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__reqid;
        CData/*1:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__reqsz;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__rspop;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__RESET_REGn;
        CData/*3:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__SEL_CONV_TIME_REG;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__en_REG;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__DONE_REG;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__DONE;
        // Begin mtask footprint all: 10 15 16 20 22 
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q;
        // Begin mtask footprint all: 10 15 16 22 
        WData/*255:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[8];
        // Begin mtask footprint all: 10 15 20 22 
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q;
        // Begin mtask footprint all: 15 22 
        QData/*40:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req;
        QData/*40:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum3;
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q;
        CData/*3:0*/ opentitan_soc_top__DOT__jtag_req;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__shift_dr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_access;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dtmcs_select;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__state_d;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__state_q;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_d;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_q;
        CData/*3:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q;
        CData/*3:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
        CData/*4:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
        CData/*4:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d;
        CData/*4:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync;
    };
    struct {
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_rptr;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk;
        // Begin mtask footprint all: 4 
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe;
        // Begin mtask footprint all: 4 33 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 4 21 
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d;
    };
    struct {
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned;
        // Begin mtask footprint all: 4 21 22 
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q;
        // Begin mtask footprint all: 4 20 21 22 
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q;
        // Begin mtask footprint all: 18 23 24 
        WData/*85:0*/ opentitan_soc_top__DOT__lsu_to_xbar[3];
        // Begin mtask footprint all: 18 
        QData/*32:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate;
        CData/*3:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
        // Begin mtask footprint all: 2 3 
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 1 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__en_latch;
        // Begin mtask footprint all: 
        WData/*85:0*/ opentitan_soc_top__DOT__xbar_to_ldo1[3];
        QData/*51:0*/ opentitan_soc_top__DOT__ldo1_to_xbar;
        WData/*85:0*/ opentitan_soc_top__DOT__xbar_to_ldo2[3];
        QData/*51:0*/ opentitan_soc_top__DOT__ldo2_to_xbar;
        WData/*85:0*/ opentitan_soc_top__DOT__xbar_to_dcdc[3];
        QData/*51:0*/ opentitan_soc_top__DOT__dcdc_to_xbar;
        WData/*85:0*/ opentitan_soc_top__DOT__xbar_to_pll1[3];
        QData/*51:0*/ opentitan_soc_top__DOT__pll1_to_xbar;
        WData/*85:0*/ opentitan_soc_top__DOT__xbar_to_tsen2[3];
        QData/*51:0*/ opentitan_soc_top__DOT__tsen2_to_xbar;
        WData/*85:0*/ opentitan_soc_top__DOT__xbar_to_dap[3];
        QData/*51:0*/ opentitan_soc_top__DOT__dap_to_xbar;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_intr;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__wmask;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ opentitan_soc_top__DOT__rdata_i;
        CData/*0:0*/ opentitan_soc_top__DOT__error_i;
        CData/*0:0*/ opentitan_soc_top__DOT__CLK_REF;
        CData/*0:0*/ opentitan_soc_top__DOT__CLK_LC;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__scan_rst_ni;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_addr;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__rvalid;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__out;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__outb;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err;
        // Begin mtask footprint all: 13 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q;
    };
    struct {
        // Begin mtask footprint all: 13 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
        CData/*6:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode;
        CData/*6:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu;
        // Begin mtask footprint all: 13 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d;
        // Begin mtask footprint all: 10 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d;
        // Begin mtask footprint all: 50 
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd;
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load;
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd;
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we;
        // Begin mtask footprint all: 47 50 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we;
        // Begin mtask footprint all: 3 33 37 
        WData/*245:0*/ opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[8];
        // Begin mtask footprint all: 3 33 
        WData/*458:0*/ opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[15];
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 3 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_en_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q;
    };
    struct {
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe;
        // Begin mtask footprint all: 3 32 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_gpio;
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q;
        // Begin mtask footprint all: 3 6 32 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we;
        // Begin mtask footprint all: 3 7 32 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we;
        // Begin mtask footprint all: 2 7 32 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we;
        // Begin mtask footprint all: 7 21 32 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we;
        // Begin mtask footprint all: 6 21 32 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we;
        // Begin mtask footprint all: 2 6 32 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we;
        // Begin mtask footprint all: 4 6 32 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we;
        // Begin mtask footprint all: 6 9 32 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we;
        // Begin mtask footprint all: 2 6 
        QData/*51:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h;
        // Begin mtask footprint all: 2 6 33 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        // Begin mtask footprint all: 6 33 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 6 33 37 
        SData/*14:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 6 37 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next;
        // Begin mtask footprint all: 3 6 37 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we;
        // Begin mtask footprint all: 3 37 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__wr_data;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we;
        // Begin mtask footprint all: 3 5 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia;
        // Begin mtask footprint all: 5 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_timer;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q;
        // Begin mtask footprint all: 5 35 39 42 
        WData/*188:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
        // Begin mtask footprint all: 5 38 39 40 
        QData/*62:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        // Begin mtask footprint all: 5 41 
        WData/*377:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        // Begin mtask footprint all: 5 46 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en;
        // Begin mtask footprint all: 5 47 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en;
        // Begin mtask footprint all: 5 48 
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d;
        // Begin mtask footprint all: 5 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d;
        CData/*3:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        // Begin mtask footprint all: 34 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_1[2][3];
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two;
        // Begin mtask footprint all: 34 36 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_1[2];
        // Begin mtask footprint all: 34 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        // Begin mtask footprint all: 5 34 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw;
        // Begin mtask footprint all: 5 34 
        IData/*30:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err;
        // Begin mtask footprint all: 5 37 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__threshold[1];
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__claim;
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__complete;
        // Begin mtask footprint all: 37 
        CData/*4:0*/ opentitan_soc_top__DOT__intr_controller__DOT__complete_id[1];
        // Begin mtask footprint all: 31 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[13];
        // Begin mtask footprint all: 35 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__prio[32];
        // Begin mtask footprint all: 29 
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int;
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 30 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_11[2][3];
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 26 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9[2][3];
    };
    struct {
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10[2][3];
        // Begin mtask footprint all: 26 31 36 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9[2];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10[2];
        // Begin mtask footprint all: 31 36 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_11[2];
        // Begin mtask footprint all: 27 31 36 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_2[2];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_3[2];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8[2];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12[2];
        // Begin mtask footprint all: 27 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_2[2][3];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_3[2][3];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8[2][3];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12[2][3];
        // Begin mtask footprint all: 25 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4[2][3];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5[2][3];
        // Begin mtask footprint all: 25 31 36 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4[2];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5[2];
        // Begin mtask footprint all: 28 31 36 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7[2];
        // Begin mtask footprint all: 28 31 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_6[2];
        // Begin mtask footprint all: 28 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6[2][3];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7[2][3];
        // Begin mtask footprint all: 24 
        CData/*3:0*/ opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11;
        // Begin mtask footprint all: 8 24 
        WData/*85:0*/ opentitan_soc_top__DOT__dm_to_xbar[3];
        // Begin mtask footprint all: 8 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__req;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we;
        CData/*3:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx;
        // Begin mtask footprint all: 8 22 
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d;
        // Begin mtask footprint all: 8 10 22 36 
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q;
        // Begin mtask footprint all: 8 10 22 37 
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q;
        // Begin mtask footprint all: 8 37 
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_d;
        // Begin mtask footprint all: 8 36 
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d;
        // Begin mtask footprint all: 36 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h[13];
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__sbaddress_sba_csrs;
        // Begin mtask footprint all: 20 
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__cmderror_valid;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__cmderror;
        // Begin mtask footprint all: 8 20 
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d;
        // Begin mtask footprint all: 8 21 
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d;
        // Begin mtask footprint all: 21 
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__clear_resumeack;
        // Begin mtask footprint all: 19 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[16];
        CData/*7:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[16];
    };
    struct {
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[32];
        QData/*32:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
        QData/*32:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext;
        QData/*33:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d;
        QData/*33:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d;
        QData/*32:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result;
        WData/*67:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[3];
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc;
        SData/*15:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a;
        SData/*15:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal;
        // Begin mtask footprint all: 10 19 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int;
        // Begin mtask footprint all: 10 48 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn;
        // Begin mtask footprint all: 48 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we;
        // Begin mtask footprint all: 17 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr;
        SData/*15:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr;
        // Begin mtask footprint all: 17 46 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en;
        // Begin mtask footprint all: 17 47 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en;
        // Begin mtask footprint all: 17 45 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we;
        // Begin mtask footprint all: 17 44 
        IData/*23:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d;
        // Begin mtask footprint all: 10 17 44 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q;
        // Begin mtask footprint all: 10 17 43 44 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q;
        // Begin mtask footprint all: 10 11 17 43 44 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
        // Begin mtask footprint all: 11 17 43 44 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req;
        // Begin mtask footprint all: 43 44 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[2];
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we;
        // Begin mtask footprint all: 17 43 44 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q;
        // Begin mtask footprint all: 10 17 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy;
        // Begin mtask footprint all: 10 13 17 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn;
        // Begin mtask footprint all: 10 13 17 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id;
        // Begin mtask footprint all: 13 17 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec;
        // Begin mtask footprint all: 10 13 17 19 43 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec;
        // Begin mtask footprint all: 10 17 19 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q;
        // Begin mtask footprint all: 17 19 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q;
        // Begin mtask footprint all: 13 17 19 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec;
        // Begin mtask footprint all: 13 17 19 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode;
        // Begin mtask footprint all: 13 17 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
        // Begin mtask footprint all: 10 13 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext;
        // Begin mtask footprint all: 10 13 44 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update;
        CData/*4:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q;
        // Begin mtask footprint all: 13 44 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update;
        // Begin mtask footprint all: 13 17 44 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q;
        // Begin mtask footprint all: 13 17 49 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q;
        // Begin mtask footprint all: 17 49 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store;
        // Begin mtask footprint all: 5 17 49 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d;
        // Begin mtask footprint all: 5 17 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err_plus2;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en;
        // Begin mtask footprint all: 5 17 45 48 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q;
        // Begin mtask footprint all: 5 17 19 48 
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
        // Begin mtask footprint all: 17 19 48 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d;
        // Begin mtask footprint all: 10 17 19 48 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req;
        // Begin mtask footprint all: 10 17 19 34 48 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q;
    };
    struct {
        // Begin mtask footprint all: 11 17 19 44 48 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err;
        // Begin mtask footprint all: 17 19 48 50 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
        // Begin mtask footprint all: 17 19 50 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q;
        // Begin mtask footprint all: 13 17 19 50 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator;
        // Begin mtask footprint all: 5 13 17 19 34 50 
        IData/*30:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q;
        // Begin mtask footprint all: 5 17 19 34 48 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set;
        // Begin mtask footprint all: 5 17 19 45 48 50 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        // Begin mtask footprint all: 5 17 19 45 50 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
        // Begin mtask footprint all: 5 17 19 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q;
        // Begin mtask footprint all: 17 19 
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[32];
        QData/*33:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_wb;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt;
        CData/*4:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q;
        CData/*4:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
        // Begin mtask footprint all: 17 19 34 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q;
        // Begin mtask footprint all: 17 19 49 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op;
        // Begin mtask footprint all: 49 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if;
        // Begin mtask footprint all: 16 
        CData/*4:0*/ opentitan_soc_top__DOT__intr_controller__DOT__irq_id_o[1];
        CData/*4:0*/ opentitan_soc_top__DOT__intr_controller__DOT__cc_id[1];
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata;
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d;
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q;
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux;
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits;
        QData/*32:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword;
        SData/*12:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resume;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__go;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q;
    };
    struct {
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        // Begin mtask footprint all: 16 37 
        CData/*4:0*/ opentitan_soc_top__DOT__intr_controller__DOT__claim_id[1];
        // Begin mtask footprint all: 22 37 
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__sbaddress_write_valid;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__sbdata_read_valid;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__sbdata_write_valid;
        // Begin mtask footprint all: 22 
        QData/*33:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[4];
        QData/*33:0*/ opentitan_soc_top__DOT__debug_module__DOT__dmi_rsp;
        QData/*40:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_d;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs;
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__data_d;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__data_q;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d;
        IData/*31:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d;
        CData/*1:0*/ opentitan_soc_top__DOT__jtag_rsp;
        CData/*4:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__test_logic_reset;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__update_dr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__capture_dr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_req_valid;
        CData/*6:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__address_d;
        CData/*6:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__address_q;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_dmi_busy;
        CData/*4:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq;
        CData/*2:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq;
        // Begin mtask footprint all: 14 
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem[4096];
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem[4096];
        WData/*65:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3];
        WData/*131:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[5];
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__wdata;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__rdata;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__data_we;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword;
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__rdata;
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask;
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword;
        IData/*25:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        QData/*51:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__we;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__instr_valid;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid;
    };
    struct {
        CData/*1:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*1:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        SData/*9:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*1:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__rvalid;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        IData/*19:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        // Begin mtask footprint all: 14 29 
        QData/*51:0*/ opentitan_soc_top__DOT__iccm_to_xbar;
        QData/*51:0*/ opentitan_soc_top__DOT__dccm_to_xbar;
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_we;
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int;
        SData/*11:0*/ opentitan_soc_top__DOT__iccm__DOT__addr;
        SData/*11:0*/ opentitan_soc_top__DOT__dccm__DOT__addr;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__req;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__we;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__req;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 14 48 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d;
        // Begin mtask footprint all: 14 17 48 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q;
        // Begin mtask footprint all: 17 48 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__instr_req;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q;
        // Begin mtask footprint all: 34 48 
        QData/*51:0*/ opentitan_soc_top__DOT__xbar_to_ifu;
        // Begin mtask footprint all: 17 34 48 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q;
        // Begin mtask footprint all: 13 17 34 48 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata;
        // Begin mtask footprint all: 17 34 
        WData/*85:0*/ opentitan_soc_top__DOT__ifu_to_xbar[3];
        WData/*95:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[3];
        WData/*95:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[3];
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d;
        // Begin mtask footprint all: 17 34 50 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en;
        // Begin mtask footprint all: 5 17 34 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q;
        // Begin mtask footprint all: 5 17 49 50 
        CData/*3:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
        // Begin mtask footprint all: 5 49 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready;
        // Begin mtask footprint all: 49 50 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush;
        // Begin mtask footprint all: 17 49 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn;
        // Begin mtask footprint all: 5 17 50 
        IData/*17:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug;
        // Begin mtask footprint all: 5 10 13 17 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d;
        // Begin mtask footprint all: 5 10 17 43 49 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q;
        // Begin mtask footprint all: 5 10 17 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err;
        // Begin mtask footprint all: 5 10 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q;
        // Begin mtask footprint all: 5 10 13 43 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q;
        // Begin mtask footprint all: 5 13 43 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q;
        // Begin mtask footprint all: 10 13 43 50 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done;
        // Begin mtask footprint all: 1 5 10 11 13 17 43 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 3 6 33 37 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q;
        // Begin mtask footprint all: 3 33 37 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q;
        // Begin mtask footprint all: 14 
        QData/*32:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1;
        QData/*32:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1;
        SData/*12:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        SData/*12:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        SData/*12:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        SData/*12:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*4:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*4:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        CData/*4:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*4:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        CData/*1:0*/ __Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
        // Begin mtask footprint all: 17 
        WData/*127:0*/ opentitan_soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[4];
        SData/*11:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__sv2v_cast_12__2__Vfuncout;
        SData/*11:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__sv2v_cast_12__2__inp;
        CData/*5:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__Vfuncout;
        CData/*5:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__inp;
        CData/*5:0*/ __Vtableidx1;
        CData/*5:0*/ __Vtableidx3;
    };
    struct {
        CData/*7:0*/ __Vtableidx4;
        CData/*5:0*/ __Vtableidx5;
        // Begin mtask footprint all: 9 
        IData/*23:0*/ opentitan_soc_top__DOT__u_tempsense__DOT____Vcellout__u_tempsenseInst__DOUT;
        // Begin mtask footprint all: 6 9 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q;
        // Begin mtask footprint all: 6 9 20 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q;
        // Begin mtask footprint all: 6 9 20 30 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q;
        // Begin mtask footprint all: 9 20 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q;
        // Begin mtask footprint all: 7 9 20 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q;
        // Begin mtask footprint all: 7 9 20 30 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q;
        // Begin mtask footprint all: 16 20 
        QData/*63:0*/ opentitan_soc_top__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o;
        // Begin mtask footprint all: 16 
        QData/*32:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        SData/*12:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        CData/*4:0*/ opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        // Begin mtask footprint all: 
        CData/*0:0*/ __Vm_traceActivity[123];
        QData/*62:0*/ __Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        CData/*0:0*/ __VinpClk__TOP__opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*0:0*/ __Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__tck_i;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*0:0*/ __Vclklast__TOP__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n;
        CData/*0:0*/ __Vchglast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req;
        WData/*377:0*/ __Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        WData/*188:0*/ __Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
        CData/*0:0*/ __Vchglast__TOP__opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        // Begin mtask footprint all: 48 
        CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__Vfuncout;
        CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__inp;
        // Begin mtask footprint all: 3 5 
        IData/*31:0*/ __Vdly__opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia;
        // Begin mtask footprint all: 36 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_11__tl_d_i[13];
        // Begin mtask footprint all: 44 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1;
        // Begin mtask footprint all: 34 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__ICCM__tl_h_o[2];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__ICCM__tl_h_i[2][3];
        // Begin mtask footprint all: 35 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[32];
        // Begin mtask footprint all: 30 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLIC__tl_h_i[2][3];
        // Begin mtask footprint all: 31 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[13];
    };
    struct {
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__PLIC__tl_h_o[2];
        // Begin mtask footprint all: 27 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DCCM__tl_h_o[2];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCCM__tl_h_i[2][3];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__GPIO__tl_h_o[2];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__GPIO__tl_h_i[2][3];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__TSEN1__tl_h_o[2];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN1__tl_h_i[2][3];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DEBUG_ROM__tl_h_o[2];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DEBUG_ROM__tl_h_i[2][3];
        // Begin mtask footprint all: 28 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DCDC__tl_h_o[2];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DCDC__tl_h_i[2][3];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__PLL1__tl_h_o[2];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__PLL1__tl_h_i[2][3];
        // Begin mtask footprint all: 25 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__LDO1__tl_h_o[2];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO1__tl_h_i[2][3];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__LDO2__tl_h_o[2];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__LDO2__tl_h_i[2][3];
        // Begin mtask footprint all: 26 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__TSEN2__tl_h_o[2];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__TSEN2__tl_h_i[2][3];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__DAP__tl_h_o[2];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__DAP__tl_h_i[2][3];
        // Begin mtask footprint all: 23 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[13][3];
        // Begin mtask footprint all: 24 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_11__tl_d_o[13][3];
        // Begin mtask footprint all: 18 
        CData/*5:0*/ __Vtableidx2;
        CData/*4:0*/ __Vtableidx6;
        // Begin mtask footprint all: 22 
        QData/*33:0*/ __Vdlyvval__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__Vfuncout;
        CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__grayval;
        CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__dec_tmp;
        CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__54__dec_tmp_sub;
        CData/*4:0*/ __Vtableidx8;
        CData/*2:0*/ __Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr;
        CData/*1:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        // Begin mtask footprint all: 15 
        QData/*40:0*/ __Vdlyvval__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        IData/*31:0*/ __Vfunc_load__22__Vfuncout;
        IData/*31:0*/ __Vfunc_float_load__25__Vfuncout;
        IData/*31:0*/ __Vfunc_load__26__Vfuncout;
        IData/*31:0*/ __Vfunc_load__28__Vfuncout;
        IData/*31:0*/ __Vfunc_csrw__29__Vfuncout;
        IData/*31:0*/ __Vfunc_store__35__Vfuncout;
        IData/*31:0*/ __Vfunc_float_store__37__Vfuncout;
        IData/*31:0*/ __Vfunc_store__38__Vfuncout;
        IData/*31:0*/ __Vfunc_csrr__40__Vfuncout;
        IData/*31:0*/ __Vfunc_store__41__Vfuncout;
        SData/*11:0*/ __Vfunc_csrw__29__csr;
        SData/*11:0*/ __Vfunc_csrr__40__csr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound1;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound2;
        CData/*2:0*/ __Vfunc_load__22__size;
        CData/*2:0*/ __Vfunc_float_load__25__size;
        CData/*4:0*/ __Vfunc_float_load__25__dest;
        CData/*2:0*/ __Vfunc_load__26__size;
        CData/*4:0*/ __Vfunc_load__26__dest;
        CData/*2:0*/ __Vfunc_load__28__size;
        CData/*2:0*/ __Vfunc_store__35__size;
        CData/*2:0*/ __Vfunc_float_store__37__size;
        CData/*4:0*/ __Vfunc_float_store__37__src;
        CData/*2:0*/ __Vfunc_store__38__size;
        CData/*4:0*/ __Vfunc_store__38__src;
        CData/*2:0*/ __Vfunc_store__41__size;
        CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__Vfuncout;
        CData/*2:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__grayval;
        CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__dec_tmp;
    };
    struct {
        CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__48__dec_tmp_sub;
        CData/*4:0*/ __Vtableidx7;
        CData/*2:0*/ __Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr;
        CData/*1:0*/ __Vdly__opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        // Begin mtask footprint all: 15 22 
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__td_o;
        CData/*2:0*/ __Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*0:0*/ opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__tck_i;
        // Begin mtask footprint all: 15 16 20 21 22 36 37 
        QData/*40:0*/ opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o;
    };
    // Begin mtask footprint all: 18 
    static CData/*0:0*/ __Vtable2_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[64];
    static CData/*3:0*/ __Vtable6_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be[32];
    // Begin mtask footprint all: 22 
    static CData/*0:0*/ __Vtable8_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__test_logic_reset[32];
    static CData/*0:0*/ __Vtable8_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__capture_dr[32];
    static CData/*0:0*/ __Vtable8_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__shift_dr[32];
    static CData/*0:0*/ __Vtable8_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__update_dr[32];
    static CData/*0:0*/ __Vtable8_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[32];
    static CData/*0:0*/ __Vtable8_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[32];
    static CData/*0:0*/ __Vtable8_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[32];
    static CData/*3:0*/ __Vtable8_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[32];
    // Begin mtask footprint all: 17 
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[64];
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[64];
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[64];
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[64];
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[64];
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[64];
    static CData/*0:0*/ __Vtable3_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[64];
    static CData/*0:0*/ __Vtable4_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[256];
    static CData/*0:0*/ __Vtable5_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[64];
    // Begin mtask footprint all: 15 
    static CData/*0:0*/ __Vtable7_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_access[32];
    static CData/*0:0*/ __Vtable7_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dtmcs_select[32];
    static CData/*0:0*/ __Vtable7_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[32];
    static CData/*0:0*/ __Vtable7_opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[32];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vopentitan_soc_top__Syms* __VlSymsp;  // Symbol table
  private:
    VlMTaskVertex __Vm_mt_11;
    VlMTaskVertex __Vm_mt_12;
    VlMTaskVertex __Vm_mt_14;
    VlMTaskVertex __Vm_mt_18;
    VlMTaskVertex __Vm_mt_5;
    VlMTaskVertex __Vm_mt_6;
    VlMTaskVertex __Vm_mt_8;
    VlMTaskVertex __Vm_mt_9;
    VlMTaskVertex __Vm_mt_15;
    VlMTaskVertex __Vm_mt_16;
    VlMTaskVertex __Vm_mt_17;
    VlMTaskVertex __Vm_mt_19;
    VlMTaskVertex __Vm_mt_24;
    VlMTaskVertex __Vm_mt_25;
    VlMTaskVertex __Vm_mt_26;
    VlMTaskVertex __Vm_mt_27;
    VlMTaskVertex __Vm_mt_28;
    VlMTaskVertex __Vm_mt_34;
    VlMTaskVertex __Vm_mt_3;
    VlMTaskVertex __Vm_mt_4;
    VlMTaskVertex __Vm_mt_21;
    VlMTaskVertex __Vm_mt_22;
    VlMTaskVertex __Vm_mt_29;
    VlMTaskVertex __Vm_mt_30;
    VlMTaskVertex __Vm_mt_31;
    VlMTaskVertex __Vm_mt_35;
    VlMTaskVertex __Vm_mt_36;
    VlMTaskVertex __Vm_mt_38;
    VlMTaskVertex __Vm_mt_39;
    VlMTaskVertex __Vm_mt_41;
    VlMTaskVertex __Vm_mt_42;
    VlMTaskVertex __Vm_mt_43;
    VlMTaskVertex __Vm_mt_44;
    VlMTaskVertex __Vm_mt_45;
    VlMTaskVertex __Vm_mt_46;
    VlMTaskVertex __Vm_mt_48;
    VlMTaskVertex __Vm_mt_49;
    VlMTaskVertex __Vm_mt_50;
    VlMTaskVertex __Vm_mt_2;
    VlMTaskVertex __Vm_mt_20;
    VlMTaskVertex __Vm_mt_32;
    VlMTaskVertex __Vm_mt_33;
    VlMTaskVertex __Vm_mt_37;
    VlMTaskVertex __Vm_mt_final;
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle;
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vopentitan_soc_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vopentitan_soc_top(VerilatedContext* contextp, const char* name = "TOP");
    Vopentitan_soc_top(const char* name = "TOP")
      : Vopentitan_soc_top(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~Vopentitan_soc_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void __Vconfigure(Vopentitan_soc_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vopentitan_soc_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__115(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__118(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__123(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__165(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__186(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__187(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__188(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__189(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__190(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__191(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__193(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__195(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__198(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__200(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__213(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__223(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__226(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__229(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__232(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__233(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__234(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__235(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__236(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__237(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__238(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__243(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__244(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__245(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__246(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__247(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__248(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__249(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__251(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__254(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__256(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__257(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__38(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__59(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__61(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__85(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__87(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__89(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__92(Vopentitan_soc_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vopentitan_soc_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__102(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__105(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__140(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__151(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__161(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__164(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__169(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__171(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__173(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__177(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__179(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__181(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__183(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__185(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__192(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__201(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__230(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__253(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__103(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__104(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__107(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__108(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__109(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__110(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__111(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__112(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__113(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__116(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__117(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__119(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__120(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__121(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__124(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__125(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__127(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__129(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__130(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__131(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__132(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__133(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__134(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__135(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__136(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__137(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__138(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__139(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__141(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__144(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__145(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__148(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__149(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__150(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__155(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__156(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__158(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__159(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__160(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__163(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__166(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__168(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__170(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__172(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__174(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__178(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__180(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__182(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__184(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__194(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__196(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__197(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__199(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__202(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__203(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__204(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__205(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__208(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__209(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__210(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__212(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__214(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__216(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__217(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__218(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__219(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__220(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__221(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__222(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__224(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__225(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__227(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__228(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__231(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__240(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__241(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__242(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__250(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__252(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__255(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__42(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__43(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__47(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__48(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__51(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__52(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__54(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__56(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__57(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__60(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__62(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__65(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__66(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__69(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__70(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__72(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__73(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__74(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__75(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__76(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__77(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__78(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__80(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__81(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__82(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__83(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__84(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__86(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__88(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__90(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__91(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__93(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__97(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__98(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__99(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__10(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__11(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__12(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__13(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__14(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__15(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__16(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__17(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__18(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__19(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__20(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__21(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__22(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__23(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__24(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__25(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__26(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__27(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__28(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__29(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__30(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__31(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__32(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__33(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__34(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__35(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__36(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__37(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__4(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__6(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__7(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__8(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__9(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgSub1(void* userp, VerilatedVcd* tracep);
    static void traceChgSub2(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub2(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub3(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void __Vmtask__1(bool even_cycle, void* symtab);
    static void __Vmtask__11(bool even_cycle, void* symtab);
    static void __Vmtask__12(bool even_cycle, void* symtab);
    static void __Vmtask__8(bool even_cycle, void* symtab);
    static void __Vmtask__final(bool even_cycle, void* symtab);
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
