// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vopentitan_soc_top.h for the primary calling header

#ifndef VERILATED_VOPENTITAN_SOC_TOP_TLUL_SOCKET_1N__PI2_H_
#define VERILATED_VOPENTITAN_SOC_TOP_TLUL_SOCKET_1N__PI2_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "Vopentitan_soc_top__Dpi.h"

//==========

class Vopentitan_soc_top__Syms;
class Vopentitan_soc_top_VerilatedVcd;


//----------

VL_MODULE(Vopentitan_soc_top_tlul_socket_1n__pi2) {
  public:
    
    // PORTS
    // Begin mtask footprint all: 12 35 39 44 
    VL_OUT64(tl_h_o,51,0);
    // Begin mtask footprint all: 31 35 39 
    VL_IN64(tl_d_i[13],51,0);
    // Begin mtask footprint all: 
    VL_INW(tl_h_i,85,0,3);
    VL_IN8(dev_select_i,3,0);
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    // Begin mtask footprint all: 22 23 
    VL_OUTW(tl_d_o[13],85,0,3);
    
    // LOCAL SIGNALS
    // Begin mtask footprint all: 8 14 22 23 
    IData/*16:0*/ __PVT__num_req_outstanding;
    // Begin mtask footprint all: 8 14 22 23 35 39 
    WData/*85:0*/ __PVT__tl_u_o[14][3];
    CData/*3:0*/ __PVT__dev_select_outstanding;
    // Begin mtask footprint all: 8 22 23 35 39 
    WData/*85:0*/ __PVT__tl_t_o[3];
    // Begin mtask footprint all: 22 23 35 39 
    CData/*0:0*/ __PVT__hold_all_requests;
    // Begin mtask footprint all: 35 39 
    QData/*51:0*/ __PVT__tl_u_i[14];
    QData/*51:0*/ __PVT__tl_t_i;
    QData/*51:0*/ __PVT__tl_t_p;
    CData/*0:0*/ __PVT__hfifo_reqready;
    // Begin mtask footprint all: 8 14 35 39 
    CData/*0:0*/ __PVT__accept_t_req;
    CData/*0:0*/ __PVT__accept_t_rsp;
    CData/*2:0*/ __PVT__err_resp__DOT__err_opcode;
    CData/*7:0*/ __PVT__err_resp__DOT__err_source;
    CData/*1:0*/ __PVT__err_resp__DOT__err_size;
    CData/*0:0*/ __PVT__err_resp__DOT__err_req_pending;
    CData/*0:0*/ __PVT__err_resp__DOT__err_rsp_pending;
    
    // LOCAL VARIABLES
    // Begin mtask footprint all: 22 23 
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[3];
    // Begin mtask footprint all: 8 14 
    IData/*16:0*/ __Vdly__num_req_outstanding;
    // Begin mtask footprint all: 8 14 35 39 
    QData/*51:0*/ __Vcellout__err_resp__tl_h_o;
    CData/*0:0*/ __Vdly__err_resp__DOT__err_rsp_pending;
    // Begin mtask footprint all: 8 14 22 23 35 39 
    WData/*87:0*/ fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
    // Begin mtask footprint all: 35 39 
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o;
    // Begin mtask footprint all: 31 35 39 
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o;
    
    // INTERNAL VARIABLES
  private:
    Vopentitan_soc_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vopentitan_soc_top_tlul_socket_1n__pi2);  ///< Copying not allowed
  public:
    Vopentitan_soc_top_tlul_socket_1n__pi2(const char* name = "TOP");
    ~Vopentitan_soc_top_tlul_socket_1n__pi2();
    
    // INTERNAL METHODS
    void __Vconfigure(Vopentitan_soc_top__Syms* symsp, bool first);
    void _combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__37(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__41(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__43(Vopentitan_soc_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__34(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__35(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__36(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__39(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__42(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__11(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__13(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__15(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__16(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__19(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__2(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__20(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__22(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__23(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__25(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__27(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__28(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__30(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__4(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__6(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__7(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10__9(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__14(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__5(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11__8(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
