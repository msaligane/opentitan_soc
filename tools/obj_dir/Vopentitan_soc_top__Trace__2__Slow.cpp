// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopentitan_soc_top__Syms.h"


void Vopentitan_soc_top::traceFullSub2(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp3017[3];
    WData/*95:0*/ __Vtemp3021[3];
    WData/*95:0*/ __Vtemp3025[3];
    WData/*127:0*/ __Vtemp3026[4];
    // Body
    {
        tracep->fullBit(oldp+7593,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err));
        tracep->fullBit(oldp+7594,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7595,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7596,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullSData(oldp+7597,((0x3ffU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                   >> 1U)))),10);
        tracep->fullBit(oldp+7598,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7599,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullSData(oldp+7600,((0xfc00U | (0x3ffU 
                                                 & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                     << 0x15U) 
                                                    | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                       >> 0xbU))))),16);
        tracep->fullSData(oldp+7601,((0xffffU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                    >> 1U)))),16);
        tracep->fullBit(oldp+7602,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7603,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullSData(oldp+7604,((0xffffU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                  << 0xfU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                    >> 0x11U)))),16);
        tracep->fullBit(oldp+7605,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7606,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullBit(oldp+7607,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7608,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullBit(oldp+7609,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                      >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
        tracep->fullBit(oldp+7610,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                     >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
        tracep->fullSData(oldp+7611,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit),15);
        tracep->fullBit(oldp+7612,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
        tracep->fullBit(oldp+7613,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
        tracep->fullBit(oldp+7614,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                    & (0U != (3U & 
                                              ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                << 0x1bU) 
                                               | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                  >> 5U)))))));
        tracep->fullBit(oldp+7615,((1U & (~ ((((0U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                    >> 0x12U))) 
                                               | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                      >> 0x12U)))) 
                                              | (4U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                             & (((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                                & (((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                         >> 0x12U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                           >> 0x12U)))) 
                                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->fullBit(oldp+7616,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
        tracep->fullBit(oldp+7617,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
        tracep->fullBit(oldp+7618,((((0U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+7619,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+7620,((0U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+7621,((1U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+7622,((4U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+7623,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+7624,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+7625,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+7626,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                        >> 5U)))))),4);
        tracep->fullSData(oldp+7627,((0x3ffU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                   >> 1U)))),16);
        tracep->fullBit(oldp+7628,((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])));
        tracep->fullBit(oldp+7629,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+7630,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+7631,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 3U))));
        tracep->fullBit(oldp+7632,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 4U))));
        tracep->fullBit(oldp+7633,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 5U))));
        tracep->fullBit(oldp+7634,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 6U))));
        tracep->fullBit(oldp+7635,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 7U))));
        tracep->fullBit(oldp+7636,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 8U))));
        tracep->fullBit(oldp+7637,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 9U))));
        tracep->fullBit(oldp+7638,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xaU))));
        tracep->fullBit(oldp+7639,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xbU))));
        tracep->fullBit(oldp+7640,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xcU))));
        tracep->fullBit(oldp+7641,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xdU))));
        tracep->fullBit(oldp+7642,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xeU))));
        tracep->fullBit(oldp+7643,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0xfU))));
        tracep->fullBit(oldp+7644,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x10U))));
        tracep->fullBit(oldp+7645,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x11U))));
        tracep->fullBit(oldp+7646,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x12U))));
        tracep->fullBit(oldp+7647,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x13U))));
        tracep->fullBit(oldp+7648,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x14U))));
        tracep->fullBit(oldp+7649,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x15U))));
        tracep->fullBit(oldp+7650,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x16U))));
        tracep->fullBit(oldp+7651,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x17U))));
        tracep->fullBit(oldp+7652,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x18U))));
        tracep->fullBit(oldp+7653,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x19U))));
        tracep->fullBit(oldp+7654,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+7655,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+7656,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+7657,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+7658,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+7659,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+7660,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7661,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7662,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7663,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7664,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7665,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+7666,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7667,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+7668,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+7669,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+7670,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+7671,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+7672,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+7673,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+7674,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+7675,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+7676,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+7677,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+7678,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+7679,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+7680,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp3017[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U]);
        __Vtemp3017[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U]));
        __Vtemp3017[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+7681,(__Vtemp3017),85);
        tracep->fullBit(oldp+7684,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+7685,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+7688,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+7691,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullIData(oldp+7694,((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                      | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                            >> 0xbU)))),32);
        tracep->fullIData(oldp+7695,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullIData(oldp+7696,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullIData(oldp+7697,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullIData(oldp+7698,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullIData(oldp+7699,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullIData(oldp+7700,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                                       ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                           << 0x1fU) 
                                          | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                             >> 1U))
                                       : 0U)),32);
        tracep->fullBit(oldp+7701,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7702,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7703,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7704,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7705,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7706,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7707,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7708,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7709,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o))));
        tracep->fullBit(oldp+7710,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7711,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7712,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7713,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7714,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7715,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7716,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7717,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7718,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o))));
        tracep->fullBit(oldp+7719,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7720,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7721,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7722,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7723,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7724,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7725,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7726,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7727,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [0U]))));
        tracep->fullBit(oldp+7728,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7729,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7730,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7731,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7732,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7733,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7734,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7735,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7736,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [1U]))));
        tracep->fullBit(oldp+7737,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7738,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7739,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7740,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7741,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7742,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7743,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7744,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7745,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [2U]))));
        tracep->fullBit(oldp+7746,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7747,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7748,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7749,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7750,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7751,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7752,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7753,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7754,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [3U]))));
        tracep->fullBit(oldp+7755,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7756,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7757,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7758,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7759,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7760,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7761,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7762,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7763,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [4U]))));
        tracep->fullBit(oldp+7764,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7765,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7766,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7767,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7768,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7769,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7770,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7771,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7772,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [5U]))));
        tracep->fullBit(oldp+7773,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7774,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7775,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7776,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7777,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7778,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7779,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7780,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7781,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [6U]))));
        tracep->fullBit(oldp+7782,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7783,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7784,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7785,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7786,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7787,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7788,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7789,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7790,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [7U]))));
        tracep->fullBit(oldp+7791,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7792,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7793,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7794,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7795,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7796,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7797,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7798,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7799,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [8U]))));
        tracep->fullBit(oldp+7800,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7801,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7802,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7803,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7804,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7805,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7806,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7807,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7808,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [9U]))));
        tracep->fullBit(oldp+7809,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7810,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7811,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7812,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7813,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7814,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7815,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7816,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7817,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [0xaU]))));
        tracep->fullBit(oldp+7818,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7819,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7820,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7821,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7822,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7823,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7824,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7825,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7826,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [0xbU]))));
        tracep->fullBit(oldp+7827,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7828,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7829,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7830,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7831,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7832,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7833,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7834,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7835,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                 [0xcU]))));
        tracep->fullIData(oldp+7836,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_sba_csrs),32);
        tracep->fullIData(oldp+7837,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7838,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullBit(oldp+7839,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o))));
        tracep->fullBit(oldp+7840,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                  >> 1U)))));
        tracep->fullQData(oldp+7841,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d),64);
        tracep->fullQData(oldp+7843,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d),64);
        tracep->fullCData(oldp+7845,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_d),3);
        tracep->fullBit(oldp+7846,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7847,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7848,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7849,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7850,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7851,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7852,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7853,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7854,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+7855,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7856,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7857,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7858,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7859,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7860,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7861,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7862,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7863,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+7864,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7865,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7866,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7867,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7868,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7869,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7870,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7871,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7872,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+7873,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7874,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7875,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7876,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7877,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7878,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7879,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7880,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7881,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+7882,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7883,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7884,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7885,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7886,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7887,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7888,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7889,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7890,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+7891,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7892,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7893,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7894,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7895,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7896,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7897,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7898,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7899,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+7900,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7901,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7902,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7903,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7904,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7905,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7906,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7907,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7908,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+7909,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7910,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7911,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7912,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7913,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7914,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7915,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7916,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7917,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+7918,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7919,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7920,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7921,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7922,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7923,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7924,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7925,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7926,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+7927,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7928,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7929,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7930,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7931,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7932,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7933,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7934,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7935,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+7936,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7937,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7938,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7939,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7940,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7941,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7942,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7943,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7944,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+7945,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7946,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7947,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7948,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7949,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7950,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7951,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7952,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7953,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+7954,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7955,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7956,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7957,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7958,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7959,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7960,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7961,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7962,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+7963,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7964,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7965,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7966,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7967,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7968,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7969,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7970,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7971,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i))));
        tracep->fullBit(oldp+7972,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_req));
        tracep->fullBit(oldp+7973,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_rsp));
        tracep->fullBit(oldp+7974,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7975,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7976,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7977,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7978,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7979,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7980,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7981,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7982,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [0U]))));
        tracep->fullBit(oldp+7983,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7984,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7985,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7986,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7987,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7988,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7989,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7990,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+7991,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [1U]))));
        tracep->fullBit(oldp+7992,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+7993,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+7994,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+7995,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+7996,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+7997,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+7998,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+7999,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8000,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [2U]))));
        tracep->fullBit(oldp+8001,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8002,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8003,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8004,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8005,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8006,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8007,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8008,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8009,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [3U]))));
        tracep->fullBit(oldp+8010,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8011,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8012,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8013,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8014,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8015,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8016,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8017,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8018,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [4U]))));
        tracep->fullBit(oldp+8019,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8020,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8021,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8022,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8023,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8024,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8025,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8026,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8027,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [5U]))));
        tracep->fullBit(oldp+8028,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8029,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8030,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8031,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8032,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8033,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8034,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8035,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8036,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [6U]))));
        tracep->fullBit(oldp+8037,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8038,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8039,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8040,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8041,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8042,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8043,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8044,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8045,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [7U]))));
        tracep->fullBit(oldp+8046,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8047,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8048,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8049,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8050,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8051,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8052,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8053,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8054,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [8U]))));
        tracep->fullBit(oldp+8055,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8056,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8057,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8058,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8059,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8060,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8061,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8062,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8063,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [9U]))));
        tracep->fullBit(oldp+8064,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8065,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8066,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8067,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8068,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8069,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8070,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8071,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8072,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+8073,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8074,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8075,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8076,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8077,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8078,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8079,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8080,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8081,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+8082,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8083,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8084,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8085,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8086,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8087,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8088,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8089,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8090,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+8091,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xdU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8092,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8093,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8094,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8095,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                       [0xdU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8096,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xdU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8097,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                              [0xdU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8098,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                  [0xdU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8099,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                 [0xdU]))));
        tracep->fullBit(oldp+8100,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8101,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8102,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8103,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8104,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8105,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8106,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8107,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8108,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p))));
        tracep->fullBit(oldp+8109,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hfifo_reqready));
        tracep->fullBit(oldp+8110,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i))));
        tracep->fullBit(oldp+8111,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8112,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8114,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8115,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8116,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8117,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8118,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8119,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8120,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8121,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8122,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8123,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8124,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8125,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8126,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8127,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8128,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8129,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8130,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8131,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+8132,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0U]))));
        tracep->fullBit(oldp+8133,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8134,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [0U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [0U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [0U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [0U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8136,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8137,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8138,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8139,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8140,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8141,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8142,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8143,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8144,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8145,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8146,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8147,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8148,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8149,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [1U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8150,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8151,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [1U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8152,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8153,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+8154,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [1U]))));
        tracep->fullBit(oldp+8155,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [1U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8156,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [1U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [1U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [1U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [1U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8158,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8159,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8160,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8161,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8162,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8163,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8164,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8165,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8166,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8167,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8168,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8169,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8170,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8171,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [2U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8172,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8173,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [2U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8174,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8175,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+8176,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [2U]))));
        tracep->fullBit(oldp+8177,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [2U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8178,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [2U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [2U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [2U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [2U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8180,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8181,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8182,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8183,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8184,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8185,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8186,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8187,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8188,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8189,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8190,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8191,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8192,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8193,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [3U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8194,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8195,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [3U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8196,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8197,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+8198,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [3U]))));
        tracep->fullBit(oldp+8199,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [3U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8200,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [3U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [3U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [3U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [3U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8202,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8203,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8204,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8205,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8206,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8207,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8208,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8209,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8210,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8211,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8212,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8213,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8214,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8215,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [4U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8216,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8217,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [4U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8218,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8219,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+8220,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [4U]))));
        tracep->fullBit(oldp+8221,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [4U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8222,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [4U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [4U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [4U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [4U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8224,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8225,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8226,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8227,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8228,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8229,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8230,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8231,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8232,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8233,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8234,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8235,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8236,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8237,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [5U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8238,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8239,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [5U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8240,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8241,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+8242,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [5U]))));
        tracep->fullBit(oldp+8243,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [5U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8244,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [5U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [5U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [5U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [5U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8246,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8247,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8248,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8249,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8250,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8251,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8252,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8253,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8254,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8255,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8256,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8257,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8258,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8259,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [6U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8260,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8261,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [6U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8262,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8263,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+8264,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [6U]))));
        tracep->fullBit(oldp+8265,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [6U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8266,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [6U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [6U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [6U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [6U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8268,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8269,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8270,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8271,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8272,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8273,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8274,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8275,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8276,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8277,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8278,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8279,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8280,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8281,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [7U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8282,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8283,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [7U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8284,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8285,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+8286,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [7U]))));
        tracep->fullBit(oldp+8287,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [7U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8288,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [7U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [7U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [7U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [7U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8290,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8291,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8292,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8293,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8294,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8295,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8296,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8297,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8298,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8299,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8300,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8301,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8302,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8303,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [8U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8304,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8305,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [8U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8306,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8307,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+8308,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [8U]))));
        tracep->fullBit(oldp+8309,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [8U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8310,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [8U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [8U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [8U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [8U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8312,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8313,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8314,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8315,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8316,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8317,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8318,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8319,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8320,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8321,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8322,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8323,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8324,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8325,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [9U] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8326,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8327,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [9U] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8328,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8329,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+8330,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [9U]))));
        tracep->fullBit(oldp+8331,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [9U] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8332,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [9U] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [9U] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [9U] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [9U] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8334,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8335,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8336,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8337,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8338,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8339,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8340,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8341,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8342,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8343,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8344,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8345,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8346,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8347,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xaU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8348,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8349,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0xaU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8350,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8351,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+8352,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xaU]))));
        tracep->fullBit(oldp+8353,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xaU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8354,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [0xaU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [0xaU] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [0xaU] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [0xaU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8356,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8357,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8358,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8359,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8360,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8361,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8362,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8363,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8364,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8365,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8366,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8367,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8368,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8369,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xbU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8370,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xbU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8371,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0xbU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8372,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xbU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8373,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+8374,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xbU]))));
        tracep->fullBit(oldp+8375,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xbU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8376,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [0xbU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [0xbU] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [0xbU] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [0xbU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+8378,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8379,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8380,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8381,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8382,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8383,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8384,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8385,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8386,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o))));
        tracep->fullBit(oldp+8387,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+8388,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+8389,((7U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+8390,((3U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+8391,((0xffU & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                       [0xcU] 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+8392,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xcU] 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+8393,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                              [0xcU] 
                                              >> 2U))),32);
        tracep->fullBit(oldp+8394,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xcU] 
                                                  >> 1U)))));
        tracep->fullBit(oldp+8395,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+8396,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                 [0xcU]))));
        tracep->fullBit(oldp+8397,((1U & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                  [0xcU] 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+8398,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                   [0xcU] 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                      [0xcU] 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [0xcU] 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                              [0xcU] 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullCData(oldp+8400,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
        tracep->fullBit(oldp+8401,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
        tracep->fullBit(oldp+8402,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
        tracep->fullBit(oldp+8403,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
        tracep->fullBit(oldp+8404,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        tracep->fullBit(oldp+8405,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we));
        tracep->fullBit(oldp+8406,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
        tracep->fullBit(oldp+8407,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
        tracep->fullIData(oldp+8408,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
        tracep->fullIData(oldp+8409,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
        tracep->fullBit(oldp+8410,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                          >> 1U))));
        tracep->fullBit(oldp+8411,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                          >> 1U))));
        tracep->fullIData(oldp+8412,((0x1fffffffU & 
                                      (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 3U))),29);
        tracep->fullIData(oldp+8413,((0x1fffffffU & 
                                      (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 3U))),29);
        tracep->fullBit(oldp+8414,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
        tracep->fullBit(oldp+8415,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
        tracep->fullBit(oldp+8416,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                          >> 2U))));
        tracep->fullBit(oldp+8417,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                          >> 2U))));
        tracep->fullBit(oldp+8418,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready));
        tracep->fullBit(oldp+8419,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush));
        tracep->fullBit(oldp+8420,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
        tracep->fullBit(oldp+8421,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
        tracep->fullBit(oldp+8422,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
        tracep->fullBit(oldp+8423,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
        tracep->fullIData(oldp+8424,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
        tracep->fullBit(oldp+8425,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 1U))));
        tracep->fullIData(oldp+8426,((0x1fffffffU & 
                                      (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                       >> 3U))),29);
        tracep->fullBit(oldp+8427,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear));
        tracep->fullBit(oldp+8428,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
        tracep->fullCData(oldp+8429,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
        tracep->fullCData(oldp+8430,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
        tracep->fullBit(oldp+8431,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
        tracep->fullCData(oldp+8432,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        tracep->fullQData(oldp+8433,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
        tracep->fullQData(oldp+8435,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
        tracep->fullBit(oldp+8437,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
        tracep->fullQData(oldp+8438,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
        tracep->fullQData(oldp+8440,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
        tracep->fullQData(oldp+8442,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
        tracep->fullBit(oldp+8444,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
        tracep->fullQData(oldp+8445,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        tracep->fullIData(oldp+8447,((0xfffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q)),20);
        tracep->fullIData(oldp+8448,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q),32);
        tracep->fullIData(oldp+8449,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_en_q),32);
        tracep->fullIData(oldp+8450,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q),32);
        tracep->fullBit(oldp+8451,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe));
        tracep->fullBit(oldp+8452,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
        tracep->fullBit(oldp+8453,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
        tracep->fullCData(oldp+8454,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+8455,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+8456,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+8457,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
        tracep->fullCData(oldp+8458,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
        tracep->fullBit(oldp+8459,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
        tracep->fullBit(oldp+8460,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe));
        tracep->fullBit(oldp+8461,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe));
        tracep->fullBit(oldp+8462,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe));
        tracep->fullBit(oldp+8463,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe));
        tracep->fullBit(oldp+8464,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe));
        tracep->fullBit(oldp+8465,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe));
        tracep->fullBit(oldp+8466,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe));
        tracep->fullBit(oldp+8467,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe));
        tracep->fullBit(oldp+8468,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe));
        tracep->fullBit(oldp+8469,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe));
        tracep->fullBit(oldp+8470,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__CLK_SEL));
        tracep->fullBit(oldp+8471,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8472,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8473,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8474,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8475,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8476,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8477,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8478,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8479,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[0U])));
        tracep->fullCData(oldp+8480,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+8481,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+8482,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+8483,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullCData(oldp+8484,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
        tracep->fullBit(oldp+8485,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
        tracep->fullBit(oldp+8486,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack));
        tracep->fullBit(oldp+8487,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+8488,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8489,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8490,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8491,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8492,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8493,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8494,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8495,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8496,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+8497,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8498,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8499,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8500,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8501,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8502,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8503,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8504,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8505,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+8506,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+8507,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+8508,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp3021[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U]);
        __Vtemp3021[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]));
        __Vtemp3021[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+8509,(__Vtemp3021),85);
        tracep->fullBit(oldp+8512,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+8513,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+8516,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+8519,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullIData(oldp+8522,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                       << 0xaU) | (
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                                   >> 0x16U))),32);
        tracep->fullBit(oldp+8523,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          >> 0x15U))));
        tracep->fullIData(oldp+8524,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                       << 0xbU) | (
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                   >> 0x15U))),32);
        tracep->fullBit(oldp+8525,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          >> 0x14U))));
        tracep->fullIData(oldp+8526,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                       << 0xcU) | (
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                   >> 0x14U))),32);
        tracep->fullSData(oldp+8527,((0x3ffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                 << 0x16U) 
                                                | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                   >> 0xaU)))),10);
        tracep->fullSData(oldp+8528,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),10);
        tracep->fullSData(oldp+8529,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+8530,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
        tracep->fullIData(oldp+8531,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
        tracep->fullSData(oldp+8532,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+8533,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
        tracep->fullSData(oldp+8534,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+8535,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
        tracep->fullIData(oldp+8536,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                       << 0xcU) | (
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                   >> 0x14U))),32);
        tracep->fullSData(oldp+8537,((0x3ffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                 << 0x16U) 
                                                | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                   >> 0xaU)))),10);
        tracep->fullSData(oldp+8538,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                                    >> 0x10U)))),16);
        tracep->fullIData(oldp+8539,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
        tracep->fullSData(oldp+8540,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+8541,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
        tracep->fullSData(oldp+8542,((0xffffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                                    >> 0x10U)))),16);
        tracep->fullSData(oldp+8543,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
        tracep->fullBit(oldp+8544,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U)))));
        tracep->fullSData(oldp+8545,((0x3ffU & ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                 << 0x16U) 
                                                | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                   >> 0xaU)))),16);
        tracep->fullSData(oldp+8546,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),16);
        tracep->fullSData(oldp+8547,((0xffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
        tracep->fullIData(oldp+8548,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
        tracep->fullIData(oldp+8549,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
        tracep->fullBit(oldp+8550,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
        tracep->fullCData(oldp+8551,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        tracep->fullIData(oldp+8552,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
        tracep->fullIData(oldp+8553,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d),18);
        tracep->fullIData(oldp+8554,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
        tracep->fullCData(oldp+8555,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),6);
        tracep->fullIData(oldp+8556,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
        tracep->fullIData(oldp+8557,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
        tracep->fullWData(oldp+8558,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex),68);
        tracep->fullIData(oldp+8561,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex),32);
        tracep->fullWData(oldp+8562,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d),68);
        tracep->fullQData(oldp+8565,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
        tracep->fullIData(oldp+8567,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
        tracep->fullCData(oldp+8568,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        tracep->fullBit(oldp+8569,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init));
        tracep->fullBit(oldp+8570,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
        tracep->fullCData(oldp+8571,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
        tracep->fullBit(oldp+8572,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8573,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8574,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8575,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8576,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8577,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8578,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8579,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8580,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U])));
        tracep->fullBit(oldp+8581,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack) 
                                     & (4U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    & (~ ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                            & (0U != 
                                               (3U 
                                                & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                    << 0x1bU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                      >> 5U))))) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                          | (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))))));
        tracep->fullBit(oldp+8582,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                    & (~ ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                            & (0U != 
                                               (3U 
                                                & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                    << 0x1bU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                      >> 5U))))) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                          | (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))))));
        tracep->fullBit(oldp+8583,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+8584,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                          >> 1U))));
        tracep->fullBit(oldp+8585,((0U != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)));
        tracep->fullIData(oldp+8586,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event),32);
        tracep->fullIData(oldp+8587,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next),32);
        tracep->fullBit(oldp+8588,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we));
        tracep->fullBit(oldp+8589,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we));
        tracep->fullBit(oldp+8590,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
        tracep->fullBit(oldp+8591,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
        tracep->fullBit(oldp+8592,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
        tracep->fullBit(oldp+8593,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
        tracep->fullBit(oldp+8594,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we));
        tracep->fullIData(oldp+8595,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim),32);
        tracep->fullCData(oldp+8596,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete_id[0]),5);
        tracep->fullIData(oldp+8597,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete),32);
        tracep->fullCData(oldp+8598,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold[0]),3);
        tracep->fullIData(oldp+8599,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
        tracep->fullBit(oldp+8600,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we));
        tracep->fullBit(oldp+8601,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we));
        tracep->fullBit(oldp+8602,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we));
        tracep->fullBit(oldp+8603,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we));
        tracep->fullBit(oldp+8604,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we));
        tracep->fullBit(oldp+8605,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we));
        tracep->fullBit(oldp+8606,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we));
        tracep->fullBit(oldp+8607,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we));
        tracep->fullBit(oldp+8608,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we));
        tracep->fullBit(oldp+8609,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we));
        tracep->fullBit(oldp+8610,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we));
        tracep->fullBit(oldp+8611,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we));
        tracep->fullBit(oldp+8612,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we));
        tracep->fullBit(oldp+8613,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we));
        tracep->fullBit(oldp+8614,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we));
        tracep->fullBit(oldp+8615,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we));
        tracep->fullBit(oldp+8616,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we));
        tracep->fullBit(oldp+8617,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we));
        tracep->fullBit(oldp+8618,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we));
        tracep->fullBit(oldp+8619,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we));
        tracep->fullBit(oldp+8620,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we));
        tracep->fullBit(oldp+8621,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we));
        tracep->fullBit(oldp+8622,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we));
        tracep->fullBit(oldp+8623,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we));
        tracep->fullBit(oldp+8624,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we));
        tracep->fullBit(oldp+8625,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
        tracep->fullBit(oldp+8626,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we));
        tracep->fullBit(oldp+8627,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we));
        tracep->fullBit(oldp+8628,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we));
        tracep->fullBit(oldp+8629,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we));
        tracep->fullBit(oldp+8630,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we));
        tracep->fullBit(oldp+8631,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we));
        tracep->fullBit(oldp+8632,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we));
        tracep->fullCData(oldp+8633,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                     [0U]),3);
        tracep->fullCData(oldp+8634,((0xfcU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                << 0x1bU) 
                                               | (0x7fffffcU 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                     >> 5U))))),8);
        tracep->fullIData(oldp+8635,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U] 
                                       >> 1U))),32);
        tracep->fullCData(oldp+8636,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullBit(oldp+8637,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack));
        tracep->fullBit(oldp+8638,((1U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                            & (0U != 
                                               (3U 
                                                & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                    << 0x1bU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                      >> 5U))))) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                          | (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))))))));
        tracep->fullBit(oldp+8639,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                    & (0U != (3U & 
                                              ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                << 0x1bU) 
                                               | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                  >> 5U)))))));
        tracep->fullBit(oldp+8640,((1U & (~ ((((0U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                    >> 0x12U))) 
                                               | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                      >> 0x12U)))) 
                                              | (4U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                             & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                                & (((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                         >> 0x12U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                           >> 0x12U)))) 
                                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->fullBit(oldp+8641,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack) 
                                    & (4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+8642,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req));
        tracep->fullBit(oldp+8643,((((0U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+8644,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullBit(oldp+8645,((0U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+8646,((1U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+8647,((4U == (7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+8648,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk));
        tracep->fullBit(oldp+8649,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk));
        tracep->fullBit(oldp+8650,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk));
        tracep->fullCData(oldp+8651,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                        >> 5U)))))),4);
        tracep->fullBit(oldp+8652,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8653,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8654,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8655,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8656,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8657,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8658,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8659,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8660,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U])));
        tracep->fullBit(oldp+8661,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+8662,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+8663,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+8664,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+8665,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+8666,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                       << 0x1bU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+8667,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               << 0x1fU) 
                                              | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+8668,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                       << 0x1fU) | 
                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+8669,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
        tracep->fullCData(oldp+8670,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dfifo_rspready),2);
        tracep->fullBit(oldp+8671,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dfifo_rspready))));
        tracep->fullBit(oldp+8672,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                          >> 0x15U))));
        __Vtemp3025[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U]);
        __Vtemp3025[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U]) 
                           | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U]));
        __Vtemp3025[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U]) 
                           | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U]));
        tracep->fullWData(oldp+8673,(__Vtemp3025),85);
        tracep->fullBit(oldp+8676,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U])));
        tracep->fullWData(oldp+8677,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
        tracep->fullWData(oldp+8680,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
        tracep->fullWData(oldp+8683,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        tracep->fullIData(oldp+8686,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le),32);
        tracep->fullIData(oldp+8687,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set),32);
        tracep->fullBit(oldp+8688,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we));
        tracep->fullBit(oldp+8689,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we));
        tracep->fullBit(oldp+8690,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we));
        tracep->fullBit(oldp+8691,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we));
        tracep->fullBit(oldp+8692,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we));
        tracep->fullBit(oldp+8693,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we));
        tracep->fullBit(oldp+8694,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we));
        tracep->fullBit(oldp+8695,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we));
        tracep->fullBit(oldp+8696,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we));
        tracep->fullBit(oldp+8697,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we));
        tracep->fullBit(oldp+8698,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we));
        tracep->fullBit(oldp+8699,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we));
        tracep->fullBit(oldp+8700,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we));
        tracep->fullBit(oldp+8701,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we));
        tracep->fullBit(oldp+8702,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we));
        tracep->fullBit(oldp+8703,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we));
        tracep->fullBit(oldp+8704,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we));
        tracep->fullBit(oldp+8705,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we));
        tracep->fullBit(oldp+8706,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we));
        tracep->fullBit(oldp+8707,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we));
        tracep->fullBit(oldp+8708,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we));
        tracep->fullBit(oldp+8709,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we));
        tracep->fullBit(oldp+8710,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we));
        tracep->fullBit(oldp+8711,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we));
        tracep->fullBit(oldp+8712,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we));
        tracep->fullBit(oldp+8713,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we));
        tracep->fullBit(oldp+8714,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we));
        tracep->fullBit(oldp+8715,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we));
        tracep->fullBit(oldp+8716,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we));
        tracep->fullBit(oldp+8717,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
        tracep->fullBit(oldp+8718,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we));
        tracep->fullBit(oldp+8719,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we));
        tracep->fullBit(oldp+8720,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we));
        tracep->fullBit(oldp+8721,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we));
        tracep->fullBit(oldp+8722,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we));
        tracep->fullBit(oldp+8723,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we));
        tracep->fullBit(oldp+8724,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we));
        tracep->fullBit(oldp+8725,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we));
        tracep->fullBit(oldp+8726,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we));
        tracep->fullBit(oldp+8727,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we));
        tracep->fullBit(oldp+8728,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we));
        tracep->fullBit(oldp+8729,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we));
        tracep->fullBit(oldp+8730,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we));
        tracep->fullBit(oldp+8731,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we));
        tracep->fullBit(oldp+8732,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we));
        tracep->fullBit(oldp+8733,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we));
        tracep->fullBit(oldp+8734,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we));
        tracep->fullBit(oldp+8735,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
        tracep->fullBit(oldp+8736,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
        tracep->fullBit(oldp+8737,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
        tracep->fullBit(oldp+8738,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we));
        tracep->fullBit(oldp+8739,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
        tracep->fullBit(oldp+8740,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we));
        tracep->fullBit(oldp+8741,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we));
        tracep->fullBit(oldp+8742,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we));
        tracep->fullBit(oldp+8743,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we));
        tracep->fullBit(oldp+8744,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
        tracep->fullBit(oldp+8745,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
        tracep->fullBit(oldp+8746,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
        tracep->fullBit(oldp+8747,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
        tracep->fullBit(oldp+8748,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
        tracep->fullBit(oldp+8749,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we));
        tracep->fullBit(oldp+8750,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we));
        tracep->fullBit(oldp+8751,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we));
        tracep->fullIData(oldp+8752,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
        tracep->fullCData(oldp+8753,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
        tracep->fullIData(oldp+8754,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        tracep->fullBit(oldp+8755,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req));
        tracep->fullBit(oldp+8756,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err));
        tracep->fullCData(oldp+8757,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
        tracep->fullCData(oldp+8758,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
        tracep->fullBit(oldp+8759,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
        tracep->fullCData(oldp+8760,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
        tracep->fullBit(oldp+8761,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
        tracep->fullBit(oldp+8762,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
        tracep->fullBit(oldp+8763,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
        tracep->fullBit(oldp+8764,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
        tracep->fullBit(oldp+8765,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
        tracep->fullBit(oldp+8766,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
        tracep->fullBit(oldp+8767,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
        tracep->fullBit(oldp+8768,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
        tracep->fullBit(oldp+8769,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
        tracep->fullBit(oldp+8770,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
        tracep->fullIData(oldp+8771,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
        tracep->fullBit(oldp+8772,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
        tracep->fullBit(oldp+8773,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req));
        tracep->fullBit(oldp+8774,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
        tracep->fullBit(oldp+8775,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+8776,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
        tracep->fullBit(oldp+8777,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
        tracep->fullBit(oldp+8778,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
        tracep->fullBit(oldp+8779,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
        tracep->fullIData(oldp+8780,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
        tracep->fullBit(oldp+8781,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
        tracep->fullBit(oldp+8782,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
        tracep->fullBit(oldp+8783,(vlTOPp->clk_i));
        tracep->fullBit(oldp+8784,(vlTOPp->rst_ni));
        tracep->fullBit(oldp+8785,(vlTOPp->jtag_tck_i));
        tracep->fullBit(oldp+8786,(vlTOPp->jtag_tms_i));
        tracep->fullBit(oldp+8787,(vlTOPp->jtag_trst_ni));
        tracep->fullBit(oldp+8788,(vlTOPp->jtag_tdi_i));
        tracep->fullBit(oldp+8789,(vlTOPp->jtag_tdo_o));
        tracep->fullIData(oldp+8790,(vlTOPp->gpio_i),20);
        tracep->fullIData(oldp+8791,(vlTOPp->gpio_o),20);
        tracep->fullBit(oldp+8792,((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                             & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                                | (0U 
                                                   != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))))));
        tracep->fullBit(oldp+8793,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_req));
        tracep->fullBit(oldp+8794,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk));
        tracep->fullBit(oldp+8795,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy) 
                                     | ((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                    | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        tracep->fullBit(oldp+8796,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                       | (0U != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))));
        tracep->fullBit(oldp+8797,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        tracep->fullIData(oldp+8798,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                     (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xfU))]),32);
        tracep->fullIData(oldp+8799,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                     (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U))]),32);
        tracep->fullBit(oldp+8800,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__en_latch));
        tracep->fullBit(oldp+8801,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
        tracep->fullBit(oldp+8802,((1U & (((((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))))));
        tracep->fullBit(oldp+8803,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err));
        tracep->fullIData(oldp+8804,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                      << 1U)),32);
        tracep->fullCData(oldp+8805,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause),6);
        tracep->fullBit(oldp+8806,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
        tracep->fullBit(oldp+8807,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy));
        tracep->fullBit(oldp+8808,(((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
        tracep->fullBit(oldp+8809,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        tracep->fullBit(oldp+8810,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
        tracep->fullBit(oldp+8811,(((((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                      & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                 >> 0x33U))) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
        tracep->fullIData(oldp+8812,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                       ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                           ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                           : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)
                                       : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)),32);
        tracep->fullBit(oldp+8813,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)))));
        tracep->fullBit(oldp+8814,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match));
        tracep->fullBit(oldp+8815,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match));
        tracep->fullBit(oldp+8816,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->fullBit(oldp+8817,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->fullIData(oldp+8818,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        tracep->fullBit(oldp+8819,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                    & (1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))));
        tracep->fullBit(oldp+8820,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out));
        tracep->fullBit(oldp+8821,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if));
        tracep->fullBit(oldp+8822,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_wb));
        tracep->fullBit(oldp+8823,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause));
        tracep->fullCData(oldp+8824,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        tracep->fullBit(oldp+8825,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))));
        tracep->fullBit(oldp+8826,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q))));
        tracep->fullBit(oldp+8827,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
        tracep->fullBit(oldp+8828,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz)))));
        tracep->fullBit(oldp+8829,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->fullBit(oldp+8830,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->fullBit(oldp+8831,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load));
        tracep->fullBit(oldp+8832,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store));
        tracep->fullBit(oldp+8833,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready)) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set))) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear))))));
        tracep->fullBit(oldp+8834,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                              ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                              : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                 & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->fullIData(oldp+8835,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                       ? 0U : ((1U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                                ? (
                                                   (0xffffff00U 
                                                    & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                   | (0x7cU 
                                                      & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                                         << 2U)))
                                                : (0xffffff00U 
                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->fullBit(oldp+8836,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                          >> 5U))));
        tracep->fullBit(oldp+8837,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->fullCData(oldp+8838,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                       ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                >> 1U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
        tracep->fullCData(oldp+8839,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                       ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                                >> 1U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
        tracep->fullCData(oldp+8840,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                       ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                                >> 1U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
        tracep->fullBit(oldp+8841,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->fullIData(oldp+8842,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                        ? (0xfffffffeU 
                                           & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                        : (0xfffffffcU 
                                           & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                      + (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                         << 2U))),32);
        tracep->fullBit(oldp+8843,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
        tracep->fullIData(oldp+8844,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                       : 0U)),32);
        tracep->fullBit(oldp+8845,((1U & (~ (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                          >> 1U) 
                                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
        tracep->fullIData(oldp+8846,((0xfffffffeU & 
                                      ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                  << 1U)) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                       << 1U))),32);
        tracep->fullCData(oldp+8847,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
        tracep->fullCData(oldp+8848,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
        tracep->fullCData(oldp+8849,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        tracep->fullIData(oldp+8850,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                       ? ((0xffff0000U 
                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                >> 0x10U)))
                                       : ((0xffff0000U 
                                           & ((IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ifu 
                                                       >> 2U)) 
                                              << 0x10U)) 
                                          | (0xffffU 
                                             & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                >> 0x10U))))),32);
        tracep->fullBit(oldp+8851,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                           ? ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                >> 1U) 
                                               & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                              | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                           : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                              | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                 & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                    | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->fullBit(oldp+8852,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                           ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                           : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                               & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->fullBit(oldp+8853,((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                           >> 1U) | 
                                          ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                           & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->fullIData(oldp+8854,((0x7fffffffU & 
                                      (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                       + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->fullIData(oldp+8855,((0x7fffffffU & 
                                      ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                        ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                             ? (0xfffffffeU 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                             : 0U) 
                                           >> 1U) : 
                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                  << 1U)) 
                                           | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->fullIData(oldp+8856,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
        tracep->fullBit(oldp+8857,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))));
        tracep->fullBit(oldp+8858,(0U));
        tracep->fullBit(oldp+8859,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear)))));
        tracep->fullBit(oldp+8860,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        tracep->fullIData(oldp+8861,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                       ? 0U : (0x1fU 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xfU)))),32);
        tracep->fullBit(oldp+8862,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->fullBit(oldp+8863,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
                                    & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec)))));
        tracep->fullBit(oldp+8864,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                    & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec)))));
        tracep->fullBit(oldp+8865,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->fullBit(oldp+8866,(((3U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                    & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                       | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->fullBit(oldp+8867,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err)))));
        tracep->fullBit(oldp+8868,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush))));
        tracep->fullBit(oldp+8869,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        tracep->fullIData(oldp+8870,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                       ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                           << 0x1eU) 
                                          | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                             >> 2U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        tracep->fullBit(oldp+8871,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
        tracep->fullIData(oldp+8872,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        tracep->fullQData(oldp+8873,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                       ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                       : (1ULL | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                  << 1U)))),33);
        tracep->fullBit(oldp+8875,((1U & ((0x80000000U 
                                           & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              ^ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                           ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               >> 0x1fU) 
                                              ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                           : (~ (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 0x20U)))))));
        tracep->fullIData(oldp+8876,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
        tracep->fullQData(oldp+8877,((0x7ffffffffULL 
                                      & (VL_MULS_QQQ(35,35,35, 
                                                     (0x7ffffffffULL 
                                                      & VL_EXTENDS_QI(35,17, 
                                                                      (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                        << 0x10U) 
                                                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                     (0x7ffffffffULL 
                                                      & VL_EXTENDS_QI(35,17, 
                                                                      (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                        << 0x10U) 
                                                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                         + VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
        tracep->fullQData(oldp+8879,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
        tracep->fullQData(oldp+8881,((0x3ffffffffULL 
                                      & ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35,35,35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        tracep->fullBit(oldp+8883,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                     ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->fullBit(oldp+8884,((1U & (IData)((1ULL 
                                                  & ((VL_MULS_QQQ(35,35,35, 
                                                                  (0x7ffffffffULL 
                                                                   & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                  (0x7ffffffffULL 
                                                                   & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                      + 
                                                      VL_EXTENDS_QQ(35,34, vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                     >> 0x22U))))));
        tracep->fullIData(oldp+8885,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                           ? ((0xffffff00U 
                                               & ((IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                           >> 2U)) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                    >> 0x10U)))
                                           : ((0xffff0000U 
                                               & ((IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                           >> 2U)) 
                                                  << 0x10U)) 
                                              | (0xffffU 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                    >> 8U))))
                                       : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                           ? ((0xff000000U 
                                               & ((IData)(
                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                           >> 2U)) 
                                                  << 0x18U)) 
                                              | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                           : (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                      >> 2U))))),32);
        tracep->fullIData(oldp+8886,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                           ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                               ? ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                             >> 9U))))) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & ((IData)(
                                                                 (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                  >> 2U)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                           >> 0x10U))))
                                               : ((0xff00U 
                                                   & ((IData)(
                                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                               >> 2U)) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                        >> 0x10U))))
                                           : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                               ? ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                             >> 0x21U))))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                >> 0x12U))))
                                               : (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                             >> 0x12U)))))
                                       : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                           ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                               ? ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                             >> 0x19U))))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                >> 0xaU))))
                                               : (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                             >> 0xaU))))
                                           : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                               ? ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                             >> 0x11U))))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                >> 2U))))
                                               : (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                             >> 2U))))))),32);
        tracep->fullIData(oldp+8887,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                       ? ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                           ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                               ? ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                             >> 0x21U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                >> 0x1aU))))
                                               : (0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                             >> 0x1aU))))
                                           : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                               ? ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                             >> 0x19U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                >> 0x12U))))
                                               : (0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                             >> 0x12U)))))
                                       : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                           ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                               ? ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                             >> 0x11U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                >> 0xaU))))
                                               : (0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                             >> 0xaU))))
                                           : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                               ? ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                             >> 9U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                                >> 2U))))
                                               : (0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                             >> 2U))))))),32);
        tracep->fullBit(oldp+8888,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        tracep->fullIData(oldp+8889,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->fullIData(oldp+8890,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->fullCData(oldp+8891,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        tracep->fullBit(oldp+8892,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)) 
                                    | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))))));
        tracep->fullIData(oldp+8893,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                       ? 0x20000001U
                                       : (1U | (0xffffff00U 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        tracep->fullIData(oldp+8894,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip),18);
        tracep->fullBit(oldp+8895,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
        tracep->fullCData(oldp+8896,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                       ? (5U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        tracep->fullBit(oldp+8897,(((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                           >> 8U)) 
                                    > (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->fullBit(oldp+8898,(((3U == (3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 0xaU))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
        tracep->fullBit(oldp+8899,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        tracep->fullBit(oldp+8900,((1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                           >> 2U) & 
                                          (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                              >> 2U))))));
        tracep->fullCData(oldp+8901,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
        tracep->fullCData(oldp+8902,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                       ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                       : 0xfU)),4);
        tracep->fullBit(oldp+8903,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
        tracep->fullIData(oldp+8904,(vlTOPp->gpio_i),32);
        tracep->fullIData(oldp+8905,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q),32);
        tracep->fullIData(oldp+8906,((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                       & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U])),32);
        tracep->fullIData(oldp+8907,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                       & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])),32);
        tracep->fullIData(oldp+8908,(((((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                                        | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                            & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
                                       | ((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
                                      | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]))),32);
        tracep->fullBit(oldp+8909,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x33U)) 
                                          & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U]))));
        tracep->fullIData(oldp+8910,((((0x200000U & 
                                        vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U])
                                        ? ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                            << 0xaU) 
                                           | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                              >> 0x16U))
                                        : vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                      & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we)
                                          ? (~ ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                   >> 1U)))
                                          : 0xffffffffU))),32);
        tracep->fullBit(oldp+8911,((1U & vlTOPp->gpio_i)));
        tracep->fullBit(oldp+8912,((1U & ((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                           : vlTOPp->gpio_i))));
        tracep->fullBit(oldp+8913,((1U & (vlTOPp->gpio_i 
                                          >> 1U))));
        tracep->fullBit(oldp+8914,((1U & ((2U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 1U)))));
        tracep->fullBit(oldp+8915,((1U & (vlTOPp->gpio_i 
                                          >> 2U))));
        tracep->fullBit(oldp+8916,((1U & ((4U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 2U)))));
        tracep->fullBit(oldp+8917,((1U & (vlTOPp->gpio_i 
                                          >> 3U))));
        tracep->fullBit(oldp+8918,((1U & ((8U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 3U)))));
        tracep->fullBit(oldp+8919,((1U & (vlTOPp->gpio_i 
                                          >> 4U))));
        tracep->fullBit(oldp+8920,((1U & ((0x10U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 4U)))));
        tracep->fullBit(oldp+8921,((1U & (vlTOPp->gpio_i 
                                          >> 5U))));
        tracep->fullBit(oldp+8922,((1U & ((0x20U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 5U)))));
        tracep->fullBit(oldp+8923,((1U & (vlTOPp->gpio_i 
                                          >> 6U))));
        tracep->fullBit(oldp+8924,((1U & ((0x40U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 6U)))));
        tracep->fullBit(oldp+8925,((1U & (vlTOPp->gpio_i 
                                          >> 7U))));
        tracep->fullBit(oldp+8926,((1U & ((0x80U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 7U)))));
        tracep->fullBit(oldp+8927,((1U & (vlTOPp->gpio_i 
                                          >> 8U))));
        tracep->fullBit(oldp+8928,((1U & ((0x100U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 8U)))));
        tracep->fullBit(oldp+8929,((1U & (vlTOPp->gpio_i 
                                          >> 9U))));
        tracep->fullBit(oldp+8930,((1U & ((0x200U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 9U)))));
        tracep->fullBit(oldp+8931,((1U & (vlTOPp->gpio_i 
                                          >> 0xaU))));
        tracep->fullBit(oldp+8932,((1U & ((0x400U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xaU)))));
        tracep->fullBit(oldp+8933,((1U & (vlTOPp->gpio_i 
                                          >> 0xbU))));
        tracep->fullBit(oldp+8934,((1U & ((0x800U & 
                                           vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xbU)))));
        tracep->fullBit(oldp+8935,((1U & (vlTOPp->gpio_i 
                                          >> 0xcU))));
        tracep->fullBit(oldp+8936,((1U & ((0x1000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xcU)))));
        tracep->fullBit(oldp+8937,((1U & (vlTOPp->gpio_i 
                                          >> 0xdU))));
        tracep->fullBit(oldp+8938,((1U & ((0x2000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xdU)))));
        tracep->fullBit(oldp+8939,((1U & (vlTOPp->gpio_i 
                                          >> 0xeU))));
        tracep->fullBit(oldp+8940,((1U & ((0x4000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xeU)))));
        tracep->fullBit(oldp+8941,((1U & (vlTOPp->gpio_i 
                                          >> 0xfU))));
        tracep->fullBit(oldp+8942,((1U & ((0x8000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0xfU)))));
        tracep->fullBit(oldp+8943,((1U & (vlTOPp->gpio_i 
                                          >> 0x10U))));
        tracep->fullBit(oldp+8944,((1U & ((0x10000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x10U)))));
        tracep->fullBit(oldp+8945,((1U & (vlTOPp->gpio_i 
                                          >> 0x11U))));
        tracep->fullBit(oldp+8946,((1U & ((0x20000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x11U)))));
        tracep->fullBit(oldp+8947,((1U & (vlTOPp->gpio_i 
                                          >> 0x12U))));
        tracep->fullBit(oldp+8948,((1U & ((0x40000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x12U)))));
        tracep->fullBit(oldp+8949,((1U & (vlTOPp->gpio_i 
                                          >> 0x13U))));
        tracep->fullBit(oldp+8950,((1U & ((0x80000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x13U)))));
        tracep->fullBit(oldp+8951,((1U & (vlTOPp->gpio_i 
                                          >> 0x14U))));
        tracep->fullBit(oldp+8952,((1U & ((0x100000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x14U)))));
        tracep->fullBit(oldp+8953,((1U & (vlTOPp->gpio_i 
                                          >> 0x15U))));
        tracep->fullBit(oldp+8954,((1U & ((0x200000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x15U)))));
        tracep->fullBit(oldp+8955,((1U & (vlTOPp->gpio_i 
                                          >> 0x16U))));
        tracep->fullBit(oldp+8956,((1U & ((0x400000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x16U)))));
        tracep->fullBit(oldp+8957,((1U & (vlTOPp->gpio_i 
                                          >> 0x17U))));
        tracep->fullBit(oldp+8958,((1U & ((0x800000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x17U)))));
        tracep->fullBit(oldp+8959,((1U & (vlTOPp->gpio_i 
                                          >> 0x18U))));
        tracep->fullBit(oldp+8960,((1U & ((0x1000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x18U)))));
        tracep->fullBit(oldp+8961,((1U & (vlTOPp->gpio_i 
                                          >> 0x19U))));
        tracep->fullBit(oldp+8962,((1U & ((0x2000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x19U)))));
        tracep->fullBit(oldp+8963,((1U & (vlTOPp->gpio_i 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+8964,((1U & ((0x4000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1aU)))));
        tracep->fullBit(oldp+8965,((1U & (vlTOPp->gpio_i 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+8966,((1U & ((0x8000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1bU)))));
        tracep->fullBit(oldp+8967,((1U & (vlTOPp->gpio_i 
                                          >> 0x1cU))));
        tracep->fullBit(oldp+8968,((1U & ((0x10000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1cU)))));
        tracep->fullBit(oldp+8969,((1U & (vlTOPp->gpio_i 
                                          >> 0x1dU))));
        tracep->fullBit(oldp+8970,((1U & ((0x20000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1dU)))));
        tracep->fullBit(oldp+8971,((1U & (vlTOPp->gpio_i 
                                          >> 0x1eU))));
        tracep->fullBit(oldp+8972,((1U & ((0x40000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1eU)))));
        tracep->fullBit(oldp+8973,((1U & (vlTOPp->gpio_i 
                                          >> 0x1fU))));
        tracep->fullBit(oldp+8974,((1U & ((0x80000000U 
                                           & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                           : (vlTOPp->gpio_i 
                                              >> 0x1fU)))));
        tracep->fullIData(oldp+8975,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata),32);
        tracep->fullIData(oldp+8976,(((IData)(vlTOPp->rst_ni)
                                       ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                       : 0U)),32);
        tracep->fullBit(oldp+8977,((1U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                           >> 0x15U) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar)))));
        tracep->fullBit(oldp+8978,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
        tracep->fullBit(oldp+8979,(((IData)((0x800U 
                                             == (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->fullBit(oldp+8980,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                          & ((1U == 
                                              (3U & 
                                               ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU)))
                                              ? ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                 | ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xaU))
                                              : ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))))));
        tracep->fullIData(oldp+8981,((((IData)(vlTOPp->rst_ni)
                                        ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                        : 0U) & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->fullSData(oldp+8982,(((((4U != (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                   >> 0x12U)))
                                         ? 0U : 1U) 
                                       << 0xbU) | (
                                                   ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                                    << 0xaU) 
                                                   | (0x3ffU 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                         >> 5U))))),13);
        tracep->fullCData(oldp+8983,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->fullBit(oldp+8984,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->fullCData(oldp+8985,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->fullBit(oldp+8986,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->fullCData(oldp+8987,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->fullBit(oldp+8988,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                    & ((IData)((0x800U 
                                                == 
                                                (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        tracep->fullQData(oldp+8989,((0x1ffffffffULL 
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
        tracep->fullIData(oldp+8991,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata),32);
        tracep->fullBit(oldp+8992,((1U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                           >> 0x15U) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar)))));
        tracep->fullBit(oldp+8993,(((IData)((0x800U 
                                             == (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->fullBit(oldp+8994,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                          & ((1U == 
                                              (3U & 
                                               ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU)))
                                              ? ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                 | ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xaU))
                                              : ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))))));
        tracep->fullIData(oldp+8995,((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata 
                                      & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->fullCData(oldp+8996,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->fullBit(oldp+8997,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->fullCData(oldp+8998,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->fullBit(oldp+8999,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->fullCData(oldp+9000,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
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
        tracep->fullBit(oldp+9001,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                    & ((IData)((0x800U 
                                                == 
                                                (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->fullQData(oldp+9002,((0x1ffffffffULL 
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
        tracep->fullIData(oldp+9004,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0]),32);
        tracep->fullIData(oldp+9005,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia),32);
        tracep->fullBit(oldp+9006,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                   >> 0x33U)) 
                                          & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U]))));
        tracep->fullBit(oldp+9007,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                    & (0U != (3U & 
                                              ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                << 0x1bU) 
                                               | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                  >> 5U)))))));
        tracep->fullBit(oldp+9008,((1U & (~ ((((0U 
                                                == 
                                                (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                    >> 0x12U))) 
                                               | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                      >> 0x12U)))) 
                                              | (4U 
                                                 == 
                                                 (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                             & (((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                                & (((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                         >> 0x12U))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                           >> 0x12U)))) 
                                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
        tracep->fullBit(oldp+9009,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                    & (((4U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->fullIData(oldp+9010,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                     [0U]),32);
        tracep->fullQData(oldp+9011,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->fullBit(oldp+9013,((((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                     > vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                     [0U]) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->fullCData(oldp+9014,(((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                       ? (0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                       : 0U)),6);
        tracep->fullBit(oldp+9015,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                   >> 0x33U)) 
                                          & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U]))));
        tracep->fullBit(oldp+9016,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty)))));
        tracep->fullBit(oldp+9017,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)))));
        tracep->fullIData(oldp+9018,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                       ? (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                  >> 0x20U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux))),32);
        tracep->fullIData(oldp+9019,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d)),32);
        tracep->fullIData(oldp+9020,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d 
                                              >> 0x20U))),32);
        tracep->fullIData(oldp+9021,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                       ? 0U : (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                       >> 
                                                       (0x20U 
                                                        & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           << 5U)))))),32);
        tracep->fullCData(oldp+9022,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)
                                       ? 2U : (3U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 1U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                 - 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(2U) 
                                                  - 
                                                  (1U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->fullBit(oldp+9023,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+9024,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk))))));
        tracep->fullIData(oldp+9025,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage)),32);
        tracep->fullIData(oldp+9026,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> 0x20U))),32);
        tracep->fullIData(oldp+9027,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                              >> (0x20U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     << 5U))))),32);
        tracep->fullQData(oldp+9028,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata),64);
        tracep->fullCData(oldp+9030,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_d),2);
        tracep->fullCData(oldp+9031,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
        tracep->fullBit(oldp+9032,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__td_o));
        tracep->fullBit(oldp+9033,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o));
        tracep->fullIData(oldp+9034,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                              [(3U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))] 
                                              >> 2U))),32);
        tracep->fullCData(oldp+9035,((3U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                                   [
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]))),2);
        tracep->fullBit(oldp+9036,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty)))));
        tracep->fullBit(oldp+9037,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                           ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                           : ((1U == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                               ? vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                               : ((0x10U 
                                                   == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                   ? vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q
                                                   : 
                                                  ((0x11U 
                                                    == (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                    ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dr_q)
                                                    : (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q))))))));
        tracep->fullCData(oldp+9038,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))))))),3);
        tracep->fullCData(oldp+9039,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                       == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->fullBit(oldp+9040,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_rptr));
        tracep->fullBit(oldp+9041,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty));
        tracep->fullBit(oldp+9042,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                    == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))));
        tracep->fullCData(oldp+9043,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))))))),3);
        tracep->fullQData(oldp+9044,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                     [(3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]),34);
        tracep->fullCData(oldp+9046,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                       == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                       ? 4U : (7U & 
                                               (((1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                                     >> 2U)))
                                                 ? 
                                                ((3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi)) 
                                                 - 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                                 : 
                                                (((IData)(4U) 
                                                  - 
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->fullCData(oldp+9047,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray),3);
        tracep->fullBit(oldp+9048,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr));
        tracep->fullBit(oldp+9049,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty));
        tracep->fullBit(oldp+9050,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk));
        tracep->fullBit(oldp+9051,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                    == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))));
        tracep->fullCData(oldp+9052,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq),3);
        tracep->fullBit(oldp+9053,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                          & ((1U == 
                                              (3U & 
                                               ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xbU)))
                                              ? ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                 | ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xaU))
                                              : ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))))));
        tracep->fullIData(oldp+9054,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                        ? (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                   >> 0x20U))
                                        : (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux)) 
                                      & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask)),32);
        tracep->fullBit(oldp+9055,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full) 
                                          | (((1U & 
                                               ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                >> 1U)) 
                                              == (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 1U)))
                                              ? ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                              : (((IData)(1U) 
                                                  - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                 + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->fullBit(oldp+9056,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
        tracep->fullSData(oldp+9057,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage),13);
        tracep->fullBit(oldp+9058,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full) 
                                          | (((1U & 
                                               ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                >> 1U)) 
                                              == (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 1U)))
                                              ? ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                              : (((IData)(1U) 
                                                  - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                 + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->fullBit(oldp+9059,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))));
        tracep->fullCData(oldp+9060,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),5);
        tracep->fullBit(oldp+9061,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full) 
                                          | (((1U & 
                                               ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                >> 1U)) 
                                              == (1U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 1U)))
                                              ? ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                              : (((IData)(1U) 
                                                  - (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                 + (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))));
        tracep->fullQData(oldp+9062,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage),33);
        tracep->fullQData(oldp+9064,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))
                                       ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                          << 1U) : vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage)),33);
        tracep->fullIData(oldp+9066,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__num_req_outstanding),17);
        tracep->fullBit(oldp+9067,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_req_pending));
        tracep->fullBit(oldp+9068,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_rsp_pending));
        tracep->fullIData(oldp+9069,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__num_req_outstanding),17);
        tracep->fullBit(oldp+9070,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_rsp_pending));
        tracep->fullCData(oldp+9071,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hfifo_rspvalid),2);
        tracep->fullCData(oldp+9072,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+9073,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+9074,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+9075,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+9076,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+9077,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+9078,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullCData(oldp+9079,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->fullIData(oldp+9080,(1U),32);
        tracep->fullBit(oldp+9081,(1U));
        tracep->fullBit(oldp+9082,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+9083,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+9084,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+9085,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+9086,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+9087,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+9088,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+9089,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+9090,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo1[0U])));
        tracep->fullBit(oldp+9091,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9092,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9093,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9094,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9095,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9096,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9097,((IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9098,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9099,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__ldo1_to_xbar))));
        tracep->fullBit(oldp+9100,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+9101,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+9102,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+9103,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+9104,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+9105,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+9106,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+9107,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+9108,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_ldo2[0U])));
        tracep->fullBit(oldp+9109,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9110,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9111,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9112,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9113,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9114,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9115,((IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9116,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9117,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__ldo2_to_xbar))));
        tracep->fullBit(oldp+9118,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+9119,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+9120,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+9121,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+9122,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+9123,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+9124,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+9125,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+9126,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_dcdc[0U])));
        tracep->fullBit(oldp+9127,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9128,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9129,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9130,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9131,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9132,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9133,((IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9134,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9135,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dcdc_to_xbar))));
        tracep->fullBit(oldp+9136,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+9137,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+9138,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+9139,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+9140,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+9141,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+9142,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+9143,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+9144,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_pll1[0U])));
        tracep->fullBit(oldp+9145,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9146,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9147,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9148,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9149,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9150,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9151,((IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9152,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9153,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__pll1_to_xbar))));
        tracep->fullBit(oldp+9154,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+9155,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+9156,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+9157,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+9158,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+9159,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+9160,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+9161,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+9162,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_tsen2[0U])));
        tracep->fullBit(oldp+9163,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9164,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9165,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9166,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9167,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9168,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9169,((IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9170,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9171,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__tsen2_to_xbar))));
        tracep->fullBit(oldp+9172,((1U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+9173,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+9174,((7U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+9175,((3U & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+9176,((0xffU & (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+9177,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+9178,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+9179,(((vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+9180,((1U & vlTOPp->opentitan_soc_top__DOT__xbar_to_dap[0U])));
        tracep->fullBit(oldp+9181,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9182,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9183,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9184,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9185,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9186,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9187,((IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9188,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__dap_to_xbar 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9189,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dap_to_xbar))));
        tracep->fullBit(oldp+9190,((1U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                          >> 0x15U))));
        tracep->fullCData(oldp+9191,((7U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                            >> 0x12U))),3);
        tracep->fullCData(oldp+9192,((7U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                            >> 0xfU))),3);
        tracep->fullCData(oldp+9193,((3U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+9194,((0xffU & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               >> 5U))),8);
        tracep->fullIData(oldp+9195,(((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                       << 0x1bU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                       >> 5U))),32);
        tracep->fullCData(oldp+9196,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                 >> 1U)))),4);
        tracep->fullIData(oldp+9197,(((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                       << 0x1fU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U] 
                                       >> 1U))),32);
        tracep->fullBit(oldp+9198,((1U & vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U])));
        tracep->fullIData(oldp+9199,(vlTOPp->opentitan_soc_top__DOT__gpio_intr),32);
        tracep->fullBit(oldp+9200,(vlTOPp->opentitan_soc_top__DOT__intr_timer));
        tracep->fullBit(oldp+9201,(0U));
        tracep->fullBit(oldp+9202,(vlTOPp->opentitan_soc_top__DOT__rdata_i));
        tracep->fullBit(oldp+9203,(vlTOPp->opentitan_soc_top__DOT__error_i));
        tracep->fullBit(oldp+9204,(vlTOPp->opentitan_soc_top__DOT__CLK_REF));
        tracep->fullBit(oldp+9205,(vlTOPp->opentitan_soc_top__DOT__CLK_LC));
        tracep->fullBit(oldp+9206,(vlTOPp->opentitan_soc_top__DOT__cio_jtag_tdo));
        tracep->fullBit(oldp+9207,(0U));
        tracep->fullIData(oldp+9208,(0U),32);
        tracep->fullIData(oldp+9209,(4U),32);
        tracep->fullIData(oldp+9210,(0x28U),32);
        tracep->fullBit(oldp+9211,(1U));
        tracep->fullIData(oldp+9212,(1U),32);
        tracep->fullBit(oldp+9213,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__scan_rst_ni));
        tracep->fullIData(oldp+9214,(0U),32);
        tracep->fullIData(oldp+9215,(0x20000000U),32);
        tracep->fullSData(oldp+9216,(0U),15);
        tracep->fullBit(oldp+9217,(0U));
        tracep->fullIData(oldp+9218,(4U),32);
        tracep->fullIData(oldp+9219,(0x28U),32);
        tracep->fullIData(oldp+9220,(2U),32);
        tracep->fullIData(oldp+9221,(0U),32);
        tracep->fullBit(oldp+9222,(1U));
        tracep->fullSData(oldp+9223,(1U),10);
        tracep->fullIData(oldp+9224,(0x20U),32);
        tracep->fullIData(oldp+9225,(0x40U),32);
        tracep->fullIData(oldp+9226,(8U),32);
        tracep->fullIData(oldp+9227,(2U),32);
        tracep->fullIData(oldp+9228,(0x1000U),32);
        tracep->fullIData(oldp+9229,(0x100U),32);
        tracep->fullIData(oldp+9230,(3U),32);
        tracep->fullIData(oldp+9231,(0x16U),32);
        tracep->fullBit(oldp+9232,(0U));
        tracep->fullCData(oldp+9233,(0U),2);
        tracep->fullCData(oldp+9234,(0U),8);
        tracep->fullIData(oldp+9235,(0U),22);
        tracep->fullQData(oldp+9236,(0ULL),44);
        tracep->fullQData(oldp+9238,(0ULL),64);
        __Vtemp3026[0U] = 0U;
        __Vtemp3026[1U] = 0U;
        __Vtemp3026[2U] = 0U;
        __Vtemp3026[3U] = 0U;
        tracep->fullWData(oldp+9240,(__Vtemp3026),128);
        tracep->fullIData(oldp+9244,(1U),32);
        tracep->fullIData(oldp+9245,(0U),32);
        tracep->fullCData(oldp+9246,(0U),3);
        tracep->fullCData(oldp+9247,(2U),2);
        tracep->fullCData(oldp+9248,(1U),2);
        tracep->fullCData(oldp+9249,(3U),2);
        tracep->fullCData(oldp+9250,(5U),3);
        tracep->fullCData(oldp+9251,(4U),3);
        tracep->fullCData(oldp+9252,(3U),3);
        tracep->fullCData(oldp+9253,(2U),3);
        tracep->fullCData(oldp+9254,(1U),3);
        tracep->fullCData(oldp+9255,(0x63U),7);
        tracep->fullCData(oldp+9256,(0x6fU),7);
        tracep->fullCData(oldp+9257,(0x67U),7);
        tracep->fullCData(oldp+9258,(3U),7);
        tracep->fullCData(oldp+9259,(0x37U),7);
        tracep->fullCData(oldp+9260,(0x33U),7);
        tracep->fullCData(oldp+9261,(0x13U),7);
        tracep->fullCData(oldp+9262,(0x23U),7);
        tracep->fullCData(oldp+9263,(6U),3);
        tracep->fullSData(oldp+9264,(0x7b0U),12);
        tracep->fullSData(oldp+9265,(0x7b1U),12);
        tracep->fullSData(oldp+9266,(0x7b2U),12);
        tracep->fullSData(oldp+9267,(0x7b3U),12);
        tracep->fullSData(oldp+9268,(0x304U),12);
        tracep->fullSData(oldp+9269,(0x300U),12);
        tracep->fullCData(oldp+9270,(0x17U),7);
        tracep->fullCData(oldp+9271,(0xfU),7);
        tracep->fullCData(oldp+9272,(0x73U),7);
        tracep->fullCData(oldp+9273,(0U),6);
        tracep->fullCData(oldp+9274,(4U),6);
        tracep->fullCData(oldp+9275,(7U),6);
        tracep->fullCData(oldp+9276,(0x30U),6);
        tracep->fullCData(oldp+9277,(0x2fU),6);
        tracep->fullCData(oldp+9278,(0x31U),6);
        tracep->fullCData(oldp+9279,(0x32U),6);
        tracep->fullCData(oldp+9280,(0x34U),6);
        tracep->fullCData(oldp+9281,(0x33U),6);
        tracep->fullCData(oldp+9282,(0x22U),6);
        tracep->fullCData(oldp+9283,(0x28U),6);
        tracep->fullCData(oldp+9284,(0x27U),6);
        tracep->fullCData(oldp+9285,(0x36U),6);
        tracep->fullCData(oldp+9286,(0x38U),6);
        tracep->fullCData(oldp+9287,(0x3aU),6);
        tracep->fullCData(oldp+9288,(0x35U),6);
        tracep->fullCData(oldp+9289,(0x37U),6);
        tracep->fullCData(oldp+9290,(0x39U),6);
        tracep->fullCData(oldp+9291,(0x23U),6);
        tracep->fullCData(oldp+9292,(0x17U),6);
        tracep->fullCData(oldp+9293,(0x29U),6);
        tracep->fullCData(oldp+9294,(0x2aU),6);
        tracep->fullCData(oldp+9295,(0x15U),6);
        tracep->fullCData(oldp+9296,(0x16U),6);
        tracep->fullCData(oldp+9297,(0x10U),6);
        tracep->fullCData(oldp+9298,(0xfU),6);
        tracep->fullCData(oldp+9299,(0x13U),6);
        tracep->fullCData(oldp+9300,(0x14U),6);
        tracep->fullCData(oldp+9301,(0x1bU),6);
        tracep->fullCData(oldp+9302,(0x1cU),6);
        tracep->fullCData(oldp+9303,(0x19U),6);
        tracep->fullCData(oldp+9304,(0x1aU),6);
        tracep->fullCData(oldp+9305,(0x18U),6);
        tracep->fullCData(oldp+9306,(3U),6);
        tracep->fullCData(oldp+9307,(6U),6);
        tracep->fullCData(oldp+9308,(0x1dU),6);
        tracep->fullCData(oldp+9309,(0x1fU),6);
        tracep->fullCData(oldp+9310,(0x1eU),6);
        tracep->fullCData(oldp+9311,(0x24U),6);
        tracep->fullCData(oldp+9312,(0xeU),6);
        tracep->fullCData(oldp+9313,(0xdU),6);
        tracep->fullCData(oldp+9314,(0x2cU),6);
        tracep->fullCData(oldp+9315,(0x2eU),6);
        tracep->fullCData(oldp+9316,(0x2dU),6);
        tracep->fullCData(oldp+9317,(0x2bU),6);
        tracep->fullCData(oldp+9318,(0x20U),6);
        tracep->fullCData(oldp+9319,(0x21U),6);
        tracep->fullCData(oldp+9320,(0x11U),6);
        tracep->fullCData(oldp+9321,(0xaU),6);
        tracep->fullCData(oldp+9322,(0xcU),6);
        tracep->fullCData(oldp+9323,(0x25U),6);
        tracep->fullCData(oldp+9324,(0x26U),6);
        tracep->fullCData(oldp+9325,(8U),6);
        tracep->fullCData(oldp+9326,(9U),6);
        tracep->fullCData(oldp+9327,(0xbU),6);
        tracep->fullCData(oldp+9328,(1U),6);
        tracep->fullCData(oldp+9329,(0x12U),6);
        tracep->fullCData(oldp+9330,(5U),6);
        tracep->fullCData(oldp+9331,(2U),6);
        tracep->fullCData(oldp+9332,(6U),4);
        tracep->fullCData(oldp+9333,(1U),4);
        tracep->fullCData(oldp+9334,(9U),4);
        tracep->fullCData(oldp+9335,(8U),4);
        tracep->fullCData(oldp+9336,(5U),4);
        tracep->fullCData(oldp+9337,(4U),4);
        tracep->fullCData(oldp+9338,(7U),4);
        tracep->fullCData(oldp+9339,(0U),4);
        tracep->fullCData(oldp+9340,(3U),4);
        tracep->fullCData(oldp+9341,(2U),4);
        tracep->fullCData(oldp+9342,(0x3fU),6);
        tracep->fullQData(oldp+9343,(0ULL),64);
        tracep->fullCData(oldp+9345,(0U),2);
        tracep->fullIData(oldp+9346,(3U),32);
        tracep->fullIData(oldp+9347,(0x40101104U),32);
        tracep->fullIData(oldp+9348,(0x10U),32);
        tracep->fullIData(oldp+9349,(0xbU),32);
        tracep->fullIData(oldp+9350,(0x1eU),32);
        tracep->fullIData(oldp+9351,(7U),32);
        tracep->fullIData(oldp+9352,(0xcU),32);
        tracep->fullIData(oldp+9353,(0x11U),32);
        tracep->fullIData(oldp+9354,(0x15U),32);
        tracep->fullSData(oldp+9355,(0x7c0U),12);
        tracep->fullSData(oldp+9356,(0x342U),12);
        tracep->fullSData(oldp+9357,(0x7a8U),12);
        tracep->fullSData(oldp+9358,(0x306U),12);
        tracep->fullSData(oldp+9359,(0x320U),12);
        tracep->fullSData(oldp+9360,(0xb00U),12);
        tracep->fullSData(oldp+9361,(0xb80U),12);
        tracep->fullSData(oldp+9362,(0x341U),12);
        tracep->fullSData(oldp+9363,(0xf14U),12);
        tracep->fullSData(oldp+9364,(0xb0aU),12);
        tracep->fullSData(oldp+9365,(0xb8aU),12);
        tracep->fullSData(oldp+9366,(0xb0bU),12);
        tracep->fullSData(oldp+9367,(0xb8bU),12);
        tracep->fullSData(oldp+9368,(0xb0cU),12);
        tracep->fullSData(oldp+9369,(0xb8cU),12);
        tracep->fullSData(oldp+9370,(0xb0dU),12);
        tracep->fullSData(oldp+9371,(0xb8dU),12);
        tracep->fullSData(oldp+9372,(0xb0eU),12);
        tracep->fullSData(oldp+9373,(0xb8eU),12);
        tracep->fullSData(oldp+9374,(0xb0fU),12);
        tracep->fullSData(oldp+9375,(0xb8fU),12);
        tracep->fullSData(oldp+9376,(0xb10U),12);
        tracep->fullSData(oldp+9377,(0xb90U),12);
        tracep->fullSData(oldp+9378,(0xb11U),12);
        tracep->fullSData(oldp+9379,(0xb91U),12);
        tracep->fullSData(oldp+9380,(0xb12U),12);
        tracep->fullSData(oldp+9381,(0xb92U),12);
        tracep->fullSData(oldp+9382,(0xb13U),12);
        tracep->fullSData(oldp+9383,(0xb93U),12);
        tracep->fullSData(oldp+9384,(0xb14U),12);
        tracep->fullSData(oldp+9385,(0xb94U),12);
        tracep->fullSData(oldp+9386,(0xb15U),12);
        tracep->fullSData(oldp+9387,(0xb95U),12);
        tracep->fullSData(oldp+9388,(0xb16U),12);
        tracep->fullSData(oldp+9389,(0xb96U),12);
        tracep->fullSData(oldp+9390,(0xb17U),12);
        tracep->fullSData(oldp+9391,(0xb97U),12);
        tracep->fullSData(oldp+9392,(0xb18U),12);
        tracep->fullSData(oldp+9393,(0xb98U),12);
        tracep->fullSData(oldp+9394,(0xb19U),12);
        tracep->fullSData(oldp+9395,(0xb99U),12);
        tracep->fullSData(oldp+9396,(0xb1aU),12);
        tracep->fullSData(oldp+9397,(0xb9aU),12);
        tracep->fullSData(oldp+9398,(0xb1bU),12);
        tracep->fullSData(oldp+9399,(0xb9bU),12);
        tracep->fullSData(oldp+9400,(0xb1cU),12);
        tracep->fullSData(oldp+9401,(0xb9cU),12);
        tracep->fullSData(oldp+9402,(0xb1dU),12);
        tracep->fullSData(oldp+9403,(0xb9dU),12);
        tracep->fullSData(oldp+9404,(0xb03U),12);
        tracep->fullSData(oldp+9405,(0xb1eU),12);
        tracep->fullSData(oldp+9406,(0xb9eU),12);
        tracep->fullSData(oldp+9407,(0xb1fU),12);
        tracep->fullSData(oldp+9408,(0xb9fU),12);
        tracep->fullSData(oldp+9409,(0xb83U),12);
        tracep->fullSData(oldp+9410,(0xb04U),12);
        tracep->fullSData(oldp+9411,(0xb84U),12);
        tracep->fullSData(oldp+9412,(0xb05U),12);
        tracep->fullSData(oldp+9413,(0xb85U),12);
        tracep->fullSData(oldp+9414,(0xb06U),12);
        tracep->fullSData(oldp+9415,(0xb86U),12);
        tracep->fullSData(oldp+9416,(0xb07U),12);
        tracep->fullSData(oldp+9417,(0xb87U),12);
        tracep->fullSData(oldp+9418,(0xb08U),12);
        tracep->fullSData(oldp+9419,(0xb88U),12);
        tracep->fullSData(oldp+9420,(0xb09U),12);
        tracep->fullSData(oldp+9421,(0xb89U),12);
        tracep->fullSData(oldp+9422,(0x32aU),12);
        tracep->fullSData(oldp+9423,(0x32bU),12);
        tracep->fullSData(oldp+9424,(0x32cU),12);
        tracep->fullSData(oldp+9425,(0x32dU),12);
        tracep->fullSData(oldp+9426,(0x32eU),12);
        tracep->fullSData(oldp+9427,(0x32fU),12);
        tracep->fullSData(oldp+9428,(0x330U),12);
        tracep->fullSData(oldp+9429,(0x331U),12);
        tracep->fullSData(oldp+9430,(0x332U),12);
        tracep->fullSData(oldp+9431,(0x333U),12);
        tracep->fullSData(oldp+9432,(0x334U),12);
        tracep->fullSData(oldp+9433,(0x335U),12);
        tracep->fullSData(oldp+9434,(0x336U),12);
        tracep->fullSData(oldp+9435,(0x337U),12);
        tracep->fullSData(oldp+9436,(0x338U),12);
        tracep->fullSData(oldp+9437,(0x339U),12);
        tracep->fullSData(oldp+9438,(0x33aU),12);
        tracep->fullSData(oldp+9439,(0x33bU),12);
        tracep->fullSData(oldp+9440,(0x33cU),12);
        tracep->fullSData(oldp+9441,(0x33dU),12);
        tracep->fullSData(oldp+9442,(0x323U),12);
        tracep->fullSData(oldp+9443,(0x33eU),12);
        tracep->fullSData(oldp+9444,(0x33fU),12);
        tracep->fullSData(oldp+9445,(0x324U),12);
        tracep->fullSData(oldp+9446,(0x325U),12);
        tracep->fullSData(oldp+9447,(0x326U),12);
        tracep->fullSData(oldp+9448,(0x327U),12);
        tracep->fullSData(oldp+9449,(0x328U),12);
        tracep->fullSData(oldp+9450,(0x329U),12);
        tracep->fullSData(oldp+9451,(0xb02U),12);
        tracep->fullSData(oldp+9452,(0xb82U),12);
        tracep->fullSData(oldp+9453,(0x344U),12);
        tracep->fullSData(oldp+9454,(0x301U),12);
        tracep->fullSData(oldp+9455,(0x340U),12);
        tracep->fullSData(oldp+9456,(0x390U),12);
        tracep->fullSData(oldp+9457,(0x391U),12);
        tracep->fullSData(oldp+9458,(0x343U),12);
        tracep->fullSData(oldp+9459,(0x305U),12);
        tracep->fullSData(oldp+9460,(0x3b0U),12);
        tracep->fullSData(oldp+9461,(0x3b1U),12);
        tracep->fullSData(oldp+9462,(0x3baU),12);
        tracep->fullSData(oldp+9463,(0x3bbU),12);
        tracep->fullSData(oldp+9464,(0x3bcU),12);
        tracep->fullSData(oldp+9465,(0x3bdU),12);
        tracep->fullSData(oldp+9466,(0x3beU),12);
        tracep->fullSData(oldp+9467,(0x3bfU),12);
        tracep->fullSData(oldp+9468,(0x3b2U),12);
        tracep->fullSData(oldp+9469,(0x3b3U),12);
        tracep->fullSData(oldp+9470,(0x3b4U),12);
        tracep->fullSData(oldp+9471,(0x3b5U),12);
        tracep->fullSData(oldp+9472,(0x3b6U),12);
        tracep->fullSData(oldp+9473,(0x3b7U),12);
        tracep->fullSData(oldp+9474,(0x3b8U),12);
        tracep->fullSData(oldp+9475,(0x3b9U),12);
        tracep->fullSData(oldp+9476,(0x3a0U),12);
        tracep->fullSData(oldp+9477,(0x3a1U),12);
        tracep->fullSData(oldp+9478,(0x3a2U),12);
        tracep->fullSData(oldp+9479,(0x3a3U),12);
        tracep->fullSData(oldp+9480,(0x7aaU),12);
        tracep->fullSData(oldp+9481,(0x7c1U),12);
        tracep->fullSData(oldp+9482,(0x7a1U),12);
        tracep->fullSData(oldp+9483,(0x7a2U),12);
        tracep->fullSData(oldp+9484,(0x7a3U),12);
        tracep->fullSData(oldp+9485,(0x7a0U),12);
        tracep->fullIData(oldp+9486,(0x40000003U),32);
        tracep->fullIData(oldp+9487,(0x20U),32);
        tracep->fullIData(oldp+9488,(6U),32);
        tracep->fullIData(oldp+9489,(0x12U),32);
        tracep->fullIData(oldp+9490,(0U),18);
        tracep->fullIData(oldp+9491,(0x40U),32);
        tracep->fullIData(oldp+9492,(5U),32);
        tracep->fullIData(oldp+9493,(2U),32);
        tracep->fullCData(oldp+9494,(0xfU),4);
        tracep->fullIData(oldp+9495,(2U),32);
        tracep->fullIData(oldp+9496,(1U),32);
        tracep->fullBit(oldp+9497,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9498,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9499,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9500,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9501,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9502,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9503,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9504,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9505,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i))));
        tracep->fullBit(oldp+9506,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9507,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9508,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9509,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9510,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9511,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9512,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9513,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9514,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i))));
        tracep->fullBit(oldp+9515,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9516,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9517,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9518,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9519,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9520,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9521,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9522,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9523,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i))));
        tracep->fullBit(oldp+9524,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9525,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9526,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9527,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9528,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9529,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9530,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9531,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9532,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i))));
        tracep->fullBit(oldp+9533,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9534,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9535,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9536,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9537,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9538,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9539,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9540,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9541,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i))));
        tracep->fullBit(oldp+9542,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                  >> 0x33U)))));
        tracep->fullCData(oldp+9543,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                    >> 0x30U)))),3);
        tracep->fullCData(oldp+9544,((7U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                    >> 0x2dU)))),3);
        tracep->fullCData(oldp+9545,((3U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                    >> 0x2bU)))),2);
        tracep->fullCData(oldp+9546,((0xffU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                       >> 0x23U)))),8);
        tracep->fullBit(oldp+9547,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                  >> 0x22U)))));
        tracep->fullIData(oldp+9548,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                              >> 2U))),32);
        tracep->fullBit(oldp+9549,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                  >> 1U)))));
        tracep->fullBit(oldp+9550,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i))));
        tracep->fullBit(oldp+9551,((1U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                          >> 0x13U))));
        tracep->fullCData(oldp+9552,((7U & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                             << 0x10U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                               >> 0x10U)))),3);
        tracep->fullCData(oldp+9553,((7U & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                             << 0x13U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                               >> 0xdU)))),3);
        tracep->fullCData(oldp+9554,((3U & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                             << 0x15U) 
                                            | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                               >> 0xbU)))),2);
        tracep->fullCData(oldp+9555,((0xffU & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                  >> 3U)))),8);
        tracep->fullBit(oldp+9556,((1U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                          >> 2U))));
        tracep->fullIData(oldp+9557,(((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                       << 0x1eU) | 
                                      (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U] 
                                       >> 2U))),32);
        tracep->fullBit(oldp+9558,((1U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U] 
                                          >> 1U))));
        tracep->fullBit(oldp+9559,((1U & vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U])));
        tracep->fullIData(oldp+9560,(0x20U),32);
        tracep->fullIData(oldp+9561,(6U),32);
        tracep->fullIData(oldp+9562,(0x20U),32);
        tracep->fullIData(oldp+9563,(4U),32);
        tracep->fullIData(oldp+9564,(8U),32);
        tracep->fullIData(oldp+9565,(0x573143U),24);
        tracep->fullSData(oldp+9566,(0x5257U),16);
        tracep->fullSData(oldp+9567,(0x524fU),16);
        tracep->fullIData(oldp+9568,(0x10U),32);
        tracep->fullBit(oldp+9569,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__we));
        tracep->fullIData(oldp+9570,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__wdata),32);
        tracep->fullIData(oldp+9571,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__wmask),32);
        tracep->fullBit(oldp+9572,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rvalid));
        tracep->fullIData(oldp+9573,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__data_we),32);
        tracep->fullCData(oldp+9574,((0xfU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__data_we)),4);
        tracep->fullIData(oldp+9575,(0x1000U),32);
        tracep->fullIData(oldp+9576,(0xcU),32);
        tracep->fullIData(oldp+9577,(5U),32);
        tracep->fullIData(oldp+9578,(0xdU),32);
        tracep->fullIData(oldp+9579,(0x21U),32);
        tracep->fullIData(oldp+9580,(0xdU),32);
        tracep->fullIData(oldp+9581,(5U),32);
        tracep->fullIData(oldp+9582,(0x21U),32);
        tracep->fullIData(oldp+9583,(3U),32);
        tracep->fullIData(oldp+9584,(3U),32);
        tracep->fullIData(oldp+9585,(7U),32);
        tracep->fullIData(oldp+9586,(9U),32);
        tracep->fullBit(oldp+9587,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we));
        tracep->fullCData(oldp+9588,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd),3);
        tracep->fullCData(oldp+9589,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we)
                                       ? (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd)
                                       : 0U)),3);
        tracep->fullBit(oldp+9590,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d));
        tracep->fullIData(oldp+9591,(6U),32);
        tracep->fullIData(oldp+9592,(0U),32);
        tracep->fullIData(oldp+9593,(0xaU),32);
        tracep->fullIData(oldp+9594,(0xbU),32);
        tracep->fullIData(oldp+9595,(0xeU),32);
        tracep->fullIData(oldp+9596,(0xfU),32);
        tracep->fullIData(oldp+9597,(0x10U),32);
        tracep->fullIData(oldp+9598,(0x11U),32);
        tracep->fullIData(oldp+9599,(0x12U),32);
        tracep->fullIData(oldp+9600,(0x13U),32);
        tracep->fullIData(oldp+9601,(0x14U),32);
        tracep->fullIData(oldp+9602,(0x15U),32);
        tracep->fullIData(oldp+9603,(0x16U),32);
        tracep->fullIData(oldp+9604,(0x17U),32);
        tracep->fullIData(oldp+9605,(0x18U),32);
        tracep->fullIData(oldp+9606,(0x19U),32);
        tracep->fullIData(oldp+9607,(0x1aU),32);
        tracep->fullIData(oldp+9608,(0x1bU),32);
        tracep->fullIData(oldp+9609,(0x1cU),32);
        tracep->fullIData(oldp+9610,(0x1dU),32);
        tracep->fullIData(oldp+9611,(0x1eU),32);
        tracep->fullIData(oldp+9612,(0x1fU),32);
        tracep->fullIData(oldp+9613,(0x22U),32);
        tracep->fullIData(oldp+9614,(0x23U),32);
        tracep->fullIData(oldp+9615,(0x24U),32);
        tracep->fullIData(oldp+9616,(0x25U),32);
        tracep->fullIData(oldp+9617,(0x26U),32);
        tracep->fullIData(oldp+9618,(0x27U),32);
        tracep->fullIData(oldp+9619,(0x28U),32);
        tracep->fullIData(oldp+9620,(0x29U),32);
        tracep->fullIData(oldp+9621,(0x2aU),32);
        tracep->fullIData(oldp+9622,(0x2bU),32);
        tracep->fullIData(oldp+9623,(0x2cU),32);
        tracep->fullIData(oldp+9624,(0x2dU),32);
        tracep->fullIData(oldp+9625,(0x2eU),32);
        tracep->fullIData(oldp+9626,(0x2fU),32);
        tracep->fullIData(oldp+9627,(0x30U),32);
        tracep->fullIData(oldp+9628,(0x31U),32);
        tracep->fullIData(oldp+9629,(0x32U),32);
        tracep->fullIData(oldp+9630,(0x33U),32);
        tracep->fullIData(oldp+9631,(0x34U),32);
        tracep->fullIData(oldp+9632,(0x35U),32);
        tracep->fullIData(oldp+9633,(0x36U),32);
        tracep->fullIData(oldp+9634,(0x37U),32);
        tracep->fullIData(oldp+9635,(0x38U),32);
        tracep->fullIData(oldp+9636,(0x39U),32);
        tracep->fullIData(oldp+9637,(0x3aU),32);
        tracep->fullIData(oldp+9638,(0x3bU),32);
        tracep->fullIData(oldp+9639,(0x3cU),32);
        tracep->fullIData(oldp+9640,(0x3dU),32);
        tracep->fullIData(oldp+9641,(0x3eU),32);
        tracep->fullIData(oldp+9642,(0x3fU),32);
        tracep->fullIData(oldp+9643,(0x40U),32);
        tracep->fullIData(oldp+9644,(0x41U),32);
        tracep->fullIData(oldp+9645,(0x42U),32);
        tracep->fullIData(oldp+9646,(0x43U),32);
        tracep->fullIData(oldp+9647,(0x44U),32);
        tracep->fullIData(oldp+9648,(0x45U),32);
        tracep->fullIData(oldp+9649,(0x46U),32);
        tracep->fullIData(oldp+9650,(0x47U),32);
        tracep->fullIData(oldp+9651,(0x48U),32);
        tracep->fullIData(oldp+9652,(0x49U),32);
        tracep->fullIData(oldp+9653,(0x4aU),32);
        tracep->fullIData(oldp+9654,(0x4bU),32);
        tracep->fullIData(oldp+9655,(0x4cU),32);
        tracep->fullIData(oldp+9656,(0x4dU),32);
        tracep->fullIData(oldp+9657,(0x4eU),32);
        tracep->fullIData(oldp+9658,(0x4fU),32);
        tracep->fullIData(oldp+9659,(0x50U),32);
        tracep->fullIData(oldp+9660,(0x51U),32);
        tracep->fullIData(oldp+9661,(0x52U),32);
        tracep->fullIData(oldp+9662,(0x53U),32);
        tracep->fullIData(oldp+9663,(0x54U),32);
        tracep->fullIData(oldp+9664,(0x55U),32);
        tracep->fullIData(oldp+9665,(0x56U),32);
        tracep->fullIData(oldp+9666,(0x57U),32);
        tracep->fullIData(oldp+9667,(0x58U),32);
        tracep->fullIData(oldp+9668,(0x59U),32);
        tracep->fullIData(oldp+9669,(0x5aU),32);
        tracep->fullIData(oldp+9670,(0x5bU),32);
        tracep->fullIData(oldp+9671,(0x5cU),32);
        tracep->fullIData(oldp+9672,(0x5dU),32);
        tracep->fullIData(oldp+9673,(0x5eU),32);
        tracep->fullIData(oldp+9674,(0x5fU),32);
        tracep->fullIData(oldp+9675,(0x60U),32);
        tracep->fullIData(oldp+9676,(0x61U),32);
        tracep->fullIData(oldp+9677,(0x62U),32);
        tracep->fullIData(oldp+9678,(0x63U),32);
        tracep->fullIData(oldp+9679,(0x64U),32);
        tracep->fullIData(oldp+9680,(0x65U),32);
        tracep->fullIData(oldp+9681,(0x66U),32);
        tracep->fullIData(oldp+9682,(0x67U),32);
        tracep->fullIData(oldp+9683,(0x68U),32);
        tracep->fullIData(oldp+9684,(0x69U),32);
        tracep->fullIData(oldp+9685,(0x6aU),32);
        tracep->fullIData(oldp+9686,(0x6bU),32);
        tracep->fullIData(oldp+9687,(0x6cU),32);
        tracep->fullIData(oldp+9688,(0x6dU),32);
        tracep->fullIData(oldp+9689,(0x6eU),32);
        tracep->fullIData(oldp+9690,(0x6fU),32);
        tracep->fullIData(oldp+9691,(0x70U),32);
        tracep->fullIData(oldp+9692,(0x71U),32);
        tracep->fullIData(oldp+9693,(0x72U),32);
        tracep->fullIData(oldp+9694,(0x73U),32);
        tracep->fullIData(oldp+9695,(0x74U),32);
        tracep->fullIData(oldp+9696,(0x75U),32);
        tracep->fullIData(oldp+9697,(0x76U),32);
        tracep->fullIData(oldp+9698,(0x77U),32);
        tracep->fullIData(oldp+9699,(0x78U),32);
        tracep->fullIData(oldp+9700,(0x79U),32);
        tracep->fullIData(oldp+9701,(0x7aU),32);
        tracep->fullIData(oldp+9702,(0x7bU),32);
        tracep->fullIData(oldp+9703,(0x7cU),32);
        tracep->fullIData(oldp+9704,(0x7dU),32);
        tracep->fullIData(oldp+9705,(0x7eU),32);
        tracep->fullIData(oldp+9706,(vlTOPp->opentitan_soc_top__DOT__rdata_i),32);
        tracep->fullBit(oldp+9707,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err));
        tracep->fullCData(oldp+9708,(0U),7);
        tracep->fullBit(oldp+9709,((1U & vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT____Vcellout__u_tempsenseInst__DOUT)));
        tracep->fullBit(oldp+9710,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DONE));
        tracep->fullIData(oldp+9711,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT____Vcellout__u_tempsenseInst__DOUT),24);
        tracep->fullBit(oldp+9712,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__out));
        tracep->fullBit(oldp+9713,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_tempsenseInst__DOT__outb));
        tracep->fullBit(oldp+9714,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__testmode_i));
        tracep->fullCData(oldp+9715,(0U),8);
        tracep->fullCData(oldp+9716,(2U),4);
        tracep->fullCData(oldp+9717,(0U),3);
        tracep->fullBit(oldp+9718,(1U));
        tracep->fullCData(oldp+9719,(2U),4);
        tracep->fullSData(oldp+9720,(0x380U),12);
        tracep->fullIData(oldp+9721,(0x1eU),32);
        tracep->fullCData(oldp+9722,(5U),8);
        tracep->fullCData(oldp+9723,(0x27U),8);
        tracep->fullIData(oldp+9724,(0xcU),32);
        tracep->fullCData(oldp+9725,(0xaU),5);
        tracep->fullSData(oldp+9726,(0x380U),12);
        tracep->fullSData(oldp+9727,(0x387U),12);
        tracep->fullSData(oldp+9728,(0x360U),12);
        tracep->fullSData(oldp+9729,(0x37fU),12);
        tracep->fullSData(oldp+9730,(0x35fU),12);
        tracep->fullSData(oldp+9731,(0x400U),12);
        tracep->fullSData(oldp+9732,(0x7ffU),12);
        tracep->fullSData(oldp+9733,(0x100U),12);
        tracep->fullSData(oldp+9734,(0x104U),12);
        tracep->fullSData(oldp+9735,(0x108U),12);
        tracep->fullSData(oldp+9736,(0x10cU),12);
        tracep->fullIData(oldp+9737,(0x13U),32);
        tracep->fullQData(oldp+9738,(0x7c0006f00c0006fULL),64);
        tracep->fullQData(oldp+9740,(0xff0000f04c0006fULL),64);
        tracep->fullQData(oldp+9742,(0x7b3510737b241073ULL),64);
        tracep->fullQData(oldp+9744,(0xc5551300000517ULL),64);
        tracep->fullQData(oldp+9746,(0xf140247300c51513ULL),64);
        tracep->fullQData(oldp+9748,(0xa4043310852023ULL),64);
        tracep->fullQData(oldp+9750,(0x14741340044403ULL),64);
        tracep->fullQData(oldp+9752,(0xf140247302041c63ULL),64);
        tracep->fullQData(oldp+9754,(0x4004440300a40433ULL),64);
        tracep->fullQData(oldp+9756,(0xfa041ce300247413ULL),64);
        tracep->fullQData(oldp+9758,(0x517fd5ff06fULL),64);
        tracep->fullQData(oldp+9760,(0xc5151300c55513ULL),64);
        tracep->fullQData(oldp+9762,(0x7b30257310052623ULL),64);
        tracep->fullQData(oldp+9764,(0x1000737b202473ULL),64);
        tracep->fullQData(oldp+9766,(0x7b30257310052223ULL),64);
        tracep->fullQData(oldp+9768,(0xa85ff06f7b202473ULL),64);
        tracep->fullQData(oldp+9770,(0x10852423f1402473ULL),64);
        tracep->fullQData(oldp+9772,(0x7b2024737b302573ULL),64);
        tracep->fullQData(oldp+9774,(0x7b200073ULL),64);
        tracep->fullIData(oldp+9776,(0x29U),32);
        tracep->fullIData(oldp+9777,(0x22U),32);
        tracep->fullCData(oldp+9778,(((4U != (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               >> 0x12U)))
                                       ? 0U : 1U)),2);
        tracep->fullCData(oldp+9779,((3U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                            >> 0xdU))),2);
        tracep->fullCData(oldp+9780,((0xffU & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               >> 5U))),8);
        tracep->fullCData(oldp+9781,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               << 0x1fU) 
                                              | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                 >> 1U)))),4);
        tracep->fullBit(oldp+9782,((((0U == (7U & (
                                                   vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                >> 0x12U)))) 
                                    & ((0xfU != (0xfU 
                                                 & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                       >> 1U)))) 
                                       | (2U != (3U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                    >> 0xdU)))))));
        tracep->fullBit(oldp+9783,((((0U == (7U & (
                                                   vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                   >> 0x12U))) 
                                     | (1U == (7U & 
                                               (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                >> 0x12U)))) 
                                    | (4U == (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               >> 0x12U))))));
        tracep->fullBit(oldp+9784,((0U == (7U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+9785,((1U == (7U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+9786,((4U == (7U & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                 >> 0x12U)))));
        tracep->fullCData(oldp+9787,((0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                        >> 5U)))))),4);
        tracep->fullCData(oldp+9788,((0x1eU & vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U])),5);
        tracep->fullIData(oldp+9789,(0xaf35U),32);
        tracep->fullBit(oldp+9790,(0U));
        tracep->fullBit(oldp+9791,(0U));
        tracep->fullBit(oldp+9792,(0U));
        tracep->fullBit(oldp+9793,(0U));
        tracep->fullBit(oldp+9794,(0U));
        tracep->fullBit(oldp+9795,(0U));
        tracep->fullCData(oldp+9796,(8U),5);
        tracep->fullQData(oldp+9797,(0x800ULL),64);
        tracep->fullQData(oldp+9799,(0x804ULL),64);
        tracep->fullQData(oldp+9801,(0x808ULL),64);
        tracep->fullIData(oldp+9803,(0x1000U),32);
        tracep->fullIData(oldp+9804,(0x40U),32);
        tracep->fullIData(oldp+9805,(8U),32);
        tracep->fullIData(oldp+9806,(0x100U),32);
        tracep->fullIData(oldp+9807,(0xaU),32);
        tracep->fullIData(oldp+9808,(0x16U),32);
        tracep->fullIData(oldp+9809,(7U),32);
        tracep->fullIData(oldp+9810,(0xbU),32);
        tracep->fullIData(oldp+9811,(0x11U),32);
        tracep->fullIData(oldp+9812,(0x15U),32);
        tracep->fullIData(oldp+9813,(0x10000000U),32);
        tracep->fullIData(oldp+9814,(0x40080000U),32);
        tracep->fullIData(oldp+9815,(0x40090000U),32);
        tracep->fullIData(oldp+9816,(0x400a0000U),32);
        tracep->fullIData(oldp+9817,(0x400b0000U),32);
        tracep->fullIData(oldp+9818,(0x400c0000U),32);
        tracep->fullIData(oldp+9819,(0x400d0000U),32);
        tracep->fullIData(oldp+9820,(0x400e0000U),32);
        tracep->fullIData(oldp+9821,(0x400f0000U),32);
        tracep->fullIData(oldp+9822,(0x40050000U),32);
        tracep->fullIData(oldp+9823,(0x10040000U),32);
        tracep->fullIData(oldp+9824,(0xffffU),32);
        tracep->fullSData(oldp+9825,(0x1fffU),13);
        tracep->fullCData(oldp+9826,(0U),4);
        tracep->fullQData(oldp+9827,(0ULL),52);
        tracep->fullIData(oldp+9829,(0x10000U),32);
        tracep->fullIData(oldp+9830,(0xdU),32);
        tracep->fullIData(oldp+9831,(0x58U),32);
        tracep->fullIData(oldp+9832,(0x33U),32);
        tracep->fullIData(oldp+9833,(0x55U),32);
        tracep->fullCData(oldp+9834,(3U),2);
        tracep->fullCData(oldp+9835,(0U),8);
        tracep->fullIData(oldp+9836,(0x56U),32);
        tracep->fullBit(oldp+9837,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i))));
        tracep->fullBit(oldp+9838,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9839,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo1_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+9841,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i))));
        tracep->fullBit(oldp+9842,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9843,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_ldo2_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+9845,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i))));
        tracep->fullBit(oldp+9846,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9847,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dcdc_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+9849,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i))));
        tracep->fullBit(oldp+9850,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9851,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_pll1_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+9853,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i))));
        tracep->fullBit(oldp+9854,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9855,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_tsen2_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullBit(oldp+9857,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i))));
        tracep->fullBit(oldp+9858,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                  >> 0x33U)))));
        tracep->fullQData(oldp+9859,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                                   >> 0x22U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                                      >> 0x30U))))
                                                          ? (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                                     >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_dap_i 
                                                                              >> 1U)) 
                                                                     << 1U))))))),51);
        tracep->fullQData(oldp+9861,((((QData)((IData)(
                                                       (0x1ffffU 
                                                        & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                            << 0x1eU) 
                                                           | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                              >> 2U))))) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                                 >> 0x10U))))
                                                          ? 
                                                         ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[1U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U] 
                                                             >> 2U))
                                                          : 0U))) 
                                        << 2U) | (QData)((IData)(
                                                                 (2U 
                                                                  & vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[0U])))))),51);
        tracep->fullSData(oldp+9863,(0U),9);
        tracep->fullSData(oldp+9864,(4U),9);
        tracep->fullSData(oldp+9865,(8U),9);
        tracep->fullSData(oldp+9866,(0xcU),9);
        tracep->fullSData(oldp+9867,(0x10U),9);
        tracep->fullSData(oldp+9868,(0x14U),9);
        tracep->fullSData(oldp+9869,(0x18U),9);
        tracep->fullSData(oldp+9870,(0x1cU),9);
        tracep->fullSData(oldp+9871,(0x20U),9);
        tracep->fullSData(oldp+9872,(0x24U),9);
        tracep->fullSData(oldp+9873,(0x28U),9);
        tracep->fullSData(oldp+9874,(0x2cU),9);
        tracep->fullSData(oldp+9875,(0x30U),9);
        tracep->fullSData(oldp+9876,(0x34U),9);
        tracep->fullSData(oldp+9877,(0x38U),9);
        tracep->fullSData(oldp+9878,(0x3cU),9);
        tracep->fullSData(oldp+9879,(0x40U),9);
        tracep->fullSData(oldp+9880,(0x44U),9);
        tracep->fullSData(oldp+9881,(0x48U),9);
        tracep->fullSData(oldp+9882,(0x4cU),9);
        tracep->fullSData(oldp+9883,(0x50U),9);
        tracep->fullSData(oldp+9884,(0x54U),9);
        tracep->fullSData(oldp+9885,(0x58U),9);
        tracep->fullSData(oldp+9886,(0x5cU),9);
        tracep->fullSData(oldp+9887,(0x60U),9);
        tracep->fullSData(oldp+9888,(0x64U),9);
        tracep->fullSData(oldp+9889,(0x68U),9);
        tracep->fullSData(oldp+9890,(0x6cU),9);
        tracep->fullSData(oldp+9891,(0x70U),9);
        tracep->fullSData(oldp+9892,(0x74U),9);
        tracep->fullSData(oldp+9893,(0x78U),9);
        tracep->fullSData(oldp+9894,(0x7cU),9);
        tracep->fullSData(oldp+9895,(0x80U),9);
        tracep->fullSData(oldp+9896,(0x84U),9);
        tracep->fullSData(oldp+9897,(0x100U),9);
        tracep->fullSData(oldp+9898,(0x104U),9);
        tracep->fullSData(oldp+9899,(0x108U),9);
        tracep->fullSData(oldp+9900,(0x10cU),9);
        tracep->fullIData(oldp+9901,(0x505043U),24);
        tracep->fullBit(oldp+9902,(0U));
        tracep->fullCData(oldp+9903,(0U),3);
        tracep->fullCData(oldp+9904,(0U),3);
        tracep->fullCData(oldp+9905,(0U),2);
        tracep->fullCData(oldp+9906,(0U),8);
        tracep->fullIData(oldp+9907,(0U),32);
        tracep->fullCData(oldp+9908,(0U),4);
        tracep->fullIData(oldp+9909,(0U),32);
        tracep->fullBit(oldp+9910,(1U));
        tracep->fullBit(oldp+9911,(0U));
        tracep->fullCData(oldp+9912,(0U),3);
        tracep->fullCData(oldp+9913,(0U),3);
        tracep->fullCData(oldp+9914,(0U),2);
        tracep->fullCData(oldp+9915,(0U),8);
        tracep->fullBit(oldp+9916,(0U));
        tracep->fullIData(oldp+9917,(0U),32);
        tracep->fullBit(oldp+9918,(0U));
        tracep->fullBit(oldp+9919,(1U));
    }
}
