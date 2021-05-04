// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopentitan_soc_top__Syms.h"


void Vopentitan_soc_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
        vlTOPp->traceChgSub1(userp, tracep);
        vlTOPp->traceChgSub2(userp, tracep);
    }
}

void Vopentitan_soc_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp3420[3];
    WData/*95:0*/ __Vtemp3436[3];
    WData/*95:0*/ __Vtemp3452[3];
    WData/*95:0*/ __Vtemp3468[3];
    WData/*95:0*/ __Vtemp3484[3];
    WData/*95:0*/ __Vtemp3500[3];
    WData/*95:0*/ __Vtemp3516[3];
    WData/*95:0*/ __Vtemp3532[3];
    WData/*95:0*/ __Vtemp3548[3];
    WData/*95:0*/ __Vtemp3564[3];
    WData/*95:0*/ __Vtemp3580[3];
    WData/*95:0*/ __Vtemp3596[3];
    WData/*95:0*/ __Vtemp3612[3];
    WData/*95:0*/ __Vtemp3997[3];
    WData/*95:0*/ __Vtemp4013[3];
    WData/*95:0*/ __Vtemp4029[3];
    WData/*95:0*/ __Vtemp4045[3];
    WData/*95:0*/ __Vtemp4061[3];
    WData/*95:0*/ __Vtemp4077[3];
    WData/*95:0*/ __Vtemp4093[3];
    WData/*95:0*/ __Vtemp4109[3];
    WData/*95:0*/ __Vtemp4125[3];
    WData/*95:0*/ __Vtemp4141[3];
    WData/*95:0*/ __Vtemp4157[3];
    WData/*95:0*/ __Vtemp4173[3];
    WData/*95:0*/ __Vtemp4189[3];
    WData/*95:0*/ __Vtemp4270[3];
    WData/*95:0*/ __Vtemp4274[3];
    WData/*95:0*/ __Vtemp4318[3];
    WData/*95:0*/ __Vtemp4322[3];
    WData/*95:0*/ __Vtemp4326[3];
    WData/*95:0*/ __Vtemp4406[3];
    WData/*95:0*/ __Vtemp4410[3];
    WData/*95:0*/ __Vtemp4414[3];
    WData/*95:0*/ __Vtemp4458[3];
    WData/*95:0*/ __Vtemp4462[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err),2);
            tracep->chgBit(oldp+1,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err))));
            tracep->chgBit(oldp+2,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
            tracep->chgIData(oldp+3,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev),32);
            tracep->chgBit(oldp+4,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err) 
                                          >> 1U))));
            tracep->chgIData(oldp+5,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
            tracep->chgIData(oldp+6,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
            tracep->chgIData(oldp+7,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
            tracep->chgIData(oldp+8,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
            tracep->chgIData(oldp+9,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
            tracep->chgIData(oldp+10,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
            tracep->chgIData(oldp+11,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
            tracep->chgIData(oldp+12,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
            tracep->chgIData(oldp+13,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
            tracep->chgIData(oldp+14,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
            tracep->chgIData(oldp+15,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
            tracep->chgIData(oldp+16,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
            tracep->chgIData(oldp+17,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
            tracep->chgIData(oldp+18,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
            tracep->chgIData(oldp+19,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
            tracep->chgIData(oldp+20,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
            tracep->chgCData(oldp+21,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
            tracep->chgCData(oldp+22,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
            tracep->chgCData(oldp+23,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
            tracep->chgCData(oldp+24,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
            tracep->chgCData(oldp+25,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
            tracep->chgCData(oldp+26,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
            tracep->chgCData(oldp+27,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
            tracep->chgCData(oldp+28,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
            tracep->chgCData(oldp+29,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
            tracep->chgCData(oldp+30,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
            tracep->chgCData(oldp+31,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
            tracep->chgCData(oldp+32,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
            tracep->chgCData(oldp+33,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
            tracep->chgCData(oldp+34,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
            tracep->chgCData(oldp+35,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
            tracep->chgCData(oldp+36,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
            tracep->chgIData(oldp+37,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
            tracep->chgIData(oldp+38,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
            tracep->chgIData(oldp+39,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
            tracep->chgIData(oldp+40,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
            tracep->chgIData(oldp+41,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
            tracep->chgIData(oldp+42,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
            tracep->chgIData(oldp+43,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
            tracep->chgIData(oldp+44,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
            tracep->chgIData(oldp+45,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
            tracep->chgIData(oldp+46,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
            tracep->chgIData(oldp+47,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
            tracep->chgIData(oldp+48,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
            tracep->chgIData(oldp+49,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
            tracep->chgIData(oldp+50,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
            tracep->chgIData(oldp+51,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
            tracep->chgIData(oldp+52,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
            tracep->chgIData(oldp+53,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
            tracep->chgIData(oldp+54,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
            tracep->chgIData(oldp+55,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
            tracep->chgIData(oldp+56,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
            tracep->chgIData(oldp+57,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
            tracep->chgIData(oldp+58,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
            tracep->chgIData(oldp+59,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
            tracep->chgIData(oldp+60,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
            tracep->chgIData(oldp+61,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
            tracep->chgIData(oldp+62,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
            tracep->chgIData(oldp+63,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
            tracep->chgIData(oldp+64,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
            tracep->chgIData(oldp+65,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
            tracep->chgIData(oldp+66,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
            tracep->chgIData(oldp+67,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
            tracep->chgIData(oldp+68,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
            tracep->chgCData(oldp+69,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d),6);
            tracep->chgBit(oldp+70,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__we));
            tracep->chgIData(oldp+71,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+72,((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__addr_w 
                                       << 2U)),32);
            tracep->chgIData(oldp+73,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__addr_w),30);
            tracep->chgCData(oldp+74,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0x18U)))),8);
            tracep->chgCData(oldp+75,((0xfU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                       >> 0x14U)))),4);
            tracep->chgCData(oldp+76,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x11U)))),3);
            tracep->chgBit(oldp+77,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 0x10U)))));
            tracep->chgCData(oldp+78,((0xfU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                       >> 0xcU)))),4);
            tracep->chgSData(oldp+79,((0xfffU & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned))),12);
            tracep->chgCData(oldp+80,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0x38U)))),8);
            tracep->chgCData(oldp+81,((0xfU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                       >> 0x34U)))),4);
            tracep->chgCData(oldp+82,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x31U)))),3);
            tracep->chgBit(oldp+83,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 0x30U)))));
            tracep->chgCData(oldp+84,((0xfU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                       >> 0x2cU)))),4);
            tracep->chgSData(oldp+85,((0xfffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                         >> 0x20U)))),12);
            tracep->chgBit(oldp+86,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int)));
            tracep->chgBit(oldp+87,((0x800U <= (0xffcU 
                                                & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__addr_w 
                                                   << 2U)))));
            tracep->chgQData(oldp+88,((QData)((IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__addr_w 
                                                       << 2U)))),64);
            tracep->chgIData(oldp+90,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+91,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal));
            tracep->chgBit(oldp+92,((1U & (~ ((((0U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                     >> 0x12U))) 
                                                | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                       >> 0x12U)))) 
                                               | (4U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                      >> 0x12U)))) 
                                              & (((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk) 
                                                  & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk)) 
                                                 & (((4U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                          >> 0x12U))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                            >> 0x12U)))) 
                                                    | (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk))))))));
            tracep->chgIData(oldp+93,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+94,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+95,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+96,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk) 
                                      & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk)) 
                                     & (((4U == (7U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                    >> 0x12U))) 
                                         | (1U == (7U 
                                                   & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                      >> 0x12U)))) 
                                        | (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+97,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+98,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+99,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgSData(oldp+100,(((((4U != (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                     >> 0x12U)))
                                           ? 0U : 1U) 
                                         << 0xbU) | 
                                        (((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal) 
                                          << 0xaU) 
                                         | (0x3ffU 
                                            & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               >> 5U))))),13);
            tracep->chgBit(oldp+101,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+102,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+103,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+104,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+105,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+106,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+107,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+108,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+109,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+110,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+111,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+112,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+113,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+114,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+115,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+116,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+117,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+118,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+119,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+120,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+121,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+122,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+123,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+124,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+125,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+126,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+127,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+128,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+129,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+130,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+131,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+132,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+133,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+134,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+135,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+136,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+137,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+138,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+139,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+140,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+141,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+142,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+143,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+144,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+145,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+146,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+147,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+148,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+149,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+150,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+151,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+152,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+153,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+154,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+155,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+156,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+157,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+158,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+159,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+160,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+161,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+162,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+163,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+164,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+165,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+166,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+167,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+168,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+169,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+170,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+171,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+172,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+173,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+174,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+175,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+176,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+177,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+178,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+179,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+180,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+181,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+182,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+183,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+184,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+185,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+186,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+187,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+188,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+189,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+190,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+191,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+192,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+193,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+194,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+195,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+196,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgCData(oldp+197,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0]),4);
            tracep->chgCData(oldp+198,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[1]),4);
            tracep->chgCData(oldp+199,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[2]),4);
            tracep->chgCData(oldp+200,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[3]),4);
            tracep->chgCData(oldp+201,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[4]),4);
            tracep->chgCData(oldp+202,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[5]),4);
            tracep->chgCData(oldp+203,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[6]),4);
            tracep->chgCData(oldp+204,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[7]),4);
            tracep->chgCData(oldp+205,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[8]),4);
            tracep->chgCData(oldp+206,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[9]),4);
            tracep->chgCData(oldp+207,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[10]),4);
            tracep->chgCData(oldp+208,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[11]),4);
            tracep->chgCData(oldp+209,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[12]),4);
            tracep->chgCData(oldp+210,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[13]),4);
            tracep->chgCData(oldp+211,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[14]),4);
            tracep->chgCData(oldp+212,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0]),4);
            tracep->chgCData(oldp+213,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[1]),4);
            tracep->chgCData(oldp+214,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[2]),4);
            tracep->chgCData(oldp+215,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[3]),4);
            tracep->chgCData(oldp+216,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[4]),4);
            tracep->chgCData(oldp+217,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[5]),4);
            tracep->chgCData(oldp+218,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[6]),4);
            tracep->chgCData(oldp+219,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[7]),4);
            tracep->chgCData(oldp+220,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[8]),4);
            tracep->chgCData(oldp+221,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[9]),4);
            tracep->chgCData(oldp+222,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[10]),4);
            tracep->chgCData(oldp+223,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[11]),4);
            tracep->chgCData(oldp+224,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[12]),4);
            tracep->chgCData(oldp+225,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[13]),4);
            tracep->chgCData(oldp+226,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[14]),4);
            tracep->chgCData(oldp+227,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[15]),4);
            tracep->chgCData(oldp+228,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[16]),4);
            tracep->chgCData(oldp+229,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[17]),4);
            tracep->chgCData(oldp+230,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[18]),4);
            tracep->chgCData(oldp+231,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[19]),4);
            tracep->chgCData(oldp+232,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[20]),4);
            tracep->chgCData(oldp+233,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[21]),4);
            tracep->chgCData(oldp+234,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[22]),4);
            tracep->chgCData(oldp+235,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[23]),4);
            tracep->chgCData(oldp+236,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[24]),4);
            tracep->chgCData(oldp+237,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[25]),4);
            tracep->chgCData(oldp+238,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[26]),4);
            tracep->chgCData(oldp+239,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[27]),4);
            tracep->chgCData(oldp+240,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[28]),4);
            tracep->chgCData(oldp+241,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[29]),4);
            tracep->chgCData(oldp+242,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[30]),4);
            tracep->chgCData(oldp+243,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[31]),4);
            tracep->chgCData(oldp+244,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[32]),4);
            tracep->chgCData(oldp+245,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[33]),4);
            tracep->chgCData(oldp+246,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[34]),4);
            tracep->chgCData(oldp+247,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[35]),4);
            tracep->chgCData(oldp+248,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[36]),4);
            tracep->chgCData(oldp+249,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[37]),4);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+250,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q),5);
            tracep->chgIData(oldp+251,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id),32);
            tracep->chgBit(oldp+252,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+253,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q),32);
            tracep->chgSData(oldp+254,(((0x3e0U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                   >> 0xaU)) 
                                        | (0x1fU & 
                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                            >> 7U)))),10);
            tracep->chgBit(oldp+255,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q));
            tracep->chgCData(oldp+256,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+257,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgBit(oldp+258,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
            tracep->chgCData(oldp+259,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgBit(oldp+260,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+261,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+262,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+263,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+264,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id),32);
            tracep->chgCData(oldp+265,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))),5);
            tracep->chgIData(oldp+266,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U)))),32);
            tracep->chgIData(oldp+267,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | ((0xfe0U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))))),32);
            tracep->chgIData(oldp+268,(((0xffffe000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xdU)) 
                                        | ((0x1000U 
                                            & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 7U))))))),32);
            tracep->chgIData(oldp+269,((0xfffff000U 
                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+270,(((0xfff00000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0x14U)) 
                                        | ((0xff000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                           | ((0x800U 
                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)))))),32);
            tracep->chgIData(oldp+271,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU))),32);
            tracep->chgCData(oldp+272,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x1bU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+273,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe));
            tracep->chgBit(oldp+274,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe));
            tracep->chgBit(oldp+275,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe));
            tracep->chgBit(oldp+276,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe));
            tracep->chgBit(oldp+277,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe));
            tracep->chgBit(oldp+278,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe));
            tracep->chgBit(oldp+279,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe));
            tracep->chgBit(oldp+280,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe));
            tracep->chgBit(oldp+281,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe));
            tracep->chgBit(oldp+282,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe));
            tracep->chgBit(oldp+283,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe));
            tracep->chgBit(oldp+284,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe));
            tracep->chgBit(oldp+285,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe));
            tracep->chgBit(oldp+286,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe));
            tracep->chgBit(oldp+287,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe));
            tracep->chgBit(oldp+288,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe));
            tracep->chgCData(oldp+289,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__dev_select_outstanding),4);
            tracep->chgCData(oldp+290,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+291,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+292,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_size),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgWData(oldp+293,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q),68);
            tracep->chgBit(oldp+296,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
            tracep->chgQData(oldp+297,((((QData)((IData)(
                                                         ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                             >> 2U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U])))),64);
            tracep->chgIData(oldp+299,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U]),32);
            tracep->chgCData(oldp+300,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
            tracep->chgCData(oldp+301,((3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])),2);
            tracep->chgBit(oldp+302,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
            tracep->chgCData(oldp+303,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgWData(oldp+304,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg),1024);
            tracep->chgWData(oldp+336,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q),992);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgIData(oldp+367,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q),32);
            tracep->chgBit(oldp+368,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q));
            tracep->chgBit(oldp+369,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgIData(oldp+370,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgCData(oldp+371,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgBit(oldp+372,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgBit(oldp+373,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgBit(oldp+374,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval));
            tracep->chgCData(oldp+375,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),6);
            tracep->chgBit(oldp+376,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex));
            tracep->chgBit(oldp+377,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex));
            tracep->chgCData(oldp+378,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+379,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+380,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access));
            tracep->chgCData(oldp+381,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+382,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgCData(oldp+383,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
                                         ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                             ? 1U : 0U)
                                         : 2U)),2);
            tracep->chgBit(oldp+384,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+385,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+386,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+387,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+388,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+389,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+390,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+391,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+392,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgBit(oldp+393,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+394,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgBit(oldp+395,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
            tracep->chgBit(oldp+396,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
            tracep->chgCData(oldp+397,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+398,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgBit(oldp+399,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+400,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgBit(oldp+401,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+402,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+403,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+404,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgCData(oldp+405,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgBit(oldp+406,((8U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgBit(oldp+407,(((3U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (6U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+408,(((4U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (7U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+409,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgCData(oldp+410,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+411,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+412,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+413,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+414,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+415,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+416,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+417,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+418,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+419,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+420,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+421,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+422,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+423,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+424,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+425,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+426,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+427,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+428,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+429,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0xaU] | vlTOPp->__Vm_traceActivity
                         [0xbU]))) {
            tracep->chgSData(oldp+430,(((0x19U >= (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1fffU 
                                            & (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                               >> (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                         : 0U)),13);
            tracep->chgCData(oldp+431,(((9U >= (0xfU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1fU & 
                                            ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                             >> (0xfU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                         : 0U)),5);
            tracep->chgQData(oldp+432,(((0x41U >= (0x7fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1ffffffffULL 
                                            & (((0U 
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
                                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                         : 0ULL)),33);
            tracep->chgSData(oldp+434,(((0x33U >= (0x3fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1fffU 
                                            & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(0xdU) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                         : 0U)),13);
            tracep->chgCData(oldp+435,(((0x13U >= (0x1fU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1fU & 
                                            (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                             >> (0x1fU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                         : 0U)),5);
            tracep->chgQData(oldp+436,(((0x83U >= (0xffU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1ffffffffULL 
                                            & (((0U 
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
                                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                         : 0ULL)),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgCData(oldp+438,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q),8);
            tracep->chgBit(oldp+439,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q));
            tracep->chgBit(oldp+440,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__instr_valid));
            tracep->chgSData(oldp+441,((0x1fffU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)),13);
            tracep->chgSData(oldp+442,((0x1fffU & (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                   >> 0xdU))),13);
            tracep->chgCData(oldp+443,((0x1fU & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage))),5);
            tracep->chgCData(oldp+444,((0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                 >> 5U))),5);
            tracep->chgQData(oldp+445,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+447,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                              >> 1U)))),33);
            tracep->chgBit(oldp+449,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rvalid));
            tracep->chgSData(oldp+450,((0x1fffU & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage))),13);
            tracep->chgSData(oldp+451,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0xdU)))),13);
            tracep->chgSData(oldp+452,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x1aU)))),13);
            tracep->chgSData(oldp+453,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x27U)))),13);
            tracep->chgCData(oldp+454,((0x1fU & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)),5);
            tracep->chgCData(oldp+455,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 5U))),5);
            tracep->chgCData(oldp+456,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+457,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+458,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+460,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                               << 0x1fU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                                 >> 1U))))),33);
            tracep->chgQData(oldp+462,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                                 >> 2U))))),33);
            tracep->chgQData(oldp+464,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                              >> 3U)))),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgCData(oldp+466,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+467,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+468,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+469,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+470,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+471,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+472,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+473,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+474,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+475,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+476,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+477,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+478,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+479,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+480,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+481,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+482,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+483,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+484,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+485,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+486,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+487,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+488,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+489,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+490,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+491,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+492,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+493,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+494,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+495,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+496,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+497,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+498,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+499,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+500,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+501,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+502,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+503,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+504,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+505,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            tracep->chgCData(oldp+506,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+507,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))));
            tracep->chgCData(oldp+508,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 8U))),2);
            tracep->chgCData(oldp+509,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+510,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+511,((0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                >> 1U))),4);
            tracep->chgBit(oldp+512,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+513,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+514,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
            tracep->chgCData(oldp+515,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+516,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))));
            tracep->chgCData(oldp+517,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 8U))),2);
            tracep->chgCData(oldp+518,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+519,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+520,((0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                >> 1U))),4);
            tracep->chgBit(oldp+521,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+522,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+523,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
            tracep->chgBit(oldp+524,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+525,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask),32);
            tracep->chgBit(oldp+526,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+527,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
            tracep->chgBit(oldp+528,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+529,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask),32);
            tracep->chgBit(oldp+530,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+531,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x10U])) {
            tracep->chgBit(oldp+532,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+533,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+534,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+535,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+536,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+537,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+538,((IData)((vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                >> 2U))),32);
            tracep->chgBit(oldp+539,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 1U)))));
            tracep->chgBit(oldp+540,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar))));
            tracep->chgIData(oldp+541,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+542,((IData)((vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                >> 1U))),32);
            tracep->chgBit(oldp+543,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgQData(oldp+544,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                        << 1U)),33);
            tracep->chgQData(oldp+546,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
            tracep->chgBit(oldp+548,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+549,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+550,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+551,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+552,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+553,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+554,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+555,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+556,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+557,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+558,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+559,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+560,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar))));
            tracep->chgBit(oldp+561,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+562,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            tracep->chgBit(oldp+564,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid));
            tracep->chgIData(oldp+565,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgBit(oldp+566,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid));
            tracep->chgQData(oldp+567,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                        << 1U)),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
            tracep->chgIData(oldp+569,((IData)((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                >> 1U))),32);
            tracep->chgBit(oldp+570,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgQData(oldp+571,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x13U])) {
            tracep->chgBit(oldp+573,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+574,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+575,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+576,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+577,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+578,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+579,((IData)((vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                >> 2U))),32);
            tracep->chgBit(oldp+580,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 1U)))));
            tracep->chgBit(oldp+581,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar))));
            tracep->chgBit(oldp+582,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+583,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+584,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+585,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+586,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+587,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+588,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+589,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+590,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+591,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+592,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+593,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar))));
            tracep->chgBit(oldp+594,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+595,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x14U])) {
            tracep->chgCData(oldp+597,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+598,((0xfffffffcU 
                                        & ((IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 3U)) 
                                           << 2U))),32);
            tracep->chgIData(oldp+599,(((1U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 1U)))
                                             ? ((0xff000000U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                    << 0x18U)) 
                                                | (0xffffffU 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                      >> 8U)))
                                             : ((0xffff0000U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                    << 0x10U)) 
                                                | (0xffffU 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                      >> 0x10U))))
                                         : ((1U & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 1U)))
                                             ? ((0xffffff00U 
                                                 & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                      >> 0x18U)))
                                             : vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))),32);
            tracep->chgIData(oldp+600,((IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 1U))),32);
            tracep->chgIData(oldp+601,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+602,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgIData(oldp+603,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd),32);
            tracep->chgIData(oldp+604,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd),32);
            tracep->chgIData(oldp+605,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b),32);
            tracep->chgCData(oldp+606,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+607,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgQData(oldp+608,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
            tracep->chgQData(oldp+610,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+612,((0U == (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))));
            tracep->chgBit(oldp+613,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgQData(oldp+614,((0x1ffffffffULL 
                                        & (~ ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                              << 1U)))),33);
            tracep->chgBit(oldp+616,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
            tracep->chgQData(oldp+617,((0x1ffffffffULL 
                                        & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                            : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                ? (~ 
                                                   ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                    << 1U))
                                                : ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                   << 1U))))),33);
            tracep->chgCData(oldp+619,((0x3fU & ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgCData(oldp+620,(((0x10U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                  >> 0x18U))))) 
                                                  << 4U)) 
                                        | (0xfU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                   >> 0x18U)))),5);
            tracep->chgCData(oldp+621,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                 >> 0x10U))),5);
            tracep->chgIData(oldp+622,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+623,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+624,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        ^ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgBit(oldp+625,((1U & (((IData)(0x20U) 
                                             - (0x1fU 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                            >> 5U))));
            tracep->chgCData(oldp+626,(((2U & ((IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x21U)) 
                                               << 1U)) 
                                        | (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
            tracep->chgCData(oldp+627,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x15U])) {
            tracep->chgBit(oldp+628,((1U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+629,((7U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+630,((7U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+631,((3U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+632,((0xffU & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+633,(((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+634,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+635,(((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+636,((1U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U])));
            tracep->chgBit(oldp+637,((1U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+638,((1U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x16U])) {
            tracep->chgBit(oldp+639,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+640,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+641,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+642,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+643,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+644,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+645,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+646,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+647,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [0U][0U])));
            tracep->chgBit(oldp+648,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+649,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+650,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+651,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+652,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+653,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+654,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+655,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+656,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [1U][0U])));
            tracep->chgBit(oldp+657,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+658,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+659,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+660,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+661,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+662,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [2U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+663,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+664,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [2U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+665,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [2U][0U])));
            tracep->chgBit(oldp+666,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+667,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [3U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+668,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [3U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+669,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [3U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+670,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [3U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+671,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [3U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [3U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+672,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [3U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [3U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+673,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [3U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [3U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+674,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [3U][0U])));
            tracep->chgBit(oldp+675,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+676,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [4U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+677,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [4U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+678,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [4U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+679,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [4U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+680,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [4U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [4U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+681,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [4U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [4U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+682,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [4U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [4U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+683,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [4U][0U])));
            tracep->chgBit(oldp+684,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+685,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [5U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+686,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [5U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+687,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [5U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+688,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [5U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+689,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [5U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [5U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+690,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [5U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [5U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+691,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [5U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [5U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+692,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [5U][0U])));
            tracep->chgBit(oldp+693,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+694,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [6U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+695,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [6U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+696,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [6U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+697,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+698,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [6U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [6U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+699,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+700,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [6U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [6U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+701,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [6U][0U])));
            tracep->chgBit(oldp+702,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+703,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [7U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+704,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [7U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+705,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [7U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+706,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [7U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+707,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [7U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [7U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+708,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [7U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [7U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+709,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [7U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [7U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+710,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [7U][0U])));
            tracep->chgBit(oldp+711,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+712,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [8U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+713,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [8U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+714,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [8U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+715,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [8U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+716,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [8U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [8U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+717,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [8U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [8U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+718,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [8U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [8U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+719,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [8U][0U])));
            tracep->chgBit(oldp+720,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+721,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [9U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+722,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [9U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+723,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [9U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+724,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+725,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [9U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+726,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+727,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [9U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+728,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [9U][0U])));
            tracep->chgBit(oldp+729,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0xaU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+730,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xaU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+731,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xaU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+732,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xaU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+733,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+734,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xaU][2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xaU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+735,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+736,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xaU][1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xaU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+737,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [0xaU][0U])));
            tracep->chgBit(oldp+738,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0xbU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+739,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xbU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+740,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xbU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+741,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xbU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+742,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xbU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+743,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xbU][2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xbU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+744,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xbU][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xbU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+745,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xbU][1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xbU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+746,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [0xbU][0U])));
            tracep->chgBit(oldp+747,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0xcU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+748,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xcU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+749,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xcU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+750,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xcU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+751,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xcU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+752,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xcU][2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xcU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+753,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xcU][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xcU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+754,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xcU][1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xcU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+755,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [0xcU][0U])));
            tracep->chgCData(oldp+756,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10),4);
            tracep->chgBit(oldp+757,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+758,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+759,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+760,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+761,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+762,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+763,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+764,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+765,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [0U][0U])));
            tracep->chgBit(oldp+766,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+767,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+768,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+769,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+770,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+771,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+772,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+773,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+774,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [1U][0U])));
            tracep->chgBit(oldp+775,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+776,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+777,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+778,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+779,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+780,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [2U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+781,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+782,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [2U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+783,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [2U][0U])));
            tracep->chgBit(oldp+784,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [3U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+785,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [3U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+786,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [3U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+787,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [3U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+788,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [3U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+789,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [3U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [3U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+790,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [3U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [3U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+791,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [3U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [3U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+792,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [3U][0U])));
            tracep->chgBit(oldp+793,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [4U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+794,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [4U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+795,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [4U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+796,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [4U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+797,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [4U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+798,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [4U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [4U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+799,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [4U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [4U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+800,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [4U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [4U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+801,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [4U][0U])));
            tracep->chgBit(oldp+802,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [5U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+803,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [5U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+804,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [5U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+805,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [5U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+806,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [5U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+807,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [5U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [5U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+808,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [5U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [5U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+809,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [5U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [5U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+810,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [5U][0U])));
            tracep->chgBit(oldp+811,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [6U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+812,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [6U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+813,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [6U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+814,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [6U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+815,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [6U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+816,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [6U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [6U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+817,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [6U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+818,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [6U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [6U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+819,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [6U][0U])));
            tracep->chgBit(oldp+820,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [7U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+821,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [7U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+822,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [7U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+823,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [7U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+824,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [7U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+825,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [7U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [7U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+826,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [7U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [7U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+827,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [7U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [7U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+828,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [7U][0U])));
            tracep->chgBit(oldp+829,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [8U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+830,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [8U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+831,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [8U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+832,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [8U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+833,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [8U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+834,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [8U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [8U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+835,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [8U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [8U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+836,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [8U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [8U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+837,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [8U][0U])));
            tracep->chgBit(oldp+838,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [9U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+839,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [9U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+840,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [9U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+841,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [9U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+842,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [9U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+843,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [9U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [9U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+844,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [9U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [9U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+845,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [9U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [9U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+846,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [9U][0U])));
            tracep->chgBit(oldp+847,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [0xaU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+848,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xaU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+849,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xaU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+850,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xaU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+851,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xaU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+852,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xaU][2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xaU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+853,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xaU][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [0xaU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+854,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xaU][1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xaU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+855,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [0xaU][0U])));
            tracep->chgBit(oldp+856,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [0xbU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+857,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xbU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+858,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xbU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+859,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xbU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+860,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xbU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+861,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xbU][2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xbU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+862,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xbU][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [0xbU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+863,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xbU][1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xbU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+864,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [0xbU][0U])));
            tracep->chgBit(oldp+865,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [0xcU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+866,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xcU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+867,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xcU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+868,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xcU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+869,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xcU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+870,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xcU][2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xcU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+871,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xcU][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [0xcU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+872,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xcU][1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xcU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+873,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [0xcU][0U])));
            tracep->chgCData(oldp+874,((0xfU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgBit(oldp+875,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+876,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+877,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+878,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+879,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+880,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+881,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+882,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+883,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[0U])));
            tracep->chgBit(oldp+884,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__hold_all_requests));
            tracep->chgBit(oldp+885,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+886,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+887,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+888,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+889,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+890,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+891,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+892,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+893,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [0U][0U])));
            tracep->chgBit(oldp+894,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+895,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+896,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+897,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+898,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+899,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+900,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+901,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+902,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [1U][0U])));
            tracep->chgBit(oldp+903,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+904,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+905,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+906,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+907,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+908,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [2U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+909,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+910,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [2U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+911,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [2U][0U])));
            tracep->chgBit(oldp+912,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [3U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+913,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [3U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+914,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [3U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+915,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [3U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+916,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [3U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+917,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [3U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [3U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+918,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [3U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [3U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+919,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [3U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [3U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+920,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [3U][0U])));
            tracep->chgBit(oldp+921,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [4U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+922,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [4U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+923,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [4U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+924,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [4U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+925,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [4U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+926,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [4U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [4U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+927,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [4U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [4U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+928,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [4U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [4U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+929,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [4U][0U])));
            tracep->chgBit(oldp+930,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [5U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+931,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [5U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+932,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [5U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+933,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [5U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+934,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [5U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+935,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [5U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [5U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+936,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [5U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [5U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+937,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [5U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [5U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+938,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [5U][0U])));
            tracep->chgBit(oldp+939,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [6U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+940,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [6U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+941,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [6U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+942,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [6U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+943,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [6U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+944,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [6U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [6U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+945,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [6U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+946,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [6U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [6U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+947,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [6U][0U])));
            tracep->chgBit(oldp+948,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [7U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+949,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [7U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+950,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [7U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+951,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [7U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+952,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [7U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+953,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [7U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [7U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+954,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [7U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [7U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+955,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [7U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [7U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+956,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [7U][0U])));
            tracep->chgBit(oldp+957,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [8U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+958,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [8U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+959,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [8U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+960,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [8U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+961,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [8U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+962,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [8U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [8U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+963,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [8U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [8U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+964,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [8U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [8U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+965,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [8U][0U])));
            tracep->chgBit(oldp+966,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [9U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+967,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [9U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+968,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [9U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+969,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [9U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+970,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [9U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+971,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [9U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [9U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+972,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [9U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [9U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+973,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [9U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [9U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+974,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [9U][0U])));
            tracep->chgBit(oldp+975,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xaU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+976,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+977,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+978,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0xaU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+979,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [0xaU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+980,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [0xaU][2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [0xaU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+981,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [0xaU][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [0xaU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+982,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [0xaU][1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [0xaU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+983,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [0xaU][0U])));
            tracep->chgBit(oldp+984,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xbU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+985,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0xbU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+986,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0xbU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+987,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0xbU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+988,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [0xbU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+989,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [0xbU][2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [0xbU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+990,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [0xbU][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [0xbU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+991,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [0xbU][1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [0xbU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+992,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                      [0xbU][0U])));
            tracep->chgBit(oldp+993,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xcU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+994,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0xcU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+995,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0xcU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+996,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                              [0xcU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+997,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [0xcU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+998,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                         [0xcU][2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                           [0xcU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+999,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                 [0xcU][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                   [0xcU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+1000,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1001,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xcU][0U])));
            tracep->chgBit(oldp+1002,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xdU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1003,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1004,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1005,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1006,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1007,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xdU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xdU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1008,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xdU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1009,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xdU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xdU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1010,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xdU][0U])));
            tracep->chgWData(oldp+1011,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+1014,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xdU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1015,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1016,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1017,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1018,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1019,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xdU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xdU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1020,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xdU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1021,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xdU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xdU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1022,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xdU][0U])));
            tracep->chgBit(oldp+1023,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1024,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1025,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1026,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1027,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1028,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1029,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1030,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1031,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1032,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1033,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1034,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1035,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1036,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1037,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1038,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1039,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1040,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1041,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            __Vtemp3420[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [0U][0U]);
            __Vtemp3420[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0U][1U]));
            __Vtemp3420[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+1042,(__Vtemp3420),85);
            tracep->chgBit(oldp+1045,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1046,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1047,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1048,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1049,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1050,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1051,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1052,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1053,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1054,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1055,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1056,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1057,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1058,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1059,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1060,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1061,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1062,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1063,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1064,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            __Vtemp3436[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [1U][0U]);
            __Vtemp3436[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [1U][1U]));
            __Vtemp3436[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+1065,(__Vtemp3436),85);
            tracep->chgBit(oldp+1068,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1069,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1070,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1071,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1072,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1073,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1074,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1075,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1076,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1077,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1078,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1079,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1080,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1081,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1082,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1083,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1084,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1085,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1086,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1087,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            __Vtemp3452[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [2U][0U]);
            __Vtemp3452[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [2U][1U]));
            __Vtemp3452[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+1088,(__Vtemp3452),85);
            tracep->chgBit(oldp+1091,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1092,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1093,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1094,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1095,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1096,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1097,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1098,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1099,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1100,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1101,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1102,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1103,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1104,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1105,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1106,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1107,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1108,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1109,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1110,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            __Vtemp3468[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [3U][0U]);
            __Vtemp3468[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [3U][1U]));
            __Vtemp3468[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+1111,(__Vtemp3468),85);
            tracep->chgBit(oldp+1114,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1115,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1116,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1117,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1118,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1119,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1120,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1121,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1122,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1123,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1124,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1125,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1126,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1127,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1128,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1129,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1130,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1131,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1132,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1133,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            __Vtemp3484[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [4U][0U]);
            __Vtemp3484[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [4U][1U]));
            __Vtemp3484[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+1134,(__Vtemp3484),85);
            tracep->chgBit(oldp+1137,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1138,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1139,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1140,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1141,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1142,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1143,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1144,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1145,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1146,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1147,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1148,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1149,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1150,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1151,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1152,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1153,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1154,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1155,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1156,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            __Vtemp3500[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [5U][0U]);
            __Vtemp3500[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [5U][1U]));
            __Vtemp3500[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+1157,(__Vtemp3500),85);
            tracep->chgBit(oldp+1160,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1161,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1162,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1163,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1164,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1165,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1166,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1167,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1168,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1169,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1170,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1171,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1172,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1173,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1174,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1175,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1176,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1177,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1178,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1179,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            __Vtemp3516[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [6U][0U]);
            __Vtemp3516[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [6U][1U]));
            __Vtemp3516[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+1180,(__Vtemp3516),85);
            tracep->chgBit(oldp+1183,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1184,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1185,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1186,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1187,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1188,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1189,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1190,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1191,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1192,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1193,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1194,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1195,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1196,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1197,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1198,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1199,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1200,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1201,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1202,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            __Vtemp3532[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [7U][0U]);
            __Vtemp3532[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [7U][1U]));
            __Vtemp3532[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+1203,(__Vtemp3532),85);
            tracep->chgBit(oldp+1206,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1207,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1208,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1209,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1210,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1211,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1212,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1213,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1214,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1215,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1216,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1217,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1218,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1219,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1220,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1221,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1222,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1223,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1224,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1225,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            __Vtemp3548[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [8U][0U]);
            __Vtemp3548[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [8U][1U]));
            __Vtemp3548[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+1226,(__Vtemp3548),85);
            tracep->chgBit(oldp+1229,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1230,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1231,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1232,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1233,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1234,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1235,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1236,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1237,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1238,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+1239,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1240,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1241,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1242,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1243,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1244,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1245,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1246,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1247,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1248,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            __Vtemp3564[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [9U][0U]);
            __Vtemp3564[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [9U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [9U][1U]));
            __Vtemp3564[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [9U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [9U][2U]));
            tracep->chgWData(oldp+1249,(__Vtemp3564),85);
            tracep->chgBit(oldp+1252,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+1253,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1254,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1255,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1256,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1257,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1258,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1259,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1260,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1261,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1262,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1263,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1264,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1265,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1266,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1267,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1268,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1269,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1270,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1271,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            __Vtemp3580[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [0xaU][0U]);
            __Vtemp3580[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xaU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][1U]));
            __Vtemp3580[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xaU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][2U]));
            tracep->chgWData(oldp+1272,(__Vtemp3580),85);
            tracep->chgBit(oldp+1275,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1276,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1277,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1278,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1279,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1280,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1281,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xbU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xbU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1282,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xbU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1283,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xbU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xbU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1284,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+1285,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1286,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1287,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1288,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1289,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1290,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1291,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1292,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1293,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1294,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            __Vtemp3596[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [0xbU][0U]);
            __Vtemp3596[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xbU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][1U]));
            __Vtemp3596[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xbU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][2U]));
            tracep->chgWData(oldp+1295,(__Vtemp3596),85);
            tracep->chgBit(oldp+1298,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+1299,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1300,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1301,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1302,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1303,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1304,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xcU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xcU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1305,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xcU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1306,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1307,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xcU][0U])));
            tracep->chgBit(oldp+1308,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1309,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1310,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1311,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1312,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1313,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1314,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1315,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1316,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1317,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            __Vtemp3612[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [0xcU][0U]);
            __Vtemp3612[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xcU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][1U]));
            __Vtemp3612[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xcU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][2U]));
            tracep->chgWData(oldp+1318,(__Vtemp3612),85);
            tracep->chgBit(oldp+1321,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xcU][0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x17U])) {
            tracep->chgBit(oldp+1322,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q));
            tracep->chgIData(oldp+1323,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__ip),32);
            tracep->chgBit(oldp+1324,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q));
            tracep->chgBit(oldp+1325,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q));
            tracep->chgBit(oldp+1326,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q));
            tracep->chgBit(oldp+1327,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q));
            tracep->chgCData(oldp+1328,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q),6);
            tracep->chgBit(oldp+1329,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q));
            tracep->chgCData(oldp+1330,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x18U])) {
            tracep->chgBit(oldp+1331,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
            tracep->chgBit(oldp+1332,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgIData(oldp+1333,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1334,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1335,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgCData(oldp+1336,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
            tracep->chgCData(oldp+1337,((3U & ((2U 
                                                & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                                ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                   >> 2U)
                                                : (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
            tracep->chgBit(oldp+1338,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
            tracep->chgBit(oldp+1339,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 2U))));
            tracep->chgBit(oldp+1340,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1341,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1342,((0xffU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
            tracep->chgBit(oldp+1343,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)))));
            tracep->chgBit(oldp+1344,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
            tracep->chgBit(oldp+1345,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
            tracep->chgCData(oldp+1346,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgBit(oldp+1347,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
            tracep->chgBit(oldp+1348,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
            tracep->chgBit(oldp+1349,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
            tracep->chgBit(oldp+1350,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
            tracep->chgCData(oldp+1351,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+1352,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
            tracep->chgIData(oldp+1353,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1354,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x19U])) {
            tracep->chgBit(oldp+1355,((0U != vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)));
            tracep->chgIData(oldp+1356,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs),18);
            tracep->chgCData(oldp+1357,(((0x4000U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                          ? 0xeU : 
                                         ((0x2000U 
                                           & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                           ? 0xdU : 
                                          ((0x1000U 
                                            & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                            ? 0xcU : 
                                           ((0x800U 
                                             & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                             ? 0xbU
                                             : ((0x400U 
                                                 & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                 ? 0xaU
                                                 : 
                                                ((0x200U 
                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                  ? 9U
                                                  : 
                                                 ((0x100U 
                                                   & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                   ? 8U
                                                   : 
                                                  ((0x80U 
                                                    & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                    ? 7U
                                                    : 
                                                   ((0x40U 
                                                     & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                     ? 6U
                                                     : 
                                                    ((0x20U 
                                                      & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                      ? 5U
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                       ? 4U
                                                       : 
                                                      ((8U 
                                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                        ? 3U
                                                        : 
                                                       ((4U 
                                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                         ? 2U
                                                         : 
                                                        ((2U 
                                                          & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs)
                                                          ? 1U
                                                          : 0U))))))))))))))),4);
            tracep->chgBit(oldp+1358,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__irqs 
                                             >> 0x10U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1aU])) {
            tracep->chgBit(oldp+1359,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__outstanding_load_wb));
            tracep->chgIData(oldp+1360,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1361,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
            tracep->chgBit(oldp+1362,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
            tracep->chgBit(oldp+1363,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1bU])) {
            tracep->chgBit(oldp+1364,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1365,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1366,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1367,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1368,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1369,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1370,((IData)((vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1371,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1372,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h))));
            tracep->chgIData(oldp+1373,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
            tracep->chgIData(oldp+1374,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
            tracep->chgIData(oldp+1375,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
            tracep->chgIData(oldp+1376,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
            tracep->chgIData(oldp+1377,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
            tracep->chgIData(oldp+1378,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
            tracep->chgBit(oldp+1379,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgIData(oldp+1380,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+1381,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+1382,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+1383,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgCData(oldp+1384,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgBit(oldp+1385,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q));
            tracep->chgBit(oldp+1386,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q));
            tracep->chgBit(oldp+1387,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q));
            tracep->chgBit(oldp+1388,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q));
            tracep->chgBit(oldp+1389,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q));
            tracep->chgBit(oldp+1390,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q));
            tracep->chgBit(oldp+1391,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q));
            tracep->chgBit(oldp+1392,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q));
            tracep->chgBit(oldp+1393,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q));
            tracep->chgBit(oldp+1394,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q));
            tracep->chgBit(oldp+1395,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q));
            tracep->chgBit(oldp+1396,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q));
            tracep->chgCData(oldp+1397,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q),3);
            tracep->chgCData(oldp+1398,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q),3);
            tracep->chgCData(oldp+1399,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q),3);
            tracep->chgCData(oldp+1400,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q),3);
            tracep->chgCData(oldp+1401,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q),3);
            tracep->chgCData(oldp+1402,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q),3);
            tracep->chgCData(oldp+1403,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q),3);
            tracep->chgCData(oldp+1404,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q),3);
            tracep->chgCData(oldp+1405,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q),3);
            tracep->chgCData(oldp+1406,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q),3);
            tracep->chgCData(oldp+1407,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q),3);
            tracep->chgCData(oldp+1408,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q),3);
            tracep->chgCData(oldp+1409,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q),3);
            tracep->chgCData(oldp+1410,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q),3);
            tracep->chgCData(oldp+1411,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q),3);
            tracep->chgCData(oldp+1412,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q),3);
            tracep->chgCData(oldp+1413,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q),3);
            tracep->chgCData(oldp+1414,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q),3);
            tracep->chgCData(oldp+1415,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q),3);
            tracep->chgCData(oldp+1416,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q),3);
            tracep->chgCData(oldp+1417,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q),3);
            tracep->chgCData(oldp+1418,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q),3);
            tracep->chgCData(oldp+1419,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q),3);
            tracep->chgCData(oldp+1420,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q),3);
            tracep->chgCData(oldp+1421,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q),3);
            tracep->chgCData(oldp+1422,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q),3);
            tracep->chgCData(oldp+1423,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q),3);
            tracep->chgCData(oldp+1424,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q),3);
            tracep->chgCData(oldp+1425,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q),3);
            tracep->chgCData(oldp+1426,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q),3);
            tracep->chgCData(oldp+1427,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q),3);
            tracep->chgBit(oldp+1428,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q));
            tracep->chgBit(oldp+1429,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q));
            tracep->chgBit(oldp+1430,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q));
            tracep->chgBit(oldp+1431,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q));
            tracep->chgBit(oldp+1432,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q));
            tracep->chgBit(oldp+1433,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q));
            tracep->chgBit(oldp+1434,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q));
            tracep->chgBit(oldp+1435,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q));
            tracep->chgBit(oldp+1436,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q));
            tracep->chgCData(oldp+1437,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q),3);
            tracep->chgBit(oldp+1438,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe));
            tracep->chgBit(oldp+1439,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe));
            tracep->chgBit(oldp+1440,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe));
            tracep->chgBit(oldp+1441,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe));
            tracep->chgBit(oldp+1442,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe));
            tracep->chgBit(oldp+1443,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe));
            tracep->chgBit(oldp+1444,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe));
            tracep->chgBit(oldp+1445,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe));
            tracep->chgBit(oldp+1446,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe));
            tracep->chgBit(oldp+1447,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe));
            tracep->chgBit(oldp+1448,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe));
            tracep->chgBit(oldp+1449,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe));
            tracep->chgBit(oldp+1450,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe));
            tracep->chgBit(oldp+1451,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe));
            tracep->chgBit(oldp+1452,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe));
            tracep->chgBit(oldp+1453,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe));
            tracep->chgBit(oldp+1454,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1455,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1456,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1457,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1458,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1459,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1460,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1461,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1462,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+1463,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+1464,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+1465,((0x7fU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__drsp_fifo_o 
                                                          >> 0x24U)))),8);
            tracep->chgBit(oldp+1466,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h))));
            tracep->chgBit(oldp+1467,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1468,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__tl_reg_d2h 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgCData(oldp+1470,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__GPIO.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1cU])) {
            tracep->chgBit(oldp+1471,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1472,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1473,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1474,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1475,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1476,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1477,((IData)((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1478,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1479,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
            tracep->chgBit(oldp+1480,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q));
            tracep->chgBit(oldp+1481,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q));
            tracep->chgBit(oldp+1482,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q));
            tracep->chgBit(oldp+1483,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q));
            tracep->chgBit(oldp+1484,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q));
            tracep->chgBit(oldp+1485,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q));
            tracep->chgBit(oldp+1486,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q));
            tracep->chgBit(oldp+1487,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q));
            tracep->chgBit(oldp+1488,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q));
            tracep->chgBit(oldp+1489,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q));
            tracep->chgBit(oldp+1490,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q));
            tracep->chgBit(oldp+1491,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q));
            tracep->chgBit(oldp+1492,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q));
            tracep->chgBit(oldp+1493,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q));
            tracep->chgBit(oldp+1494,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q));
            tracep->chgBit(oldp+1495,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q));
            tracep->chgBit(oldp+1496,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q));
            tracep->chgBit(oldp+1497,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q));
            tracep->chgBit(oldp+1498,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q));
            tracep->chgBit(oldp+1499,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q));
            tracep->chgBit(oldp+1500,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q));
            tracep->chgBit(oldp+1501,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q));
            tracep->chgBit(oldp+1502,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q));
            tracep->chgBit(oldp+1503,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q));
            tracep->chgBit(oldp+1504,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q));
            tracep->chgBit(oldp+1505,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q));
            tracep->chgBit(oldp+1506,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q));
            tracep->chgBit(oldp+1507,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q));
            tracep->chgBit(oldp+1508,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q));
            tracep->chgBit(oldp+1509,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q));
            tracep->chgBit(oldp+1510,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q));
            tracep->chgBit(oldp+1511,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q));
            tracep->chgBit(oldp+1512,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q));
            tracep->chgBit(oldp+1513,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q));
            tracep->chgBit(oldp+1514,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q));
            tracep->chgBit(oldp+1515,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q));
            tracep->chgBit(oldp+1516,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q));
            tracep->chgBit(oldp+1517,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q));
            tracep->chgBit(oldp+1518,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q));
            tracep->chgBit(oldp+1519,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q));
            tracep->chgBit(oldp+1520,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q));
            tracep->chgBit(oldp+1521,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_26__q));
            tracep->chgBit(oldp+1522,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q));
            tracep->chgBit(oldp+1523,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q));
            tracep->chgBit(oldp+1524,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgIData(oldp+1525,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+1526,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+1527,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+1528,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgCData(oldp+1529,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgBit(oldp+1530,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1531,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1532,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1533,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1534,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1535,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1536,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1537,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1538,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+1539,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+1540,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+1541,((0x7fU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__drsp_fifo_o 
                                                          >> 0x24U)))),8);
            tracep->chgBit(oldp+1542,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h))));
            tracep->chgBit(oldp+1543,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1544,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgCData(oldp+1546,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1dU])) {
            tracep->chgBit(oldp+1547,((1U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1548,((7U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1549,((7U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1550,((3U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1551,((0xffU & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1552,(((vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1553,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1554,(((vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1555,((1U & vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U])));
            tracep->chgBit(oldp+1556,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 1U))));
            tracep->chgBit(oldp+1557,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__qe));
            tracep->chgBit(oldp+1558,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgBit(oldp+1559,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q));
            tracep->chgCData(oldp+1560,((0xffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                                  >> 0x18U))),8);
            tracep->chgIData(oldp+1561,((0xffffffU 
                                         & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)),24);
            tracep->chgIData(oldp+1562,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U]),32);
            tracep->chgIData(oldp+1563,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U]),32);
            tracep->chgIData(oldp+1564,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U]),32);
            tracep->chgIData(oldp+1565,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U]),32);
            tracep->chgIData(oldp+1566,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U]),32);
            tracep->chgIData(oldp+1567,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U]),32);
            tracep->chgIData(oldp+1568,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U]),32);
            tracep->chgIData(oldp+1569,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U]),32);
            tracep->chgIData(oldp+1570,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q)),32);
            tracep->chgIData(oldp+1571,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1572,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q)),32);
            tracep->chgBit(oldp+1573,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1574,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1575,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1576,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0xfU))));
            tracep->chgIData(oldp+1577,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q)),32);
            tracep->chgBit(oldp+1578,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))));
            tracep->chgBit(oldp+1579,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__req));
            tracep->chgBit(oldp+1580,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we));
            tracep->chgCData(oldp+1581,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be),4);
            tracep->chgBit(oldp+1582,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1583,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1584,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1585,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1586,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1587,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1aU))));
            tracep->chgSData(oldp+1588,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                   >> 0x10U))),10);
            tracep->chgSData(oldp+1589,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                   >> 6U))),10);
            tracep->chgCData(oldp+1590,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                               >> 4U))),2);
            tracep->chgBit(oldp+1591,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 3U))));
            tracep->chgBit(oldp+1592,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 2U))));
            tracep->chgBit(oldp+1593,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 1U))));
            tracep->chgBit(oldp+1594,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgCData(oldp+1595,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q),3);
            tracep->chgSData(oldp+1596,((0xffffU & 
                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                                          >> 0x10U))),16);
            tracep->chgCData(oldp+1597,((0xfU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                 >> 0xcU))),4);
            tracep->chgSData(oldp+1598,((0xfffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q)),12);
            tracep->chgCData(oldp+1599,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+1600,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                                  >> 0x17U))),6);
            tracep->chgBit(oldp+1601,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1602,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1603,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1604,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1605,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1606,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+1607,((0x7fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                                  >> 5U))),7);
            tracep->chgBit(oldp+1608,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 4U))));
            tracep->chgBit(oldp+1609,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 3U))));
            tracep->chgBit(oldp+1610,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 2U))));
            tracep->chgBit(oldp+1611,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 1U))));
            tracep->chgBit(oldp+1612,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)));
            tracep->chgQData(oldp+1613,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q),64);
            tracep->chgQData(oldp+1615,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q),64);
            tracep->chgCData(oldp+1617,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q),3);
            tracep->chgCData(oldp+1618,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx),2);
            tracep->chgCData(oldp+1619,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                          ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                          : 0xfU)),4);
            tracep->chgQData(oldp+1620,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U])))),64);
            tracep->chgQData(oldp+1622,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U])))),64);
            tracep->chgQData(oldp+1624,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U])))),64);
            tracep->chgQData(oldp+1626,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U])))),64);
            tracep->chgBit(oldp+1628,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1629,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+1630,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1631,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1632,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1633,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x10U))));
            tracep->chgSData(oldp+1634,((0xffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)),16);
            tracep->chgIData(oldp+1635,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__num_req_outstanding),17);
            tracep->chgCData(oldp+1636,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__dev_select_outstanding),4);
            tracep->chgBit(oldp+1637,((1U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1638,((1U & vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U])));
            tracep->chgCData(oldp+1639,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+1640,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+1641,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_size),2);
            tracep->chgBit(oldp+1642,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_req_pending));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x1dU] | vlTOPp->__Vm_traceActivity
                         [0x45U]))) {
            tracep->chgBit(oldp+1643,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1644,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1645,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1646,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1647,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1648,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1649,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1650,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1651,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1eU])) {
            tracep->chgBit(oldp+1652,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+1653,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+1654,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+1655,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+1656,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+1657,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+1658,((IData)((vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+1659,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1660,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__tsen1_to_xbar))));
            tracep->chgBit(oldp+1661,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
            tracep->chgCData(oldp+1662,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q),3);
            tracep->chgBit(oldp+1663,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe));
            tracep->chgBit(oldp+1664,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe));
            tracep->chgBit(oldp+1665,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe));
            tracep->chgBit(oldp+1666,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe));
            tracep->chgBit(oldp+1667,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__outstanding));
            tracep->chgIData(oldp+1668,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__rdata),32);
            tracep->chgBit(oldp+1669,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__error));
            tracep->chgCData(oldp+1670,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__reqid),8);
            tracep->chgCData(oldp+1671,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__reqsz),2);
            tracep->chgBit(oldp+1672,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__rspop));
            tracep->chgBit(oldp+1673,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__RESET_REGn));
            tracep->chgCData(oldp+1674,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__SEL_CONV_TIME_REG),4);
            tracep->chgBit(oldp+1675,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__en_REG));
            tracep->chgIData(oldp+1676,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DOUT_REG),24);
            tracep->chgBit(oldp+1677,(vlTOPp->opentitan_soc_top__DOT__u_tempsense__DOT__DONE_REG));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x1eU] | vlTOPp->__Vm_traceActivity
                         [0x61U]))) {
            tracep->chgBit(oldp+1678,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+1679,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1680,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1681,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1682,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1683,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1684,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1685,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1686,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1687,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1688,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1689,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1690,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1691,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1692,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1693,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1694,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1695,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1696,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1697,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1698,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1699,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U])));
            tracep->chgBit(oldp+1700,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1701,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1702,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1703,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1704,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1705,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1706,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1707,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1708,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1709,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1710,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1711,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                                << 0x17U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+1712,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                                << 0x1aU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 6U)))),3);
            tracep->chgCData(oldp+1713,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[5U] 
                                                << 0x1dU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                  >> 3U)))),3);
            tracep->chgCData(oldp+1714,((7U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U])),3);
            tracep->chgCData(oldp+1715,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 3U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x1dU)))),3);
            tracep->chgCData(oldp+1716,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 6U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x1aU)))),3);
            tracep->chgCData(oldp+1717,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 9U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x17U)))),3);
            tracep->chgCData(oldp+1718,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0xcU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x14U)))),3);
            tracep->chgCData(oldp+1719,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0xfU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0x11U)))),3);
            tracep->chgCData(oldp+1720,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x12U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0xeU)))),3);
            tracep->chgCData(oldp+1721,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x15U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 0xbU)))),3);
            tracep->chgCData(oldp+1722,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x18U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 8U)))),3);
            tracep->chgCData(oldp+1723,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x1bU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 5U)))),3);
            tracep->chgCData(oldp+1724,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[4U] 
                                                << 0x1eU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                  >> 2U)))),3);
            tracep->chgCData(oldp+1725,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 1U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+1726,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 4U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x1cU)))),3);
            tracep->chgCData(oldp+1727,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 7U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x19U)))),3);
            tracep->chgCData(oldp+1728,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0xaU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x16U)))),3);
            tracep->chgCData(oldp+1729,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0xdU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x13U)))),3);
            tracep->chgCData(oldp+1730,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x10U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0x10U)))),3);
            tracep->chgCData(oldp+1731,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x13U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0xdU)))),3);
            tracep->chgCData(oldp+1732,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x16U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 0xaU)))),3);
            tracep->chgCData(oldp+1733,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x19U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 7U)))),3);
            tracep->chgCData(oldp+1734,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x1cU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 4U)))),3);
            tracep->chgCData(oldp+1735,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[3U] 
                                                << 0x1fU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                  >> 1U)))),3);
            tracep->chgCData(oldp+1736,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 2U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+1737,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 5U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+1738,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 8U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x18U)))),3);
            tracep->chgCData(oldp+1739,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0xbU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x15U)))),3);
            tracep->chgCData(oldp+1740,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0xeU) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0x12U)))),3);
            tracep->chgCData(oldp+1741,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0x11U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0xfU)))),3);
            tracep->chgCData(oldp+1742,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[2U] 
                                                << 0x14U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                  >> 0xcU)))),3);
            tracep->chgBit(oldp+1743,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1744,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1745,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1746,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1747,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1748,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1749,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1750,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1751,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1752,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1753,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1754,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1755,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1756,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1757,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1758,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1759,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1760,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1761,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1762,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1763,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U])));
            tracep->chgBit(oldp+1764,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1765,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1766,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1767,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1768,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1769,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1770,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1771,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1772,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1773,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1774,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1775,((7U & ((vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                << 0x17U) 
                                               | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                  >> 9U)))),3);
            tracep->chgCData(oldp+1776,((0x3fU & ((
                                                   vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[1U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                                     >> 3U)))),6);
            tracep->chgBit(oldp+1777,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1778,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1779,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__reg2hw[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1fU])) {
            tracep->chgBit(oldp+1780,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req) 
                                             >> 3U))));
            tracep->chgBit(oldp+1781,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req) 
                                             >> 2U))));
            tracep->chgBit(oldp+1782,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req) 
                                             >> 1U))));
            tracep->chgBit(oldp+1783,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req))));
            tracep->chgBit(oldp+1784,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__tck_i));
            tracep->chgBit(oldp+1785,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req) 
                                             >> 2U))));
            tracep->chgBit(oldp+1786,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__jtag_req))));
            tracep->chgBit(oldp+1787,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n));
            tracep->chgBit(oldp+1788,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellinp__dap__tck_i)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x20U])) {
            tracep->chgBit(oldp+1789,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q));
            tracep->chgBit(oldp+1790,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q));
            tracep->chgBit(oldp+1791,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q));
            tracep->chgBit(oldp+1792,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q));
            tracep->chgBit(oldp+1793,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q));
            tracep->chgBit(oldp+1794,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q));
            tracep->chgBit(oldp+1795,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q));
            tracep->chgBit(oldp+1796,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q));
            tracep->chgBit(oldp+1797,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q));
            tracep->chgBit(oldp+1798,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q));
            tracep->chgBit(oldp+1799,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q));
            tracep->chgBit(oldp+1800,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q));
            tracep->chgBit(oldp+1801,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q));
            tracep->chgBit(oldp+1802,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q));
            tracep->chgBit(oldp+1803,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q));
            tracep->chgBit(oldp+1804,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q));
            tracep->chgBit(oldp+1805,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q));
            tracep->chgBit(oldp+1806,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q));
            tracep->chgBit(oldp+1807,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q));
            tracep->chgBit(oldp+1808,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q));
            tracep->chgBit(oldp+1809,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q));
            tracep->chgBit(oldp+1810,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q));
            tracep->chgBit(oldp+1811,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q));
            tracep->chgBit(oldp+1812,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q));
            tracep->chgBit(oldp+1813,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q));
            tracep->chgBit(oldp+1814,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q));
            tracep->chgBit(oldp+1815,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q));
            tracep->chgBit(oldp+1816,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q));
            tracep->chgBit(oldp+1817,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__rvalid));
            tracep->chgCData(oldp+1818,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+1819,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1820,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+1821,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__state_q),2);
            tracep->chgCData(oldp+1822,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync),3);
            tracep->chgCData(oldp+1823,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync),3);
            tracep->chgBit(oldp+1824,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync) 
                                             >> 2U))));
            tracep->chgCData(oldp+1825,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync))),2);
            tracep->chgCData(oldp+1826,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgCData(oldp+1827,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+1828,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1829,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1830,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgBit(oldp+1831,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+1832,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgCData(oldp+1833,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+1834,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1835,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1836,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgBit(oldp+1837,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x21U])) {
            tracep->chgIData(oldp+1838,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage)),32);
            tracep->chgIData(oldp+1839,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1840,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
            tracep->chgCData(oldp+1841,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x22U])) {
            tracep->chgCData(oldp+1842,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+1843,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1844,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x23U])) {
            tracep->chgCData(oldp+1845,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__state_q),3);
            tracep->chgCData(oldp+1846,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__error_q),2);
            tracep->chgCData(oldp+1847,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q),4);
            tracep->chgCData(oldp+1848,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync),3);
            tracep->chgBit(oldp+1849,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync) 
                                             >> 2U))));
            tracep->chgCData(oldp+1850,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x24U])) {
            tracep->chgBit(oldp+1851,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__cmdbusy));
            tracep->chgIData(oldp+1852,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__hartsel),20);
            tracep->chgBit(oldp+1853,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sberror_valid));
            tracep->chgCData(oldp+1854,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__sberror),3);
            tracep->chgBit(oldp+1855,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1856,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgQData(oldp+1857,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0U])))),64);
            tracep->chgQData(oldp+1859,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[2U])))),64);
            tracep->chgQData(oldp+1861,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[4U])))),64);
            tracep->chgQData(oldp+1863,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[7U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[6U])))),64);
            tracep->chgQData(oldp+1865,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[9U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[8U])))),64);
            tracep->chgQData(oldp+1867,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xbU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xaU])))),64);
            tracep->chgQData(oldp+1869,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xdU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xcU])))),64);
            tracep->chgQData(oldp+1871,((((QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xfU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[0xeU])))),64);
            tracep->chgBit(oldp+1873,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command));
            tracep->chgBit(oldp+1874,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__hartsel)));
            tracep->chgCData(oldp+1875,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi),3);
            tracep->chgBit(oldp+1876,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                             >> 2U))));
            tracep->chgCData(oldp+1877,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))),2);
            tracep->chgBit(oldp+1878,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1879,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x25U])) {
            tracep->chgQData(oldp+1880,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[0]),41);
            tracep->chgQData(oldp+1882,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[1]),41);
            tracep->chgQData(oldp+1884,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[2]),41);
            tracep->chgQData(oldp+1886,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[3]),41);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x26U])) {
            tracep->chgBit(oldp+1888,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__haltreq));
            tracep->chgBit(oldp+1889,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__resumereq));
            tracep->chgBit(oldp+1890,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__req));
            tracep->chgIData(oldp+1891,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0),32);
            tracep->chgIData(oldp+1892,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted),32);
            tracep->chgIData(oldp+1893,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
            tracep->chgSData(oldp+1894,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
            tracep->chgBit(oldp+1895,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart));
            tracep->chgCData(oldp+1896,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__resumereq),2);
            tracep->chgCData(oldp+1897,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__haltreq),2);
            tracep->chgBit(oldp+1898,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__req) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__we)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x27U])) {
            tracep->chgIData(oldp+1899,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1),32);
            tracep->chgIData(oldp+1900,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
            tracep->chgIData(oldp+1901,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1),32);
            tracep->chgSData(oldp+1902,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
            tracep->chgBit(oldp+1903,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__exception));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x28U])) {
            tracep->chgIData(oldp+1904,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2),32);
            tracep->chgIData(oldp+1905,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
            tracep->chgIData(oldp+1906,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2),32);
            tracep->chgCData(oldp+1907,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x29U])) {
            tracep->chgBit(oldp+1908,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dmi_access));
            tracep->chgBit(oldp+1909,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__dtmcs_select));
            tracep->chgBit(oldp+1910,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select));
            tracep->chgBit(oldp+1911,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2aU])) {
            tracep->chgCData(oldp+1912,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr),3);
            tracep->chgCData(oldp+1913,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray),3);
            tracep->chgBit(oldp+1914,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+1915,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2bU])) {
            tracep->chgCData(oldp+1916,((0x7fU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                          >> 0x22U)))),7);
            tracep->chgCData(oldp+1917,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o 
                                                       >> 0x20U)))),2);
            tracep->chgIData(oldp+1918,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o)),32);
            tracep->chgQData(oldp+1919,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o),41);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2cU])) {
            tracep->chgQData(oldp+1921,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q),64);
            tracep->chgBit(oldp+1923,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q));
            tracep->chgBit(oldp+1924,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q));
            tracep->chgCData(oldp+1925,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgCData(oldp+1926,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+1927,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1928,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1929,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgBit(oldp+1930,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2dU])) {
            tracep->chgCData(oldp+1931,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__irq_id_o[0]),5);
            tracep->chgBit(oldp+1932,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__resume));
            tracep->chgBit(oldp+1933,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__go));
            tracep->chgBit(oldp+1934,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+1935,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1936,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+1937,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1938,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+1939,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1940,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+1941,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1942,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2dU] | vlTOPp->__Vm_traceActivity
                         [0x2eU]))) {
            tracep->chgBit(oldp+1943,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1944,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1945,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1946,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1947,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1948,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1949,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1950,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1951,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1952,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1953,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1954,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1955,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1956,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1957,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1958,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1959,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1960,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1961,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1962,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1963,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1964,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1965,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1966,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1967,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1968,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1969,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1970,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U])));
            tracep->chgBit(oldp+1971,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1972,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1973,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1974,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1975,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1976,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1977,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1978,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1979,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1980,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1981,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1982,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1983,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1984,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1985,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1986,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1987,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1988,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1989,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1990,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1991,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1992,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1993,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1994,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1995,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1996,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1997,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1998,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1999,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2000,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2001,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2002,((1U & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U])));
            tracep->chgBit(oldp+2003,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+2004,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+2005,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 5U))));
            tracep->chgBit(oldp+2006,((1U & (vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[2U] 
                                             >> 4U))));
            tracep->chgCData(oldp+2007,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
            tracep->chgCData(oldp+2008,((0x3fU & vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__hw2reg[0U])),6);
            tracep->chgBit(oldp+2009,((1U & ((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                             & ((1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                     >> 0xbU)))
                                                 ? 
                                                ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                 | ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xaU))
                                                 : 
                                                ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))))));
            tracep->chgBit(oldp+2010,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2eU])) {
            tracep->chgCData(oldp+2011,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__claim_id[0]),5);
            tracep->chgCData(oldp+2012,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__cc_id[0]),5);
            tracep->chgIData(oldp+2013,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o)),32);
            tracep->chgIData(oldp+2014,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+2015,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__data_valid));
            tracep->chgBit(oldp+2016,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned))));
            tracep->chgBit(oldp+2017,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__going));
            tracep->chgQData(oldp+2018,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d),64);
            tracep->chgCData(oldp+2020,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned),2);
            tracep->chgCData(oldp+2021,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned),2);
            tracep->chgQData(oldp+2022,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux),64);
            tracep->chgQData(oldp+2024,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits),64);
            tracep->chgCData(oldp+2026,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata))),8);
            tracep->chgCData(oldp+2027,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+2028,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+2029,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+2030,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+2031,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+2032,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+2033,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x38U)))),8);
            tracep->chgIData(oldp+2034,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i),32);
            tracep->chgCData(oldp+2035,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+2036,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                             >> 0xaU))));
            tracep->chgCData(oldp+2037,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                               >> 8U))),2);
            tracep->chgCData(oldp+2038,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+2039,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+2040,((0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                 >> 1U))),4);
            tracep->chgBit(oldp+2041,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgBit(oldp+2042,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+2043,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+2044,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                 >> 1U))),32);
            tracep->chgBit(oldp+2045,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgBit(oldp+2046,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid));
            tracep->chgIData(oldp+2047,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask),32);
            tracep->chgSData(oldp+2048,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+2049,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
            tracep->chgBit(oldp+2050,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgQData(oldp+2051,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword)) 
                                         << 1U)),33);
            tracep->chgQData(oldp+2053,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
            tracep->chgBit(oldp+2055,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2056,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0x2eU] | vlTOPp->__Vm_traceActivity
                         [0x77U]))) {
            tracep->chgBit(oldp+2057,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2058,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2059,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2060,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2061,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2062,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2063,((IData)((vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2064,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2065,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom))));
            tracep->chgBit(oldp+2066,((1U & ((vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                              >> 0x15U) 
                                             & (IData)(vlTOPp->opentitan_soc_top__DOT__xbar_to_dbgrom)))));
            tracep->chgBit(oldp+2067,(((IData)((0x800U 
                                                == 
                                                (0x1c00U 
                                                 & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack))));
            tracep->chgBit(oldp+2068,(((~ (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                       & ((IData)((0x800U 
                                                   == 
                                                   (0x1c00U 
                                                    & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o)))) 
                                          & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x2fU])) {
            tracep->chgIData(oldp+2069,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[0U]),32);
            tracep->chgIData(oldp+2070,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[1U]),32);
            tracep->chgIData(oldp+2071,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[2U]),32);
            tracep->chgIData(oldp+2072,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[3U]),32);
            tracep->chgIData(oldp+2073,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[4U]),32);
            tracep->chgIData(oldp+2074,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[5U]),32);
            tracep->chgIData(oldp+2075,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[6U]),32);
            tracep->chgIData(oldp+2076,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[7U]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x30U])) {
            tracep->chgSData(oldp+2077,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
            tracep->chgIData(oldp+2078,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
            tracep->chgWData(oldp+2079,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q),96);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x31U])) {
            tracep->chgBit(oldp+2082,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
            tracep->chgBit(oldp+2083,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+2084,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+2085,((7U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2086,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
            tracep->chgBit(oldp+2087,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
            tracep->chgCData(oldp+2088,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
            tracep->chgCData(oldp+2089,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
            tracep->chgCData(oldp+2090,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_q),2);
            tracep->chgBit(oldp+2091,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
            tracep->chgBit(oldp+2092,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
            tracep->chgIData(oldp+2093,(((IData)(1U) 
                                         << (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
            tracep->chgIData(oldp+2094,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
            tracep->chgIData(oldp+2095,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
            tracep->chgCData(oldp+2096,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
            tracep->chgBit(oldp+2097,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
            tracep->chgCData(oldp+2098,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
            tracep->chgIData(oldp+2099,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
            tracep->chgBit(oldp+2100,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            tracep->chgIData(oldp+2101,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+2102,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+2103,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+2104,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+2105,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
            tracep->chgCData(oldp+2106,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+2107,((0xfffffff8U 
                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
            tracep->chgCData(oldp+2108,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
            tracep->chgCData(oldp+2109,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),6);
            tracep->chgQData(oldp+2110,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
            tracep->chgQData(oldp+2112,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x32U])) {
            tracep->chgBit(oldp+2114,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
            tracep->chgCData(oldp+2115,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               >> 1U))),2);
            tracep->chgCData(oldp+2116,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x33U])) {
            tracep->chgCData(oldp+2117,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
            tracep->chgBit(oldp+2118,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_req_int));
            tracep->chgBit(oldp+2119,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_wb));
            tracep->chgCData(oldp+2120,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
            tracep->chgBit(oldp+2121,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
            tracep->chgBit(oldp+2122,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
            tracep->chgCData(oldp+2123,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
            tracep->chgCData(oldp+2124,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d),3);
            tracep->chgQData(oldp+2125,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
            tracep->chgQData(oldp+2127,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
            tracep->chgQData(oldp+2129,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
            tracep->chgQData(oldp+2131,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
            tracep->chgQData(oldp+2133,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
            tracep->chgQData(oldp+2135,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
            tracep->chgQData(oldp+2137,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
            tracep->chgQData(oldp+2139,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
            tracep->chgQData(oldp+2141,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
            tracep->chgQData(oldp+2143,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
            tracep->chgQData(oldp+2145,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
            tracep->chgQData(oldp+2147,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
            tracep->chgQData(oldp+2149,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
            tracep->chgQData(oldp+2151,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
            tracep->chgQData(oldp+2153,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
            tracep->chgQData(oldp+2155,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
            tracep->chgQData(oldp+2157,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
            tracep->chgQData(oldp+2159,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
            tracep->chgQData(oldp+2161,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
            tracep->chgQData(oldp+2163,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
            tracep->chgQData(oldp+2165,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
            tracep->chgQData(oldp+2167,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
            tracep->chgQData(oldp+2169,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
            tracep->chgQData(oldp+2171,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
            tracep->chgQData(oldp+2173,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
            tracep->chgQData(oldp+2175,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
            tracep->chgQData(oldp+2177,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
            tracep->chgQData(oldp+2179,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
            tracep->chgQData(oldp+2181,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
            tracep->chgQData(oldp+2183,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
            tracep->chgQData(oldp+2185,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
            tracep->chgQData(oldp+2187,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x34U])) {
            tracep->chgCData(oldp+2189,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_cause),3);
            tracep->chgBit(oldp+2190,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__debug_csr_save));
            tracep->chgCData(oldp+2191,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
            tracep->chgBit(oldp+2192,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x35U])) {
            tracep->chgCData(oldp+2193,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_op),2);
            tracep->chgBit(oldp+2194,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
            tracep->chgBit(oldp+2195,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
            tracep->chgBit(oldp+2196,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
            tracep->chgBit(oldp+2197,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
            tracep->chgBit(oldp+2198,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
            tracep->chgBit(oldp+2199,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            tracep->chgBit(oldp+2200,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+2201,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgBit(oldp+2202,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
            tracep->chgQData(oldp+2203,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
            tracep->chgBit(oldp+2205,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
            tracep->chgCData(oldp+2206,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x36U])) {
            tracep->chgBit(oldp+2207,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o[0U])));
            tracep->chgWData(oldp+2208,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT____Vcellout__u_core__crash_dump_o),128);
            tracep->chgCData(oldp+2212,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_mux_id),3);
            tracep->chgBit(oldp+2213,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_valid));
            tracep->chgBit(oldp+2214,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+2215,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_restore_dret_id));
            tracep->chgBit(oldp+2216,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
            tracep->chgBit(oldp+2217,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            tracep->chgBit(oldp+2218,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
            tracep->chgBit(oldp+2219,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
            tracep->chgBit(oldp+2220,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
            tracep->chgBit(oldp+2221,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
            tracep->chgBit(oldp+2222,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
            tracep->chgBit(oldp+2223,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
            tracep->chgBit(oldp+2224,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
            tracep->chgBit(oldp+2225,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x37U])) {
            tracep->chgCData(oldp+2226,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause),6);
            tracep->chgBit(oldp+2227,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_cause));
            tracep->chgBit(oldp+2228,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__exc_cause) 
                                             >> 5U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x38U])) {
            tracep->chgBit(oldp+2229,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_save_id));
            tracep->chgIData(oldp+2230,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtval),32);
            tracep->chgBit(oldp+2231,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x39U])) {
            tracep->chgSData(oldp+2232,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr),12);
            tracep->chgCData(oldp+2233,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
            tracep->chgCData(oldp+2234,((0x1fU & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr))),5);
            tracep->chgCData(oldp+2235,((7U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_addr) 
                                               >> 5U))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3aU])) {
            tracep->chgIData(oldp+2236,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
            tracep->chgBit(oldp+2237,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)));
            tracep->chgIData(oldp+2238,((0xfffffffeU 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3bU])) {
            tracep->chgBit(oldp+2239,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgBit(oldp+2240,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
            tracep->chgBit(oldp+2241,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__perf_branch));
            tracep->chgBit(oldp+2242,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_insn_id));
            tracep->chgBit(oldp+2243,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
            tracep->chgBit(oldp+2244,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
            tracep->chgBit(oldp+2245,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
            tracep->chgBit(oldp+2246,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_ld_hz));
            tracep->chgBit(oldp+2247,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            tracep->chgBit(oldp+2248,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
            tracep->chgBit(oldp+2249,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
            tracep->chgBit(oldp+2250,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3cU])) {
            tracep->chgBit(oldp+2251,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set));
            tracep->chgBit(oldp+2252,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec));
            tracep->chgBit(oldp+2253,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set_spec) 
                                       & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_set)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3dU])) {
            tracep->chgBit(oldp+2254,((1U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2255,((7U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2256,((7U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2257,((3U & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2258,((0xffU & (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2259,(((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2260,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2261,(((vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2262,((1U & vlTOPp->opentitan_soc_top__DOT__ifu_to_xbar[0U])));
            tracep->chgBit(oldp+2263,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__instr_req));
            tracep->chgIData(oldp+2264,((0xfffffffcU 
                                         & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr)),32);
            tracep->chgBit(oldp+2265,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
            tracep->chgBit(oldp+2266,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
            tracep->chgIData(oldp+2267,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3eU])) {
            tracep->chgIData(oldp+2268,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgIData(oldp+2269,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
            tracep->chgBit(oldp+2270,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+2271,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
            tracep->chgQData(oldp+2272,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
            tracep->chgBit(oldp+2274,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
            tracep->chgBit(oldp+2275,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
            tracep->chgSData(oldp+2276,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
            tracep->chgSData(oldp+2277,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x3fU])) {
            tracep->chgIData(oldp+2278,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
            tracep->chgQData(oldp+2279,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
            tracep->chgQData(oldp+2281,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
            tracep->chgBit(oldp+2283,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
            tracep->chgIData(oldp+2284,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+2285,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
            tracep->chgBit(oldp+2286,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgIData(oldp+2287,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
            tracep->chgIData(oldp+2288,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgBit(oldp+2289,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgCData(oldp+2290,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x40U])) {
            tracep->chgCData(oldp+2291,((0x3fU & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)),6);
            tracep->chgIData(oldp+2292,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+2293,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+2294,((1U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgCData(oldp+2295,((7U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2296,((1U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x41U])) {
            tracep->chgIData(oldp+2297,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgIData(oldp+2298,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
            tracep->chgQData(oldp+2299,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x42U])) {
            tracep->chgIData(oldp+2301,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgIData(oldp+2302,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgIData(oldp+2303,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgCData(oldp+2304,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),6);
            tracep->chgIData(oldp+2305,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgIData(oldp+2306,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x43U])) {
            tracep->chgWData(oldp+2307,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__imd_val_d_ex),68);
            tracep->chgIData(oldp+2310,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__result_ex),32);
            tracep->chgBit(oldp+2311,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_spec));
            tracep->chgBit(oldp+2312,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
            tracep->chgBit(oldp+2313,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
            tracep->chgWData(oldp+2314,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d),68);
            tracep->chgQData(oldp+2317,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
            tracep->chgIData(oldp+2319,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
            tracep->chgCData(oldp+2320,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x44U])) {
            tracep->chgBit(oldp+2321,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_mtvec_init));
            tracep->chgBit(oldp+2322,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgCData(oldp+2323,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x45U])) {
            tracep->chgBit(oldp+2324,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2325,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2326,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2327,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2328,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2329,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2330,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2331,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2332,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [0U][0U])));
            tracep->chgBit(oldp+2333,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2334,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2335,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2336,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2337,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2338,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2339,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2340,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2341,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [1U][0U])));
            tracep->chgBit(oldp+2342,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2343,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2344,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2345,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2346,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2347,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2348,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2349,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2350,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [2U][0U])));
            tracep->chgBit(oldp+2351,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2352,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2353,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2354,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2355,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2356,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2357,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2358,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2359,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [3U][0U])));
            tracep->chgBit(oldp+2360,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2361,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2362,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2363,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2364,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2365,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2366,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2367,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2368,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [4U][0U])));
            tracep->chgBit(oldp+2369,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2370,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2371,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2372,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2373,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2374,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2375,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2376,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2377,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [5U][0U])));
            tracep->chgBit(oldp+2378,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2379,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2380,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2381,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2382,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2383,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2384,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2385,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2386,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [6U][0U])));
            tracep->chgBit(oldp+2387,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2388,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2389,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2390,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2391,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2392,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2393,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2394,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2395,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [7U][0U])));
            tracep->chgBit(oldp+2396,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2397,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2398,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2399,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2400,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2401,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2402,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2403,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2404,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [8U][0U])));
            tracep->chgBit(oldp+2405,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2406,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2407,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2408,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2409,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2410,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2411,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2412,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2413,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [9U][0U])));
            tracep->chgBit(oldp+2414,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2415,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2416,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2417,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2418,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2419,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2420,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2421,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2422,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [0xaU][0U])));
            tracep->chgBit(oldp+2423,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [0xbU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2424,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xbU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2425,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xbU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2426,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xbU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2427,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xbU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2428,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xbU][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xbU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2429,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xbU][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [0xbU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2430,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xbU][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xbU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2431,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [0xbU][0U])));
            tracep->chgBit(oldp+2432,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [0xcU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2433,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xcU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2434,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xcU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2435,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xcU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2436,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xcU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2437,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xcU][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xcU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2438,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xcU][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [0xcU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2439,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2440,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [0xcU][0U])));
            tracep->chgCData(oldp+2441,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11),4);
            tracep->chgBit(oldp+2442,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2443,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2444,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2445,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2446,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2447,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2448,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2449,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2450,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [0U][0U])));
            tracep->chgBit(oldp+2451,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2452,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2453,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2454,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2455,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2456,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2457,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2458,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2459,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [1U][0U])));
            tracep->chgBit(oldp+2460,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2461,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2462,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2463,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2464,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2465,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2466,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2467,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2468,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [2U][0U])));
            tracep->chgBit(oldp+2469,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2470,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2471,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2472,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2473,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2474,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2475,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2476,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2477,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [3U][0U])));
            tracep->chgBit(oldp+2478,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2479,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2480,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2481,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2482,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2483,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2484,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2485,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2486,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [4U][0U])));
            tracep->chgBit(oldp+2487,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2488,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2489,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2490,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2491,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2492,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2493,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2494,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2495,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [5U][0U])));
            tracep->chgBit(oldp+2496,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2497,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2498,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2499,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2500,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2501,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2502,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2503,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2504,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [6U][0U])));
            tracep->chgBit(oldp+2505,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2506,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2507,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2508,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2509,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2510,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2511,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2512,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2513,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [7U][0U])));
            tracep->chgBit(oldp+2514,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2515,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2516,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2517,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2518,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2519,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2520,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2521,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2522,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [8U][0U])));
            tracep->chgBit(oldp+2523,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2524,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2525,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2526,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2527,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2528,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2529,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2530,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2531,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [9U][0U])));
            tracep->chgBit(oldp+2532,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2533,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2534,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2535,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2536,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2537,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2538,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2539,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2540,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+2541,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2542,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xbU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2543,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xbU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2544,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xbU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2545,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xbU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2546,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xbU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xbU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2547,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xbU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [0xbU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2548,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xbU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xbU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2549,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+2550,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2551,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xcU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2552,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xcU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2553,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xcU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2554,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xcU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2555,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xcU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xcU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2556,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xcU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [0xcU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2557,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2558,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [0xcU][0U])));
            tracep->chgCData(oldp+2559,((0xfU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgBit(oldp+2560,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests));
            tracep->chgBit(oldp+2561,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2562,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2563,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2564,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2565,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2566,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2567,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2568,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2569,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+2570,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2571,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2572,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2573,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2574,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2575,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2576,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2577,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2578,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+2579,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2580,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2581,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2582,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2583,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2584,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2585,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2586,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2587,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+2588,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2589,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2590,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2591,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2592,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2593,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2594,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2595,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2596,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+2597,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2598,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2599,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2600,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2601,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2602,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2603,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2604,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2605,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+2606,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2607,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2608,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2609,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2610,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2611,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2612,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2613,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2614,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+2615,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2616,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2617,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2618,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2619,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2620,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2621,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2622,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2623,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+2624,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2625,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2626,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2627,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2628,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2629,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2630,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2631,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2632,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+2633,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2634,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2635,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2636,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2637,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2638,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2639,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2640,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2641,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+2642,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2643,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2644,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2645,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2646,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2647,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2648,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2649,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2650,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+2651,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2652,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2653,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2654,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2655,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2656,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2657,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2658,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2659,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+2660,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2661,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2662,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2663,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2664,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2665,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xbU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xbU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2666,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xbU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2667,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xbU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xbU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2668,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+2669,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2670,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2671,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2672,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2673,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2674,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xcU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xcU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2675,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xcU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2676,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2677,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xcU][0U])));
            tracep->chgBit(oldp+2678,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xdU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2679,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2680,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2681,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2682,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2683,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xdU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xdU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2684,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xdU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2685,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xdU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xdU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2686,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xdU][0U])));
            tracep->chgWData(oldp+2687,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+2690,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xdU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2691,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2692,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2693,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2694,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2695,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xdU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xdU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2696,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xdU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2697,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xdU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xdU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2698,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xdU][0U])));
            tracep->chgBit(oldp+2699,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2700,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2701,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2702,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2703,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2704,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2705,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2706,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2707,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+2708,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2709,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2710,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2711,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2712,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2713,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2714,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2715,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2716,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2717,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            __Vtemp3997[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [0U][0U]);
            __Vtemp3997[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0U][1U]));
            __Vtemp3997[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+2718,(__Vtemp3997),85);
            tracep->chgBit(oldp+2721,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+2722,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2723,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2724,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2725,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2726,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2727,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2728,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2729,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2730,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+2731,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2732,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2733,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2734,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2735,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2736,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2737,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2738,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2739,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2740,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            __Vtemp4013[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [1U][0U]);
            __Vtemp4013[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [1U][1U]));
            __Vtemp4013[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+2741,(__Vtemp4013),85);
            tracep->chgBit(oldp+2744,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+2745,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2746,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2747,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2748,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2749,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2750,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2751,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2752,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2753,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+2754,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2755,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2756,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2757,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2758,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2759,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2760,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2761,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2762,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2763,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            __Vtemp4029[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [2U][0U]);
            __Vtemp4029[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [2U][1U]));
            __Vtemp4029[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+2764,(__Vtemp4029),85);
            tracep->chgBit(oldp+2767,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+2768,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2769,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2770,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2771,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2772,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2773,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2774,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2775,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2776,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+2777,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2778,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2779,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2780,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2781,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2782,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2783,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2784,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2785,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2786,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            __Vtemp4045[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [3U][0U]);
            __Vtemp4045[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [3U][1U]));
            __Vtemp4045[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+2787,(__Vtemp4045),85);
            tracep->chgBit(oldp+2790,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+2791,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2792,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2793,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2794,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2795,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2796,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2797,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2798,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2799,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+2800,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2801,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2802,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2803,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2804,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2805,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2806,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2807,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2808,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2809,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            __Vtemp4061[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [4U][0U]);
            __Vtemp4061[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [4U][1U]));
            __Vtemp4061[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+2810,(__Vtemp4061),85);
            tracep->chgBit(oldp+2813,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+2814,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2815,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2816,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2817,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2818,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2819,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2820,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2821,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2822,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+2823,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2824,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2825,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2826,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2827,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2828,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2829,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2830,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2831,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2832,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            __Vtemp4077[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [5U][0U]);
            __Vtemp4077[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [5U][1U]));
            __Vtemp4077[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+2833,(__Vtemp4077),85);
            tracep->chgBit(oldp+2836,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+2837,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2838,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2839,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2840,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2841,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2842,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2843,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2844,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2845,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+2846,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2847,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2848,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2849,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2850,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2851,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2852,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2853,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2854,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2855,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            __Vtemp4093[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [6U][0U]);
            __Vtemp4093[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [6U][1U]));
            __Vtemp4093[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+2856,(__Vtemp4093),85);
            tracep->chgBit(oldp+2859,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+2860,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2861,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2862,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2863,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2864,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2865,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2866,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2867,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2868,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+2869,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2870,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2871,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2872,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2873,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2874,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2875,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2876,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2877,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2878,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            __Vtemp4109[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [7U][0U]);
            __Vtemp4109[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [7U][1U]));
            __Vtemp4109[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+2879,(__Vtemp4109),85);
            tracep->chgBit(oldp+2882,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+2883,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2884,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2885,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2886,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2887,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2888,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2889,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2890,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2891,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+2892,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2893,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2894,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2895,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2896,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2897,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2898,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2899,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2900,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2901,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            __Vtemp4125[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [8U][0U]);
            __Vtemp4125[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [8U][1U]));
            __Vtemp4125[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+2902,(__Vtemp4125),85);
            tracep->chgBit(oldp+2905,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+2906,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2907,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2908,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2909,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2910,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2911,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2912,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2913,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2914,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+2915,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2916,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2917,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2918,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2919,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2920,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2921,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2922,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2923,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2924,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            __Vtemp4141[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [9U][0U]);
            __Vtemp4141[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [9U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [9U][1U]));
            __Vtemp4141[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [9U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [9U][2U]));
            tracep->chgWData(oldp+2925,(__Vtemp4141),85);
            tracep->chgBit(oldp+2928,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+2929,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2930,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2931,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2932,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2933,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2934,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2935,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2936,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2937,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+2938,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2939,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2940,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2941,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2942,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2943,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2944,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2945,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2946,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2947,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            __Vtemp4157[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [0xaU][0U]);
            __Vtemp4157[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xaU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][1U]));
            __Vtemp4157[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xaU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U]));
            tracep->chgWData(oldp+2948,(__Vtemp4157),85);
            tracep->chgBit(oldp+2951,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+2952,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2953,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2954,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2955,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2956,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2957,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xbU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xbU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2958,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xbU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2959,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xbU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xbU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2960,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+2961,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2962,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2963,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2964,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2965,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2966,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2967,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2968,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2969,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2970,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            __Vtemp4173[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [0xbU][0U]);
            __Vtemp4173[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xbU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][1U]));
            __Vtemp4173[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xbU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U]));
            tracep->chgWData(oldp+2971,(__Vtemp4173),85);
            tracep->chgBit(oldp+2974,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+2975,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2976,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2977,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2978,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2979,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2980,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xcU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xcU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2981,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xcU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2982,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2983,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xcU][0U])));
            tracep->chgBit(oldp+2984,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2985,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2986,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2987,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2988,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2989,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2990,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2991,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2992,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2993,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            __Vtemp4189[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [0xcU][0U]);
            __Vtemp4189[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xcU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][1U]));
            __Vtemp4189[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xcU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U]));
            tracep->chgWData(oldp+2994,(__Vtemp4189),85);
            tracep->chgBit(oldp+2997,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xcU][0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x46U])) {
            tracep->chgBit(oldp+2998,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2999,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3000,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3001,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3002,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3003,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3004,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3005,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3006,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[0U])));
            tracep->chgBit(oldp+3007,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3008,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3009,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3010,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3011,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3012,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3013,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3014,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3015,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                       [0U][0U])));
            tracep->chgBit(oldp+3016,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3017,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3018,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3019,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3020,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3021,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3022,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3023,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3024,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                       [1U][0U])));
            tracep->chgBit(oldp+3025,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3026,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3027,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3028,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3029,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3030,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3031,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3032,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3033,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                    [0U]))));
            tracep->chgBit(oldp+3034,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3035,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3036,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3037,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3038,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3039,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3040,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3041,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3042,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                    [1U]))));
            tracep->chgBit(oldp+3043,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3044,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3045,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3046,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3047,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3048,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3049,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3050,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3051,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                       [0U][0U])));
            tracep->chgBit(oldp+3052,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3053,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3054,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3055,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3056,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3057,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3058,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3059,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3060,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                       [1U][0U])));
            tracep->chgBit(oldp+3061,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3062,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3063,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3064,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3065,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3066,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3067,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3068,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3069,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                    [0U]))));
            tracep->chgBit(oldp+3070,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3071,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3072,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3073,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3074,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3075,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3076,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3077,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3078,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                    [1U]))));
            tracep->chgBit(oldp+3079,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3080,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3081,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3082,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3083,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3084,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3085,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3086,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3087,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+3088,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3089,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3090,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3091,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3092,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3093,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3094,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3095,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3096,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+3097,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3098,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3099,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3100,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3101,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3102,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3103,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3104,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3105,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+3106,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3107,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3108,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3109,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3110,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3111,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3112,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3113,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3114,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+3115,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3116,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3117,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3118,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3119,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3120,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3121,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3122,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3123,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+3124,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3125,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3126,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3127,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3128,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3129,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3130,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3131,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3132,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+3133,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3134,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3135,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3136,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3137,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3138,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3139,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3140,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3141,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3142,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3143,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3144,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3145,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3146,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3147,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3148,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3149,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3150,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+3151,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrequest),2);
            tracep->chgCData(oldp+3152,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hgrant),2);
            tracep->chgBit(oldp+3153,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrequest))));
            tracep->chgBit(oldp+3154,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3155,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3156,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3157,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3158,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3159,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3160,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3161,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3162,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3163,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3164,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3165,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3166,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3167,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3168,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3169,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3170,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3171,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3172,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3173,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3174,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3175,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3176,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3177,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3178,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3179,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3180,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3181,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3182,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3183,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3184,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3185,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3186,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3187,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3188,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3189,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3190,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3191,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3192,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3193,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3194,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3195,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3196,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3197,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3198,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3199,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3200,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3201,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3202,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3203,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3204,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4270[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4270[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4270[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3205,(__Vtemp4270),85);
            tracep->chgBit(oldp+3208,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3209,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3210,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+3212,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3213,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3214,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3215,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3216,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3217,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3218,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3219,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3220,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3221,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3222,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3223,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3224,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3225,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3226,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3227,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3228,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3229,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3230,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3231,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3232,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3233,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3234,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3235,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3236,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3237,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3238,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+3239,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3240,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4274[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4274[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4274[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3241,(__Vtemp4274),85);
            tracep->chgBit(oldp+3244,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3245,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3246,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+3248,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+3249,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+3250,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+3251,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+3252,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+3253,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgBit(oldp+3254,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3255,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3256,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3257,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3258,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3259,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3260,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3261,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3262,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+3263,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3264,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3265,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3266,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3267,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3268,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3269,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3270,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3271,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+3272,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3273,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3274,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3275,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3276,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3277,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3278,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3279,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3280,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+3281,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3282,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3283,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3284,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3285,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3286,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3287,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3288,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3289,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+3290,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3291,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3292,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3293,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3294,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3295,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3296,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3297,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3298,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+3299,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3300,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3301,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3302,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3303,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3304,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3305,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3306,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3307,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+3308,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3309,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3310,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3311,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3312,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3313,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3314,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3315,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3316,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3317,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3318,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3319,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3320,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3321,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3322,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3323,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3324,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3325,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+3326,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest),2);
            tracep->chgCData(oldp+3327,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hgrant),2);
            tracep->chgBit(oldp+3328,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3329,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3330,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3331,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3332,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3333,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3334,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3335,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3336,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+3337,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest))));
            tracep->chgBit(oldp+3338,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3339,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3340,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3341,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3342,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3343,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3344,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3345,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3346,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+3347,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+3348,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+3349,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3350,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3351,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3352,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3353,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3354,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3355,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3356,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3357,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3358,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3359,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3360,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3361,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3362,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3363,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3364,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3365,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3366,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3367,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3368,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3369,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3370,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3371,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp4318[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[0U]);
            __Vtemp4318[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U]));
            __Vtemp4318[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+3372,(__Vtemp4318),85);
            tracep->chgBit(oldp+3375,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+3376,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3377,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3378,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3379,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3380,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3381,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3382,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3383,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3384,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3385,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3386,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3387,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3388,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3389,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3390,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3391,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3392,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3393,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3394,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3395,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3396,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3397,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3398,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3399,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3400,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3401,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3402,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3403,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3404,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4322[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4322[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4322[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3405,(__Vtemp4322),85);
            tracep->chgBit(oldp+3408,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3409,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3410,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+3412,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3413,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3414,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3415,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3416,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3417,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3418,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3419,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3420,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3421,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3422,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3423,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3424,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3425,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3426,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3427,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3428,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3429,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3430,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3431,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3432,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3433,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3434,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3435,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3436,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3437,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3438,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+3439,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3440,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4326[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4326[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4326[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3441,(__Vtemp4326),85);
            tracep->chgBit(oldp+3444,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3445,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3446,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgWData(oldp+3448,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+3451,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+3454,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgWData(oldp+3455,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+3458,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+3459,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+3460,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+3461,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+3462,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x47U])) {
            tracep->chgBit(oldp+3463,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3464,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3465,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3466,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3467,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3468,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3469,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3470,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3471,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[0U])));
            tracep->chgBit(oldp+3472,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3473,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3474,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3475,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3476,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3477,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3478,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3479,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3480,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[0U])));
            tracep->chgBit(oldp+3481,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3482,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3483,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3484,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3485,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3486,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3487,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3488,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3489,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                       [0U][0U])));
            tracep->chgBit(oldp+3490,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3491,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3492,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3493,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3494,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3495,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3496,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3497,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3498,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                       [1U][0U])));
            tracep->chgBit(oldp+3499,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3500,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3501,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3502,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3503,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3504,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3505,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3506,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3507,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                    [0U]))));
            tracep->chgBit(oldp+3508,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3509,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3510,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3511,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3512,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3513,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3514,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3515,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3516,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                    [1U]))));
            tracep->chgBit(oldp+3517,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3518,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3519,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3520,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3521,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3522,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3523,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3524,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3525,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                       [0U][0U])));
            tracep->chgBit(oldp+3526,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3527,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3528,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3529,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3530,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3531,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3532,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3533,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3534,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_10
                                       [1U][0U])));
            tracep->chgBit(oldp+3535,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3536,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3537,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3538,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3539,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3540,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3541,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3542,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3543,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [0U]))));
            tracep->chgBit(oldp+3544,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3545,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3546,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3547,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3548,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3549,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3550,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3551,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3552,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_10
                                                    [1U]))));
            tracep->chgBit(oldp+3553,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3554,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3555,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3556,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3557,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3558,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3559,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3560,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3561,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+3562,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3563,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3564,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3565,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3566,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3567,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3568,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3569,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3570,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+3571,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3572,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3573,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3574,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3575,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3576,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3577,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3578,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3579,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+3580,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3581,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3582,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3583,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3584,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3585,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3586,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3587,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3588,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+3589,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3590,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3591,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3592,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3593,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3594,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3595,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3596,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3597,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+3598,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3599,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3600,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3601,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3602,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3603,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3604,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3605,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3606,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+3607,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3608,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3609,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3610,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3611,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3612,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3613,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3614,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3615,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3616,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3617,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3618,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3619,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3620,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3621,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3622,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3623,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3624,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+3625,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest),2);
            tracep->chgCData(oldp+3626,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hgrant),2);
            tracep->chgBit(oldp+3627,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3628,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3629,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3630,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3631,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3632,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3633,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3634,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3635,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+3636,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest))));
            tracep->chgBit(oldp+3637,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3638,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3639,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3640,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3641,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3642,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3643,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3644,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3645,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+3646,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+3647,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+3648,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3649,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3650,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3651,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3652,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3653,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3654,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3655,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3656,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3657,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3658,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3659,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3660,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3661,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3662,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3663,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3664,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3665,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3666,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3667,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3668,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3669,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3670,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp4406[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[0U]);
            __Vtemp4406[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U]));
            __Vtemp4406[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+3671,(__Vtemp4406),85);
            tracep->chgBit(oldp+3674,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+3675,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3676,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3677,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3678,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3679,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3680,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3681,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3682,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3683,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3684,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3685,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3686,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3687,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3688,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3689,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3690,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3691,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3692,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3693,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3694,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3695,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3696,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3697,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3698,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3699,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3700,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3701,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3702,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3703,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4410[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4410[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4410[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3704,(__Vtemp4410),85);
            tracep->chgBit(oldp+3707,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3708,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3709,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+3711,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3712,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3713,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3714,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3715,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3716,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3717,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3718,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3719,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3720,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3721,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3722,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3723,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3724,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3725,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3726,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3727,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3728,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3729,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3730,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3731,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3732,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3733,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3734,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3735,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3736,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3737,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+3738,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3739,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4414[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4414[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4414[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3740,(__Vtemp4414),85);
            tracep->chgBit(oldp+3743,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3744,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3745,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgWData(oldp+3747,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+3750,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+3753,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgWData(oldp+3754,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+3757,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+3758,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+3759,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+3760,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+3761,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgBit(oldp+3762,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3763,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3764,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3765,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3766,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3767,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3768,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3769,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3770,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+3771,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3772,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3773,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3774,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3775,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3776,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3777,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3778,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3779,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+3780,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3781,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3782,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3783,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3784,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3785,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3786,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3787,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3788,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+3789,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3790,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3791,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3792,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3793,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3794,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3795,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3796,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3797,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+3798,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3799,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3800,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3801,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3802,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3803,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3804,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3805,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3806,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+3807,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3808,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3809,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3810,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3811,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3812,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3813,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3814,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3815,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+3816,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3817,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3818,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3819,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3820,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3821,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3822,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3823,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3824,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3825,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3826,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3827,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3828,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3829,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3830,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3831,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3832,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3833,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+3834,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest),2);
            tracep->chgCData(oldp+3835,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hgrant),2);
            tracep->chgBit(oldp+3836,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3837,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3838,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3839,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3840,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3841,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3842,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3843,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3844,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+3845,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrequest))));
            tracep->chgBit(oldp+3846,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3847,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3848,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3849,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3850,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3851,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3852,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3853,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3854,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+3855,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+3856,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+3857,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3858,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3859,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3860,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3861,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3862,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3863,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3864,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3865,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3866,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3867,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3868,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3869,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3870,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3871,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3872,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3873,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3874,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3875,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3876,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3877,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3878,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3879,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp4458[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U]);
            __Vtemp4458[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[1U]));
            __Vtemp4458[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+3880,(__Vtemp4458),85);
            tracep->chgBit(oldp+3883,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+3884,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3885,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3886,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3887,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3888,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3889,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3890,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3891,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3892,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3893,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3894,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3895,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3896,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3897,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3898,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3899,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3900,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3901,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3902,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3903,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3904,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3905,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3906,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3907,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3908,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3909,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3910,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3911,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3912,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4462[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4462[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4462[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3913,(__Vtemp4462),85);
            tracep->chgBit(oldp+3916,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3917,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3918,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+3920,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3921,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3922,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3923,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3924,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3925,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3926,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3927,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3928,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3929,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3930,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3931,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3932,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3933,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
        }
    }
}
