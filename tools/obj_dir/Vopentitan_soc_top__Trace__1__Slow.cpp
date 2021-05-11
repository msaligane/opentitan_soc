// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopentitan_soc_top__Syms.h"


void Vopentitan_soc_top::traceFullSub1(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp2202[4];
    // Body
    {
        tracep->fullBit(oldp+4294,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [1U][2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+4295,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U)))));
        tracep->fullIData(oldp+4296,((((0x200000U & 
                                        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U])
                                        ? ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                            << 0xaU) 
                                           | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                              >> 0x16U))
                                        : vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                      & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we)
                                          ? (~ ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [1U][1U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][0U] 
                                                   >> 1U)))
                                          : 0xffffffffU))),32);
        tracep->fullBit(oldp+4297,((1U & vlTOPp->gpio_i)));
        tracep->fullBit(oldp+4298,((1U & ((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                           : vlTOPp->gpio_i))));
        tracep->fullBit(oldp+4299,((1U & (vlTOPp->gpio_i 
                                          >> 1U))));
        tracep->fullBit(oldp+4300,((1U & ((2U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 1U)))));
        tracep->fullBit(oldp+4301,((1U & (vlTOPp->gpio_i 
                                          >> 2U))));
        tracep->fullBit(oldp+4302,((1U & ((4U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 2U)))));
        tracep->fullBit(oldp+4303,((1U & (vlTOPp->gpio_i 
                                          >> 3U))));
        tracep->fullBit(oldp+4304,((1U & ((8U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 3U)))));
        tracep->fullBit(oldp+4305,((1U & (vlTOPp->gpio_i 
                                          >> 4U))));
        tracep->fullBit(oldp+4306,((1U & ((0x10U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 4U)))));
        tracep->fullBit(oldp+4307,((1U & (vlTOPp->gpio_i 
                                          >> 5U))));
        tracep->fullBit(oldp+4308,((1U & ((0x20U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 5U)))));
        tracep->fullBit(oldp+4309,((1U & (vlTOPp->gpio_i 
                                          >> 6U))));
        tracep->fullBit(oldp+4310,((1U & ((0x40U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 6U)))));
        tracep->fullBit(oldp+4311,((1U & (vlTOPp->gpio_i 
                                          >> 7U))));
        tracep->fullBit(oldp+4312,((1U & ((0x80U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 7U)))));
        tracep->fullBit(oldp+4313,((1U & (vlTOPp->gpio_i 
                                          >> 8U))));
        tracep->fullBit(oldp+4314,((1U & ((0x100U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 8U)))));
        tracep->fullBit(oldp+4315,((1U & (vlTOPp->gpio_i 
                                          >> 9U))));
        tracep->fullBit(oldp+4316,((1U & ((0x200U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 9U)))));
        tracep->fullBit(oldp+4317,((1U & (vlTOPp->gpio_i 
                                          >> 0xaU))));
        tracep->fullBit(oldp+4318,((1U & ((0x400U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xaU)))));
        tracep->fullBit(oldp+4319,((1U & (vlTOPp->gpio_i 
                                          >> 0xbU))));
        tracep->fullBit(oldp+4320,((1U & ((0x800U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xbU)))));
        tracep->fullBit(oldp+4321,((1U & (vlTOPp->gpio_i 
                                          >> 0xcU))));
        tracep->fullBit(oldp+4322,((1U & ((0x1000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xcU)))));
        tracep->fullBit(oldp+4323,((1U & (vlTOPp->gpio_i 
                                          >> 0xdU))));
        tracep->fullBit(oldp+4324,((1U & ((0x2000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xdU)))));
        tracep->fullBit(oldp+4325,((1U & (vlTOPp->gpio_i 
                                          >> 0xeU))));
        tracep->fullBit(oldp+4326,((1U & ((0x4000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xeU)))));
        tracep->fullBit(oldp+4327,((1U & (vlTOPp->gpio_i 
                                          >> 0xfU))));
        tracep->fullBit(oldp+4328,((1U & ((0x8000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xfU)))));
        tracep->fullBit(oldp+4329,((1U & (vlTOPp->gpio_i 
                                          >> 0x10U))));
        tracep->fullBit(oldp+4330,((1U & ((0x10000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x10U)))));
        tracep->fullBit(oldp+4331,((1U & (vlTOPp->gpio_i 
                                          >> 0x11U))));
        tracep->fullBit(oldp+4332,((1U & ((0x20000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x11U)))));
        tracep->fullBit(oldp+4333,((1U & (vlTOPp->gpio_i 
                                          >> 0x12U))));
        tracep->fullBit(oldp+4334,((1U & ((0x40000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x12U)))));
        tracep->fullBit(oldp+4335,((1U & (vlTOPp->gpio_i 
                                          >> 0x13U))));
        tracep->fullBit(oldp+4336,((1U & ((0x80000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x13U)))));
        tracep->fullBit(oldp+4337,((1U & (vlTOPp->gpio_i 
                                          >> 0x14U))));
        tracep->fullBit(oldp+4338,((1U & ((0x100000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x14U)))));
        tracep->fullBit(oldp+4339,((1U & (vlTOPp->gpio_i 
                                          >> 0x15U))));
        tracep->fullBit(oldp+4340,((1U & ((0x200000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x15U)))));
        tracep->fullBit(oldp+4341,((1U & (vlTOPp->gpio_i 
                                          >> 0x16U))));
        tracep->fullBit(oldp+4342,((1U & ((0x400000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x16U)))));
        tracep->fullBit(oldp+4343,((1U & (vlTOPp->gpio_i 
                                          >> 0x17U))));
        tracep->fullBit(oldp+4344,((1U & ((0x800000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x17U)))));
        tracep->fullBit(oldp+4345,((1U & (vlTOPp->gpio_i 
                                          >> 0x18U))));
        tracep->fullBit(oldp+4346,((1U & ((0x1000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x18U)))));
        tracep->fullBit(oldp+4347,((1U & (vlTOPp->gpio_i 
                                          >> 0x19U))));
        tracep->fullBit(oldp+4348,((1U & ((0x2000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+4349,((1U & (vlTOPp->gpio_i 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+4350,((1U & ((0x4000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1aU)))));
        tracep->fullBit(oldp+4351,((1U & (vlTOPp->gpio_i 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+4352,((1U & ((0x8000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1bU)))));
        tracep->fullBit(oldp+4353,((1U & (vlTOPp->gpio_i 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+4354,((1U & ((0x10000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1cU)))));
        tracep->fullBit(oldp+4355,((1U & (vlTOPp->gpio_i 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+4356,((1U & ((0x20000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+4357,((1U & (vlTOPp->gpio_i 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+4358,((1U & ((0x40000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1eU)))));
        tracep->fullBit(oldp+4359,((1U & (vlTOPp->gpio_i 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+4360,((1U & ((0x80000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1fU)))));
        tracep->fullCData(oldp+4361,(vlTOPp->opentitan_soc_top__DOT__u_dut__DOT__ctrl_fsm_ns),2);
        tracep->fullBit(oldp+4362,(vlTOPp->opentitan_soc_top__DOT__u_dut__DOT__we_d));
        tracep->fullBit(oldp+4363,(vlTOPp->opentitan_soc_top__DOT__u_dut__DOT__reset_d));
        tracep->fullCData(oldp+4364,(vlTOPp->opentitan_soc_top__DOT__u_dut__DOT__byte_count),2);
        tracep->fullBit(oldp+4365,(vlTOPp->opentitan_soc_top__DOT__programmer__DOT__r_Rx_Data_R));
        tracep->fullBit(oldp+4366,(vlTOPp->opentitan_soc_top__DOT__programmer__DOT__r_Rx_Data));
        tracep->fullIData(oldp+4367,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata),32);
        tracep->fullIData(oldp+4368,(((IData)(vlTOPp->rst_ni)
                                       ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                       : 0U)),32);
        tracep->fullBit(oldp+4369,((1U & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                           >> 0x15U) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar)))));
        tracep->fullBit(oldp+4370,(((IData)((0x800U 
                                             == (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->fullBit(oldp+4371,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid));
        tracep->fullBit(oldp+4372,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                          & ((1U == 
                                              (3U & 
                                               ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU)))
                                              ? ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                 | ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xaU))
                                              : ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))))));
        tracep->fullIData(oldp+4373,((((IData)(vlTOPp->rst_ni)
                                        ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                        : 0U) & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->fullBit(oldp+4374,((((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullSData(oldp+4375,(((((4U != (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                   >> 0x12U)))
                                         ? 0U : 1U) 
                                       << 0xbU) | (
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (vlTOPp->opentitan_soc_top__DOT__xbar_to_iccm[2U] 
                                                         >> 5U))))),13);
        tracep->fullCData(oldp+4376,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 2U : (3U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 1U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(2U) 
                                                  - 
                                                  (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+4377,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->fullSData(oldp+4378,(((0x19U >= (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                       ? (0x1fffU & 
                                          (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x1fU 
                                               & ((IData)(0xdU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                       : 0U)),13);
        tracep->fullCData(oldp+4379,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 2U : (3U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 1U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(2U) 
                                                  - 
                                                  (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+4380,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->fullCData(oldp+4381,(((9U >= (0xfU 
                                              & ((IData)(5U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                       ? (0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(5U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                       : 0U)),5);
        tracep->fullCData(oldp+4382,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 2U : (3U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 1U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(2U) 
                                                  - 
                                                  (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+4383,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                    & ((IData)((0x800U 
                                                == 
                                                (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        tracep->fullQData(oldp+4384,(((0x41U >= (0x7fU 
                                                 & ((IData)(0x21U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                       ? (0x1ffffffffULL 
                                          & (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                       : 0ULL)),33);
        tracep->fullQData(oldp+4386,((0x1ffffffffULL 
                                      & (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))
                                          ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                             << 1U)
                                          : ((0x41U 
                                              >= (0x7fU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (3U 
                                                                     & (((IData)(0x21U) 
                                                                         * 
                                                                         (1U 
                                                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                        >> 5U)))])) 
                                                   << 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x21U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (3U 
                                                                       & (((IData)(0x21U) 
                                                                           * 
                                                                           (1U 
                                                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                          >> 5U)))])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x21U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x21U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                       (3U 
                                                                        & (((IData)(0x21U) 
                                                                            * 
                                                                            (1U 
                                                                             & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x21U) 
                                                           * 
                                                           (1U 
                                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                              : 0ULL)))),33);
        tracep->fullIData(oldp+4388,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata),32);
        tracep->fullBit(oldp+4389,((1U & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0U][2U] 
                                           >> 0x15U) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar)))));
        tracep->fullBit(oldp+4390,(((IData)((0x800U 
                                             == (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->fullIData(oldp+4391,((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata 
                                      & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->fullBit(oldp+4392,((((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [0U][2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullSData(oldp+4393,(((((4U != (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][2U] 
                                                   >> 0x12U)))
                                         ? 0U : 1U) 
                                       << 0xbU) | (
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [0U][2U] 
                                                         >> 5U))))),13);
        tracep->fullCData(oldp+4394,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->fullBit(oldp+4395,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->fullSData(oldp+4396,(((0x33U >= (0x3fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                       ? (0x1fffU & (IData)(
                                                            (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                             >> 
                                                             (0x3fU 
                                                              & ((IData)(0xdU) 
                                                                 * 
                                                                 (3U 
                                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                       : 0U)),13);
        tracep->fullCData(oldp+4397,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->fullCData(oldp+4398,(((0x13U >= (0x1fU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                       ? (0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(5U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                       : 0U)),5);
        tracep->fullCData(oldp+4399,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->fullBit(oldp+4400,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                    & ((IData)((0x800U 
                                                == 
                                                (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->fullQData(oldp+4401,(((0x83U >= (0xffU 
                                                 & ((IData)(0x21U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                       ? (0x1ffffffffULL 
                                          & (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                       : 0ULL)),33);
        tracep->fullQData(oldp+4403,((0x1ffffffffULL 
                                      & (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                          ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                             << 1U)
                                          : ((0x83U 
                                              >= (0xffU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                              ? (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   ((IData)(2U) 
                                                                    + 
                                                                    (7U 
                                                                     & (((IData)(0x21U) 
                                                                         * 
                                                                         (3U 
                                                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                        >> 5U)))])) 
                                                   << 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x21U) 
                                                        * 
                                                        (3U 
                                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (7U 
                                                                       & (((IData)(0x21U) 
                                                                           * 
                                                                           (3U 
                                                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                          >> 5U)))])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x21U) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x21U) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                       (7U 
                                                                        & (((IData)(0x21U) 
                                                                            * 
                                                                            (3U 
                                                                             & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x21U) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                              : 0ULL)))),33);
        tracep->fullBit(oldp+4405,(((IData)(vlTOPp->rst_ni) 
                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_dut__DOT__reset_q) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dbg_rst))))));
        tracep->fullBit(oldp+4406,(vlTOPp->opentitan_soc_top__DOT__reset_manager__DOT__rst_q));
        tracep->fullIData(oldp+4407,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le),32);
        tracep->fullIData(oldp+4408,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0]),32);
        tracep->fullIData(oldp+4409,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set),32);
        tracep->fullBit(oldp+4410,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re));
        tracep->fullBit(oldp+4411,(((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)((0U 
                                                   != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit)))) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err))));
        tracep->fullBit(oldp+4412,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)((0U 
                                                  != vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit))))));
        tracep->fullBit(oldp+4413,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err));
        tracep->fullCData(oldp+4414,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
        tracep->fullBit(oldp+4415,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                              >> 9U)) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+4416,((((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                              >> 0x24U)) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+4417,(((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit 
                                             >> 0x24U)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_re))));
        tracep->fullQData(oldp+4418,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__addr_hit),38);
        tracep->fullBit(oldp+4420,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x33U)) 
                                          & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [9U][0U]))));
        tracep->fullBit(oldp+4421,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                    & (0U != (3U & 
                                              ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [9U][2U] 
                                                << 0x1bU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [9U][1U] 
                                                  >> 5U)))))));
        tracep->fullBit(oldp+4422,((1U & (~ ((((0U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [9U][2U] 
                                                    >> 0x12U))) 
                                               | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [9U][2U] 
                                                      >> 0x12U)))) 
                                              | (4U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][2U] 
                                                     >> 0x12U)))) 
                                             & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                                & (((4U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [9U][2U] 
                                                         >> 0x12U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                           [9U][2U] 
                                                           >> 0x12U)))) 
                                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->fullBit(oldp+4423,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        tracep->fullBit(oldp+4424,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [9U][2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullIData(oldp+4425,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                     [0U]),32);
        tracep->fullQData(oldp+4426,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->fullBit(oldp+4428,((((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                     > vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                     [0U]) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->fullCData(oldp+4429,(((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                       ? (0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                       : 0U)),6);
        tracep->fullBit(oldp+4430,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                   >> 0x33U)) 
                                          & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [6U][0U]))));
        tracep->fullIData(oldp+4431,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__rdata),32);
        tracep->fullBit(oldp+4432,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__error));
        tracep->fullBit(oldp+4433,((1U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                            & (0U != 
                                               (3U 
                                                & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][1U] 
                                                      >> 5U))))) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                          | (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [6U][2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                        [6U][2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                            [6U][2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                              [6U][2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))))))));
        tracep->fullBit(oldp+4434,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                    & (0U != (3U & 
                                              ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [6U][2U] 
                                                << 0x1bU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [6U][1U] 
                                                  >> 5U)))))));
        tracep->fullBit(oldp+4435,((1U & (~ ((((0U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [6U][2U] 
                                                    >> 0x12U))) 
                                               | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [6U][2U] 
                                                      >> 0x12U)))) 
                                              | (4U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [6U][2U] 
                                                     >> 0x12U)))) 
                                             & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                & (((4U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [6U][2U] 
                                                         >> 0x12U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                           [6U][2U] 
                                                           >> 0x12U)))) 
                                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->fullBit(oldp+4436,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack) 
                                    & (4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))))));
        tracep->fullCData(oldp+4437,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__SEL_CONV_TIME_REG),4);
        tracep->fullBit(oldp+4438,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__en_REG));
        tracep->fullBit(oldp+4439,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [6U][2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+4440,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x33U)) 
                                          & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                          [0xaU][0U]))));
        tracep->fullBit(oldp+4441,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                    & (0U != (3U & 
                                              ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                [0xaU][2U] 
                                                << 0x1bU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                  [0xaU][1U] 
                                                  >> 5U)))))));
        tracep->fullBit(oldp+4442,((1U & (~ ((((0U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                    [0xaU][2U] 
                                                    >> 0x12U))) 
                                               | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                      [0xaU][2U] 
                                                      >> 0x12U)))) 
                                              | (4U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [0xaU][2U] 
                                                     >> 0x12U)))) 
                                             & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                                & (((4U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                         [0xaU][2U] 
                                                         >> 0x12U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                           [0xaU][2U] 
                                                           >> 0x12U)))) 
                                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->fullBit(oldp+4443,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                     [0xaU][2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+4444,((1U & (((0x80000000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                            ? vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[2U]
                                            : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)) 
                                          & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_watermark_we)) 
                                             | (~ (
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][0U] 
                                                   >> 1U)))))));
        tracep->fullBit(oldp+4445,((1U & (((0x20000000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                            ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 0x1eU)
                                            : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)) 
                                          & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_watermark_we)) 
                                             | (~ (
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][0U] 
                                                   >> 2U)))))));
        tracep->fullBit(oldp+4446,((1U & (((0x8000000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                            ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 0x1cU)
                                            : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)) 
                                          & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_tx_empty_we)) 
                                             | (~ (
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][0U] 
                                                   >> 3U)))))));
        tracep->fullBit(oldp+4447,((1U & (((0x2000000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                            ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 0x1aU)
                                            : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                                          & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_overflow_we)) 
                                             | (~ (
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][0U] 
                                                   >> 4U)))))));
        tracep->fullBit(oldp+4448,((1U & (((0x800000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                            ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 0x18U)
                                            : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                                          & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_frame_err_we)) 
                                             | (~ (
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][0U] 
                                                   >> 5U)))))));
        tracep->fullBit(oldp+4449,((1U & (((0x200000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                            ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 0x16U)
                                            : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                                          & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_break_err_we)) 
                                             | (~ (
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][0U] 
                                                   >> 6U)))))));
        tracep->fullBit(oldp+4450,((1U & (((0x80000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                            ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 0x14U)
                                            : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                                          & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_timeout_we)) 
                                             | (~ (
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][0U] 
                                                   >> 7U)))))));
        tracep->fullBit(oldp+4451,((1U & (((0x20000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U])
                                            ? (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                               >> 0x12U)
                                            : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                                          & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__intr_state_rx_parity_err_we)) 
                                             | (~ (
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][0U] 
                                                   >> 8U)))))));
        tracep->fullCData(oldp+4452,((7U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we)
                                             ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][1U] 
                                                 << 0x1dU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][0U] 
                                                   >> 3U))
                                             : vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U]))),3);
        tracep->fullCData(oldp+4453,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__u_reg__DOT__fifo_ctrl_txilvl_we)
                                             ? ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][1U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][0U] 
                                                   >> 6U))
                                             : ((vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[1U] 
                                                 << 3U) 
                                                | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__hw2reg[0U] 
                                                   >> 0x1dU))))),2);
        tracep->fullCData(oldp+4454,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                       ? 0U : (0xffU 
                                               & (((0U 
                                                    == 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U)))
                                                    ? 0U
                                                    : 
                                                   (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                    ((IData)(1U) 
                                                     + 
                                                     (7U 
                                                      & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 2U)))] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x18U 
                                                      & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         << 3U))))) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                     (7U 
                                                      & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 2U))] 
                                                     >> 
                                                     (0x18U 
                                                      & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         << 3U))))))),8);
        tracep->fullIData(oldp+4455,(((1U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[0U])
                                       ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_timeout)
                                           ? 0U : (
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                                    != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                                                    ? 0U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth))
                                                     ? 0U
                                                     : 
                                                    (0xffffffU 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q)
                                                         ? 
                                                        ((IData)(1U) 
                                                         + vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)
                                                         : vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_timeout_count_q)))))
                                       : 0U)),24);
        tracep->fullBit(oldp+4456,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth) 
                                    != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_depth_prev_q))));
        tracep->fullBit(oldp+4457,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                                    & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__event_rx_frame_err)) 
                                       | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_data))))));
        tracep->fullBit(oldp+4458,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_d) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_watermark_prev_q)))));
        tracep->fullBit(oldp+4459,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_d) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_watermark_prev_q)))));
        tracep->fullBit(oldp+4460,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle_q))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_uart_idle))));
        tracep->fullBit(oldp+4461,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_fifo_wvalid) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full))));
        tracep->fullBit(oldp+4462,(((0x4000000U & vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U])
                                     ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                         & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                            | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                        | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))
                                     : (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync))));
        tracep->fullBit(oldp+4463,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync) 
                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2))) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q1) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__rx_sync_q2)))));
        tracep->fullBit(oldp+4464,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_rready))));
        tracep->fullCData(oldp+4465,((0xffU & (((0U 
                                                 == 
                                                 (0x18U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     << 3U)))
                                                 ? 0U
                                                 : 
                                                (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 ((IData)(1U) 
                                                  + 
                                                  (7U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      >> 2U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U))))) 
                                               | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  (7U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      >> 2U))] 
                                                  >> 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))))),8);
        tracep->fullBit(oldp+4466,((1U & (VL_REDXOR_32((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__tx_fifo_data)) 
                                          ^ (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[2U] 
                                             >> 0x16U)))));
        tracep->fullBit(oldp+4467,(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__sync_rx__DOT__intq));
        tracep->fullBit(oldp+4468,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                          & (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__reg2hw[1U] 
                                             >> 0xfU)))));
        tracep->fullCData(oldp+4469,((0xffU & (((0U 
                                                 == 
                                                 (0x18U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     << 3U)))
                                                 ? 0U
                                                 : 
                                                (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 ((IData)(1U) 
                                                  + 
                                                  (7U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      >> 2U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U))))) 
                                               | (vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                  (7U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      >> 2U))] 
                                                  >> 
                                                  (0x18U 
                                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_uart0__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))))),8);
        tracep->fullBit(oldp+4470,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4471,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4472,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4473,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4474,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4475,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4476,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4477,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4478,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[0U])));
        tracep->fullBit(oldp+4479,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4480,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4481,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4482,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4483,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4484,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4485,((IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4486,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4487,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar))));
        tracep->fullBit(oldp+4488,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4489,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4490,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4491,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4492,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4493,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4494,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4495,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4496,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[0U])));
        tracep->fullBit(oldp+4497,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4498,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4499,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4500,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4501,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4502,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4503,((IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4504,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4505,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar))));
        tracep->fullBit(oldp+4506,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4507,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4508,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4509,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4510,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4511,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4512,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4513,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4514,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[0U])));
        tracep->fullBit(oldp+4515,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4516,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4517,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4518,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4519,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4520,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4521,((IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4522,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4523,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar))));
        tracep->fullBit(oldp+4524,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4525,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4526,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4527,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4528,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4529,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4530,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4531,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4532,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[0U])));
        tracep->fullBit(oldp+4533,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4534,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4535,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4536,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4537,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4538,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4539,((IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4540,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4541,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar))));
        tracep->fullBit(oldp+4542,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4543,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4544,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4545,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4546,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4547,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4548,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4549,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4550,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[0U])));
        tracep->fullBit(oldp+4551,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4552,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4553,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4554,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4555,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4556,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4557,((IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4558,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4559,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar))));
        tracep->fullBit(oldp+4560,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+4561,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+4562,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+4563,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+4564,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+4565,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+4566,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+4567,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+4568,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[0U])));
        tracep->fullBit(oldp+4569,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4570,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4571,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4572,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4573,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4574,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4575,((IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4576,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4577,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dap_to_xbar))));
        tracep->fullIData(oldp+4578,(vlTOPp->opentitan_soc_top__DOT__gpio_intr),32);
        tracep->fullBit(oldp+4579,(vlTOPp->opentitan_soc_top__DOT__instr_valid));
        tracep->fullSData(oldp+4580,(vlTOPp->opentitan_soc_top__DOT__tlul_addr),12);
        tracep->fullBit(oldp+4581,(vlTOPp->opentitan_soc_top__DOT__req_i));
        tracep->fullIData(oldp+4582,(vlTOPp->opentitan_soc_top__DOT__tlul_data),32);
        tracep->fullBit(oldp+4583,(vlTOPp->opentitan_soc_top__DOT__intr_timer));
        tracep->fullBit(oldp+4584,(vlTOPp->opentitan_soc_top__DOT__dbg_rst));
        tracep->fullBit(oldp+4585,(0U));
        tracep->fullBit(oldp+4586,(vlTOPp->opentitan_soc_top__DOT__rdata_i));
        tracep->fullBit(oldp+4587,(vlTOPp->opentitan_soc_top__DOT__error_i));
        tracep->fullBit(oldp+4588,(vlTOPp->opentitan_soc_top__DOT__CLK_REF));
        tracep->fullBit(oldp+4589,(vlTOPp->opentitan_soc_top__DOT__CLK_LC));
        tracep->fullBit(oldp+4590,(0U));
        tracep->fullIData(oldp+4591,(0U),32);
        tracep->fullIData(oldp+4592,(2U),32);
        tracep->fullIData(oldp+4593,(0x28U),32);
        tracep->fullBit(oldp+4594,(1U));
        tracep->fullIData(oldp+4595,(1U),32);
        tracep->fullBit(oldp+4596,(1U));
        tracep->fullBit(oldp+4597,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__scan_rst_ni));
        tracep->fullIData(oldp+4598,(0U),32);
        tracep->fullIData(oldp+4599,(0x20000000U),32);
        tracep->fullBit(oldp+4600,(0U));
        tracep->fullSData(oldp+4601,(0U),15);
        tracep->fullBit(oldp+4602,(0U));
        tracep->fullIData(oldp+4603,(2U),32);
        tracep->fullIData(oldp+4604,(0x28U),32);
        tracep->fullIData(oldp+4605,(2U),32);
        tracep->fullIData(oldp+4606,(0U),32);
        tracep->fullBit(oldp+4607,(1U));
        tracep->fullIData(oldp+4608,(1U),32);
        tracep->fullSData(oldp+4609,(1U),10);
        tracep->fullIData(oldp+4610,(0x20U),32);
        tracep->fullIData(oldp+4611,(4U),32);
        tracep->fullIData(oldp+4612,(0x40U),32);
        tracep->fullIData(oldp+4613,(8U),32);
        tracep->fullIData(oldp+4614,(0x1000U),32);
        tracep->fullIData(oldp+4615,(0x100U),32);
        tracep->fullIData(oldp+4616,(3U),32);
        tracep->fullIData(oldp+4617,(0x16U),32);
        tracep->fullBit(oldp+4618,(0U));
        tracep->fullCData(oldp+4619,(0U),2);
        tracep->fullCData(oldp+4620,(0U),8);
        tracep->fullIData(oldp+4621,(0U),22);
        tracep->fullQData(oldp+4622,(0ULL),44);
        tracep->fullQData(oldp+4624,(0ULL),64);
        __Vtemp2202[0U] = 0U;
        __Vtemp2202[1U] = 0U;
        __Vtemp2202[2U] = 0U;
        __Vtemp2202[3U] = 0U;
        tracep->fullWData(oldp+4626,(__Vtemp2202),128);
        tracep->fullIData(oldp+4630,(1U),32);
        tracep->fullIData(oldp+4631,(0U),32);
        tracep->fullCData(oldp+4632,(0U),3);
        tracep->fullCData(oldp+4633,(2U),2);
        tracep->fullCData(oldp+4634,(1U),2);
        tracep->fullCData(oldp+4635,(3U),2);
        tracep->fullCData(oldp+4636,(5U),3);
        tracep->fullCData(oldp+4637,(4U),3);
        tracep->fullCData(oldp+4638,(3U),3);
        tracep->fullCData(oldp+4639,(2U),3);
        tracep->fullCData(oldp+4640,(1U),3);
        tracep->fullCData(oldp+4641,(0x63U),7);
        tracep->fullCData(oldp+4642,(0x6fU),7);
        tracep->fullCData(oldp+4643,(0x67U),7);
        tracep->fullCData(oldp+4644,(3U),7);
        tracep->fullCData(oldp+4645,(0x37U),7);
        tracep->fullCData(oldp+4646,(0x33U),7);
        tracep->fullCData(oldp+4647,(0x13U),7);
        tracep->fullCData(oldp+4648,(0x23U),7);
        tracep->fullCData(oldp+4649,(6U),3);
        tracep->fullSData(oldp+4650,(0x7b0U),12);
        tracep->fullSData(oldp+4651,(0x7b1U),12);
        tracep->fullSData(oldp+4652,(0x7b2U),12);
        tracep->fullSData(oldp+4653,(0x7b3U),12);
        tracep->fullSData(oldp+4654,(0x304U),12);
        tracep->fullSData(oldp+4655,(0x300U),12);
        tracep->fullCData(oldp+4656,(0x17U),7);
        tracep->fullCData(oldp+4657,(0xfU),7);
        tracep->fullCData(oldp+4658,(0x73U),7);
        tracep->fullCData(oldp+4659,(0U),6);
        tracep->fullCData(oldp+4660,(4U),6);
        tracep->fullCData(oldp+4661,(7U),6);
        tracep->fullCData(oldp+4662,(0x30U),6);
        tracep->fullCData(oldp+4663,(0x2fU),6);
        tracep->fullCData(oldp+4664,(0x31U),6);
        tracep->fullCData(oldp+4665,(0x32U),6);
        tracep->fullCData(oldp+4666,(0x34U),6);
        tracep->fullCData(oldp+4667,(0x33U),6);
        tracep->fullCData(oldp+4668,(0x22U),6);
        tracep->fullCData(oldp+4669,(0x28U),6);
        tracep->fullCData(oldp+4670,(0x27U),6);
        tracep->fullCData(oldp+4671,(0x36U),6);
        tracep->fullCData(oldp+4672,(0x38U),6);
        tracep->fullCData(oldp+4673,(0x3aU),6);
        tracep->fullCData(oldp+4674,(0x35U),6);
        tracep->fullCData(oldp+4675,(0x37U),6);
        tracep->fullCData(oldp+4676,(0x39U),6);
        tracep->fullCData(oldp+4677,(0x23U),6);
        tracep->fullCData(oldp+4678,(0x17U),6);
        tracep->fullCData(oldp+4679,(0x29U),6);
        tracep->fullCData(oldp+4680,(0x2aU),6);
        tracep->fullCData(oldp+4681,(0x15U),6);
        tracep->fullCData(oldp+4682,(0x16U),6);
        tracep->fullCData(oldp+4683,(0x10U),6);
        tracep->fullCData(oldp+4684,(0xfU),6);
        tracep->fullCData(oldp+4685,(0x13U),6);
        tracep->fullCData(oldp+4686,(0x14U),6);
        tracep->fullCData(oldp+4687,(0x1bU),6);
        tracep->fullCData(oldp+4688,(0x1cU),6);
        tracep->fullCData(oldp+4689,(0x19U),6);
        tracep->fullCData(oldp+4690,(0x1aU),6);
        tracep->fullCData(oldp+4691,(0x18U),6);
        tracep->fullCData(oldp+4692,(3U),6);
        tracep->fullCData(oldp+4693,(6U),6);
        tracep->fullCData(oldp+4694,(0x1dU),6);
        tracep->fullCData(oldp+4695,(0x1fU),6);
        tracep->fullCData(oldp+4696,(0x1eU),6);
        tracep->fullCData(oldp+4697,(0x24U),6);
        tracep->fullCData(oldp+4698,(0xeU),6);
        tracep->fullCData(oldp+4699,(0xdU),6);
        tracep->fullCData(oldp+4700,(0x2cU),6);
        tracep->fullCData(oldp+4701,(0x2eU),6);
        tracep->fullCData(oldp+4702,(0x2dU),6);
        tracep->fullCData(oldp+4703,(0x2bU),6);
        tracep->fullCData(oldp+4704,(0x20U),6);
        tracep->fullCData(oldp+4705,(0x21U),6);
        tracep->fullCData(oldp+4706,(0x11U),6);
        tracep->fullCData(oldp+4707,(0xaU),6);
        tracep->fullCData(oldp+4708,(0xcU),6);
        tracep->fullCData(oldp+4709,(0x25U),6);
        tracep->fullCData(oldp+4710,(0x26U),6);
        tracep->fullCData(oldp+4711,(8U),6);
        tracep->fullCData(oldp+4712,(9U),6);
        tracep->fullCData(oldp+4713,(0xbU),6);
        tracep->fullCData(oldp+4714,(1U),6);
        tracep->fullCData(oldp+4715,(0x12U),6);
        tracep->fullCData(oldp+4716,(5U),6);
        tracep->fullCData(oldp+4717,(2U),6);
        tracep->fullCData(oldp+4718,(6U),4);
        tracep->fullCData(oldp+4719,(1U),4);
        tracep->fullCData(oldp+4720,(9U),4);
        tracep->fullCData(oldp+4721,(8U),4);
        tracep->fullCData(oldp+4722,(5U),4);
        tracep->fullCData(oldp+4723,(4U),4);
        tracep->fullCData(oldp+4724,(7U),4);
        tracep->fullCData(oldp+4725,(0U),4);
        tracep->fullCData(oldp+4726,(3U),4);
        tracep->fullCData(oldp+4727,(2U),4);
        tracep->fullCData(oldp+4728,(0x3fU),6);
        tracep->fullQData(oldp+4729,(0ULL),64);
        tracep->fullCData(oldp+4731,(0U),2);
        tracep->fullIData(oldp+4732,(3U),32);
        tracep->fullIData(oldp+4733,(0x40101104U),32);
        tracep->fullIData(oldp+4734,(0x10U),32);
        tracep->fullIData(oldp+4735,(0xbU),32);
        tracep->fullIData(oldp+4736,(0x1eU),32);
        tracep->fullIData(oldp+4737,(7U),32);
        tracep->fullIData(oldp+4738,(0xcU),32);
        tracep->fullIData(oldp+4739,(0x11U),32);
        tracep->fullIData(oldp+4740,(0x15U),32);
        tracep->fullSData(oldp+4741,(0x7c0U),12);
        tracep->fullSData(oldp+4742,(0x342U),12);
        tracep->fullSData(oldp+4743,(0x7a8U),12);
        tracep->fullSData(oldp+4744,(0x306U),12);
        tracep->fullSData(oldp+4745,(0x320U),12);
        tracep->fullSData(oldp+4746,(0xb00U),12);
        tracep->fullSData(oldp+4747,(0xb80U),12);
        tracep->fullSData(oldp+4748,(0x341U),12);
        tracep->fullSData(oldp+4749,(0xf14U),12);
        tracep->fullSData(oldp+4750,(0xb0aU),12);
        tracep->fullSData(oldp+4751,(0xb8aU),12);
        tracep->fullSData(oldp+4752,(0xb0bU),12);
        tracep->fullSData(oldp+4753,(0xb8bU),12);
        tracep->fullSData(oldp+4754,(0xb0cU),12);
        tracep->fullSData(oldp+4755,(0xb8cU),12);
        tracep->fullSData(oldp+4756,(0xb0dU),12);
        tracep->fullSData(oldp+4757,(0xb8dU),12);
        tracep->fullSData(oldp+4758,(0xb0eU),12);
        tracep->fullSData(oldp+4759,(0xb8eU),12);
        tracep->fullSData(oldp+4760,(0xb0fU),12);
        tracep->fullSData(oldp+4761,(0xb8fU),12);
        tracep->fullSData(oldp+4762,(0xb10U),12);
        tracep->fullSData(oldp+4763,(0xb90U),12);
        tracep->fullSData(oldp+4764,(0xb11U),12);
        tracep->fullSData(oldp+4765,(0xb91U),12);
        tracep->fullSData(oldp+4766,(0xb12U),12);
        tracep->fullSData(oldp+4767,(0xb92U),12);
        tracep->fullSData(oldp+4768,(0xb13U),12);
        tracep->fullSData(oldp+4769,(0xb93U),12);
        tracep->fullSData(oldp+4770,(0xb14U),12);
        tracep->fullSData(oldp+4771,(0xb94U),12);
        tracep->fullSData(oldp+4772,(0xb15U),12);
        tracep->fullSData(oldp+4773,(0xb95U),12);
        tracep->fullSData(oldp+4774,(0xb16U),12);
        tracep->fullSData(oldp+4775,(0xb96U),12);
        tracep->fullSData(oldp+4776,(0xb17U),12);
        tracep->fullSData(oldp+4777,(0xb97U),12);
        tracep->fullSData(oldp+4778,(0xb18U),12);
        tracep->fullSData(oldp+4779,(0xb98U),12);
        tracep->fullSData(oldp+4780,(0xb19U),12);
        tracep->fullSData(oldp+4781,(0xb99U),12);
        tracep->fullSData(oldp+4782,(0xb1aU),12);
        tracep->fullSData(oldp+4783,(0xb9aU),12);
        tracep->fullSData(oldp+4784,(0xb1bU),12);
        tracep->fullSData(oldp+4785,(0xb9bU),12);
        tracep->fullSData(oldp+4786,(0xb1cU),12);
        tracep->fullSData(oldp+4787,(0xb9cU),12);
        tracep->fullSData(oldp+4788,(0xb1dU),12);
        tracep->fullSData(oldp+4789,(0xb9dU),12);
        tracep->fullSData(oldp+4790,(0xb03U),12);
        tracep->fullSData(oldp+4791,(0xb1eU),12);
        tracep->fullSData(oldp+4792,(0xb9eU),12);
        tracep->fullSData(oldp+4793,(0xb1fU),12);
        tracep->fullSData(oldp+4794,(0xb9fU),12);
        tracep->fullSData(oldp+4795,(0xb83U),12);
        tracep->fullSData(oldp+4796,(0xb04U),12);
        tracep->fullSData(oldp+4797,(0xb84U),12);
        tracep->fullSData(oldp+4798,(0xb05U),12);
        tracep->fullSData(oldp+4799,(0xb85U),12);
        tracep->fullSData(oldp+4800,(0xb06U),12);
        tracep->fullSData(oldp+4801,(0xb86U),12);
        tracep->fullSData(oldp+4802,(0xb07U),12);
        tracep->fullSData(oldp+4803,(0xb87U),12);
        tracep->fullSData(oldp+4804,(0xb08U),12);
        tracep->fullSData(oldp+4805,(0xb88U),12);
        tracep->fullSData(oldp+4806,(0xb09U),12);
        tracep->fullSData(oldp+4807,(0xb89U),12);
        tracep->fullSData(oldp+4808,(0x32aU),12);
        tracep->fullSData(oldp+4809,(0x32bU),12);
        tracep->fullSData(oldp+4810,(0x32cU),12);
        tracep->fullSData(oldp+4811,(0x32dU),12);
        tracep->fullSData(oldp+4812,(0x32eU),12);
        tracep->fullSData(oldp+4813,(0x32fU),12);
        tracep->fullSData(oldp+4814,(0x330U),12);
        tracep->fullSData(oldp+4815,(0x331U),12);
        tracep->fullSData(oldp+4816,(0x332U),12);
        tracep->fullSData(oldp+4817,(0x333U),12);
        tracep->fullSData(oldp+4818,(0x334U),12);
        tracep->fullSData(oldp+4819,(0x335U),12);
        tracep->fullSData(oldp+4820,(0x336U),12);
        tracep->fullSData(oldp+4821,(0x337U),12);
        tracep->fullSData(oldp+4822,(0x338U),12);
        tracep->fullSData(oldp+4823,(0x339U),12);
        tracep->fullSData(oldp+4824,(0x33aU),12);
        tracep->fullSData(oldp+4825,(0x33bU),12);
        tracep->fullSData(oldp+4826,(0x33cU),12);
        tracep->fullSData(oldp+4827,(0x33dU),12);
        tracep->fullSData(oldp+4828,(0x323U),12);
        tracep->fullSData(oldp+4829,(0x33eU),12);
        tracep->fullSData(oldp+4830,(0x33fU),12);
        tracep->fullSData(oldp+4831,(0x324U),12);
        tracep->fullSData(oldp+4832,(0x325U),12);
        tracep->fullSData(oldp+4833,(0x326U),12);
        tracep->fullSData(oldp+4834,(0x327U),12);
        tracep->fullSData(oldp+4835,(0x328U),12);
        tracep->fullSData(oldp+4836,(0x329U),12);
        tracep->fullSData(oldp+4837,(0xb02U),12);
        tracep->fullSData(oldp+4838,(0xb82U),12);
        tracep->fullSData(oldp+4839,(0x344U),12);
        tracep->fullSData(oldp+4840,(0x301U),12);
        tracep->fullSData(oldp+4841,(0x340U),12);
        tracep->fullSData(oldp+4842,(0x390U),12);
        tracep->fullSData(oldp+4843,(0x391U),12);
        tracep->fullSData(oldp+4844,(0x343U),12);
        tracep->fullSData(oldp+4845,(0x305U),12);
        tracep->fullSData(oldp+4846,(0x3b0U),12);
        tracep->fullSData(oldp+4847,(0x3b1U),12);
        tracep->fullSData(oldp+4848,(0x3baU),12);
        tracep->fullSData(oldp+4849,(0x3bbU),12);
        tracep->fullSData(oldp+4850,(0x3bcU),12);
        tracep->fullSData(oldp+4851,(0x3bdU),12);
        tracep->fullSData(oldp+4852,(0x3beU),12);
        tracep->fullSData(oldp+4853,(0x3bfU),12);
        tracep->fullSData(oldp+4854,(0x3b2U),12);
        tracep->fullSData(oldp+4855,(0x3b3U),12);
        tracep->fullSData(oldp+4856,(0x3b4U),12);
        tracep->fullSData(oldp+4857,(0x3b5U),12);
        tracep->fullSData(oldp+4858,(0x3b6U),12);
        tracep->fullSData(oldp+4859,(0x3b7U),12);
        tracep->fullSData(oldp+4860,(0x3b8U),12);
        tracep->fullSData(oldp+4861,(0x3b9U),12);
        tracep->fullSData(oldp+4862,(0x3a0U),12);
        tracep->fullSData(oldp+4863,(0x3a1U),12);
        tracep->fullSData(oldp+4864,(0x3a2U),12);
        tracep->fullSData(oldp+4865,(0x3a3U),12);
        tracep->fullSData(oldp+4866,(0x7aaU),12);
        tracep->fullSData(oldp+4867,(0x7c1U),12);
        tracep->fullSData(oldp+4868,(0x7a1U),12);
        tracep->fullSData(oldp+4869,(0x7a2U),12);
        tracep->fullSData(oldp+4870,(0x7a3U),12);
        tracep->fullSData(oldp+4871,(0x7a0U),12);
        tracep->fullIData(oldp+4872,(0x40000003U),32);
        tracep->fullIData(oldp+4873,(0x20U),32);
        tracep->fullIData(oldp+4874,(6U),32);
        tracep->fullIData(oldp+4875,(0x12U),32);
        tracep->fullIData(oldp+4876,(0U),18);
        tracep->fullIData(oldp+4877,(0x40U),32);
        tracep->fullIData(oldp+4878,(5U),32);
        tracep->fullCData(oldp+4879,(0xfU),4);
        tracep->fullIData(oldp+4880,(2U),32);
        tracep->fullIData(oldp+4881,(1U),32);
        tracep->fullBit(oldp+4882,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4883,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4884,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4885,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4886,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4887,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4888,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4889,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4890,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i))));
        tracep->fullBit(oldp+4891,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4892,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4893,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4894,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4895,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4896,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4897,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4898,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4899,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i))));
        tracep->fullBit(oldp+4900,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4901,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4902,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4903,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4904,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4905,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4906,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4907,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4908,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i))));
        tracep->fullBit(oldp+4909,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4910,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4911,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4912,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4913,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4914,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4915,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4916,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4917,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i))));
        tracep->fullBit(oldp+4918,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4919,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4920,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4921,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4922,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4923,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4924,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4925,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4926,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i))));
        tracep->fullBit(oldp+4927,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+4928,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+4929,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+4930,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+4931,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+4932,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+4933,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+4934,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+4935,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i))));
        tracep->fullIData(oldp+4936,(0xbU),32);
        tracep->fullSData(oldp+4937,(0x7ffU),11);
        tracep->fullCData(oldp+4938,(0U),4);
        tracep->fullQData(oldp+4939,(0ULL),44);
        tracep->fullIData(oldp+4941,(4U),32);
        tracep->fullIData(oldp+4942,(0x10000U),32);
        tracep->fullIData(oldp+4943,(0x11U),32);
        tracep->fullIData(oldp+4944,(0x58U),32);
        tracep->fullIData(oldp+4945,(0x33U),32);
        tracep->fullIData(oldp+4946,(0x55U),32);
        tracep->fullIData(oldp+4947,(0x20U),32);
        tracep->fullIData(oldp+4948,(6U),32);
        tracep->fullIData(oldp+4949,(0x20U),32);
        tracep->fullIData(oldp+4950,(4U),32);
        tracep->fullIData(oldp+4951,(8U),32);
        tracep->fullIData(oldp+4952,(0x573143U),24);
        tracep->fullSData(oldp+4953,(0x5257U),16);
        tracep->fullSData(oldp+4954,(0x524fU),16);
        tracep->fullIData(oldp+4955,(0x10U),32);
        tracep->fullSData(oldp+4956,(0xb6U),16);
        tracep->fullCData(oldp+4957,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__data_we),4);
        tracep->fullIData(oldp+4958,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__wdata),32);
        tracep->fullBit(oldp+4959,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__we));
        tracep->fullIData(oldp+4960,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__wmask),32);
        tracep->fullBit(oldp+4961,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rvalid));
        tracep->fullIData(oldp+4962,(0x1000U),32);
        tracep->fullIData(oldp+4963,(0xcU),32);
        tracep->fullIData(oldp+4964,(5U),32);
        tracep->fullIData(oldp+4965,(0xdU),32);
        tracep->fullIData(oldp+4966,(0x21U),32);
        tracep->fullIData(oldp+4967,(0xdU),32);
        tracep->fullIData(oldp+4968,(5U),32);
        tracep->fullIData(oldp+4969,(0x21U),32);
        tracep->fullIData(oldp+4970,(3U),32);
        tracep->fullIData(oldp+4971,(3U),32);
        tracep->fullIData(oldp+4972,(7U),32);
        tracep->fullIData(oldp+4973,(9U),32);
        tracep->fullBit(oldp+4974,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we));
        tracep->fullCData(oldp+4975,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd),3);
        tracep->fullCData(oldp+4976,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we)
                                       ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd)
                                       : 0U)),3);
        tracep->fullBit(oldp+4977,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d));
        tracep->fullIData(oldp+4978,(6U),32);
        tracep->fullIData(oldp+4979,(0U),32);
        tracep->fullIData(oldp+4980,(0xaU),32);
        tracep->fullIData(oldp+4981,(0xbU),32);
        tracep->fullIData(oldp+4982,(0xeU),32);
        tracep->fullIData(oldp+4983,(0xfU),32);
        tracep->fullIData(oldp+4984,(0x10U),32);
        tracep->fullIData(oldp+4985,(0x12U),32);
        tracep->fullIData(oldp+4986,(0x13U),32);
        tracep->fullIData(oldp+4987,(0x14U),32);
        tracep->fullIData(oldp+4988,(0x15U),32);
        tracep->fullIData(oldp+4989,(0x16U),32);
        tracep->fullIData(oldp+4990,(0x17U),32);
        tracep->fullIData(oldp+4991,(0x18U),32);
        tracep->fullIData(oldp+4992,(0x19U),32);
        tracep->fullIData(oldp+4993,(0x1aU),32);
        tracep->fullIData(oldp+4994,(0x1bU),32);
        tracep->fullIData(oldp+4995,(0x1cU),32);
        tracep->fullIData(oldp+4996,(0x1dU),32);
        tracep->fullIData(oldp+4997,(0x1eU),32);
        tracep->fullIData(oldp+4998,(0x1fU),32);
        tracep->fullIData(oldp+4999,(0x22U),32);
        tracep->fullIData(oldp+5000,(0x23U),32);
        tracep->fullIData(oldp+5001,(0x24U),32);
        tracep->fullIData(oldp+5002,(0x25U),32);
        tracep->fullIData(oldp+5003,(0x26U),32);
        tracep->fullIData(oldp+5004,(0x27U),32);
        tracep->fullIData(oldp+5005,(0x28U),32);
        tracep->fullIData(oldp+5006,(0x29U),32);
        tracep->fullIData(oldp+5007,(0x2aU),32);
        tracep->fullIData(oldp+5008,(0x2bU),32);
        tracep->fullIData(oldp+5009,(0x2cU),32);
        tracep->fullIData(oldp+5010,(0x2dU),32);
        tracep->fullIData(oldp+5011,(0x2eU),32);
        tracep->fullIData(oldp+5012,(0x2fU),32);
        tracep->fullIData(oldp+5013,(0x30U),32);
        tracep->fullIData(oldp+5014,(0x31U),32);
        tracep->fullIData(oldp+5015,(0x32U),32);
        tracep->fullIData(oldp+5016,(0x33U),32);
        tracep->fullIData(oldp+5017,(0x34U),32);
        tracep->fullIData(oldp+5018,(0x35U),32);
        tracep->fullIData(oldp+5019,(0x36U),32);
        tracep->fullIData(oldp+5020,(0x37U),32);
        tracep->fullIData(oldp+5021,(0x38U),32);
        tracep->fullIData(oldp+5022,(0x39U),32);
        tracep->fullIData(oldp+5023,(0x3aU),32);
        tracep->fullIData(oldp+5024,(0x3bU),32);
        tracep->fullIData(oldp+5025,(0x3cU),32);
        tracep->fullIData(oldp+5026,(0x3dU),32);
        tracep->fullIData(oldp+5027,(0x3eU),32);
        tracep->fullIData(oldp+5028,(0x3fU),32);
        tracep->fullIData(oldp+5029,(0x40U),32);
        tracep->fullIData(oldp+5030,(0x41U),32);
        tracep->fullIData(oldp+5031,(0x42U),32);
        tracep->fullIData(oldp+5032,(0x43U),32);
        tracep->fullIData(oldp+5033,(0x44U),32);
        tracep->fullIData(oldp+5034,(0x45U),32);
        tracep->fullIData(oldp+5035,(0x46U),32);
        tracep->fullIData(oldp+5036,(0x47U),32);
        tracep->fullIData(oldp+5037,(0x48U),32);
        tracep->fullIData(oldp+5038,(0x49U),32);
        tracep->fullIData(oldp+5039,(0x4aU),32);
        tracep->fullIData(oldp+5040,(0x4bU),32);
        tracep->fullIData(oldp+5041,(0x4cU),32);
        tracep->fullIData(oldp+5042,(0x4dU),32);
        tracep->fullIData(oldp+5043,(0x4eU),32);
        tracep->fullIData(oldp+5044,(0x4fU),32);
        tracep->fullIData(oldp+5045,(0x50U),32);
        tracep->fullIData(oldp+5046,(0x51U),32);
        tracep->fullIData(oldp+5047,(0x52U),32);
        tracep->fullIData(oldp+5048,(0x53U),32);
        tracep->fullIData(oldp+5049,(0x54U),32);
        tracep->fullIData(oldp+5050,(0x55U),32);
        tracep->fullIData(oldp+5051,(0x56U),32);
        tracep->fullIData(oldp+5052,(0x57U),32);
        tracep->fullIData(oldp+5053,(0x58U),32);
        tracep->fullIData(oldp+5054,(0x59U),32);
        tracep->fullIData(oldp+5055,(0x5aU),32);
        tracep->fullIData(oldp+5056,(0x5bU),32);
        tracep->fullIData(oldp+5057,(0x5cU),32);
        tracep->fullIData(oldp+5058,(0x5dU),32);
        tracep->fullIData(oldp+5059,(0x5eU),32);
        tracep->fullIData(oldp+5060,(0x5fU),32);
        tracep->fullIData(oldp+5061,(0x60U),32);
        tracep->fullIData(oldp+5062,(0x61U),32);
        tracep->fullIData(oldp+5063,(0x62U),32);
        tracep->fullIData(oldp+5064,(0x63U),32);
        tracep->fullIData(oldp+5065,(0x64U),32);
        tracep->fullIData(oldp+5066,(0x65U),32);
        tracep->fullIData(oldp+5067,(0x66U),32);
        tracep->fullIData(oldp+5068,(0x67U),32);
        tracep->fullIData(oldp+5069,(0x68U),32);
        tracep->fullIData(oldp+5070,(0x69U),32);
        tracep->fullIData(oldp+5071,(0x6aU),32);
        tracep->fullIData(oldp+5072,(0x6bU),32);
        tracep->fullIData(oldp+5073,(0x6cU),32);
        tracep->fullIData(oldp+5074,(0x6dU),32);
        tracep->fullIData(oldp+5075,(0x6eU),32);
        tracep->fullIData(oldp+5076,(0x6fU),32);
        tracep->fullIData(oldp+5077,(0x70U),32);
        tracep->fullIData(oldp+5078,(0x71U),32);
        tracep->fullIData(oldp+5079,(0x72U),32);
        tracep->fullIData(oldp+5080,(0x73U),32);
        tracep->fullIData(oldp+5081,(0x74U),32);
        tracep->fullIData(oldp+5082,(0x75U),32);
        tracep->fullIData(oldp+5083,(0x76U),32);
        tracep->fullIData(oldp+5084,(0x77U),32);
        tracep->fullIData(oldp+5085,(0x78U),32);
        tracep->fullIData(oldp+5086,(0x79U),32);
        tracep->fullIData(oldp+5087,(0x7aU),32);
        tracep->fullIData(oldp+5088,(0x7bU),32);
        tracep->fullIData(oldp+5089,(0x7cU),32);
        tracep->fullIData(oldp+5090,(0x7dU),32);
        tracep->fullIData(oldp+5091,(0x7eU),32);
        tracep->fullIData(oldp+5092,(vlTOPp->opentitan_soc_top__DOT__rdata_i),32);
        tracep->fullBit(oldp+5093,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err));
        tracep->fullCData(oldp+5094,(0U),7);
        tracep->fullBit(oldp+5095,((1U & vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT____Vcellout__u_tempsenseInst__DOUT)));
        tracep->fullBit(oldp+5096,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DONE));
        tracep->fullIData(oldp+5097,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT____Vcellout__u_tempsenseInst__DOUT),24);
        tracep->fullBit(oldp+5098,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__out));
        tracep->fullBit(oldp+5099,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__outb));
        tracep->fullSData(oldp+5100,(0U),16);
        tracep->fullIData(oldp+5101,(8U),32);
        tracep->fullSData(oldp+5102,(0x574fU),16);
        tracep->fullIData(oldp+5103,(0U),24);
        tracep->fullIData(oldp+5104,(0x1000U),32);
        tracep->fullIData(oldp+5105,(0x40U),32);
        tracep->fullIData(oldp+5106,(0x100U),32);
        tracep->fullIData(oldp+5107,(0xaU),32);
        tracep->fullIData(oldp+5108,(0x16U),32);
        tracep->fullIData(oldp+5109,(7U),32);
        tracep->fullIData(oldp+5110,(0xcU),32);
        tracep->fullIData(oldp+5111,(0x11U),32);
        tracep->fullIData(oldp+5112,(0x15U),32);
        tracep->fullIData(oldp+5113,(0x1eU),32);
        tracep->fullIData(oldp+5114,(0x10000000U),32);
        tracep->fullIData(oldp+5115,(0x40080000U),32);
        tracep->fullIData(oldp+5116,(0x40090000U),32);
        tracep->fullIData(oldp+5117,(0x400a0000U),32);
        tracep->fullIData(oldp+5118,(0x400b0000U),32);
        tracep->fullIData(oldp+5119,(0x400c0000U),32);
        tracep->fullIData(oldp+5120,(0x400d0000U),32);
        tracep->fullIData(oldp+5121,(0x400e0000U),32);
        tracep->fullIData(oldp+5122,(0x400f0000U),32);
        tracep->fullIData(oldp+5123,(0x40050000U),32);
        tracep->fullIData(oldp+5124,(0xffffU),32);
        tracep->fullSData(oldp+5125,(0U),9);
        tracep->fullSData(oldp+5126,(4U),9);
        tracep->fullSData(oldp+5127,(8U),9);
        tracep->fullSData(oldp+5128,(0xcU),9);
        tracep->fullSData(oldp+5129,(0x10U),9);
        tracep->fullSData(oldp+5130,(0x14U),9);
        tracep->fullSData(oldp+5131,(0x18U),9);
        tracep->fullSData(oldp+5132,(0x1cU),9);
        tracep->fullSData(oldp+5133,(0x20U),9);
        tracep->fullSData(oldp+5134,(0x24U),9);
        tracep->fullSData(oldp+5135,(0x28U),9);
        tracep->fullSData(oldp+5136,(0x2cU),9);
        tracep->fullSData(oldp+5137,(0x30U),9);
        tracep->fullSData(oldp+5138,(0x34U),9);
        tracep->fullSData(oldp+5139,(0x38U),9);
        tracep->fullSData(oldp+5140,(0x3cU),9);
        tracep->fullSData(oldp+5141,(0x40U),9);
        tracep->fullSData(oldp+5142,(0x44U),9);
        tracep->fullSData(oldp+5143,(0x48U),9);
        tracep->fullSData(oldp+5144,(0x4cU),9);
        tracep->fullSData(oldp+5145,(0x50U),9);
        tracep->fullSData(oldp+5146,(0x54U),9);
        tracep->fullSData(oldp+5147,(0x58U),9);
        tracep->fullSData(oldp+5148,(0x5cU),9);
        tracep->fullSData(oldp+5149,(0x60U),9);
        tracep->fullSData(oldp+5150,(0x64U),9);
        tracep->fullSData(oldp+5151,(0x68U),9);
        tracep->fullSData(oldp+5152,(0x6cU),9);
        tracep->fullSData(oldp+5153,(0x70U),9);
        tracep->fullSData(oldp+5154,(0x74U),9);
        tracep->fullSData(oldp+5155,(0x78U),9);
        tracep->fullSData(oldp+5156,(0x7cU),9);
        tracep->fullSData(oldp+5157,(0x80U),9);
        tracep->fullSData(oldp+5158,(0x84U),9);
        tracep->fullSData(oldp+5159,(0x100U),9);
        tracep->fullSData(oldp+5160,(0x104U),9);
        tracep->fullSData(oldp+5161,(0x108U),9);
        tracep->fullSData(oldp+5162,(0x10cU),9);
        tracep->fullIData(oldp+5163,(0x505043U),24);
        tracep->fullCData(oldp+5164,(0U),3);
        tracep->fullCData(oldp+5165,(0U),3);
        tracep->fullCData(oldp+5166,(0U),2);
        tracep->fullCData(oldp+5167,(0U),8);
        tracep->fullIData(oldp+5168,(0U),32);
        tracep->fullCData(oldp+5169,(0U),4);
        tracep->fullIData(oldp+5170,(0U),32);
        tracep->fullBit(oldp+5171,(1U));
        tracep->fullBit(oldp+5172,(0U));
        tracep->fullCData(oldp+5173,(0U),3);
        tracep->fullCData(oldp+5174,(0U),3);
        tracep->fullCData(oldp+5175,(0U),2);
        tracep->fullCData(oldp+5176,(0U),8);
        tracep->fullBit(oldp+5177,(0U));
        tracep->fullIData(oldp+5178,(0U),32);
        tracep->fullBit(oldp+5179,(0U));
        tracep->fullBit(oldp+5180,(1U));
    }
}
