// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vopentitan_soc_top.h for the primary calling header

#ifndef VERILATED_VOPENTITAN_SOC_TOP_TLUL_SOCKET_M1__PI3_H_
#define VERILATED_VOPENTITAN_SOC_TOP_TLUL_SOCKET_M1__PI3_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "Vopentitan_soc_top__Dpi.h"

//==========

class Vopentitan_soc_top__Syms;
class Vopentitan_soc_top_VerilatedVcd;


//----------

VL_MODULE(Vopentitan_soc_top_tlul_socket_m1__pi3) {
  public:
    
    // PORTS
    // Begin mtask footprint all: 
    VL_IN64(tl_d_i,51,0);
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    // Begin mtask footprint all: 7 25 27 28 29 30 31 
    VL_INW(tl_h_i[2],85,0,3);
    // Begin mtask footprint all: 7 27 28 29 30 31 44 
    VL_OUT64(tl_h_o[2],51,0);
    // Begin mtask footprint all: 4 7 8 9 10 19 21 26 27 28 31 32 33 35 45 
    VL_OUTW(tl_d_o,85,0,3);
    
    // LOCAL SIGNALS
    // Begin mtask footprint all: 4 7 9 27 28 29 30 31 32 
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask;
    // Begin mtask footprint all: 4 7 9 27 28 29 30 31 44 
    CData/*1:0*/ __PVT__hfifo_rspvalid;
    // Begin mtask footprint all: 7 27 28 29 30 31 44 
    QData/*51:0*/ __PVT__hrsp_fifo_i[2];
    CData/*1:0*/ __PVT__hgrant;
    CData/*0:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o;
    // Begin mtask footprint all: 7 25 27 28 29 30 31 
    WData/*85:0*/ __PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[3];
    WData/*85:0*/ __PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[3];
    // Begin mtask footprint all: 7 27 28 29 30 31 32 
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req;
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
    // Begin mtask footprint all: 4 7 9 19 21 26 27 28 29 30 31 32 33 44 
    QData/*51:0*/ __PVT__drsp_fifo_o;
    // Begin mtask footprint all: 4 7 9 19 21 26 27 28 29 30 31 32 33 
    CData/*1:0*/ __PVT__hrequest;
    // Begin mtask footprint all: 7 19 21 26 27 28 29 30 31 32 33 
    WData/*85:0*/ __PVT__hreq_fifo_o[2][3];
    // Begin mtask footprint all: 7 19 21 26 27 28 29 30 31 32 33 44 
    CData/*1:0*/ __PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
    // Begin mtask footprint all: 7 19 21 26 27 28 31 32 33 
    WData/*85:0*/ __PVT__dreq_fifo_i[3];
    CData/*1:0*/ __PVT__dfifo_rspready;
    
    // LOCAL VARIABLES
    // Begin mtask footprint all: 7 19 21 26 27 28 31 32 33 
    WData/*85:0*/ __Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[2][3];
    WData/*85:0*/ __Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3];
    // Begin mtask footprint all: 7 25 27 28 29 30 31 32 
    WData/*85:0*/ __Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[3];
    WData/*85:0*/ __Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[3];
    // Begin mtask footprint all: 7 27 28 29 30 31 44 
    QData/*51:0*/ __Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o;
    QData/*51:0*/ __Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o;
    
    // INTERNAL VARIABLES
  private:
    Vopentitan_soc_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vopentitan_soc_top_tlul_socket_m1__pi3);  ///< Copying not allowed
  public:
    Vopentitan_soc_top_tlul_socket_m1__pi3(const char* name = "TOP");
    ~Vopentitan_soc_top_tlul_socket_m1__pi3();
    
    // INTERNAL METHODS
    void __Vconfigure(Vopentitan_soc_top__Syms* symsp, bool first);
    void _combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO__245(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__237(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__239(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC__244(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _combo__TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1__246(Vopentitan_soc_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP__243(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__240(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1__241(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _sequent__TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1__242(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP__7(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__163(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__166(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__185(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__188(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__207(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__210(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__31(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__33(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__86(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM__96(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC__10(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM__9(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO__21(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__1(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__11(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__2(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__20(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__23(Vopentitan_soc_top__Syms* __restrict vlSymsp);
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__26(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__27(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__28(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__29(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__30(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__32(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__34(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__35(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM__36(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__12(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__3(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__70(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1__76(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2__4(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC__22(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1__5(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1__8(Vopentitan_soc_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
