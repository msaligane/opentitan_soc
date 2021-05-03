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

//==========

class Vopentitan_soc_top__Syms;
class Vopentitan_soc_top_VerilatedVcd;
class Vopentitan_soc_top_rv_plic_reg_pkg;
class Vopentitan_soc_top_gpio_reg_pkg;


//----------

VL_MODULE(Vopentitan_soc_top) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vopentitan_soc_top_rv_plic_reg_pkg* __PVT__rv_plic_reg_pkg;
    Vopentitan_soc_top_gpio_reg_pkg* __PVT__gpio_reg_pkg;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint all: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 20 21 23 31 
    VL_IN8(rst_ni,0,0);
    // Begin mtask footprint all: 1 2 3 4 5 6 7 8 9 10 12 13 16 20 21 44 
    VL_IN8(clk_i,0,0);
    // Begin mtask footprint all: 3 4 6 10 21 44 
    VL_IN(gpio_i,19,0);
    // Begin mtask footprint all: 21 
    VL_OUT(gpio_o,19,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 16 45 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 65 
        WData/*188:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
        // Begin mtask footprint all: 16 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 
        QData/*62:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        // Begin mtask footprint all: 5 16 47 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__ip;
        // Begin mtask footprint all: 5 
        CData/*4:0*/ opentitan_soc_top__DOT__intr_controller__DOT__irq_id_o[1];
        CData/*4:0*/ opentitan_soc_top__DOT__intr_controller__DOT__cc_id[1];
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd;
        // Begin mtask footprint all: 5 39 
        CData/*4:0*/ opentitan_soc_top__DOT__intr_controller__DOT__claim_id[1];
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
        // Begin mtask footprint all: 5 39 43 45 46 47 
        WData/*171:0*/ opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[6];
        // Begin mtask footprint all: 7 34 38 39 40 43 
        QData/*37:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit;
        // Begin mtask footprint all: 7 38 39 40 43 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 7 38 43 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re;
        // Begin mtask footprint all: 7 38 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 7 20 
        IData/*31:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__rdata;
        IData/*23:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__DOUT_REG;
        CData/*7:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*7:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__reqid;
        CData/*1:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__reqsz;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__rspop;
        CData/*3:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__SEL_CONV_TIME_REG;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__en_REG;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__DONE_REG;
        // Begin mtask footprint all: 7 20 32 
        QData/*51:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h;
        // Begin mtask footprint all: 7 32 38 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        // Begin mtask footprint all: 32 38 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 32 
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 6 16 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia;
        // Begin mtask footprint all: 6 21 33 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we;
        // Begin mtask footprint all: 6 21 33 44 
        WData/*245:0*/ opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[8];
    };
    struct {
        // Begin mtask footprint all: 6 44 
        WData/*458:0*/ opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[15];
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 6 33 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__wr_data;
        // Begin mtask footprint all: 33 
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 5 10 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we;
        // Begin mtask footprint all: 10 21 
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 10 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__CLK_SEL;
        // Begin mtask footprint all: 4 
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q;
    };
    struct {
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q;
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
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe;
        // Begin mtask footprint all: 4 44 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 4 12 39 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we;
        // Begin mtask footprint all: 9 21 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we;
        // Begin mtask footprint all: 3 9 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we;
        // Begin mtask footprint all: 3 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q;
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
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe;
        // Begin mtask footprint all: 4 7 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we;
        // Begin mtask footprint all: 4 9 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we;
        // Begin mtask footprint all: 9 10 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we;
        // Begin mtask footprint all: 8 10 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we;
        // Begin mtask footprint all: 3 8 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we;
        // Begin mtask footprint all: 4 8 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we;
        // Begin mtask footprint all: 3 8 39 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we;
        // Begin mtask footprint all: 4 8 39 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we;
        // Begin mtask footprint all: 4 9 39 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we;
        // Begin mtask footprint all: 3 9 39 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we;
        // Begin mtask footprint all: 3 9 33 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we;
        // Begin mtask footprint all: 9 10 33 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we;
        // Begin mtask footprint all: 10 12 33 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we;
        // Begin mtask footprint all: 10 20 33 
        QData/*51:0*/ opentitan_soc_top__DOT__dccm_to_xbar;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 10 20 
        SData/*11:0*/ opentitan_soc_top__DOT__dccm__DOT__addr;
        // Begin mtask footprint all: 8 10 20 
        QData/*51:0*/ opentitan_soc_top__DOT__tsen1_to_xbar;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 3 10 
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 3 44 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q;
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
        // Begin mtask footprint all: 44 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__data_in_d;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__data_in_q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event;
        // Begin mtask footprint all: 2 13 17 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec;
        // Begin mtask footprint all: 2 13 17 23 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn;
        // Begin mtask footprint all: 13 17 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy;
        // Begin mtask footprint all: 1 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__en_latch;
        // Begin mtask footprint all: 9 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d;
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
        CData/*0:0*/ opentitan_soc_top__DOT__rdata_i;
        CData/*0:0*/ opentitan_soc_top__DOT__error_i;
        CData/*0:0*/ opentitan_soc_top__DOT__CLK_REF;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__CLK_LC;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__scan_rst_ni;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_addr;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__rvalid;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__out;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__outb;
        // Begin mtask footprint all: 11 67 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en;
        // Begin mtask footprint all: 11 68 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en;
        // Begin mtask footprint all: 45 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__prio[32];
        // Begin mtask footprint all: 47 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__ie[1];
        // Begin mtask footprint all: 39 
        CData/*4:0*/ opentitan_soc_top__DOT__intr_controller__DOT__complete_id[1];
        // Begin mtask footprint all: 16 39 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__threshold[1];
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__claim;
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__complete;
        // Begin mtask footprint all: 5 16 39 
        WData/*69:0*/ opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[3];
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q;
        // Begin mtask footprint all: 5 16 
        CData/*5:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q;
        // Begin mtask footprint all: 16 
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d;
        // Begin mtask footprint all: 16 64 
        WData/*377:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        // Begin mtask footprint all: 16 66 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we;
        // Begin mtask footprint all: 16 19 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d;
        // Begin mtask footprint all: 19 
        QData/*32:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
        QData/*32:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext;
        // Begin mtask footprint all: 19 36 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result;
        // Begin mtask footprint all: 21 36 
        WData/*85:0*/ opentitan_soc_top__DOT__ifu_to_xbar[3];
        QData/*32:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder;
        CData/*4:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q;
        CData/*4:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
        // Begin mtask footprint all: 6 21 36 
        QData/*51:0*/ opentitan_soc_top__DOT__iccm_to_xbar;
        // Begin mtask footprint all: 6 21 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_en_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 21 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe;
        // Begin mtask footprint all: 21 44 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 21 23 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec;
        // Begin mtask footprint all: 11 21 23 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q;
        // Begin mtask footprint all: 11 23 
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[32];
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
        // Begin mtask footprint all: 11 23 35 42 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
        // Begin mtask footprint all: 11 22 23 35 42 66 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        // Begin mtask footprint all: 16 17 22 23 35 66 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q;
        // Begin mtask footprint all: 16 17 22 23 35 
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
        // Begin mtask footprint all: 16 17 23 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
        // Begin mtask footprint all: 17 23 
        IData/*17:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip;
        IData/*17:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn;
        // Begin mtask footprint all: 17 23 69 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op;
        // Begin mtask footprint all: 16 23 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d;
        // Begin mtask footprint all: 16 23 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d;
        // Begin mtask footprint all: 16 22 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        // Begin mtask footprint all: 16 46 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set;
        // Begin mtask footprint all: 16 41 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err;
        // Begin mtask footprint all: 13 41 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn;
        // Begin mtask footprint all: 41 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two;
        // Begin mtask footprint all: 37 
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 20 37 
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_we;
        // Begin mtask footprint all: 8 20 37 
        QData/*51:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h;
        // Begin mtask footprint all: 8 20 
        QData/*51:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        IData/*19:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__outstanding;
        // Begin mtask footprint all: 8 20 33 
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 8 33 
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error;
        // Begin mtask footprint all: 7 8 20 33 37 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        // Begin mtask footprint all: 20 33 
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__we;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__req;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 20 33 37 
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        // Begin mtask footprint all: 20 33 37 44 
        SData/*14:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 62 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 48 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 60 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 61 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 58 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 59 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 56 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 57 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 54 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 55 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 52 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 53 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 50 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 51 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 49 63 64 65 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 36 
        QData/*33:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d;
        QData/*33:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d;
        WData/*67:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[3];
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i;
        SData/*15:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a;
        SData/*15:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 13 36 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex;
        // Begin mtask footprint all: 6 36 
        WData/*85:0*/ opentitan_soc_top__DOT__xbar_to_iccm[3];
        SData/*11:0*/ opentitan_soc_top__DOT__iccm__DOT__addr;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__req;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 6 
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem[4096];
        WData/*65:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3];
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__wdata;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__rdata;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__data_we;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask;
        IData/*31:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword;
        IData/*25:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
    };
    struct {
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__we;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__instr_valid;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid;
        CData/*0:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid;
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
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe;
        // Begin mtask footprint all: 6 46 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_gpio;
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__src_q;
        // Begin mtask footprint all: 46 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__le;
        // Begin mtask footprint all: 24 
        WData/*85:0*/ opentitan_soc_top__DOT__lsu_to_xbar[3];
        QData/*32:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b;
        CData/*3:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
        CData/*3:0*/ opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10;
        // Begin mtask footprint all: 24 36 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd;
        // Begin mtask footprint all: 12 24 35 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
        // Begin mtask footprint all: 12 24 
        QData/*32:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a;
        IData/*16:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__num_req_outstanding;
        // Begin mtask footprint all: 12 24 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__data_req;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q;
        // Begin mtask footprint all: 24 31 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_o[3];
        CData/*0:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hold_all_requests;
        // Begin mtask footprint all: 2 24 31 
        CData/*3:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 12 24 25 26 27 28 29 31 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_o[11][3];
        // Begin mtask footprint all: 2 13 14 17 18 22 24 69 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id;
        // Begin mtask footprint all: 2 13 22 24 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
        // Begin mtask footprint all: 2 13 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext;
        // Begin mtask footprint all: 2 13 14 19 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle;
        // Begin mtask footprint all: 2 13 19 24 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type;
        // Begin mtask footprint all: 2 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
        CData/*6:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe;
        // Begin mtask footprint all: 2 22 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
        // Begin mtask footprint all: 22 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec;
        // Begin mtask footprint all: 22 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_jump;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_tbranch;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store;
        // Begin mtask footprint all: 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if;
        // Begin mtask footprint all: 23 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[16];
        CData/*7:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[16];
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[32];
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr;
        // Begin mtask footprint all: 13 23 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int;
        // Begin mtask footprint all: 23 35 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q;
        // Begin mtask footprint all: 23 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw;
        // Begin mtask footprint all: 17 23 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q;
        // Begin mtask footprint all: 17 23 42 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn;
        // Begin mtask footprint all: 17 42 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d;
        // Begin mtask footprint all: 42 69 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush;
        // Begin mtask footprint all: 11 42 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready;
        // Begin mtask footprint all: 11 42 
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        QData/*63:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d;
        // Begin mtask footprint all: 11 41 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en;
        // Begin mtask footprint all: 41 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        // Begin mtask footprint all: 11 41 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d;
        WData/*95:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[3];
    };
    struct {
        WData/*95:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[3];
        IData/*30:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q;
        // Begin mtask footprint all: 11 21 41 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q;
        // Begin mtask footprint all: 11 13 21 36 41 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req;
        // Begin mtask footprint all: 13 17 21 36 41 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q;
        // Begin mtask footprint all: 12 21 35 36 41 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err;
        // Begin mtask footprint all: 12 35 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d;
        // Begin mtask footprint all: 12 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe;
        // Begin mtask footprint all: 12 36 
        WData/*67:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex[3];
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        // Begin mtask footprint all: 12 42 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex;
        // Begin mtask footprint all: 12 21 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal;
        // Begin mtask footprint all: 42 68 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we;
        // Begin mtask footprint all: 42 
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
        // Begin mtask footprint all: 13 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d;
        // Begin mtask footprint all: 11 22 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d;
        // Begin mtask footprint all: 11 22 23 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err_plus2;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
        // Begin mtask footprint all: 22 23 
        SData/*15:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_wb;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set;
        // Begin mtask footprint all: 13 22 23 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q;
        // Begin mtask footprint all: 22 23 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec;
        // Begin mtask footprint all: 2 22 23 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec;
        // Begin mtask footprint all: 2 13 22 23 31 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec;
        // Begin mtask footprint all: 2 23 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec;
        // Begin mtask footprint all: 2 23 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec;
        // Begin mtask footprint all: 2 17 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec;
    };
    struct {
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
        // Begin mtask footprint all: 2 17 36 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode;
        // Begin mtask footprint all: 2 17 36 42 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator;
        // Begin mtask footprint all: 16 17 36 42 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q;
        // Begin mtask footprint all: 16 42 
        CData/*3:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal;
        // Begin mtask footprint all: 16 17 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q;
        // Begin mtask footprint all: 17 19 23 42 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
        // Begin mtask footprint all: 17 19 22 23 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio;
        // Begin mtask footprint all: 16 17 19 22 23 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q;
        // Begin mtask footprint all: 16 17 19 22 23 31 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
        // Begin mtask footprint all: 11 16 17 19 22 23 42 69 
        CData/*3:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
        // Begin mtask footprint all: 11 16 17 19 23 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug;
        // Begin mtask footprint all: 11 16 17 22 23 42 66 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
        // Begin mtask footprint all: 11 16 17 19 22 23 35 42 67 68 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
        // Begin mtask footprint all: 17 19 22 35 68 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
        // Begin mtask footprint all: 19 22 35 67 68 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id;
        // Begin mtask footprint all: 11 22 35 66 67 68 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save;
        // Begin mtask footprint all: 17 22 35 66 67 68 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause;
        // Begin mtask footprint all: 23 35 66 67 68 
        SData/*11:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr;
        // Begin mtask footprint all: 31 35 66 67 68 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int;
        // Begin mtask footprint all: 31 35 67 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we;
        // Begin mtask footprint all: 31 35 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[2];
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d;
        // Begin mtask footprint all: 19 31 35 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
        // Begin mtask footprint all: 16 31 35 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_us_d2h;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q;
        // Begin mtask footprint all: 13 16 31 35 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q;
        // Begin mtask footprint all: 13 16 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q;
        // Begin mtask footprint all: 13 16 23 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err;
        // Begin mtask footprint all: 13 16 17 23 31 42 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q;
        // Begin mtask footprint all: 13 16 35 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q;
        // Begin mtask footprint all: 16 35 
        IData/*23:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d;
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d;
        // Begin mtask footprint all: 14 16 35 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q;
        // Begin mtask footprint all: 14 35 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update;
        // Begin mtask footprint all: 13 14 35 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update;
        // Begin mtask footprint all: 13 14 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id;
        // Begin mtask footprint all: 13 14 67 
        CData/*4:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q;
        // Begin mtask footprint all: 14 23 41 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata;
        // Begin mtask footprint all: 14 
        CData/*6:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu;
        // Begin mtask footprint all: 14 16 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q;
        // Begin mtask footprint all: 14 16 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q;
        // Begin mtask footprint all: 13 14 16 31 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q;
        // Begin mtask footprint all: 13 14 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done;
        // Begin mtask footprint all: 13 14 23 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id;
        // Begin mtask footprint all: 13 14 24 31 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q;
        // Begin mtask footprint all: 13 14 31 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing;
        // Begin mtask footprint all: 13 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d;
        // Begin mtask footprint all: 14 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d;
        // Begin mtask footprint all: 14 22 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw;
    };
    struct {
        // Begin mtask footprint all: 14 22 23 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q;
        // Begin mtask footprint all: 14 22 23 24 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
        // Begin mtask footprint all: 14 23 24 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match;
        // Begin mtask footprint all: 19 23 24 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b;
        // Begin mtask footprint all: 14 19 21 24 36 
        QData/*33:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext;
        // Begin mtask footprint all: 14 24 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_write_wb;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel;
        // Begin mtask footprint all: 14 18 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
        // Begin mtask footprint all: 14 18 19 
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
        // Begin mtask footprint all: 14 18 22 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id;
        // Begin mtask footprint all: 14 17 18 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex;
        // Begin mtask footprint all: 14 17 18 36 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex;
        // Begin mtask footprint all: 17 18 24 36 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel;
        // Begin mtask footprint all: 12 17 24 36 42 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q;
        // Begin mtask footprint all: 12 17 21 24 36 
        WData/*67:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[3];
        // Begin mtask footprint all: 17 36 
        QData/*33:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n;
        // Begin mtask footprint all: 17 36 41 
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q;
        // Begin mtask footprint all: 17 41 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q;
        // Begin mtask footprint all: 17 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_timer;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid;
        // Begin mtask footprint all: 17 19 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d;
        // Begin mtask footprint all: 17 66 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en;
        // Begin mtask footprint all: 17 21 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev;
        // Begin mtask footprint all: 17 21 22 
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause;
        // Begin mtask footprint all: 17 22 
        IData/*17:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio;
        // Begin mtask footprint all: 17 22 23 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set;
        // Begin mtask footprint all: 17 22 23 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec;
        // Begin mtask footprint all: 17 23 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr;
        // Begin mtask footprint all: 17 22 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid;
        // Begin mtask footprint all: 17 42 
        IData/*17:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q;
        // Begin mtask footprint all: 17 31 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id;
        // Begin mtask footprint all: 31 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wb_exception;
        // Begin mtask footprint all: 31 42 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__stall;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending;
        // Begin mtask footprint all: 23 31 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz;
        // Begin mtask footprint all: 31 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill;
        // Begin mtask footprint all: 16 31 69 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err;
        // Begin mtask footprint all: 31 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_i;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_t_p;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_req_done;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_resp_valid;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_mem;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done;
        CData/*0:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__hfifo_reqready;
        // Begin mtask footprint all: 18 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel;
        // Begin mtask footprint all: 18 24 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b;
        CData/*1:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate;
        // Begin mtask footprint all: 12 18 24 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req;
        // Begin mtask footprint all: 12 31 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d;
        CData/*0:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_rsp;
        // Begin mtask footprint all: 2 12 31 
        CData/*0:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__accept_t_req;
        // Begin mtask footprint all: 12 13 22 31 35 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
        // Begin mtask footprint all: 12 22 31 35 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req;
        // Begin mtask footprint all: 19 22 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
        // Begin mtask footprint all: 19 22 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id;
        // Begin mtask footprint all: 15 
        WData/*991:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[31];
        // Begin mtask footprint all: 15 24 
        WData/*1023:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[32];
        // Begin mtask footprint all: 15 35 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb;
        // Begin mtask footprint all: 15 67 
        IData/*30:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec;
        // Begin mtask footprint all: 16 67 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en;
        // Begin mtask footprint all: 16 23 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__outstanding_load_wb;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run;
        // Begin mtask footprint all: 16 22 23 31 36 
        CData/*5:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q;
        // Begin mtask footprint all: 1 11 12 13 14 16 17 21 23 31 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk;
        // Begin mtask footprint all: 11 13 14 16 23 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d;
        // Begin mtask footprint all: 11 14 22 23 41 42 
        IData/*30:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q;
        // Begin mtask footprint all: 11 21 23 41 42 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set;
        // Begin mtask footprint all: 11 21 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q;
        // Begin mtask footprint all: 11 21 66 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init;
        // Begin mtask footprint all: 11 66 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en;
        // Begin mtask footprint all: 11 35 
        CData/*2:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d;
        // Begin mtask footprint all: 35 
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we;
        // Begin mtask footprint all: 12 20 
        CData/*2:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_size;
        // Begin mtask footprint all: 12 20 31 
        CData/*0:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 20 31 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__tl_u_i[11];
        // Begin mtask footprint all: 20 44 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next;
        // Begin mtask footprint all: 20 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_d2h[10];
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem[4096];
        WData/*131:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[5];
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__rdata;
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask;
        IData/*31:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q;
        CData/*0:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*2:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__rvalid;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*2:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__error;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__DONE;
        // Begin mtask footprint all: 20 41 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d;
        // Begin mtask footprint all: 20 21 41 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q;
        // Begin mtask footprint all: 21 41 
        QData/*51:0*/ opentitan_soc_top__DOT__xbar_to_ifu;
        IData/*31:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n;
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__instr_req;
        // Begin mtask footprint all: 7 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__RESET_REGn;
        // Begin mtask footprint all: 7 39 
        IData/*31:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next;
        // Begin mtask footprint all: 3 7 39 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we;
        // Begin mtask footprint all: 4 7 39 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we;
        // Begin mtask footprint all: 6 7 39 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we;
        // Begin mtask footprint all: 6 7 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we;
        // Begin mtask footprint all: 3 7 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we;
        // Begin mtask footprint all: 7 21 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we;
        // Begin mtask footprint all: 7 10 40 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we;
        // Begin mtask footprint all: 7 10 
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__wr_req;
        // Begin mtask footprint all: 7 8 10 
        CData/*0:0*/ opentitan_soc_top__DOT__u_tempsense__DOT__a_ack;
        // Begin mtask footprint all: 7 8 9 10 12 30 32 33 34 37 38 43 44 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d[10][3];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 5 9 39 43 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q;
        // Begin mtask footprint all: 5 9 39 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q;
        // Begin mtask footprint all: 5 39 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q;
        // Begin mtask footprint all: 5 8 39 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q;
        // Begin mtask footprint all: 5 12 39 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q;
        // Begin mtask footprint all: 5 7 39 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q;
    };
    struct {
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q;
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q;
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q;
        // Begin mtask footprint all: 5 7 39 43 
        CData/*0:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q;
        // Begin mtask footprint all: 5 7 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q;
        // Begin mtask footprint all: 
        CData/*0:0*/ __Vm_traceActivity[97];
        QData/*62:0*/ __Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        CData/*0:0*/ __Vclklast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vchglast__TOP__opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req;
        WData/*377:0*/ __Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        WData/*188:0*/ __Vchglast__TOP__opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
        // Begin mtask footprint all: 45 
        CData/*2:0*/ opentitan_soc_top__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[32];
        // Begin mtask footprint all: 67 
        CData/*0:0*/ opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1;
        // Begin mtask footprint all: 24 
        CData/*4:0*/ __Vtableidx6;
        // Begin mtask footprint all: 2 24 31 
        WData/*87:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 29 30 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[3];
        // Begin mtask footprint all: 30 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_10__tl_d_o[10][3];
        // Begin mtask footprint all: 27 30 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[3];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[3];
        // Begin mtask footprint all: 28 30 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[3];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[3];
        // Begin mtask footprint all: 25 30 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[3];
        // Begin mtask footprint all: 26 30 
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[3];
        WData/*85:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[3];
        // Begin mtask footprint all: 23 
        WData/*127:0*/ opentitan_soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[4];
        SData/*11:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__sv2v_cast_12__2__Vfuncout;
        SData/*11:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__sv2v_cast_12__2__inp;
        // Begin mtask footprint all: 35 
        CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__Vfuncout;
        CData/*1:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__sv2v_cast_2__4__inp;
        // Begin mtask footprint all: 18 
        CData/*5:0*/ __Vtableidx2;
        // Begin mtask footprint all: 19 
        CData/*5:0*/ __Vtableidx3;
    };
    struct {
        CData/*7:0*/ __Vtableidx4;
        CData/*5:0*/ __Vtableidx5;
        // Begin mtask footprint all: 12 
        IData/*16:0*/ __Vdly__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__num_req_outstanding;
        // Begin mtask footprint all: 12 20 
        CData/*0:0*/ __Vdly__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 12 20 31 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__err_resp__tl_h_o;
        // Begin mtask footprint all: 20 
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_10__tl_d_i[10];
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o;
        QData/*51:0*/ opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__DOT____Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o;
        QData/*32:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1;
        IData/*23:0*/ opentitan_soc_top__DOT__u_tempsense__DOT____Vcellout__u_tempsenseInst__DOUT;
        SData/*12:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v0;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v1;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v2;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*4:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*2:0*/ __Vdly__opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
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
        // Begin mtask footprint all: 8 
        SData/*12:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        CData/*4:0*/ opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        // Begin mtask footprint all: 17 
        CData/*5:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__Vfuncout;
        CData/*5:0*/ __Vfunc_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__sv2v_cast_6__3__inp;
        CData/*5:0*/ __Vtableidx1;
        // Begin mtask footprint all: 6 
        QData/*32:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1;
        SData/*12:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        SData/*12:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
        SData/*11:0*/ __Vdlyvdim0__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
        CData/*4:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*4:0*/ opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        CData/*1:0*/ __Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v0;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v1;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
    };
    struct {
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v2;
        CData/*4:0*/ __Vdlyvlsb__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
        CData/*7:0*/ __Vdlyvval__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
        CData/*0:0*/ __Vdlyvset__opentitan_soc_top__DOT__iccm__DOT__inst_memory__DOT__mem__v3;
        // Begin mtask footprint all: 6 16 
        IData/*31:0*/ __Vdly__opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia;
        // Begin mtask footprint all: 6 21 
        IData/*31:0*/ __Vdly__opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q;
        IData/*31:0*/ __Vdly__opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_en_q;
        // Begin mtask footprint all: 6 9 44 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q;
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q;
        // Begin mtask footprint all: 6 12 44 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q;
        // Begin mtask footprint all: 6 33 44 
        IData/*31:0*/ opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q;
    };
    // Begin mtask footprint all: 19 
    static CData/*0:0*/ __Vtable3_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[64];
    static CData/*0:0*/ __Vtable4_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[256];
    static CData/*0:0*/ __Vtable5_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[64];
    // Begin mtask footprint all: 24 
    static CData/*3:0*/ __Vtable6_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be[32];
    // Begin mtask footprint all: 18 
    static CData/*0:0*/ __Vtable2_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[64];
    // Begin mtask footprint all: 17 
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[64];
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[64];
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[64];
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[64];
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[64];
    static CData/*0:0*/ __Vtable1_opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[64];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vopentitan_soc_top__Syms* __VlSymsp;  // Symbol table
  private:
    VlMTaskVertex __Vm_mt_14;
    VlMTaskVertex __Vm_mt_15;
    VlMTaskVertex __Vm_mt_2;
    VlMTaskVertex __Vm_mt_7;
    VlMTaskVertex __Vm_mt_16;
    VlMTaskVertex __Vm_mt_18;
    VlMTaskVertex __Vm_mt_11;
    VlMTaskVertex __Vm_mt_17;
    VlMTaskVertex __Vm_mt_19;
    VlMTaskVertex __Vm_mt_20;
    VlMTaskVertex __Vm_mt_23;
    VlMTaskVertex __Vm_mt_30;
    VlMTaskVertex __Vm_mt_31;
    VlMTaskVertex __Vm_mt_37;
    VlMTaskVertex __Vm_mt_38;
    VlMTaskVertex __Vm_mt_67;
    VlMTaskVertex __Vm_mt_68;
    VlMTaskVertex __Vm_mt_3;
    VlMTaskVertex __Vm_mt_4;
    VlMTaskVertex __Vm_mt_5;
    VlMTaskVertex __Vm_mt_6;
    VlMTaskVertex __Vm_mt_21;
    VlMTaskVertex __Vm_mt_22;
    VlMTaskVertex __Vm_mt_36;
    VlMTaskVertex __Vm_mt_41;
    VlMTaskVertex __Vm_mt_43;
    VlMTaskVertex __Vm_mt_44;
    VlMTaskVertex __Vm_mt_45;
    VlMTaskVertex __Vm_mt_46;
    VlMTaskVertex __Vm_mt_48;
    VlMTaskVertex __Vm_mt_49;
    VlMTaskVertex __Vm_mt_50;
    VlMTaskVertex __Vm_mt_51;
    VlMTaskVertex __Vm_mt_52;
    VlMTaskVertex __Vm_mt_53;
    VlMTaskVertex __Vm_mt_54;
    VlMTaskVertex __Vm_mt_55;
    VlMTaskVertex __Vm_mt_56;
    VlMTaskVertex __Vm_mt_57;
    VlMTaskVertex __Vm_mt_58;
    VlMTaskVertex __Vm_mt_59;
    VlMTaskVertex __Vm_mt_60;
    VlMTaskVertex __Vm_mt_61;
    VlMTaskVertex __Vm_mt_62;
    VlMTaskVertex __Vm_mt_63;
    VlMTaskVertex __Vm_mt_65;
    VlMTaskVertex __Vm_mt_66;
    VlMTaskVertex __Vm_mt_69;
    VlMTaskVertex __Vm_mt_10;
    VlMTaskVertex __Vm_mt_33;
    VlMTaskVertex __Vm_mt_39;
    VlMTaskVertex __Vm_mt_40;
    VlMTaskVertex __Vm_mt_42;
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
    static void _combo__TOP__116(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__120(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__121(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__122(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__123(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__124(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__125(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__126(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__127(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__129(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__131(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__139(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__145(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__147(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__151(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__158(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__159(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__165(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__168(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__169(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__171(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__172(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__173(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__174(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__175(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__176(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__177(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__178(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__179(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__180(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__181(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__182(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__183(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__184(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__185(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__186(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__187(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__188(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__189(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__190(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__191(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__192(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__193(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__194(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__196(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__197(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__198(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__199(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__200(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__4(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__41(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__43(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__57(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__58(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__59(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__60(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__61(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__62(Vopentitan_soc_top__Syms* __restrict vlSymsp);
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
    static void _multiclk__TOP__108(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__111(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__113(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__115(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__155(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__157(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__161(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__164(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__166(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__167(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__84(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__86(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__88(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__10(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__100(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__101(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__104(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__105(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__107(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__110(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__112(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__114(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__117(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__118(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__119(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__128(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__130(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__132(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__133(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__134(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__135(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__136(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__137(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__140(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__141(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__142(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__143(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__144(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__146(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__148(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__150(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__152(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__153(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__156(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__160(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__162(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__163(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__170(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__18(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__19(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__195(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__22(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__23(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__25(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__26(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__27(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__28(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__29(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__30(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__31(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__33(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__34(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__36(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__38(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__39(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__42(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__44(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__48(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__51(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__52(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__54(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__55(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__56(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__65(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__66(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__67(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__70(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__71(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__73(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__74(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__75(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__77(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__78(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__81(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__82(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__85(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__87(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__89(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__90(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__91(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__92(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__93(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__94(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__95(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__97(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__98(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__99(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub1(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void __Vmtask__1(bool even_cycle, void* symtab);
    static void __Vmtask__14(bool even_cycle, void* symtab);
    static void __Vmtask__15(bool even_cycle, void* symtab);
    static void __Vmtask__7(bool even_cycle, void* symtab);
    static void __Vmtask__final(bool even_cycle, void* symtab);
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
