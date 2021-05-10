// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopentitan_soc_top__Syms.h"


void Vopentitan_soc_top::traceChgSub2(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 7496);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp5012[3];
    WData/*95:0*/ __Vtemp5016[3];
    WData/*95:0*/ __Vtemp5020[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x65U])) {
            tracep->chgBit(oldp+0,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 9U))));
            tracep->chgBit(oldp+1,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 8U))));
            tracep->chgBit(oldp+2,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 7U))));
            tracep->chgBit(oldp+3,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 6U))));
            tracep->chgBit(oldp+4,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 5U))));
            tracep->chgBit(oldp+5,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus 
                                          >> 4U))));
            tracep->chgCData(oldp+6,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus)),4);
            tracep->chgBit(oldp+7,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1fU))));
            tracep->chgBit(oldp+8,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1eU))));
            tracep->chgBit(oldp+9,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+10,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+11,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+12,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 0x1aU))));
            tracep->chgSData(oldp+13,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                 >> 0x10U))),10);
            tracep->chgSData(oldp+14,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                 >> 6U))),10);
            tracep->chgCData(oldp+15,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 4U))),2);
            tracep->chgBit(oldp+16,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 3U))));
            tracep->chgBit(oldp+17,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 2U))));
            tracep->chgBit(oldp+18,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                           >> 1U))));
            tracep->chgBit(oldp+19,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d)));
            tracep->chgCData(oldp+20,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                             >> 0x1dU))),3);
            tracep->chgCData(oldp+21,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                                >> 0x18U))),5);
            tracep->chgSData(oldp+22,((0x7ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                                 >> 0xdU))),11);
            tracep->chgBit(oldp+23,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                           >> 0xcU))));
            tracep->chgBit(oldp+24,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                           >> 0xbU))));
            tracep->chgCData(oldp+25,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                             >> 8U))),3);
            tracep->chgCData(oldp+26,((0xfU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 4U))),4);
            tracep->chgCData(oldp+27,((0xfU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs)),4);
            tracep->chgBit(oldp+28,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d));
            tracep->chgBit(oldp+29,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
            tracep->chgCData(oldp+30,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
            tracep->chgBit(oldp+31,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                           >> 0x1fU))));
            tracep->chgBit(oldp+32,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+33,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                           >> 0x1dU))));
            tracep->chgBit(oldp+34,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+35,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                           >> 0x1bU))));
            tracep->chgBit(oldp+36,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                           >> 0x1aU))));
            tracep->chgSData(oldp+37,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                 >> 0x10U))),10);
            tracep->chgSData(oldp+38,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                                 >> 6U))),10);
            tracep->chgCData(oldp+39,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                             >> 4U))),2);
            tracep->chgBit(oldp+40,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                           >> 3U))));
            tracep->chgBit(oldp+41,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                           >> 2U))));
            tracep->chgBit(oldp+42,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol 
                                           >> 1U))));
            tracep->chgBit(oldp+43,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol)));
            tracep->chgCData(oldp+44,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx),5);
            tracep->chgBit(oldp+45,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned))));
            tracep->chgCData(oldp+46,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x66U])) {
            tracep->chgBit(oldp+47,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+48,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                             >> 0x12U))),3);
            tracep->chgCData(oldp+49,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                             >> 0xfU))),3);
            tracep->chgCData(oldp+50,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                             >> 0xdU))),2);
            tracep->chgCData(oldp+51,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                >> 5U))),8);
            tracep->chgIData(oldp+52,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                        >> 5U))),32);
            tracep->chgCData(oldp+53,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                  >> 1U)))),4);
            tracep->chgIData(oldp+54,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                        >> 1U))),32);
            tracep->chgBit(oldp+55,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U])));
            tracep->chgIData(oldp+56,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                        << 0x15U) | 
                                       (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                        >> 0xbU))),32);
            tracep->chgIData(oldp+57,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                        << 0x15U) | 
                                       (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                        >> 0xbU))),32);
            tracep->chgIData(oldp+58,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                        << 0x15U) | 
                                       (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                        >> 0xbU))),32);
            tracep->chgBit(oldp+59,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                           >> 0xaU))));
            tracep->chgIData(oldp+60,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xbU] 
                                        << 0x16U) | 
                                       (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                        >> 0xaU))),32);
            tracep->chgBit(oldp+61,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                           >> 9U))));
            tracep->chgSData(oldp+62,((0xffffU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                                   << 7U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                     >> 0x19U)))),16);
            tracep->chgBit(oldp+63,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           >> 0x18U))));
            tracep->chgSData(oldp+64,((0xffffU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xaU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                     >> 8U)))),16);
            tracep->chgBit(oldp+65,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                           >> 7U))));
            tracep->chgSData(oldp+66,((0xffffU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                   << 9U) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                                     >> 0x17U)))),16);
            tracep->chgBit(oldp+67,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                           >> 0x16U))));
            tracep->chgSData(oldp+68,((0xffffU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[9U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                                     >> 6U)))),16);
            tracep->chgBit(oldp+69,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                           >> 5U))));
            tracep->chgIData(oldp+70,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[8U] 
                                        << 0x1bU) | 
                                       (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                        >> 5U))),32);
            tracep->chgBit(oldp+71,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                           >> 4U))));
            tracep->chgSData(oldp+72,((0xffffU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                     >> 0x14U)))),16);
            tracep->chgBit(oldp+73,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           >> 0x13U))));
            tracep->chgSData(oldp+74,((0xffffU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[7U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                     >> 3U)))),16);
            tracep->chgBit(oldp+75,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                           >> 2U))));
            tracep->chgSData(oldp+76,((0xffffU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                                     >> 0x12U)))),16);
            tracep->chgBit(oldp+77,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                           >> 0x11U))));
            tracep->chgSData(oldp+78,((0xffffU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[6U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U] 
                                                     >> 1U)))),16);
            tracep->chgBit(oldp+79,((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[5U])));
            tracep->chgIData(oldp+80,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]),32);
            tracep->chgIData(oldp+81,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U]),32);
            tracep->chgIData(oldp+82,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]),32);
            tracep->chgIData(oldp+83,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U]),32);
            tracep->chgIData(oldp+84,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U]),32);
            tracep->chgIData(oldp+85,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d),32);
            tracep->chgIData(oldp+86,(((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                       & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])),32);
            tracep->chgIData(oldp+87,((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                       & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U])),32);
            tracep->chgIData(oldp+88,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                        << 0x15U) | 
                                       (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xcU] 
                                        >> 0xbU))),32);
            tracep->chgIData(oldp+89,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                        << 0x15U) | 
                                       (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                        >> 0xbU))),32);
            tracep->chgBit(oldp+90,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+91,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re));
            tracep->chgCData(oldp+92,((0x3cU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                 << 0x1bU) 
                                                | (0x7fffffcU 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                      >> 5U))))),6);
            tracep->chgIData(oldp+93,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                        << 0x1fU) | 
                                       (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                        >> 1U))),32);
            tracep->chgCData(oldp+94,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                << 0x1fU) 
                                               | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                  >> 1U)))),4);
            tracep->chgBit(oldp+95,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit))))) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err))));
            tracep->chgBit(oldp+96,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)((0U 
                                                   != (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit)))))));
            tracep->chgBit(oldp+97,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+98,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                       >> 2U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+99,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                       >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+100,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                       >> 4U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+101,((0x3ffU & ((
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                     >> 1U)))),10);
            tracep->chgBit(oldp+102,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+103,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                       >> 5U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+104,((0xfc00U | (0x3ffU 
                                                   & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                       << 0x15U) 
                                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                         >> 0xbU))))),16);
            tracep->chgSData(oldp+105,((0xffffU & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                    << 0x1fU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                      >> 1U)))),16);
            tracep->chgBit(oldp+106,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+107,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                       >> 6U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+108,((0xffffU & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                    << 0xfU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                      >> 0x11U)))),16);
            tracep->chgBit(oldp+109,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+110,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                       >> 7U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+111,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+112,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                       >> 8U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+113,(((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                        >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+114,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit) 
                                       >> 9U) & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+115,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__addr_hit),15);
            tracep->chgBit(oldp+116,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+117,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+118,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                      & (0U != (3U 
                                                & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                    << 0x1bU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                      >> 5U)))))));
            tracep->chgBit(oldp+119,((1U & (~ ((((0U 
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
            tracep->chgBit(oldp+120,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+121,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+122,((((0U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                    >> 0x12U)))) 
                                      | (4U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+123,((((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                      & (((4U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                     >> 0x12U))) 
                                          | (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                               >> 0x12U)))) 
                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+124,((0U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+125,((1U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+126,((4U == (7U & (
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+127,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+128,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+129,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+130,((0xfU & ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[2U] 
                                                     << 0x1bU) 
                                                    | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                       >> 5U)))))),4);
            tracep->chgSData(oldp+131,((0x3ffU & ((
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                                   << 0x1fU) 
                                                  | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                                     >> 1U)))),16);
            tracep->chgBit(oldp+132,((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+133,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+134,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+135,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+136,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+137,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+138,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+139,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+140,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+141,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+142,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+143,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+144,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+145,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+146,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+147,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+148,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+149,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+150,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+151,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+152,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+153,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+154,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+155,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+156,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+157,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+158,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+159,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+160,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+161,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+162,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+163,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U] 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+164,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+165,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+166,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+167,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+168,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+169,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+170,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+171,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+172,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+173,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+174,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+175,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+176,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+177,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+178,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+179,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+180,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+181,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+182,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+183,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+184,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U] 
                                            >> 0x15U))));
            __Vtemp5012[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U]);
            __Vtemp5012[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[1U]));
            __Vtemp5012[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+185,(__Vtemp5012),85);
            tracep->chgBit(oldp+188,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+189,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+192,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+195,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x66U] | vlTOPp->__Vm_traceActivity
                         [0x74U]))) {
            tracep->chgIData(oldp+198,((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event 
                                        | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xeU] 
                                            << 0x15U) 
                                           | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0xdU] 
                                              >> 0xbU)))),32);
            tracep->chgIData(oldp+199,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we)
                                         ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                             << 0x1fU) 
                                            | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                               >> 1U))
                                         : 0U)),32);
            tracep->chgIData(oldp+200,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                                         ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                             << 0x1fU) 
                                            | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                               >> 1U))
                                         : 0U)),32);
            tracep->chgIData(oldp+201,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                                         ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                             << 0x1fU) 
                                            | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                               >> 1U))
                                         : 0U)),32);
            tracep->chgIData(oldp+202,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                                         ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                             << 0x1fU) 
                                            | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                               >> 1U))
                                         : 0U)),32);
            tracep->chgIData(oldp+203,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                                         ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                             << 0x1fU) 
                                            | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                               >> 1U))
                                         : 0U)),32);
            tracep->chgIData(oldp+204,(((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                                         ? ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[1U] 
                                             << 0x1fU) 
                                            | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U] 
                                               >> 1U))
                                         : 0U)),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x67U] | vlTOPp->__Vm_traceActivity
                         [0x68U]))) {
            tracep->chgBit(oldp+205,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+206,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+207,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+208,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+209,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+210,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+211,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+212,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+213,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__err_resp__tl_h_o))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x68U])) {
            tracep->chgBit(oldp+214,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+215,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+216,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+217,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+218,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+219,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+220,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+221,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+222,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o))));
            tracep->chgBit(oldp+223,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+224,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+225,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+226,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+227,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+228,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+229,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+230,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+231,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [0U]))));
            tracep->chgBit(oldp+232,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+233,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+234,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+235,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+236,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+237,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+238,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+239,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+240,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [1U]))));
            tracep->chgBit(oldp+241,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+242,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+243,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+244,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+245,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+246,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+247,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+248,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+249,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [2U]))));
            tracep->chgBit(oldp+250,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+251,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+252,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+253,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+254,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+255,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+256,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+257,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+258,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [3U]))));
            tracep->chgBit(oldp+259,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+260,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+261,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+262,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+263,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+264,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+265,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+266,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+267,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [4U]))));
            tracep->chgBit(oldp+268,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+269,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+270,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+271,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+272,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+273,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+274,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+275,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+276,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [5U]))));
            tracep->chgBit(oldp+277,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+278,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+279,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+280,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+281,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+282,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+283,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+284,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+285,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [6U]))));
            tracep->chgBit(oldp+286,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+287,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+288,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+289,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+290,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+291,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+292,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+293,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+294,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [7U]))));
            tracep->chgBit(oldp+295,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+296,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+297,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+298,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+299,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+300,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+301,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+302,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+303,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [8U]))));
            tracep->chgBit(oldp+304,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+305,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+306,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+307,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+308,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+309,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+310,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+311,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+312,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [9U]))));
            tracep->chgBit(oldp+313,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xaU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+314,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0xaU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+315,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0xaU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+316,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0xaU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+317,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [0xaU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+318,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xaU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+319,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [0xaU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+320,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xaU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+321,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [0xaU]))));
            tracep->chgBit(oldp+322,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xbU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+323,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0xbU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+324,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0xbU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+325,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0xbU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+326,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [0xbU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+327,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xbU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+328,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [0xbU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+329,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xbU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+330,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [0xbU]))));
            tracep->chgBit(oldp+331,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xcU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+332,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0xcU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+333,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0xcU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+334,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                      [0xcU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+335,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                         [0xcU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+336,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xcU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+337,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                [0xcU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+338,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                    [0xcU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+339,((1U & (IData)(
                                                   vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_d2h
                                                   [0xcU]))));
            tracep->chgIData(oldp+340,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sbaddress_sba_csrs),32);
            tracep->chgIData(oldp+341,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+342,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+343,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o))));
            tracep->chgBit(oldp+344,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_h_o 
                                                    >> 1U)))));
            tracep->chgQData(oldp+345,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d),64);
            tracep->chgQData(oldp+347,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d),64);
            tracep->chgCData(oldp+349,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_d),3);
            tracep->chgBit(oldp+350,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+351,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+352,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+353,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+354,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+355,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+356,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+357,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+358,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0U]))));
            tracep->chgBit(oldp+359,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+360,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+361,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+362,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+363,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+364,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+365,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+366,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+367,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [1U]))));
            tracep->chgBit(oldp+368,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+369,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+370,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+371,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+372,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+373,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+374,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+375,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+376,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [2U]))));
            tracep->chgBit(oldp+377,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+378,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+379,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+380,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+381,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+382,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+383,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+384,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+385,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [3U]))));
            tracep->chgBit(oldp+386,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+387,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+388,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+389,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+390,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+391,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+392,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+393,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+394,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [4U]))));
            tracep->chgBit(oldp+395,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+396,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+397,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+398,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+399,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+400,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+401,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+402,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+403,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [5U]))));
            tracep->chgBit(oldp+404,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+405,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+406,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+407,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+408,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+409,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+410,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+411,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+412,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [6U]))));
            tracep->chgBit(oldp+413,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+414,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+415,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+416,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+417,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+418,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+419,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+420,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+421,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [7U]))));
            tracep->chgBit(oldp+422,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+423,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+424,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+425,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+426,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+427,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+428,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+429,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+430,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [8U]))));
            tracep->chgBit(oldp+431,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+432,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+433,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+434,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+435,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+436,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+437,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+438,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+439,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [9U]))));
            tracep->chgBit(oldp+440,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+441,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+442,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+443,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+444,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [0xaU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+445,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+446,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [0xaU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+447,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+448,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xaU]))));
            tracep->chgBit(oldp+449,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+450,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xbU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+451,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xbU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+452,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xbU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+453,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [0xbU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+454,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+455,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [0xbU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+456,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+457,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xbU]))));
            tracep->chgBit(oldp+458,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+459,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xcU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+460,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xcU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+461,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xcU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+462,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [0xcU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+463,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+464,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [0xcU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+465,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+466,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xcU]))));
            tracep->chgBit(oldp+467,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+468,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+469,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+470,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+471,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+472,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+473,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                >> 2U))),32);
            tracep->chgBit(oldp+474,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 1U)))));
            tracep->chgBit(oldp+475,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i))));
            tracep->chgBit(oldp+476,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_req));
            tracep->chgBit(oldp+477,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__accept_t_rsp));
            tracep->chgBit(oldp+478,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+479,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+480,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+481,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+482,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+483,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+484,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+485,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+486,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [0U]))));
            tracep->chgBit(oldp+487,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+488,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+489,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+490,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+491,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+492,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+493,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+494,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+495,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [1U]))));
            tracep->chgBit(oldp+496,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+497,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+498,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+499,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+500,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+501,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+502,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+503,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+504,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [2U]))));
            tracep->chgBit(oldp+505,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+506,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+507,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+508,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+509,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+510,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+511,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+512,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+513,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [3U]))));
            tracep->chgBit(oldp+514,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+515,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+516,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+517,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+518,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+519,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+520,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+521,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+522,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [4U]))));
            tracep->chgBit(oldp+523,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+524,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+525,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+526,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+527,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+528,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+529,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+530,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+531,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [5U]))));
            tracep->chgBit(oldp+532,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+533,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+534,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+535,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+536,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+537,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+538,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+539,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+540,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [6U]))));
            tracep->chgBit(oldp+541,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+542,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+543,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+544,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+545,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+546,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+547,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+548,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+549,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [7U]))));
            tracep->chgBit(oldp+550,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+551,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+552,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+553,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+554,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+555,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+556,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+557,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+558,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [8U]))));
            tracep->chgBit(oldp+559,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+560,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+561,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+562,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+563,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+564,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+565,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+566,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+567,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [9U]))));
            tracep->chgBit(oldp+568,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+569,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xaU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+570,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xaU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+571,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xaU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+572,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [0xaU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+573,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+574,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [0xaU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+575,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xaU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+576,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [0xaU]))));
            tracep->chgBit(oldp+577,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+578,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xbU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+579,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xbU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+580,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xbU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+581,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [0xbU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+582,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+583,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [0xbU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+584,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xbU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+585,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [0xbU]))));
            tracep->chgBit(oldp+586,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+587,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xcU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+588,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xcU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+589,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xcU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+590,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [0xcU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+591,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xcU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+592,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [0xcU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+593,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xcU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+594,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [0xcU]))));
            tracep->chgBit(oldp+595,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+596,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xdU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+597,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xdU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+598,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                      [0xdU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+599,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                         [0xdU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+600,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xdU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+601,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                [0xdU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+602,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                    [0xdU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+603,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_i
                                                   [0xdU]))));
            tracep->chgBit(oldp+604,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+605,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+606,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+607,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+608,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+609,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+610,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                >> 2U))),32);
            tracep->chgBit(oldp+611,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p 
                                                    >> 1U)))));
            tracep->chgBit(oldp+612,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_p))));
            tracep->chgBit(oldp+613,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hfifo_reqready));
            tracep->chgBit(oldp+614,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i))));
            tracep->chgBit(oldp+615,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+616,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_i 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+618,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+619,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+620,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+621,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+622,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+623,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+624,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+625,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+626,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+627,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+628,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+629,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+630,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+631,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [0U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+632,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+633,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [0U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+634,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+635,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0U]))));
            tracep->chgBit(oldp+636,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0U]))));
            tracep->chgBit(oldp+637,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+638,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [0U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [0U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+640,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+641,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+642,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+643,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+644,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+645,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+646,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+647,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+648,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+649,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+650,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+651,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+652,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [1U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+653,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [1U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+654,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+655,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [1U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+656,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+657,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [1U]))));
            tracep->chgBit(oldp+658,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [1U]))));
            tracep->chgBit(oldp+659,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+660,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [1U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [1U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+662,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+663,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+664,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+665,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+666,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+667,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+668,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+669,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+670,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+671,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+672,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+673,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+674,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [2U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+675,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [2U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+676,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+677,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [2U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+678,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+679,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [2U]))));
            tracep->chgBit(oldp+680,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [2U]))));
            tracep->chgBit(oldp+681,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+682,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [2U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [2U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+684,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+685,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+686,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+687,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+688,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+689,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+690,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+691,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+692,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+693,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+694,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+695,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+696,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [3U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+697,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [3U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+698,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+699,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [3U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+700,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+701,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [3U]))));
            tracep->chgBit(oldp+702,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [3U]))));
            tracep->chgBit(oldp+703,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+704,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [3U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [3U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+706,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+707,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+708,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+709,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+710,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+711,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+712,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+713,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+714,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+715,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+716,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+717,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+718,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [4U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+719,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [4U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+720,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+721,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [4U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+722,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+723,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [4U]))));
            tracep->chgBit(oldp+724,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [4U]))));
            tracep->chgBit(oldp+725,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+726,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [4U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [4U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+728,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+729,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+730,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+731,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+732,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+733,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+734,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+735,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+736,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+737,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+738,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+739,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+740,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [5U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+741,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [5U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+742,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+743,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [5U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+744,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+745,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [5U]))));
            tracep->chgBit(oldp+746,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [5U]))));
            tracep->chgBit(oldp+747,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+748,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [5U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [5U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+750,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+751,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+752,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+753,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+754,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+755,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+756,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+757,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+758,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+759,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+760,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+761,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+762,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [6U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+763,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [6U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+764,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+765,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [6U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+766,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+767,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [6U]))));
            tracep->chgBit(oldp+768,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [6U]))));
            tracep->chgBit(oldp+769,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+770,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [6U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [6U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+772,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+773,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+774,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+775,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+776,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+777,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+778,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+779,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+780,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+781,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+782,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+783,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+784,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [7U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+785,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [7U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+786,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+787,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [7U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+788,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+789,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [7U]))));
            tracep->chgBit(oldp+790,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [7U]))));
            tracep->chgBit(oldp+791,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+792,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [7U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [7U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+794,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+795,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+796,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+797,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+798,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+799,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+800,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+801,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+802,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+803,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+804,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+805,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+806,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [8U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+807,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [8U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+808,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+809,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [8U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+810,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+811,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [8U]))));
            tracep->chgBit(oldp+812,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [8U]))));
            tracep->chgBit(oldp+813,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+814,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [8U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [8U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+816,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+817,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+818,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+819,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+820,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+821,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+822,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+823,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+824,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+825,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+826,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+827,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+828,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [9U] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+829,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [9U] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+830,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+831,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [9U] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+832,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+833,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [9U]))));
            tracep->chgBit(oldp+834,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [9U]))));
            tracep->chgBit(oldp+835,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+836,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [9U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [9U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+838,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+839,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+840,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+841,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+842,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+843,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+844,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+845,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+846,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+847,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+848,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+849,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+850,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xaU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+851,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [0xaU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+852,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+853,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [0xaU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+854,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+855,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xaU]))));
            tracep->chgBit(oldp+856,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xaU]))));
            tracep->chgBit(oldp+857,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xaU] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+858,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [0xaU] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [0xaU] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+860,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+861,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+862,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+863,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+864,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+865,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+866,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+867,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+868,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+869,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+870,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xbU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+871,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xbU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+872,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xbU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+873,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [0xbU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+874,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+875,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [0xbU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+876,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+877,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xbU]))));
            tracep->chgBit(oldp+878,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xbU]))));
            tracep->chgBit(oldp+879,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xbU] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+880,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [0xbU] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [0xbU] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgBit(oldp+882,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+883,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+884,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+885,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+886,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+887,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+888,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+889,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+890,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_h_o))));
            tracep->chgBit(oldp+891,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+892,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xcU] 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+893,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xcU] 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+894,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                      [0xcU] 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+895,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                         [0xcU] 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+896,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+897,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                [0xcU] 
                                                >> 2U))),32);
            tracep->chgBit(oldp+898,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 1U)))));
            tracep->chgBit(oldp+899,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xcU]))));
            tracep->chgBit(oldp+900,((1U & (IData)(
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                   [0xcU]))));
            tracep->chgBit(oldp+901,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                    [0xcU] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+902,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                     [0xcU] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
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
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_i
                                                                          [0xcU] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x69U])) {
            tracep->chgCData(oldp+904,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgBit(oldp+905,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgBit(oldp+906,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
            tracep->chgBit(oldp+907,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
            tracep->chgBit(oldp+908,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
            tracep->chgBit(oldp+909,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x6aU])) {
            tracep->chgBit(oldp+910,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgBit(oldp+911,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgIData(oldp+912,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+913,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgBit(oldp+914,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 1U))));
            tracep->chgBit(oldp+915,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 1U))));
            tracep->chgIData(oldp+916,((0x1fffffffU 
                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                           >> 3U))),29);
            tracep->chgIData(oldp+917,((0x1fffffffU 
                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                           >> 3U))),29);
            tracep->chgBit(oldp+918,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+919,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgBit(oldp+920,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 2U))));
            tracep->chgBit(oldp+921,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 2U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x6bU])) {
            tracep->chgBit(oldp+922,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready));
            tracep->chgBit(oldp+923,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+924,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
            tracep->chgBit(oldp+925,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            tracep->chgBit(oldp+926,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
            tracep->chgBit(oldp+927,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
            tracep->chgIData(oldp+928,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+929,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                            >> 1U))));
            tracep->chgIData(oldp+930,((0x1fffffffU 
                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                           >> 3U))),29);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x6cU])) {
            tracep->chgBit(oldp+931,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear));
            tracep->chgBit(oldp+932,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgCData(oldp+933,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+934,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
            tracep->chgBit(oldp+935,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
            tracep->chgCData(oldp+936,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
            tracep->chgQData(oldp+937,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+939,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+941,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+942,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgQData(oldp+944,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+946,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+948,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+949,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x6dU])) {
            tracep->chgIData(oldp+951,((0xfffffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q)),20);
            tracep->chgIData(oldp+952,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_q),32);
            tracep->chgIData(oldp+953,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__cio_gpio_en_q),32);
            tracep->chgIData(oldp+954,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__q),32);
            tracep->chgBit(oldp+955,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_state__DOT__qe));
            tracep->chgBit(oldp+956,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
            tracep->chgBit(oldp+957,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
            tracep->chgCData(oldp+958,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+959,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+960,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+961,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
            tracep->chgCData(oldp+962,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+963,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+964,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe));
            tracep->chgBit(oldp+965,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe));
            tracep->chgBit(oldp+966,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe));
            tracep->chgBit(oldp+967,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe));
            tracep->chgBit(oldp+968,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe));
            tracep->chgBit(oldp+969,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe));
            tracep->chgBit(oldp+970,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe));
            tracep->chgBit(oldp+971,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe));
            tracep->chgBit(oldp+972,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe));
            tracep->chgBit(oldp+973,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe));
            tracep->chgBit(oldp+974,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__CLK_SEL));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x6eU])) {
            tracep->chgBit(oldp+975,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+976,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+977,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+978,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+979,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+980,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+981,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+982,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+983,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_d_o[0U])));
            tracep->chgCData(oldp+984,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+985,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+986,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+987,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgCData(oldp+988,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+989,((0xfU == (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+990,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack));
            tracep->chgBit(oldp+991,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+992,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+993,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+994,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+995,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+996,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+997,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+998,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+999,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+1000,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+1001,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1002,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1003,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1004,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1005,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1006,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1007,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1008,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1009,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+1010,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1011,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+1012,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp5016[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U]);
            __Vtemp5016[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[1U]));
            __Vtemp5016[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1013,(__Vtemp5016),85);
            tracep->chgBit(oldp+1016,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1017,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1020,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+1023,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x6fU] | vlTOPp->__Vm_traceActivity
                         [0x74U]))) {
            tracep->chgIData(oldp+1026,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
            tracep->chgBit(oldp+1027,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                             >> 0x15U))));
            tracep->chgIData(oldp+1028,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                          << 0xbU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
            tracep->chgBit(oldp+1029,((1U & (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                             >> 0x14U))));
            tracep->chgIData(oldp+1030,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+1031,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+1032,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),10);
            tracep->chgSData(oldp+1033,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+1034,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
            tracep->chgIData(oldp+1035,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+1036,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+1037,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+1038,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+1039,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgIData(oldp+1040,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+1041,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+1042,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgIData(oldp+1043,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+1044,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+1045,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+1046,((0xffffU & 
                                         ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+1047,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[0U])),16);
            tracep->chgBit(oldp+1048,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we) 
                                             | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[6U] 
                                                >> 0x15U)))));
            tracep->chgSData(oldp+1049,((0x3ffU & (
                                                   (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),16);
            tracep->chgSData(oldp+1050,((0x3ffU & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[4U])),16);
            tracep->chgSData(oldp+1051,((0xffffU & 
                                         vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__hw2reg[3U])),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x70U])) {
            tracep->chgIData(oldp+1052,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgIData(oldp+1053,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgBit(oldp+1054,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgCData(oldp+1055,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x71U])) {
            tracep->chgIData(oldp+1056,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgIData(oldp+1057,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgIData(oldp+1058,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgCData(oldp+1059,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),6);
            tracep->chgIData(oldp+1060,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgIData(oldp+1061,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x72U])) {
            tracep->chgWData(oldp+1062,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex),68);
            tracep->chgIData(oldp+1065,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex),32);
            tracep->chgWData(oldp+1066,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d),68);
            tracep->chgQData(oldp+1069,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
            tracep->chgIData(oldp+1071,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
            tracep->chgCData(oldp+1072,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x73U])) {
            tracep->chgBit(oldp+1073,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init));
            tracep->chgBit(oldp+1074,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgCData(oldp+1075,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x74U])) {
            tracep->chgBit(oldp+1076,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1077,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1078,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1079,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1080,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1081,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1082,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1083,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1084,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U])));
            tracep->chgBit(oldp+1085,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack) 
                                        & (4U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       & (~ ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                       << 0x1bU) 
                                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                         >> 5U))))) 
                                              | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                             | (~ (
                                                   (((0U 
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
            tracep->chgBit(oldp+1086,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                       & (~ ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                       << 0x1bU) 
                                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                         >> 5U))))) 
                                              | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                             | (~ (
                                                   (((0U 
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
            tracep->chgBit(oldp+1087,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1088,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1089,((0U != vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event)));
            tracep->chgIData(oldp+1090,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__intr_hw__DOT__new_event),32);
            tracep->chgIData(oldp+1091,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+1092,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_state_we));
            tracep->chgBit(oldp+1093,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_enable_we));
            tracep->chgBit(oldp+1094,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
            tracep->chgBit(oldp+1095,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
            tracep->chgBit(oldp+1096,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
            tracep->chgBit(oldp+1097,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
            tracep->chgBit(oldp+1098,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__ctrl_en_input_filter_we));
            tracep->chgIData(oldp+1099,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim),32);
            tracep->chgCData(oldp+1100,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete_id[0]),5);
            tracep->chgIData(oldp+1101,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__complete),32);
            tracep->chgCData(oldp+1102,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold[0]),3);
            tracep->chgIData(oldp+1103,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+1104,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we));
            tracep->chgBit(oldp+1105,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we));
            tracep->chgBit(oldp+1106,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we));
            tracep->chgBit(oldp+1107,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we));
            tracep->chgBit(oldp+1108,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we));
            tracep->chgBit(oldp+1109,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we));
            tracep->chgBit(oldp+1110,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we));
            tracep->chgBit(oldp+1111,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we));
            tracep->chgBit(oldp+1112,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we));
            tracep->chgBit(oldp+1113,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we));
            tracep->chgBit(oldp+1114,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we));
            tracep->chgBit(oldp+1115,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we));
            tracep->chgBit(oldp+1116,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we));
            tracep->chgBit(oldp+1117,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we));
            tracep->chgBit(oldp+1118,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we));
            tracep->chgBit(oldp+1119,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we));
            tracep->chgBit(oldp+1120,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we));
            tracep->chgBit(oldp+1121,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we));
            tracep->chgBit(oldp+1122,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we));
            tracep->chgBit(oldp+1123,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we));
            tracep->chgBit(oldp+1124,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we));
            tracep->chgBit(oldp+1125,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we));
            tracep->chgBit(oldp+1126,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we));
            tracep->chgBit(oldp+1127,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio15_we));
            tracep->chgBit(oldp+1128,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we));
            tracep->chgBit(oldp+1129,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we));
            tracep->chgBit(oldp+1130,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we));
            tracep->chgBit(oldp+1131,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we));
            tracep->chgBit(oldp+1132,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we));
            tracep->chgBit(oldp+1133,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we));
            tracep->chgBit(oldp+1134,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we));
            tracep->chgBit(oldp+1135,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we));
            tracep->chgBit(oldp+1136,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__msip0_we));
            tracep->chgCData(oldp+1137,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                        [0U]),3);
            tracep->chgCData(oldp+1138,((0xfcU & ((
                                                   vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                   << 0x1bU) 
                                                  | (0x7fffffcU 
                                                     & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                        >> 5U))))),8);
            tracep->chgIData(oldp+1139,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+1140,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgBit(oldp+1141,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack));
            tracep->chgBit(oldp+1142,((1U & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                       << 0x1bU) 
                                                      | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                         >> 5U))))) 
                                              | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__malformed_meta_err)) 
                                             | (~ (
                                                   (((0U 
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
            tracep->chgBit(oldp+1143,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req) 
                                       & (0U != (3U 
                                                 & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                     << 0x1bU) 
                                                    | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                       >> 5U)))))));
            tracep->chgBit(oldp+1144,((1U & (~ ((((0U 
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
            tracep->chgBit(oldp+1145,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__a_ack) 
                                       & (4U == (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+1146,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__wr_req));
            tracep->chgBit(oldp+1147,((((0U == (7U 
                                                & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+1148,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+1149,((0U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1150,((1U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1151,((4U == (7U & 
                                              (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1152,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+1153,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+1154,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+1155,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[1U] 
                                                        >> 5U)))))),4);
            tracep->chgBit(oldp+1156,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1157,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1158,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1159,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1160,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1161,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1162,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1163,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1164,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+1165,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1166,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1167,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1168,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1169,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1170,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1171,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1172,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1173,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+1174,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1175,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+1176,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp5020[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U]);
            __Vtemp5020[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[1U]));
            __Vtemp5020[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1177,(__Vtemp5020),85);
            tracep->chgBit(oldp+1180,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1181,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1184,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgWData(oldp+1187,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x75U])) {
            tracep->chgIData(oldp+1190,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__le),32);
            tracep->chgIData(oldp+1191,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__set),32);
            tracep->chgBit(oldp+1192,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we));
            tracep->chgBit(oldp+1193,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we));
            tracep->chgBit(oldp+1194,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we));
            tracep->chgBit(oldp+1195,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we));
            tracep->chgBit(oldp+1196,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we));
            tracep->chgBit(oldp+1197,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we));
            tracep->chgBit(oldp+1198,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we));
            tracep->chgBit(oldp+1199,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we));
            tracep->chgBit(oldp+1200,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we));
            tracep->chgBit(oldp+1201,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio0_we));
            tracep->chgBit(oldp+1202,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio1_we));
            tracep->chgBit(oldp+1203,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio2_we));
            tracep->chgBit(oldp+1204,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio3_we));
            tracep->chgBit(oldp+1205,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio4_we));
            tracep->chgBit(oldp+1206,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio5_we));
            tracep->chgBit(oldp+1207,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio6_we));
            tracep->chgBit(oldp+1208,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio8_we));
            tracep->chgBit(oldp+1209,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio9_we));
            tracep->chgBit(oldp+1210,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio10_we));
            tracep->chgBit(oldp+1211,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio11_we));
            tracep->chgBit(oldp+1212,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio12_we));
            tracep->chgBit(oldp+1213,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio13_we));
            tracep->chgBit(oldp+1214,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio14_we));
            tracep->chgBit(oldp+1215,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio16_we));
            tracep->chgBit(oldp+1216,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio17_we));
            tracep->chgBit(oldp+1217,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio18_we));
            tracep->chgBit(oldp+1218,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio19_we));
            tracep->chgBit(oldp+1219,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio20_we));
            tracep->chgBit(oldp+1220,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio21_we));
            tracep->chgBit(oldp+1221,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio22_we));
            tracep->chgBit(oldp+1222,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio23_we));
            tracep->chgBit(oldp+1223,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio24_we));
            tracep->chgBit(oldp+1224,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio25_we));
            tracep->chgBit(oldp+1225,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio26_we));
            tracep->chgBit(oldp+1226,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio27_we));
            tracep->chgBit(oldp+1227,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio28_we));
            tracep->chgBit(oldp+1228,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio29_we));
            tracep->chgBit(oldp+1229,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio30_we));
            tracep->chgBit(oldp+1230,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__prio31_we));
            tracep->chgBit(oldp+1231,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we));
            tracep->chgBit(oldp+1232,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we));
            tracep->chgBit(oldp+1233,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we));
            tracep->chgBit(oldp+1234,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we));
            tracep->chgBit(oldp+1235,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we));
            tracep->chgBit(oldp+1236,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we));
            tracep->chgBit(oldp+1237,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we));
            tracep->chgBit(oldp+1238,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we));
            tracep->chgBit(oldp+1239,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we));
            tracep->chgBit(oldp+1240,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we));
            tracep->chgBit(oldp+1241,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we));
            tracep->chgBit(oldp+1242,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we));
            tracep->chgBit(oldp+1243,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we));
            tracep->chgBit(oldp+1244,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we));
            tracep->chgBit(oldp+1245,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we));
            tracep->chgBit(oldp+1246,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we));
            tracep->chgBit(oldp+1247,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we));
            tracep->chgBit(oldp+1248,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we));
            tracep->chgBit(oldp+1249,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we));
            tracep->chgBit(oldp+1250,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we));
            tracep->chgBit(oldp+1251,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we));
            tracep->chgBit(oldp+1252,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we));
            tracep->chgBit(oldp+1253,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we));
            tracep->chgBit(oldp+1254,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we));
            tracep->chgBit(oldp+1255,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x76U])) {
            tracep->chgIData(oldp+1256,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
            tracep->chgCData(oldp+1257,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
            tracep->chgIData(oldp+1258,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
            tracep->chgBit(oldp+1259,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req));
            tracep->chgBit(oldp+1260,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err));
            tracep->chgCData(oldp+1261,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
            tracep->chgCData(oldp+1262,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
            tracep->chgBit(oldp+1263,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
            tracep->chgCData(oldp+1264,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
            tracep->chgBit(oldp+1265,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
            tracep->chgBit(oldp+1266,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
            tracep->chgBit(oldp+1267,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
            tracep->chgBit(oldp+1268,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
            tracep->chgBit(oldp+1269,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
            tracep->chgBit(oldp+1270,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
            tracep->chgBit(oldp+1271,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgBit(oldp+1272,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
            tracep->chgBit(oldp+1273,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
            tracep->chgBit(oldp+1274,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
            tracep->chgIData(oldp+1275,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
            tracep->chgBit(oldp+1276,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
            tracep->chgBit(oldp+1277,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req));
            tracep->chgBit(oldp+1278,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgBit(oldp+1279,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x77U])) {
            tracep->chgBit(oldp+1280,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+1281,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgBit(oldp+1282,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgBit(oldp+1283,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgIData(oldp+1284,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgBit(oldp+1285,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgBit(oldp+1286,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
        }
        tracep->chgBit(oldp+1287,(vlTOPp->clk_i));
        tracep->chgBit(oldp+1288,(vlTOPp->rst_ni));
        tracep->chgBit(oldp+1289,(vlTOPp->jtag_tck_i));
        tracep->chgBit(oldp+1290,(vlTOPp->jtag_tms_i));
        tracep->chgBit(oldp+1291,(vlTOPp->jtag_trst_ni));
        tracep->chgBit(oldp+1292,(vlTOPp->jtag_tdi_i));
        tracep->chgBit(oldp+1293,(vlTOPp->jtag_tdo_o));
        tracep->chgIData(oldp+1294,(vlTOPp->gpio_i),20);
        tracep->chgIData(oldp+1295,(vlTOPp->gpio_o),20);
        tracep->chgBit(oldp+1296,((1U & (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                            & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                               | (0U 
                                                  != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))))));
        tracep->chgBit(oldp+1297,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_req));
        tracep->chgBit(oldp+1298,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__clk));
        tracep->chgBit(oldp+1299,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy) 
                                    | ((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                   | (0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        tracep->chgBit(oldp+1300,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                      | (0U != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)))));
        tracep->chgBit(oldp+1301,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        tracep->chgIData(oldp+1302,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                    (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0xfU))]),32);
        tracep->chgIData(oldp+1303,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                    (0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x14U))]),32);
        tracep->chgBit(oldp+1304,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__en_latch));
        tracep->chgBit(oldp+1305,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
        tracep->chgBit(oldp+1306,((1U & (((((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                            & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                           & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                          & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))))));
        tracep->chgBit(oldp+1307,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err));
        tracep->chgIData(oldp+1308,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                     << 1U)),32);
        tracep->chgCData(oldp+1309,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause),6);
        tracep->chgBit(oldp+1310,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
        tracep->chgBit(oldp+1311,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ctrl_busy));
        tracep->chgBit(oldp+1312,(((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
        tracep->chgBit(oldp+1313,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
        tracep->chgBit(oldp+1314,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                     & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
        tracep->chgBit(oldp+1315,(((((0U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                     & (IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_h_o 
                                                >> 0x33U))) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
        tracep->chgIData(oldp+1316,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                      ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                          ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                          : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)
                                      : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex)),32);
        tracep->chgBit(oldp+1317,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id)))));
        tracep->chgBit(oldp+1318,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match));
        tracep->chgBit(oldp+1319,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match));
        tracep->chgBit(oldp+1320,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->chgBit(oldp+1321,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->chgIData(oldp+1322,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        tracep->chgBit(oldp+1323,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                   & (1U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))));
        tracep->chgBit(oldp+1324,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__data_req_out));
        tracep->chgBit(oldp+1325,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_if));
        tracep->chgBit(oldp+1326,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_wb));
        tracep->chgBit(oldp+1327,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause));
        tracep->chgCData(oldp+1328,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        tracep->chgBit(oldp+1329,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))));
        tracep->chgBit(oldp+1330,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q))));
        tracep->chgBit(oldp+1331,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
        tracep->chgBit(oldp+1332,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz)))));
        tracep->chgBit(oldp+1333,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        tracep->chgBit(oldp+1334,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        tracep->chgBit(oldp+1335,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_load));
        tracep->chgBit(oldp+1336,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_store));
        tracep->chgBit(oldp+1337,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready)) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set))) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear))))));
        tracep->chgBit(oldp+1338,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                             ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                             : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->chgIData(oldp+1339,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                      ? 0U : ((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                               ? ((0xffffff00U 
                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                  | (0x7cU 
                                                     & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                                        << 2U)))
                                               : (0xffffff00U 
                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->chgBit(oldp+1340,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                         >> 5U))));
        tracep->chgBit(oldp+1341,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgCData(oldp+1342,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
        tracep->chgCData(oldp+1343,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
        tracep->chgCData(oldp+1344,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                      ? (1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                               >> 1U))
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
        tracep->chgBit(oldp+1345,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                    & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgIData(oldp+1346,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                       : (0xfffffffcU 
                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                     + (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                        << 2U))),32);
        tracep->chgBit(oldp+1347,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
        tracep->chgIData(oldp+1348,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                      ? (0xfffffffeU 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                      : 0U)),32);
        tracep->chgBit(oldp+1349,((1U & (~ (IData)(
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                         >> 1U) 
                                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
        tracep->chgIData(oldp+1350,((0xfffffffeU & 
                                     ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                       + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                      << 1U))),32);
        tracep->chgCData(oldp+1351,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
        tracep->chgCData(oldp+1352,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
        tracep->chgCData(oldp+1353,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        tracep->chgIData(oldp+1354,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
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
        tracep->chgBit(oldp+1355,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                          : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                             | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                   | (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->chgBit(oldp+1356,((1U & ((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                              >> 1U) 
                                             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                          : (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                              & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                             & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->chgBit(oldp+1357,((1U & (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          >> 1U) | 
                                         ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
        tracep->chgIData(oldp+1358,((0x7fffffffU & 
                                     (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                      + ((2U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                << 1U)) 
                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->chgIData(oldp+1359,((0x7fffffffU & 
                                     ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                       ? (((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)
                                            ? (0xfffffffeU 
                                               & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                            : 0U) >> 1U)
                                       : (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          + ((2U & 
                                              ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                               << 1U)) 
                                             | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->chgIData(oldp+1360,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
        tracep->chgBit(oldp+1361,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_in_ready) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))));
        tracep->chgBit(oldp+1362,(0U));
        tracep->chgBit(oldp+1363,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_valid_clear)))));
        tracep->chgBit(oldp+1364,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        tracep->chgIData(oldp+1365,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                      ? 0U : (0x1fU 
                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
        tracep->chgBit(oldp+1366,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->chgBit(oldp+1367,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
                                   & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec)))));
        tracep->chgBit(oldp+1368,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                   & ((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                        & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec)))));
        tracep->chgBit(oldp+1369,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgBit(oldp+1370,(((3U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                   & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                      | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->chgBit(oldp+1371,(((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                     | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_store_err) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__lsu_load_err)))));
        tracep->chgBit(oldp+1372,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush))));
        tracep->chgBit(oldp+1373,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        tracep->chgIData(oldp+1374,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex)
                                      ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                          << 0x1eU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                            >> 2U))
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        tracep->chgBit(oldp+1375,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                   | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
        tracep->chgIData(oldp+1376,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        tracep->chgQData(oldp+1377,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : (1ULL | ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))),33);
        tracep->chgBit(oldp+1379,((1U & ((0x80000000U 
                                          & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             ^ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                          ? ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              >> 0x1fU) 
                                             ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                          : (~ (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x20U)))))));
        tracep->chgIData(oldp+1380,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
        tracep->chgQData(oldp+1381,((0x7ffffffffULL 
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
        tracep->chgQData(oldp+1383,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
        tracep->chgQData(oldp+1385,((0x3ffffffffULL 
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
        tracep->chgBit(oldp+1387,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                    ^ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->chgBit(oldp+1388,((1U & (IData)((1ULL 
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
        tracep->chgIData(oldp+1389,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->chgIData(oldp+1390,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->chgIData(oldp+1391,(((2U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
        tracep->chgBit(oldp+1392,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        tracep->chgIData(oldp+1393,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->chgIData(oldp+1394,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->chgCData(oldp+1395,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        tracep->chgBit(oldp+1396,((((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ready_wb)) 
                                   | ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                      & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))))));
        tracep->chgIData(oldp+1397,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                      ? 0x20000001U
                                      : (1U | (0xffffff00U 
                                               & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        tracep->chgIData(oldp+1398,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip),18);
        tracep->chgBit(oldp+1399,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
        tracep->chgCData(oldp+1400,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                      ? (5U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        tracep->chgBit(oldp+1401,(((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 8U)) > (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->chgBit(oldp+1402,(((3U == (3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                                 >> 0xaU))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
        tracep->chgBit(oldp+1403,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
        tracep->chgBit(oldp+1404,((1U & ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 2U) & 
                                         (~ ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 2U))))));
        tracep->chgCData(oldp+1405,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
        tracep->chgCData(oldp+1406,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                      ? (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be)
                                      : 0xfU)),4);
        tracep->chgBit(oldp+1407,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
        tracep->chgIData(oldp+1408,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+1409,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q),32);
        tracep->chgIData(oldp+1410,((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                      & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                     & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+1411,(((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                      & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                     & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+1412,(((((((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q) 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                        & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[4U]) 
                                       | ((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_q 
                                           & (~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d)) 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[3U])) 
                                      | ((~ vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d) 
                                         & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[1U])) 
                                     | (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__data_in_d 
                                        & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[2U]))),32);
        tracep->chgBit(oldp+1413,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.tl_d_o[0U]))));
        tracep->chgIData(oldp+1414,((((0x200000U & 
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
        tracep->chgBit(oldp+1415,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+1416,((1U & ((1U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                          : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+1417,((1U & (vlTOPp->gpio_i 
                                         >> 1U))));
        tracep->chgBit(oldp+1418,((1U & ((2U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 1U)))));
        tracep->chgBit(oldp+1419,((1U & (vlTOPp->gpio_i 
                                         >> 2U))));
        tracep->chgBit(oldp+1420,((1U & ((4U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 2U)))));
        tracep->chgBit(oldp+1421,((1U & (vlTOPp->gpio_i 
                                         >> 3U))));
        tracep->chgBit(oldp+1422,((1U & ((8U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 3U)))));
        tracep->chgBit(oldp+1423,((1U & (vlTOPp->gpio_i 
                                         >> 4U))));
        tracep->chgBit(oldp+1424,((1U & ((0x10U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 4U)))));
        tracep->chgBit(oldp+1425,((1U & (vlTOPp->gpio_i 
                                         >> 5U))));
        tracep->chgBit(oldp+1426,((1U & ((0x20U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 5U)))));
        tracep->chgBit(oldp+1427,((1U & (vlTOPp->gpio_i 
                                         >> 6U))));
        tracep->chgBit(oldp+1428,((1U & ((0x40U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 6U)))));
        tracep->chgBit(oldp+1429,((1U & (vlTOPp->gpio_i 
                                         >> 7U))));
        tracep->chgBit(oldp+1430,((1U & ((0x80U & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 7U)))));
        tracep->chgBit(oldp+1431,((1U & (vlTOPp->gpio_i 
                                         >> 8U))));
        tracep->chgBit(oldp+1432,((1U & ((0x100U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 8U)))));
        tracep->chgBit(oldp+1433,((1U & (vlTOPp->gpio_i 
                                         >> 9U))));
        tracep->chgBit(oldp+1434,((1U & ((0x200U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 9U)))));
        tracep->chgBit(oldp+1435,((1U & (vlTOPp->gpio_i 
                                         >> 0xaU))));
        tracep->chgBit(oldp+1436,((1U & ((0x400U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xaU)))));
        tracep->chgBit(oldp+1437,((1U & (vlTOPp->gpio_i 
                                         >> 0xbU))));
        tracep->chgBit(oldp+1438,((1U & ((0x800U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xbU)))));
        tracep->chgBit(oldp+1439,((1U & (vlTOPp->gpio_i 
                                         >> 0xcU))));
        tracep->chgBit(oldp+1440,((1U & ((0x1000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xcU)))));
        tracep->chgBit(oldp+1441,((1U & (vlTOPp->gpio_i 
                                         >> 0xdU))));
        tracep->chgBit(oldp+1442,((1U & ((0x2000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xdU)))));
        tracep->chgBit(oldp+1443,((1U & (vlTOPp->gpio_i 
                                         >> 0xeU))));
        tracep->chgBit(oldp+1444,((1U & ((0x4000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xeU)))));
        tracep->chgBit(oldp+1445,((1U & (vlTOPp->gpio_i 
                                         >> 0xfU))));
        tracep->chgBit(oldp+1446,((1U & ((0x8000U & 
                                          vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xfU)))));
        tracep->chgBit(oldp+1447,((1U & (vlTOPp->gpio_i 
                                         >> 0x10U))));
        tracep->chgBit(oldp+1448,((1U & ((0x10000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x10U)))));
        tracep->chgBit(oldp+1449,((1U & (vlTOPp->gpio_i 
                                         >> 0x11U))));
        tracep->chgBit(oldp+1450,((1U & ((0x20000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x11U)))));
        tracep->chgBit(oldp+1451,((1U & (vlTOPp->gpio_i 
                                         >> 0x12U))));
        tracep->chgBit(oldp+1452,((1U & ((0x40000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x12U)))));
        tracep->chgBit(oldp+1453,((1U & (vlTOPp->gpio_i 
                                         >> 0x13U))));
        tracep->chgBit(oldp+1454,((1U & ((0x80000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x13U)))));
        tracep->chgBit(oldp+1455,((1U & (vlTOPp->gpio_i 
                                         >> 0x14U))));
        tracep->chgBit(oldp+1456,((1U & ((0x100000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x14U)))));
        tracep->chgBit(oldp+1457,((1U & (vlTOPp->gpio_i 
                                         >> 0x15U))));
        tracep->chgBit(oldp+1458,((1U & ((0x200000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x15U)))));
        tracep->chgBit(oldp+1459,((1U & (vlTOPp->gpio_i 
                                         >> 0x16U))));
        tracep->chgBit(oldp+1460,((1U & ((0x400000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x16U)))));
        tracep->chgBit(oldp+1461,((1U & (vlTOPp->gpio_i 
                                         >> 0x17U))));
        tracep->chgBit(oldp+1462,((1U & ((0x800000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x17U)))));
        tracep->chgBit(oldp+1463,((1U & (vlTOPp->gpio_i 
                                         >> 0x18U))));
        tracep->chgBit(oldp+1464,((1U & ((0x1000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x18U)))));
        tracep->chgBit(oldp+1465,((1U & (vlTOPp->gpio_i 
                                         >> 0x19U))));
        tracep->chgBit(oldp+1466,((1U & ((0x2000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x19U)))));
        tracep->chgBit(oldp+1467,((1U & (vlTOPp->gpio_i 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+1468,((1U & ((0x4000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1aU)))));
        tracep->chgBit(oldp+1469,((1U & (vlTOPp->gpio_i 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+1470,((1U & ((0x8000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1bU)))));
        tracep->chgBit(oldp+1471,((1U & (vlTOPp->gpio_i 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+1472,((1U & ((0x10000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1cU)))));
        tracep->chgBit(oldp+1473,((1U & (vlTOPp->gpio_i 
                                         >> 0x1dU))));
        tracep->chgBit(oldp+1474,((1U & ((0x20000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1dU)))));
        tracep->chgBit(oldp+1475,((1U & (vlTOPp->gpio_i 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+1476,((1U & ((0x40000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1eU)))));
        tracep->chgBit(oldp+1477,((1U & (vlTOPp->gpio_i 
                                         >> 0x1fU))));
        tracep->chgBit(oldp+1478,((1U & ((0x80000000U 
                                          & vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1fU)))));
        tracep->chgIData(oldp+1479,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata),32);
        tracep->chgIData(oldp+1480,(((IData)(vlTOPp->rst_ni)
                                      ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                      : 0U)),32);
        tracep->chgBit(oldp+1481,((1U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar)))));
        tracep->chgBit(oldp+1482,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__req) 
                                   & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
        tracep->chgBit(oldp+1483,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgBit(oldp+1484,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+1485,((((IData)(vlTOPp->rst_ni)
                                       ? vlTOPp->opentitan_soc_top__DOT__iccm__DOT__rdata
                                       : 0U) & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgSData(oldp+1486,(((((4U != (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                >> 0x12U)))
                                        ? 0U : 1U) 
                                      << 0xbU) | (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.tl_d_o[2U] 
                                                        >> 5U))))),13);
        tracep->chgCData(oldp+1487,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+1488,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
        tracep->chgCData(oldp+1489,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+1490,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+1491,(((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+1492,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+1493,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x41U >= 
                                          (0x7fU & 
                                           ((IData)(0x21U) 
                                            * (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
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
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL)))),33);
        tracep->chgIData(oldp+1495,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata),32);
        tracep->chgBit(oldp+1496,((1U & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.tl_d_o[2U] 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar)))));
        tracep->chgBit(oldp+1497,(((IData)((0x800U 
                                            == (0x1c00U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgBit(oldp+1498,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+1499,((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rdata 
                                     & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgCData(oldp+1500,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+1501,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
        tracep->chgCData(oldp+1502,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+1503,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+1504,(((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
        tracep->chgBit(oldp+1505,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                   & ((IData)((0x800U 
                                               == (0x1c00U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
        tracep->chgQData(oldp+1506,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x83U >= 
                                          (0xffU & 
                                           ((IData)(0x21U) 
                                            * (3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
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
                                                        & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL)))),33);
        tracep->chgIData(oldp+1508,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie[0]),32);
        tracep->chgIData(oldp+1509,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_gateway__DOT__ia),32);
        tracep->chgBit(oldp+1510,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                  >> 0x33U)) 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[0U]))));
        tracep->chgBit(oldp+1511,(((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                   & (0U != (3U & (
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                    << 0x1bU) 
                                                   | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[1U] 
                                                      >> 5U)))))));
        tracep->chgBit(oldp+1512,((1U & (~ ((((0U == 
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
        tracep->chgBit(oldp+1513,((((IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.tl_d_o[2U] 
                                                    >> 0x12U)))) 
                                      | (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
        tracep->chgIData(oldp+1514,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ie
                                    [0U]),32);
        tracep->chgQData(oldp+1515,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree),63);
        tracep->chgBit(oldp+1517,((((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[0U]) 
                                    > vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__threshold
                                    [0U]) & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))));
        tracep->chgCData(oldp+1518,(((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree))
                                      ? (0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[0U])
                                      : 0U)),6);
        tracep->chgBit(oldp+1519,((1U & ((IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                  >> 0x33U)) 
                                         & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_d_o[0U]))));
        tracep->chgBit(oldp+1520,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty)))));
        tracep->chgBit(oldp+1521,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)))));
        tracep->chgIData(oldp+1522,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                      ? (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                 >> 0x20U))
                                      : (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux))),32);
        tracep->chgIData(oldp+1523,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d)),32);
        tracep->chgIData(oldp+1524,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d 
                                             >> 0x20U))),32);
        tracep->chgIData(oldp+1525,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                      ? 0U : (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                      >> 
                                                      (0x20U 
                                                       & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 5U)))))),32);
        tracep->chgCData(oldp+1526,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)
                                      ? 2U : (3U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    >> 1U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(2U) 
                                                    - 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        tracep->chgBit(oldp+1527,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+1528,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk))))));
        tracep->chgIData(oldp+1529,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage)),32);
        tracep->chgIData(oldp+1530,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                             >> 0x20U))),32);
        tracep->chgIData(oldp+1531,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                             >> (0x20U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 5U))))),32);
        tracep->chgQData(oldp+1532,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata),64);
        tracep->chgCData(oldp+1534,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_d),2);
        tracep->chgCData(oldp+1535,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
        tracep->chgBit(oldp+1536,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__td_o));
        tracep->chgBit(oldp+1537,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o));
        tracep->chgIData(oldp+1538,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                             [(3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))] 
                                             >> 2U))),32);
        tracep->chgCData(oldp+1539,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                                  [
                                                  (3U 
                                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]))),2);
        tracep->chgBit(oldp+1540,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty)))));
        tracep->chgBit(oldp+1541,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir)
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
        tracep->chgCData(oldp+1542,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr))))))),3);
        tracep->chgCData(oldp+1543,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                      == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->chgBit(oldp+1544,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_rptr));
        tracep->chgBit(oldp+1545,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty));
        tracep->chgBit(oldp+1546,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                   == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr)))));
        tracep->chgCData(oldp+1547,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr))))))),3);
        tracep->chgQData(oldp+1548,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                    [(3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))]),34);
        tracep->chgCData(oldp+1550,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                      == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                      ? 4U : (7U & 
                                              (((1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr) 
                                                    >> 2U)))
                                                ? (
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi)) 
                                                   - 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))
                                                : (
                                                   ((IData)(4U) 
                                                    - 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr))) 
                                                   + 
                                                   (3U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))))))),3);
        tracep->chgCData(oldp+1551,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray),3);
        tracep->chgBit(oldp+1552,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr));
        tracep->chgBit(oldp+1553,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty));
        tracep->chgBit(oldp+1554,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk));
        tracep->chgBit(oldp+1555,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                   == (4U ^ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr)))));
        tracep->chgCData(oldp+1556,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq),3);
        tracep->chgBit(oldp+1557,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                         & ((1U == 
                                             (3U & 
                                              ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU)))
                                             ? ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                | ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xaU))
                                             : ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                >> 0xaU))))));
        tracep->chgIData(oldp+1558,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q)
                                       ? (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux 
                                                  >> 0x20U))
                                       : (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux)) 
                                     & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask)),32);
        tracep->chgBit(oldp+1559,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full) 
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
        tracep->chgBit(oldp+1560,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
        tracep->chgSData(oldp+1561,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage),13);
        tracep->chgBit(oldp+1562,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full) 
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
        tracep->chgBit(oldp+1563,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                   & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))));
        tracep->chgCData(oldp+1564,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),5);
        tracep->chgBit(oldp+1565,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full) 
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
        tracep->chgQData(oldp+1566,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage),33);
        tracep->chgQData(oldp+1568,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))
                                      ? ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                         << 1U) : vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage)),33);
        tracep->chgIData(oldp+1570,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__num_req_outstanding),17);
        tracep->chgBit(oldp+1571,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_req_pending));
        tracep->chgBit(oldp+1572,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_rsp_pending));
        tracep->chgIData(oldp+1573,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__num_req_outstanding),17);
        tracep->chgBit(oldp+1574,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_rsp_pending));
        tracep->chgCData(oldp+1575,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__hfifo_rspvalid),2);
        tracep->chgCData(oldp+1576,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1577,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1578,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1579,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1580,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1581,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1582,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        tracep->chgCData(oldp+1583,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
    }
}

void Vopentitan_soc_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    IData/*31:0*/ __Vilp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vilp = 0U;
        while ((__Vilp <= 0x77U)) {
            vlTOPp->__Vm_traceActivity[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}
