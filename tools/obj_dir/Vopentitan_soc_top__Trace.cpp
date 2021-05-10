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
    WData/*95:0*/ __Vtemp3410[3];
    WData/*95:0*/ __Vtemp3426[3];
    WData/*95:0*/ __Vtemp3442[3];
    WData/*95:0*/ __Vtemp3458[3];
    WData/*95:0*/ __Vtemp3474[3];
    WData/*95:0*/ __Vtemp3490[3];
    WData/*95:0*/ __Vtemp3506[3];
    WData/*95:0*/ __Vtemp3522[3];
    WData/*95:0*/ __Vtemp3538[3];
    WData/*95:0*/ __Vtemp3554[3];
    WData/*95:0*/ __Vtemp3570[3];
    WData/*95:0*/ __Vtemp3586[3];
    WData/*95:0*/ __Vtemp3602[3];
    WData/*95:0*/ __Vtemp3987[3];
    WData/*95:0*/ __Vtemp4003[3];
    WData/*95:0*/ __Vtemp4019[3];
    WData/*95:0*/ __Vtemp4035[3];
    WData/*95:0*/ __Vtemp4051[3];
    WData/*95:0*/ __Vtemp4067[3];
    WData/*95:0*/ __Vtemp4083[3];
    WData/*95:0*/ __Vtemp4099[3];
    WData/*95:0*/ __Vtemp4115[3];
    WData/*95:0*/ __Vtemp4131[3];
    WData/*95:0*/ __Vtemp4147[3];
    WData/*95:0*/ __Vtemp4163[3];
    WData/*95:0*/ __Vtemp4179[3];
    WData/*95:0*/ __Vtemp4260[3];
    WData/*95:0*/ __Vtemp4264[3];
    WData/*95:0*/ __Vtemp4308[3];
    WData/*95:0*/ __Vtemp4312[3];
    WData/*95:0*/ __Vtemp4316[3];
    WData/*95:0*/ __Vtemp4396[3];
    WData/*95:0*/ __Vtemp4400[3];
    WData/*95:0*/ __Vtemp4404[3];
    WData/*95:0*/ __Vtemp4448[3];
    WData/*95:0*/ __Vtemp4452[3];
    WData/*95:0*/ __Vtemp4456[3];
    WData/*95:0*/ __Vtemp4536[3];
    WData/*95:0*/ __Vtemp4540[3];
    WData/*95:0*/ __Vtemp4584[3];
    WData/*95:0*/ __Vtemp4588[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgWData(oldp+0,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_addr),136);
            tracep->chgIData(oldp+5,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_pmp_cfg),24);
            tracep->chgCData(oldp+6,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err),2);
            tracep->chgBit(oldp+7,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err))));
            tracep->chgBit(oldp+8,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
            tracep->chgIData(oldp+9,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev),32);
            tracep->chgBit(oldp+10,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pmp_req_err) 
                                           >> 1U))));
            tracep->chgIData(oldp+11,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
            tracep->chgIData(oldp+12,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
            tracep->chgIData(oldp+13,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
            tracep->chgIData(oldp+14,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
            tracep->chgIData(oldp+15,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
            tracep->chgIData(oldp+16,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
            tracep->chgIData(oldp+17,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
            tracep->chgIData(oldp+18,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
            tracep->chgIData(oldp+19,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
            tracep->chgIData(oldp+20,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
            tracep->chgIData(oldp+21,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
            tracep->chgIData(oldp+22,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
            tracep->chgIData(oldp+23,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
            tracep->chgIData(oldp+24,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
            tracep->chgIData(oldp+25,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
            tracep->chgIData(oldp+26,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
            tracep->chgCData(oldp+27,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
            tracep->chgCData(oldp+28,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
            tracep->chgCData(oldp+29,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
            tracep->chgCData(oldp+30,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
            tracep->chgCData(oldp+31,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
            tracep->chgCData(oldp+32,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
            tracep->chgCData(oldp+33,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
            tracep->chgCData(oldp+34,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
            tracep->chgCData(oldp+35,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
            tracep->chgCData(oldp+36,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
            tracep->chgCData(oldp+37,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
            tracep->chgCData(oldp+38,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
            tracep->chgCData(oldp+39,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
            tracep->chgCData(oldp+40,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
            tracep->chgCData(oldp+41,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
            tracep->chgCData(oldp+42,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
            tracep->chgIData(oldp+43,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
            tracep->chgIData(oldp+44,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
            tracep->chgIData(oldp+45,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
            tracep->chgIData(oldp+46,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
            tracep->chgIData(oldp+47,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
            tracep->chgIData(oldp+48,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
            tracep->chgIData(oldp+49,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
            tracep->chgIData(oldp+50,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
            tracep->chgIData(oldp+51,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
            tracep->chgIData(oldp+52,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
            tracep->chgIData(oldp+53,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
            tracep->chgIData(oldp+54,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
            tracep->chgIData(oldp+55,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
            tracep->chgIData(oldp+56,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
            tracep->chgIData(oldp+57,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
            tracep->chgIData(oldp+58,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
            tracep->chgIData(oldp+59,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
            tracep->chgIData(oldp+60,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
            tracep->chgIData(oldp+61,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
            tracep->chgIData(oldp+62,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
            tracep->chgIData(oldp+63,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
            tracep->chgIData(oldp+64,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
            tracep->chgIData(oldp+65,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
            tracep->chgIData(oldp+66,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
            tracep->chgIData(oldp+67,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
            tracep->chgIData(oldp+68,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
            tracep->chgIData(oldp+69,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
            tracep->chgIData(oldp+70,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
            tracep->chgIData(oldp+71,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
            tracep->chgIData(oldp+72,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
            tracep->chgIData(oldp+73,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
            tracep->chgIData(oldp+74,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
            tracep->chgCData(oldp+75,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrl_d),6);
            tracep->chgBit(oldp+76,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__we));
            tracep->chgIData(oldp+77,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+78,((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__addr_w 
                                       << 2U)),32);
            tracep->chgIData(oldp+79,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__addr_w),30);
            tracep->chgCData(oldp+80,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0x18U)))),8);
            tracep->chgCData(oldp+81,((0xfU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                       >> 0x14U)))),4);
            tracep->chgCData(oldp+82,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x11U)))),3);
            tracep->chgBit(oldp+83,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 0x10U)))));
            tracep->chgCData(oldp+84,((0xfU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                       >> 0xcU)))),4);
            tracep->chgSData(oldp+85,((0xfffU & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned))),12);
            tracep->chgCData(oldp+86,((0xffU & (IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0x38U)))),8);
            tracep->chgCData(oldp+87,((0xfU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                       >> 0x34U)))),4);
            tracep->chgCData(oldp+88,((7U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                     >> 0x31U)))),3);
            tracep->chgBit(oldp+89,((1U & (IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                   >> 0x30U)))));
            tracep->chgCData(oldp+90,((0xfU & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                       >> 0x2cU)))),4);
            tracep->chgSData(oldp+91,((0xfffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                         >> 0x20U)))),12);
            tracep->chgBit(oldp+92,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int)));
            tracep->chgBit(oldp+93,((0x800U <= (0xffcU 
                                                & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__addr_w 
                                                   << 2U)))));
            tracep->chgQData(oldp+94,((QData)((IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__addr_w 
                                                       << 2U)))),64);
            tracep->chgIData(oldp+96,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+97,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal));
            tracep->chgBit(oldp+98,((1U & (~ ((((0U 
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
            tracep->chgIData(oldp+99,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int),32);
            tracep->chgIData(oldp+100,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+101,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+102,((((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk) 
                                       & (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk)) 
                                      & (((4U == (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                     >> 0x12U))) 
                                          | (1U == 
                                             (7U & 
                                              (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               >> 0x12U)))) 
                                         | (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+103,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+104,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+105,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgSData(oldp+106,(((((4U != (7U 
                                                  & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                                     >> 0x12U)))
                                           ? 0U : 1U) 
                                         << 0xbU) | 
                                        (((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal) 
                                          << 0xaU) 
                                         | (0x3ffU 
                                            & (vlTOPp->opentitan_soc_top__DOT__dbgrom_to_xbar[2U] 
                                               >> 5U))))),13);
            tracep->chgQData(oldp+107,(vlTOPp->opentitan_soc_top__DOT__u_jtagdpi__DOT__ctx),64);
            tracep->chgBit(oldp+109,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+110,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+111,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+112,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+113,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+114,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+115,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+116,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+117,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+118,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+119,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+120,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+121,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+122,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+123,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+124,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+125,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+126,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+127,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+128,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+129,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+130,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+131,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+132,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+133,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+134,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+135,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+136,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+137,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+138,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+139,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+140,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+141,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+142,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+143,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+144,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+145,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+146,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+147,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+148,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+149,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+150,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+151,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+152,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+153,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+154,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+155,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+156,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+157,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+158,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+159,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+160,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+161,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+162,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+163,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+164,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+165,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+166,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+167,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+168,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+169,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+170,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+171,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+172,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+173,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+174,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+175,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+176,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+177,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+178,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+179,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+180,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+181,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+182,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+183,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+184,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+185,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+186,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+187,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+188,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+189,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+190,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+191,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+192,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+193,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+194,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+195,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+196,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+197,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+198,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+199,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+200,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+201,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+202,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+203,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+204,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgCData(oldp+205,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0]),4);
            tracep->chgCData(oldp+206,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[1]),4);
            tracep->chgCData(oldp+207,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[2]),4);
            tracep->chgCData(oldp+208,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[3]),4);
            tracep->chgCData(oldp+209,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[4]),4);
            tracep->chgCData(oldp+210,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[5]),4);
            tracep->chgCData(oldp+211,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[6]),4);
            tracep->chgCData(oldp+212,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[7]),4);
            tracep->chgCData(oldp+213,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[8]),4);
            tracep->chgCData(oldp+214,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[9]),4);
            tracep->chgCData(oldp+215,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[10]),4);
            tracep->chgCData(oldp+216,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[11]),4);
            tracep->chgCData(oldp+217,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[12]),4);
            tracep->chgCData(oldp+218,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[13]),4);
            tracep->chgCData(oldp+219,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[14]),4);
            tracep->chgCData(oldp+220,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[0]),4);
            tracep->chgCData(oldp+221,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[1]),4);
            tracep->chgCData(oldp+222,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[2]),4);
            tracep->chgCData(oldp+223,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[3]),4);
            tracep->chgCData(oldp+224,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[4]),4);
            tracep->chgCData(oldp+225,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[5]),4);
            tracep->chgCData(oldp+226,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[6]),4);
            tracep->chgCData(oldp+227,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[7]),4);
            tracep->chgCData(oldp+228,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[8]),4);
            tracep->chgCData(oldp+229,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[9]),4);
            tracep->chgCData(oldp+230,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[10]),4);
            tracep->chgCData(oldp+231,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[11]),4);
            tracep->chgCData(oldp+232,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[12]),4);
            tracep->chgCData(oldp+233,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[13]),4);
            tracep->chgCData(oldp+234,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[14]),4);
            tracep->chgCData(oldp+235,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[15]),4);
            tracep->chgCData(oldp+236,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[16]),4);
            tracep->chgCData(oldp+237,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[17]),4);
            tracep->chgCData(oldp+238,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[18]),4);
            tracep->chgCData(oldp+239,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[19]),4);
            tracep->chgCData(oldp+240,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[20]),4);
            tracep->chgCData(oldp+241,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[21]),4);
            tracep->chgCData(oldp+242,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[22]),4);
            tracep->chgCData(oldp+243,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[23]),4);
            tracep->chgCData(oldp+244,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[24]),4);
            tracep->chgCData(oldp+245,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[25]),4);
            tracep->chgCData(oldp+246,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[26]),4);
            tracep->chgCData(oldp+247,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[27]),4);
            tracep->chgCData(oldp+248,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[28]),4);
            tracep->chgCData(oldp+249,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[29]),4);
            tracep->chgCData(oldp+250,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[30]),4);
            tracep->chgCData(oldp+251,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[31]),4);
            tracep->chgCData(oldp+252,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[32]),4);
            tracep->chgCData(oldp+253,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[33]),4);
            tracep->chgCData(oldp+254,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[34]),4);
            tracep->chgCData(oldp+255,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[35]),4);
            tracep->chgCData(oldp+256,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[36]),4);
            tracep->chgCData(oldp+257,(vlSymsp->TOP__rv_plic_reg_pkg.__PVT__RV_PLIC_PERMIT[37]),4);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+258,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 1U))));
            tracep->chgBit(oldp+259,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q));
            tracep->chgBit(oldp+260,(vlTOPp->opentitan_soc_top__DOT__gpio_32__DOT__u_reg__DOT__u_data_in__DOT__qe));
            tracep->chgBit(oldp+261,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe));
            tracep->chgBit(oldp+262,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe));
            tracep->chgBit(oldp+263,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe));
            tracep->chgBit(oldp+264,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe));
            tracep->chgBit(oldp+265,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe));
            tracep->chgBit(oldp+266,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe));
            tracep->chgBit(oldp+267,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe));
            tracep->chgBit(oldp+268,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe));
            tracep->chgBit(oldp+269,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe));
            tracep->chgBit(oldp+270,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe));
            tracep->chgBit(oldp+271,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe));
            tracep->chgBit(oldp+272,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe));
            tracep->chgBit(oldp+273,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe));
            tracep->chgBit(oldp+274,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe));
            tracep->chgBit(oldp+275,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe));
            tracep->chgBit(oldp+276,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe));
            tracep->chgBit(oldp+277,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe));
            tracep->chgBit(oldp+278,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe));
            tracep->chgBit(oldp+279,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe));
            tracep->chgBit(oldp+280,(vlTOPp->opentitan_soc_top__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe));
            tracep->chgBit(oldp+281,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgBit(oldp+282,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q));
            tracep->chgCData(oldp+283,((0xffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                                 >> 0x18U))),8);
            tracep->chgIData(oldp+284,((0xffffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)),24);
            tracep->chgIData(oldp+285,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U]),32);
            tracep->chgIData(oldp+286,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U]),32);
            tracep->chgIData(oldp+287,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U]),32);
            tracep->chgIData(oldp+288,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U]),32);
            tracep->chgIData(oldp+289,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U]),32);
            tracep->chgIData(oldp+290,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U]),32);
            tracep->chgIData(oldp+291,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U]),32);
            tracep->chgIData(oldp+292,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U]),32);
            tracep->chgIData(oldp+293,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q)),32);
            tracep->chgIData(oldp+294,((IData)((vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q 
                                                >> 0x20U))),32);
            tracep->chgIData(oldp+295,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q)),32);
            tracep->chgBit(oldp+296,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x14U))));
            tracep->chgBit(oldp+297,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x10U))));
            tracep->chgCData(oldp+298,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+299,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0xfU))));
            tracep->chgIData(oldp+300,((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q)),32);
            tracep->chgBit(oldp+301,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q))));
            tracep->chgBit(oldp+302,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+303,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+304,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+305,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+306,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+307,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1aU))));
            tracep->chgSData(oldp+308,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                  >> 0x10U))),10);
            tracep->chgSData(oldp+309,((0x3ffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                  >> 6U))),10);
            tracep->chgCData(oldp+310,((3U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                              >> 4U))),2);
            tracep->chgBit(oldp+311,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 3U))));
            tracep->chgBit(oldp+312,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 2U))));
            tracep->chgBit(oldp+313,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 1U))));
            tracep->chgBit(oldp+314,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgCData(oldp+315,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q),3);
            tracep->chgSData(oldp+316,((0xffffU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                   >> 0x10U))),16);
            tracep->chgCData(oldp+317,((0xfU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                >> 0xcU))),4);
            tracep->chgSData(oldp+318,((0xfffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q)),12);
            tracep->chgCData(oldp+319,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0x1dU))),3);
            tracep->chgCData(oldp+320,((0x3fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 0x17U))),6);
            tracep->chgBit(oldp+321,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x16U))));
            tracep->chgBit(oldp+322,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x15U))));
            tracep->chgBit(oldp+323,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x14U))));
            tracep->chgBit(oldp+324,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x10U))));
            tracep->chgBit(oldp+325,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0xfU))));
            tracep->chgCData(oldp+326,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+327,((0x7fU & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 5U))),7);
            tracep->chgBit(oldp+328,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 4U))));
            tracep->chgBit(oldp+329,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 3U))));
            tracep->chgBit(oldp+330,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 2U))));
            tracep->chgBit(oldp+331,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 1U))));
            tracep->chgBit(oldp+332,((1U & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q)));
            tracep->chgQData(oldp+333,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q),64);
            tracep->chgQData(oldp+335,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q),64);
            tracep->chgCData(oldp+337,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__state_q),3);
            tracep->chgQData(oldp+338,((((QData)((IData)(
                                                         vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[0U])))),64);
            tracep->chgQData(oldp+340,((((QData)((IData)(
                                                         vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[2U])))),64);
            tracep->chgQData(oldp+342,((((QData)((IData)(
                                                         vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[4U])))),64);
            tracep->chgQData(oldp+344,((((QData)((IData)(
                                                         vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[6U])))),64);
            tracep->chgBit(oldp+346,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x17U))));
            tracep->chgCData(oldp+347,((7U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+348,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x13U))));
            tracep->chgBit(oldp+349,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x12U))));
            tracep->chgBit(oldp+350,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x11U))));
            tracep->chgBit(oldp+351,((1U & (vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x10U))));
            tracep->chgSData(oldp+352,((0xffffU & vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q)),16);
            tracep->chgCData(oldp+353,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__dev_select_outstanding),4);
            tracep->chgCData(oldp+354,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+355,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+356,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_size),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+357,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
            tracep->chgBit(oldp+358,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
            tracep->chgCData(oldp+359,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+360,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__req));
            tracep->chgBit(oldp+361,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we));
            tracep->chgCData(oldp+362,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be),4);
            tracep->chgCData(oldp+363,(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx),2);
            tracep->chgCData(oldp+364,(((IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__we)
                                         ? (IData)(vlTOPp->opentitan_soc_top__DOT__debug_module__DOT__i_dm_sba__DOT__be)
                                         : 0xfU)),4);
            tracep->chgBit(oldp+365,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__err_resp__DOT__err_req_pending));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+366,((1U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+367,((7U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+368,((7U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+369,((3U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+370,((0xffU & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+371,(((vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+372,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+373,(((vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+374,((1U & vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U])));
            tracep->chgBit(oldp+375,((1U & (vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+376,((1U & vlTOPp->opentitan_soc_top__DOT__dm_to_xbar[0U])));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [4U] | vlTOPp->__Vm_traceActivity
                         [0x19U]))) {
            tracep->chgBit(oldp+377,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+378,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+379,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+380,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+381,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+382,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+383,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+384,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+385,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_t_o[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgWData(oldp+386,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg),1024);
            tracep->chgWData(oldp+418,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q),992);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgCData(oldp+449,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+450,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+451,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+452,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+453,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+454,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+455,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+456,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+457,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+458,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+459,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+460,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+461,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+462,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+463,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+464,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+465,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+466,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+467,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+468,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [6U] | vlTOPp->__Vm_traceActivity
                         [7U]))) {
            tracep->chgSData(oldp+469,(((0x19U >= (0x1fU 
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
            tracep->chgCData(oldp+470,(((9U >= (0xfU 
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
            tracep->chgQData(oldp+471,(((0x41U >= (0x7fU 
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
            tracep->chgSData(oldp+473,(((0x33U >= (0x3fU 
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
            tracep->chgCData(oldp+474,(((0x13U >= (0x1fU 
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
            tracep->chgQData(oldp+475,(((0x83U >= (0xffU 
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
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgCData(oldp+477,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q),8);
            tracep->chgBit(oldp+478,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q));
            tracep->chgBit(oldp+479,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__instr_valid));
            tracep->chgSData(oldp+480,((0x1fffU & vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage)),13);
            tracep->chgSData(oldp+481,((0x1fffU & (vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                   >> 0xdU))),13);
            tracep->chgCData(oldp+482,((0x1fU & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage))),5);
            tracep->chgCData(oldp+483,((0x1fU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                 >> 5U))),5);
            tracep->chgQData(oldp+484,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+486,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                              >> 1U)))),33);
            tracep->chgBit(oldp+488,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__rvalid));
            tracep->chgSData(oldp+489,((0x1fffU & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage))),13);
            tracep->chgSData(oldp+490,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0xdU)))),13);
            tracep->chgSData(oldp+491,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x1aU)))),13);
            tracep->chgSData(oldp+492,((0x1fffU & (IData)(
                                                          (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                           >> 0x27U)))),13);
            tracep->chgCData(oldp+493,((0x1fU & vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage)),5);
            tracep->chgCData(oldp+494,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 5U))),5);
            tracep->chgCData(oldp+495,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+496,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+497,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[0U]))))),33);
            tracep->chgQData(oldp+499,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                            << 0x3fU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                               << 0x1fU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[1U])) 
                                                 >> 1U))))),33);
            tracep->chgQData(oldp+501,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[2U])) 
                                                 >> 2U))))),33);
            tracep->chgQData(oldp+503,((0x1ffffffffULL 
                                        & (((QData)((IData)(
                                                            vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[4U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3U])) 
                                              >> 3U)))),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgCData(oldp+505,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+506,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+507,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+508,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+509,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+510,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+511,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+512,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+513,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+514,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+515,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+516,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+517,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+518,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+519,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+520,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+521,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+522,((3U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgBit(oldp+523,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+524,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+525,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+526,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+527,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+528,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+529,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+530,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+531,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+532,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+533,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+534,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+535,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+536,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+537,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+538,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+539,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+540,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgBit(oldp+541,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+542,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+543,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+544,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgCData(oldp+545,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+546,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))));
            tracep->chgCData(oldp+547,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 8U))),2);
            tracep->chgCData(oldp+548,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+549,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+550,((0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                >> 1U))),4);
            tracep->chgBit(oldp+551,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+552,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+553,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
            tracep->chgCData(oldp+554,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+555,((1U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                            >> 0xaU))));
            tracep->chgCData(oldp+556,((3U & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 8U))),2);
            tracep->chgCData(oldp+557,((0xffU & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o))),8);
            tracep->chgBit(oldp+558,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+559,((0xfU & ((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o) 
                                                >> 1U))),4);
            tracep->chgBit(oldp+560,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o))));
            tracep->chgSData(oldp+561,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgCData(oldp+562,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgBit(oldp+563,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+564,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask),32);
            tracep->chgBit(oldp+565,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+566,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
            tracep->chgBit(oldp+567,((1U & (~ (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgIData(oldp+568,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask),32);
            tracep->chgBit(oldp+569,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+570,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgBit(oldp+571,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+572,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+573,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+574,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+575,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+576,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+577,((IData)((vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                >> 2U))),32);
            tracep->chgBit(oldp+578,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 1U)))));
            tracep->chgBit(oldp+579,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar))));
            tracep->chgIData(oldp+580,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword),32);
            tracep->chgIData(oldp+581,((IData)((vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                >> 1U))),32);
            tracep->chgBit(oldp+582,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgQData(oldp+583,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__rdata_tlword)) 
                                        << 1U)),33);
            tracep->chgQData(oldp+585,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
            tracep->chgBit(oldp+587,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+588,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+589,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+590,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+591,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+592,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+593,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+594,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+595,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+596,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+597,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+598,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__ICCM.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+599,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar))));
            tracep->chgBit(oldp+600,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__iccm_to_xbar 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+601,((((QData)((IData)(
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
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+603,(vlTOPp->opentitan_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid));
            tracep->chgIData(oldp+604,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgBit(oldp+605,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid));
            tracep->chgQData(oldp+606,(((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                        << 1U)),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xeU])) {
            tracep->chgIData(oldp+608,((IData)((vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o 
                                                >> 1U))),32);
            tracep->chgBit(oldp+609,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o))));
            tracep->chgQData(oldp+610,(vlTOPp->opentitan_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xfU])) {
            tracep->chgBit(oldp+612,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+613,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+614,((7U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+615,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+616,((0xffU & (IData)(
                                                        (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+617,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+618,((IData)((vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                >> 2U))),32);
            tracep->chgBit(oldp+619,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 1U)))));
            tracep->chgBit(oldp+620,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar))));
            tracep->chgBit(oldp+621,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                    >> 0x33U)))));
            tracep->chgCData(oldp+622,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                      >> 0x30U)))),3);
            tracep->chgCData(oldp+623,((7U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                      >> 0x2dU)))),3);
            tracep->chgCData(oldp+624,((3U & (IData)(
                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+625,((0xffU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                         >> 0x23U)))),8);
            tracep->chgBit(oldp+626,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                    >> 0x22U)))));
            tracep->chgIData(oldp+627,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                >> 2U))),32);
            tracep->chgBit(oldp+628,((1U & (IData)(
                                                   (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                    >> 1U)))));
            tracep->chgBit(oldp+629,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o))));
            tracep->chgBit(oldp+630,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+631,((0x7fU & (IData)(
                                                        (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCCM.__PVT__drsp_fifo_o 
                                                         >> 0x24U)))),8);
            tracep->chgBit(oldp+632,((1U & (IData)(vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar))));
            tracep->chgBit(oldp+633,((1U & (IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__dccm_to_xbar 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+634,((((QData)((IData)(
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
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x10U])) {
            tracep->chgCData(oldp+636,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__dev_select_outstanding),4);
            tracep->chgCData(oldp+637,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+638,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+639,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__err_resp__DOT__err_size),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x11U])) {
            tracep->chgCData(oldp+640,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q),5);
            tracep->chgIData(oldp+641,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id),32);
            tracep->chgBit(oldp+642,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+643,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q),32);
            tracep->chgIData(oldp+644,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q),32);
            tracep->chgSData(oldp+645,(((0x3e0U & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                   >> 0xaU)) 
                                        | (0x1fU & 
                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                            >> 7U)))),10);
            tracep->chgBit(oldp+646,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q));
            tracep->chgBit(oldp+647,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q));
            tracep->chgBit(oldp+648,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q));
            tracep->chgCData(oldp+649,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x12U])) {
            tracep->chgBit(oldp+650,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgWData(oldp+651,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q),68);
            tracep->chgIData(oldp+654,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgBit(oldp+655,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
            tracep->chgQData(oldp+656,((((QData)((IData)(
                                                         ((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[2U] 
                                                           << 0x1eU) 
                                                          | (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
                                                             >> 2U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U])))),64);
            tracep->chgIData(oldp+658,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U]),32);
            tracep->chgCData(oldp+659,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
            tracep->chgCData(oldp+660,((3U & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U])),2);
            tracep->chgCData(oldp+661,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgCData(oldp+662,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgBit(oldp+663,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+664,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
            tracep->chgBit(oldp+665,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x13U])) {
            tracep->chgCData(oldp+666,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+667,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U))),5);
            tracep->chgIData(oldp+668,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id),32);
            tracep->chgBit(oldp+669,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_is_compressed_id));
            tracep->chgIData(oldp+670,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__pc_id),32);
            tracep->chgCData(oldp+671,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 7U))),5);
            tracep->chgIData(oldp+672,(((0xfffff000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                                        | (0xfffU & 
                                           (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U)))),32);
            tracep->chgIData(oldp+673,(((0xfffff000U 
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
            tracep->chgIData(oldp+674,(((0xffffe000U 
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
            tracep->chgIData(oldp+675,((0xfffff000U 
                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+676,(((0xfff00000U 
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
            tracep->chgIData(oldp+677,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU))),32);
            tracep->chgCData(oldp+678,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x1bU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x14U])) {
            tracep->chgBit(oldp+679,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle));
            tracep->chgBit(oldp+680,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__rf_write_wb));
            tracep->chgQData(oldp+681,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x15U])) {
            tracep->chgBit(oldp+683,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgBit(oldp+684,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__icache_inval));
            tracep->chgCData(oldp+685,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),6);
            tracep->chgBit(oldp+686,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__mult_sel_ex));
            tracep->chgBit(oldp+687,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__div_sel_ex));
            tracep->chgCData(oldp+688,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+689,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+690,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__csr_access));
            tracep->chgCData(oldp+691,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+692,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgCData(oldp+693,(((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
                                         ? ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                                             ? 1U : 0U)
                                         : 2U)),2);
            tracep->chgBit(oldp+694,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+695,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+696,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+697,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+698,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+699,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+700,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+701,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+702,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgBit(oldp+703,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+704,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgBit(oldp+705,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
            tracep->chgBit(oldp+706,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
            tracep->chgCData(oldp+707,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+708,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgBit(oldp+709,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+710,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgBit(oldp+711,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+712,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+713,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+714,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgCData(oldp+715,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgBit(oldp+716,((8U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgBit(oldp+717,(((3U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (6U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+718,(((4U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                      | (7U == (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+719,((0U != (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x16U])) {
            tracep->chgCData(oldp+720,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+721,((0xfffffffcU 
                                        & ((IData)(
                                                   (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 3U)) 
                                           << 2U))),32);
            tracep->chgIData(oldp+722,(((1U & (IData)(
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
            tracep->chgIData(oldp+723,((IData)((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 1U))),32);
            tracep->chgIData(oldp+724,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+725,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgIData(oldp+726,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd),32);
            tracep->chgIData(oldp+727,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd),32);
            tracep->chgIData(oldp+728,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b),32);
            tracep->chgCData(oldp+729,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+730,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgQData(oldp+731,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
            tracep->chgQData(oldp+733,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+735,((0U == (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))));
            tracep->chgBit(oldp+736,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgQData(oldp+737,((0x1ffffffffULL 
                                        & (~ ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                              << 1U)))),33);
            tracep->chgBit(oldp+739,(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
            tracep->chgQData(oldp+740,((0x1ffffffffULL 
                                        & ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                            ? vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                            : ((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                ? (~ 
                                                   ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                    << 1U))
                                                : ((QData)((IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                   << 1U))))),33);
            tracep->chgCData(oldp+742,((0x3fU & ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgCData(oldp+743,(((0x10U & ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                  >> 0x18U))))) 
                                                  << 4U)) 
                                        | (0xfU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                   >> 0x18U)))),5);
            tracep->chgCData(oldp+744,((0x1fU & (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                 >> 0x10U))),5);
            tracep->chgIData(oldp+745,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        | vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+746,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+747,((vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        ^ vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgBit(oldp+748,((1U & (((IData)(0x20U) 
                                             - (0x1fU 
                                                & vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                            >> 5U))));
            tracep->chgCData(oldp+749,(((2U & ((IData)(
                                                       (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x21U)) 
                                               << 1U)) 
                                        | (1U & (IData)(vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
            tracep->chgCData(oldp+750,((3U & (IData)(
                                                     (vlTOPp->opentitan_soc_top__DOT__u_top__DOT__u_core__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x17U])) {
            tracep->chgBit(oldp+751,((1U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+752,((7U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+753,((7U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+754,((3U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+755,((0xffU & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+756,(((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+757,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+758,(((vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+759,((1U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U])));
            tracep->chgBit(oldp+760,((1U & (vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+761,((1U & vlTOPp->opentitan_soc_top__DOT__lsu_to_xbar[0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x18U])) {
            tracep->chgBit(oldp+762,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+763,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+764,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+765,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+766,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+767,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+768,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+769,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+770,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [0U][0U])));
            tracep->chgBit(oldp+771,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+772,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+773,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+774,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+775,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+776,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+777,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+778,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [1U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+779,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [1U][0U])));
            tracep->chgBit(oldp+780,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+781,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+782,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+783,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+784,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+785,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [2U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+786,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+787,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [2U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+788,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [2U][0U])));
            tracep->chgBit(oldp+789,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [3U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+790,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [3U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+791,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [3U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+792,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [3U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+793,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [3U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+794,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [3U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [3U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+795,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [3U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [3U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+796,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [3U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [3U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+797,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [3U][0U])));
            tracep->chgBit(oldp+798,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [4U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+799,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [4U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+800,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [4U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+801,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [4U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+802,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [4U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+803,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [4U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [4U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+804,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [4U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [4U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+805,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [4U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [4U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+806,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [4U][0U])));
            tracep->chgBit(oldp+807,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [5U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+808,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [5U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+809,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [5U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+810,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [5U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+811,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [5U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+812,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [5U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [5U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+813,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [5U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [5U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+814,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [5U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [5U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+815,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [5U][0U])));
            tracep->chgBit(oldp+816,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [6U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+817,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [6U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+818,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [6U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+819,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [6U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+820,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+821,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [6U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [6U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+822,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [6U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+823,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [6U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [6U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+824,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [6U][0U])));
            tracep->chgBit(oldp+825,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [7U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+826,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [7U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+827,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [7U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+828,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [7U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+829,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [7U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+830,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [7U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [7U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+831,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [7U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [7U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+832,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [7U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [7U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+833,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [7U][0U])));
            tracep->chgBit(oldp+834,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [8U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+835,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [8U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+836,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [8U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+837,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [8U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+838,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [8U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+839,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [8U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [8U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+840,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [8U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [8U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+841,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [8U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [8U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+842,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [8U][0U])));
            tracep->chgBit(oldp+843,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [9U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+844,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [9U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+845,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [9U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+846,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [9U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+847,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+848,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][2U] << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [9U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+849,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [9U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [9U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+850,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [9U][1U] << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [9U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+851,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [9U][0U])));
            tracep->chgBit(oldp+852,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0xaU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+853,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xaU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+854,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xaU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+855,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xaU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+856,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+857,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xaU][2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xaU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+858,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xaU][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xaU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+859,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xaU][1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xaU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+860,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [0xaU][0U])));
            tracep->chgBit(oldp+861,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0xbU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+862,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xbU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+863,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xbU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+864,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xbU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+865,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xbU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+866,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xbU][2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xbU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+867,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xbU][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xbU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+868,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xbU][1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xbU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+869,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [0xbU][0U])));
            tracep->chgBit(oldp+870,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                            [0xcU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+871,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xcU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+872,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xcU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+873,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                              [0xcU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+874,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xcU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+875,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xcU][2U] 
                                         << 0x1bU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xcU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+876,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                 [0xcU][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                                   [0xcU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+877,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                         [0xcU][1U] 
                                         << 0x1fU) 
                                        | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                           [0xcU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+878,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_10_ds_h2d
                                      [0xcU][0U])));
            tracep->chgCData(oldp+879,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_10),4);
            tracep->chgBit(oldp+880,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [0U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+881,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+882,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+883,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+884,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+885,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+886,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [0U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+887,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+888,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [0U][0U])));
            tracep->chgBit(oldp+889,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [1U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+890,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [1U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+891,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [1U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+892,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [1U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+893,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [1U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+894,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [1U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [1U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+895,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [1U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [1U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+896,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [1U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [1U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+897,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [1U][0U])));
            tracep->chgBit(oldp+898,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [2U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+899,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [2U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+900,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [2U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+901,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [2U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+902,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [2U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+903,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [2U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [2U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+904,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [2U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [2U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+905,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [2U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [2U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+906,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [2U][0U])));
            tracep->chgBit(oldp+907,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [3U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+908,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [3U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+909,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [3U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+910,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [3U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+911,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [3U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+912,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [3U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [3U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+913,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [3U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [3U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+914,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [3U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [3U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+915,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [3U][0U])));
            tracep->chgBit(oldp+916,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [4U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+917,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [4U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+918,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [4U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+919,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [4U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+920,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [4U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+921,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [4U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [4U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+922,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [4U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [4U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+923,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [4U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [4U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+924,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [4U][0U])));
            tracep->chgBit(oldp+925,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [5U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+926,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [5U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+927,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [5U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+928,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [5U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+929,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [5U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+930,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [5U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [5U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+931,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [5U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [5U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+932,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [5U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [5U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+933,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [5U][0U])));
            tracep->chgBit(oldp+934,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [6U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+935,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [6U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+936,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [6U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+937,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [6U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+938,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [6U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+939,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [6U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [6U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+940,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [6U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+941,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [6U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [6U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+942,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [6U][0U])));
            tracep->chgBit(oldp+943,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [7U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+944,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [7U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+945,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [7U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+946,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [7U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+947,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [7U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+948,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [7U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [7U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+949,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [7U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [7U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+950,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [7U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [7U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+951,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [7U][0U])));
            tracep->chgBit(oldp+952,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [8U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+953,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [8U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+954,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [8U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+955,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [8U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+956,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [8U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+957,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [8U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [8U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+958,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [8U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [8U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+959,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [8U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [8U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+960,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [8U][0U])));
            tracep->chgBit(oldp+961,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [9U][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+962,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [9U][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+963,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [9U][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+964,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [9U][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+965,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [9U][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+966,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [9U][2U] << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [9U][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+967,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [9U][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [9U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+968,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [9U][1U] << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [9U][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+969,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [9U][0U])));
            tracep->chgBit(oldp+970,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [0xaU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+971,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xaU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+972,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xaU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+973,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xaU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+974,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xaU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+975,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xaU][2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xaU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+976,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xaU][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [0xaU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+977,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xaU][1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xaU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+978,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [0xaU][0U])));
            tracep->chgBit(oldp+979,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [0xbU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+980,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xbU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+981,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xbU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+982,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xbU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+983,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xbU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+984,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xbU][2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xbU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+985,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xbU][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [0xbU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+986,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xbU][1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xbU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+987,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [0xbU][0U])));
            tracep->chgBit(oldp+988,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                            [0xcU][2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+989,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xcU][2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+990,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xcU][2U] 
                                              >> 0xfU))),3);
            tracep->chgCData(oldp+991,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                              [0xcU][2U] 
                                              >> 0xdU))),2);
            tracep->chgCData(oldp+992,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xcU][2U] 
                                                 >> 5U))),8);
            tracep->chgIData(oldp+993,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xcU][2U] 
                                         << 0x1bU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xcU][1U] 
                                           >> 5U))),32);
            tracep->chgCData(oldp+994,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                 [0xcU][2U] 
                                                 << 0x1fU) 
                                                | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                                   [0xcU][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+995,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                         [0xcU][1U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                           [0xcU][0U] 
                                           >> 1U))),32);
            tracep->chgBit(oldp+996,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.tl_d_o
                                      [0xcU][0U])));
            tracep->chgCData(oldp+997,((0xfU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgBit(oldp+998,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+999,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                              >> 0x12U))),3);
            tracep->chgCData(oldp+1000,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1001,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1002,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1003,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1004,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1005,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1006,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_t_o[0U])));
            tracep->chgBit(oldp+1007,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__hold_all_requests));
            tracep->chgBit(oldp+1008,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1009,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1010,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1011,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1012,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1013,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1014,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1015,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1016,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1017,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1018,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1019,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1020,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1021,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1022,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1023,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1024,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1025,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1026,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1027,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1028,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1029,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1030,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1031,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1032,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1033,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1034,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1035,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1036,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1037,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1038,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1039,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1040,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1041,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1042,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1043,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1044,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1045,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1046,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1047,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1048,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1049,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1050,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1051,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1052,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1053,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1054,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1055,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1056,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1057,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1058,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1059,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1060,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1061,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1062,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1063,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1064,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1065,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1066,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1067,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1068,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1069,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1070,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1071,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1072,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1073,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1074,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1075,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1076,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1077,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1078,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1079,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1080,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1081,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1082,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1083,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1084,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1085,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1086,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1087,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1088,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1089,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1090,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1091,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1092,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1093,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1094,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1095,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1096,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1097,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+1098,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1099,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1100,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1101,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1102,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1103,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1104,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1105,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1106,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1107,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1108,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1109,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1110,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1111,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1112,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xbU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xbU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1113,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xbU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1114,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xbU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xbU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1115,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+1116,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1117,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1118,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1119,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1120,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1121,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xcU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xcU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1122,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xcU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1123,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1124,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xcU][0U])));
            tracep->chgBit(oldp+1125,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xdU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1126,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1127,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1128,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1129,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1130,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xdU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xdU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1131,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xdU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1132,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xdU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xdU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1133,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xdU][0U])));
            tracep->chgWData(oldp+1134,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+1137,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xdU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1138,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1139,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1140,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1141,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1142,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xdU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xdU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1143,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xdU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1144,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xdU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xdU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1145,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xdU][0U])));
            tracep->chgBit(oldp+1146,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1147,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1148,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1149,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1150,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1151,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1152,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1153,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1154,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1155,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1156,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1157,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1158,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1159,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1160,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1161,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1162,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1163,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1164,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            __Vtemp3410[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [0U][0U]);
            __Vtemp3410[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0U][1U]));
            __Vtemp3410[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+1165,(__Vtemp3410),85);
            tracep->chgBit(oldp+1168,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1169,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1170,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1171,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1172,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1173,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1174,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1175,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1176,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1177,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1178,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1179,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1180,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1181,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1182,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1183,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1184,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1185,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1186,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1187,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            __Vtemp3426[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [1U][0U]);
            __Vtemp3426[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [1U][1U]));
            __Vtemp3426[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+1188,(__Vtemp3426),85);
            tracep->chgBit(oldp+1191,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1192,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1193,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1194,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1195,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1196,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1197,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1198,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1199,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1200,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1201,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1202,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1203,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1204,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1205,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1206,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1207,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1208,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1209,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1210,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            __Vtemp3442[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [2U][0U]);
            __Vtemp3442[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [2U][1U]));
            __Vtemp3442[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+1211,(__Vtemp3442),85);
            tracep->chgBit(oldp+1214,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1215,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1216,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1217,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1218,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1219,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1220,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1221,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1222,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1223,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1224,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1225,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1226,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1227,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1228,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1229,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1230,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1231,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1232,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1233,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            __Vtemp3458[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [3U][0U]);
            __Vtemp3458[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [3U][1U]));
            __Vtemp3458[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+1234,(__Vtemp3458),85);
            tracep->chgBit(oldp+1237,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1238,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1239,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1240,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1241,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1242,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1243,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1244,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1245,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1246,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1247,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1248,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1249,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1250,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1251,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1252,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1253,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1254,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1255,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1256,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            __Vtemp3474[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [4U][0U]);
            __Vtemp3474[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [4U][1U]));
            __Vtemp3474[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+1257,(__Vtemp3474),85);
            tracep->chgBit(oldp+1260,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1261,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1262,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1263,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1264,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1265,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1266,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1267,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1268,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1269,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1270,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1271,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1272,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1273,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1274,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1275,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1276,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1277,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1278,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1279,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            __Vtemp3490[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [5U][0U]);
            __Vtemp3490[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [5U][1U]));
            __Vtemp3490[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+1280,(__Vtemp3490),85);
            tracep->chgBit(oldp+1283,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1284,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1285,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1286,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1287,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1288,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1289,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1290,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1291,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1292,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1293,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1294,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1295,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1296,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1297,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1298,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1299,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1300,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1301,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1302,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            __Vtemp3506[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [6U][0U]);
            __Vtemp3506[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [6U][1U]));
            __Vtemp3506[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+1303,(__Vtemp3506),85);
            tracep->chgBit(oldp+1306,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1307,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1308,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1309,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1310,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1311,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1312,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1313,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1314,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1315,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1316,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1317,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1318,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1319,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1320,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1321,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1322,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1323,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1324,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1325,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            __Vtemp3522[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [7U][0U]);
            __Vtemp3522[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [7U][1U]));
            __Vtemp3522[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+1326,(__Vtemp3522),85);
            tracep->chgBit(oldp+1329,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1330,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1331,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1332,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1333,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1334,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1335,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1336,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1337,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1338,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1339,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1340,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1341,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1342,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1343,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1344,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1345,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1346,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1347,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1348,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            __Vtemp3538[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [8U][0U]);
            __Vtemp3538[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [8U][1U]));
            __Vtemp3538[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+1349,(__Vtemp3538),85);
            tracep->chgBit(oldp+1352,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1353,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1354,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1355,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1356,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1357,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1358,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1359,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1360,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1361,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+1362,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1363,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1364,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1365,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1366,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1367,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1368,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1369,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1370,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1371,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            __Vtemp3554[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [9U][0U]);
            __Vtemp3554[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [9U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [9U][1U]));
            __Vtemp3554[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [9U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [9U][2U]));
            tracep->chgWData(oldp+1372,(__Vtemp3554),85);
            tracep->chgBit(oldp+1375,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+1376,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1377,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1378,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1379,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1380,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1381,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1382,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1383,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1384,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1385,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1386,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1387,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1388,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1389,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1390,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1391,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1392,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1393,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1394,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            __Vtemp3570[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [0xaU][0U]);
            __Vtemp3570[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xaU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][1U]));
            __Vtemp3570[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xaU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xaU][2U]));
            tracep->chgWData(oldp+1395,(__Vtemp3570),85);
            tracep->chgBit(oldp+1398,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1399,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1400,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1401,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1402,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1403,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1404,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xbU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xbU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1405,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xbU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1406,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xbU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xbU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1407,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+1408,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1409,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1410,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1411,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1412,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1413,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1414,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1415,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1416,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1417,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            __Vtemp3586[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [0xbU][0U]);
            __Vtemp3586[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xbU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][1U]));
            __Vtemp3586[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xbU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xbU][2U]));
            tracep->chgWData(oldp+1418,(__Vtemp3586),85);
            tracep->chgBit(oldp+1421,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+1422,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1423,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1424,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1425,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1426,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1427,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xcU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xcU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1428,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                                    [0xcU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1429,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1430,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xcU][0U])));
            tracep->chgBit(oldp+1431,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1432,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1433,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1434,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1435,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1436,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1437,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1438,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1439,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1440,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            __Vtemp3602[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                               [0xcU][0U]);
            __Vtemp3602[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xcU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][1U]));
            __Vtemp3602[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                [0xcU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                               [0xcU][2U]));
            tracep->chgWData(oldp+1441,(__Vtemp3602),85);
            tracep->chgBit(oldp+1444,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_10.__PVT__tl_u_o
                                       [0xcU][0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x19U])) {
            tracep->chgBit(oldp+1445,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1446,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1447,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1448,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1449,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1450,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1451,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1452,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1453,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [0U][0U])));
            tracep->chgBit(oldp+1454,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1455,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1456,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1457,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1458,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1459,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1460,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1461,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1462,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [1U][0U])));
            tracep->chgBit(oldp+1463,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1464,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1465,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1466,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1467,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1468,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1469,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1470,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1471,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [2U][0U])));
            tracep->chgBit(oldp+1472,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1473,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1474,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1475,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1476,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1477,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1478,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1479,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1480,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [3U][0U])));
            tracep->chgBit(oldp+1481,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1482,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1483,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1484,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1485,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1486,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1487,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1488,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1489,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [4U][0U])));
            tracep->chgBit(oldp+1490,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1491,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1492,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1493,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1494,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1495,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1496,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1497,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1498,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [5U][0U])));
            tracep->chgBit(oldp+1499,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1500,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1501,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1502,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1503,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1504,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1505,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1506,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1507,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [6U][0U])));
            tracep->chgBit(oldp+1508,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1509,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1510,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1511,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1512,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1513,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1514,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1515,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1516,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [7U][0U])));
            tracep->chgBit(oldp+1517,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1518,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1519,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1520,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1521,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1522,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1523,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1524,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1525,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [8U][0U])));
            tracep->chgBit(oldp+1526,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1527,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1528,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1529,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1530,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1531,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1532,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1533,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1534,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [9U][0U])));
            tracep->chgBit(oldp+1535,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1536,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1537,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1538,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1539,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1540,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1541,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1542,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1543,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1544,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [0xbU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1545,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xbU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1546,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xbU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1547,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xbU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1548,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xbU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1549,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xbU][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xbU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1550,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xbU][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [0xbU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1551,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xbU][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xbU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1552,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [0xbU][0U])));
            tracep->chgBit(oldp+1553,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                             [0xcU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1554,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xcU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1555,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xcU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1556,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                               [0xcU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1557,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xcU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1558,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xcU][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xcU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1559,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                  [0xcU][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                                    [0xcU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1560,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1561,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__tl_s1n_11_ds_h2d
                                       [0xcU][0U])));
            tracep->chgCData(oldp+1562,(vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_11),4);
            tracep->chgBit(oldp+1563,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1564,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1565,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1566,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1567,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1568,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1569,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1570,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1571,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1572,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1573,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1574,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1575,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1576,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1577,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1578,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1579,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1580,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1581,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1582,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1583,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1584,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1585,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1586,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1587,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1588,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1589,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1590,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1591,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1592,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1593,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1594,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1595,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1596,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1597,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1598,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1599,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1600,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1601,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1602,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1603,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1604,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1605,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1606,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1607,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1608,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1609,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1610,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1611,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1612,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1613,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1614,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1615,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1616,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1617,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1618,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1619,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1620,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1621,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1622,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1623,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1624,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1625,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1626,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1627,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1628,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1629,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1630,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1631,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1632,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1633,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1634,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1635,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1636,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1637,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1638,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1639,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1640,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1641,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1642,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1643,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1644,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1645,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1646,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1647,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1648,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1649,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1650,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1651,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1652,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [9U][0U])));
            tracep->chgBit(oldp+1653,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1654,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1655,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1656,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1657,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1658,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1659,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1660,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1661,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1662,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1663,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xbU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1664,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xbU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1665,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xbU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1666,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xbU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1667,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xbU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xbU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1668,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xbU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [0xbU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1669,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xbU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xbU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1670,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+1671,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1672,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xcU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1673,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xcU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1674,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                               [0xcU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1675,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xcU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1676,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xcU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xcU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1677,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                  [0xcU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                                    [0xcU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1678,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1679,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.tl_d_o
                                       [0xcU][0U])));
            tracep->chgCData(oldp+1680,((0xfU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgBit(oldp+1681,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__hold_all_requests));
            tracep->chgBit(oldp+1682,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1683,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1684,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1685,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1686,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1687,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1688,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1689,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1690,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1691,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1692,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1693,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1694,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1695,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1696,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1697,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1698,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1699,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1700,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1701,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1702,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1703,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1704,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1705,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1706,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1707,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1708,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1709,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1710,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1711,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1712,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1713,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1714,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1715,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1716,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1717,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1718,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1719,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1720,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1721,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1722,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1723,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1724,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1725,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1726,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1727,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1728,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1729,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1730,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1731,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1732,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1733,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1734,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1735,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1736,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1737,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1738,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1739,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1740,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1741,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1742,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1743,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1744,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1745,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1746,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1747,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1748,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1749,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1750,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1751,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1752,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1753,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1754,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1755,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1756,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1757,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1758,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1759,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1760,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1761,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1762,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+1763,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1764,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1765,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1766,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1767,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1768,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1769,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1770,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1771,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+1772,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1773,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1774,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1775,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1776,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1777,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1778,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1779,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1780,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+1781,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1782,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1783,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1784,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1785,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1786,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xbU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xbU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1787,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xbU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1788,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xbU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xbU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1789,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+1790,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1791,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1792,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1793,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1794,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1795,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xcU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xcU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1796,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xcU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1797,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1798,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xcU][0U])));
            tracep->chgBit(oldp+1799,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xdU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1800,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1801,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1802,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1803,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1804,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xdU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xdU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1805,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xdU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1806,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xdU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xdU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1807,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xdU][0U])));
            tracep->chgWData(oldp+1808,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+1811,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xdU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1812,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1813,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1814,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xdU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1815,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1816,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xdU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xdU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1817,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xdU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xdU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1818,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xdU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xdU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1819,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xdU][0U])));
            tracep->chgBit(oldp+1820,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1821,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1822,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1823,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1824,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1825,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1826,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1827,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1828,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1829,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1830,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1831,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1832,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1833,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1834,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1835,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1836,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1837,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__0__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1838,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            __Vtemp3987[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [0U][0U]);
            __Vtemp3987[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0U][1U]));
            __Vtemp3987[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+1839,(__Vtemp3987),85);
            tracep->chgBit(oldp+1842,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0U][0U])));
            tracep->chgBit(oldp+1843,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1844,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1845,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1846,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1847,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1848,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1849,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1850,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1851,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1852,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1853,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1854,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1855,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1856,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1857,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1858,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1859,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1860,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__1__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1861,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            __Vtemp4003[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [1U][0U]);
            __Vtemp4003[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [1U][1U]));
            __Vtemp4003[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+1862,(__Vtemp4003),85);
            tracep->chgBit(oldp+1865,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [1U][0U])));
            tracep->chgBit(oldp+1866,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1867,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1868,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1869,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [2U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1870,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1871,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [2U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [2U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1872,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [2U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [2U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1873,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [2U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [2U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1874,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1875,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1876,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1877,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1878,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1879,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1880,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1881,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1882,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1883,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__2__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1884,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            __Vtemp4019[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [2U][0U]);
            __Vtemp4019[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [2U][1U]));
            __Vtemp4019[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+1885,(__Vtemp4019),85);
            tracep->chgBit(oldp+1888,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [2U][0U])));
            tracep->chgBit(oldp+1889,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1890,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1891,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1892,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [3U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1893,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1894,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [3U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [3U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1895,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [3U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [3U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1896,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [3U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [3U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1897,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1898,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1899,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1900,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1901,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1902,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1903,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1904,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1905,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1906,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__3__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1907,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            __Vtemp4035[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [3U][0U]);
            __Vtemp4035[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [3U][1U]));
            __Vtemp4035[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+1908,(__Vtemp4035),85);
            tracep->chgBit(oldp+1911,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [3U][0U])));
            tracep->chgBit(oldp+1912,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1913,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1914,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1915,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [4U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1916,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1917,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [4U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [4U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1918,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [4U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [4U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1919,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [4U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [4U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1920,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1921,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1922,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1923,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1924,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1925,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1926,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1927,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1928,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1929,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__4__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1930,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            __Vtemp4051[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [4U][0U]);
            __Vtemp4051[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [4U][1U]));
            __Vtemp4051[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+1931,(__Vtemp4051),85);
            tracep->chgBit(oldp+1934,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [4U][0U])));
            tracep->chgBit(oldp+1935,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1936,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1937,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1938,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [5U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1939,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1940,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [5U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [5U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1941,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [5U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [5U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1942,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [5U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [5U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1943,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1944,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1945,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1946,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1947,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1948,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1949,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1950,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1951,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1952,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__5__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1953,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            __Vtemp4067[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [5U][0U]);
            __Vtemp4067[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [5U][1U]));
            __Vtemp4067[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+1954,(__Vtemp4067),85);
            tracep->chgBit(oldp+1957,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [5U][0U])));
            tracep->chgBit(oldp+1958,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1959,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1960,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1961,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [6U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1962,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1963,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [6U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [6U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1964,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1965,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1966,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1967,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1968,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1969,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1970,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1971,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1972,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1973,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1974,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1975,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__6__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1976,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            __Vtemp4083[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [6U][0U]);
            __Vtemp4083[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [6U][1U]));
            __Vtemp4083[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+1977,(__Vtemp4083),85);
            tracep->chgBit(oldp+1980,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [6U][0U])));
            tracep->chgBit(oldp+1981,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1982,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1983,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1984,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [7U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1985,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1986,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [7U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [7U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1987,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [7U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [7U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1988,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [7U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [7U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1989,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+1990,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1991,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+1992,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+1993,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+1994,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+1995,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+1996,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1997,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+1998,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__7__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+1999,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            __Vtemp4099[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [7U][0U]);
            __Vtemp4099[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [7U][1U]));
            __Vtemp4099[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+2000,(__Vtemp4099),85);
            tracep->chgBit(oldp+2003,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [7U][0U])));
            tracep->chgBit(oldp+2004,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2005,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2006,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2007,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [8U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2008,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2009,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [8U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [8U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2010,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [8U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [8U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2011,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [8U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [8U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2012,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+2013,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2014,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2015,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2016,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2017,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2018,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2019,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2020,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2021,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__8__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2022,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            __Vtemp4115[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [8U][0U]);
            __Vtemp4115[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [8U][1U]));
            __Vtemp4115[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+2023,(__Vtemp4115),85);
            tracep->chgBit(oldp+2026,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [8U][0U])));
            tracep->chgBit(oldp+2027,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2028,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2029,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2030,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [9U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2031,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2032,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [9U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [9U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2033,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [9U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [9U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2034,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [9U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [9U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2035,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+2036,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2037,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2038,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2039,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2040,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2041,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2042,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2043,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2044,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__9__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2045,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            __Vtemp4131[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [9U][0U]);
            __Vtemp4131[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [9U][1U]) | (0xfffffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [9U][1U]));
            __Vtemp4131[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [9U][2U]) | (0x1ffffeU 
                                             & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [9U][2U]));
            tracep->chgWData(oldp+2046,(__Vtemp4131),85);
            tracep->chgBit(oldp+2049,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [9U][0U])));
            tracep->chgBit(oldp+2050,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2051,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2052,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2053,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2054,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2055,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xaU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xaU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2056,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xaU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xaU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2057,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xaU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xaU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2058,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+2059,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2060,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2061,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2062,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2063,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2064,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2065,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2066,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2067,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__10__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2068,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            __Vtemp4147[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [0xaU][0U]);
            __Vtemp4147[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xaU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][1U]));
            __Vtemp4147[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xaU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xaU][2U]));
            tracep->chgWData(oldp+2069,(__Vtemp4147),85);
            tracep->chgBit(oldp+2072,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xaU][0U])));
            tracep->chgBit(oldp+2073,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2074,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2075,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2076,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2077,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2078,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xbU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xbU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2079,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xbU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xbU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2080,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xbU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xbU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2081,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+2082,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2083,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2084,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2085,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2086,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2087,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2088,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2089,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2090,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__11__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2091,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            __Vtemp4163[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [0xbU][0U]);
            __Vtemp4163[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xbU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][1U]));
            __Vtemp4163[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xbU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xbU][2U]));
            tracep->chgWData(oldp+2092,(__Vtemp4163),85);
            tracep->chgBit(oldp+2095,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xbU][0U])));
            tracep->chgBit(oldp+2096,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2097,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2098,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2099,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2100,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2101,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xcU][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xcU][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2102,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                  [0xcU][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                                    [0xcU][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2103,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                          [0xcU][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                            [0xcU][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2104,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xcU][0U])));
            tracep->chgBit(oldp+2105,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2106,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2107,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2108,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2109,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2110,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2111,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2112,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2113,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__Vcellout__gen_dfifo__BRA__12__KET____DOT__fifo_d__tl_d_o[0U])));
            tracep->chgBit(oldp+2114,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            __Vtemp4179[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                               [0xcU][0U]);
            __Vtemp4179[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xcU][1U]) | (0xfffffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][1U]));
            __Vtemp4179[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                [0xcU][2U]) | (0x1ffffeU 
                                               & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                               [0xcU][2U]));
            tracep->chgWData(oldp+2115,(__Vtemp4179),85);
            tracep->chgBit(oldp+2118,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__u_s1n_11.__PVT__tl_u_o
                                       [0xcU][0U])));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1aU])) {
            tracep->chgBit(oldp+2119,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2120,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2121,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2122,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2123,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2124,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2125,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2126,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2127,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_d_o[0U])));
            tracep->chgBit(oldp+2128,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2129,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2130,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2131,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2132,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2133,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2134,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2135,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2136,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                       [0U][0U])));
            tracep->chgBit(oldp+2137,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2138,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2139,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2140,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2141,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2142,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2143,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2144,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2145,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_4
                                       [1U][0U])));
            tracep->chgBit(oldp+2146,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2147,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2148,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2149,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2150,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2151,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2152,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2153,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2154,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                    [0U]))));
            tracep->chgBit(oldp+2155,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2156,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2157,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2158,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2159,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2160,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2161,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2162,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2163,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_4
                                                    [1U]))));
            tracep->chgBit(oldp+2164,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2165,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2166,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2167,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2168,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2169,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2170,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2171,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2172,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                       [0U][0U])));
            tracep->chgBit(oldp+2173,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2174,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2175,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2176,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2177,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2178,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2179,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2180,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2181,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_5
                                       [1U][0U])));
            tracep->chgBit(oldp+2182,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2183,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2184,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2185,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2186,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2187,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2188,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2189,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2190,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                    [0U]))));
            tracep->chgBit(oldp+2191,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2192,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2193,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2194,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2195,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2196,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2197,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2198,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2199,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_5
                                                    [1U]))));
            tracep->chgBit(oldp+2200,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2201,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2202,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2203,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2204,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2205,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2206,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2207,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2208,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+2209,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2210,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2211,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2212,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2213,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2214,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2215,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2216,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2217,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+2218,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2219,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2220,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2221,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2222,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2223,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2224,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2225,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2226,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+2227,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2228,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2229,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2230,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2231,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2232,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2233,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2234,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2235,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+2236,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2237,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2238,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2239,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2240,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2241,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2242,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2243,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2244,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+2245,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2246,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2247,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2248,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2249,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2250,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2251,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2252,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2253,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+2254,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2255,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2256,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2257,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2258,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2259,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2260,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2261,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2262,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+2263,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2264,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2265,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2266,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2267,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2268,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2269,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2270,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2271,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+2272,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrequest),2);
            tracep->chgCData(oldp+2273,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hgrant),2);
            tracep->chgBit(oldp+2274,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrequest))));
            tracep->chgBit(oldp+2275,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2276,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2277,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2278,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2279,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2280,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2281,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2282,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2283,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2284,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2285,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2286,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2287,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2288,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2289,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2290,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2291,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2292,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2293,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2294,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2295,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2296,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2297,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2298,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2299,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2300,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2301,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2302,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2303,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2304,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2305,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+2306,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2307,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2308,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2309,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2310,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2311,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2312,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2313,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2314,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+2315,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2316,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2317,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2318,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2319,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2320,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2321,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2322,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2323,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+2324,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2325,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4260[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4260[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4260[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2326,(__Vtemp4260),85);
            tracep->chgBit(oldp+2329,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2330,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2331,((((QData)((IData)(
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
            tracep->chgBit(oldp+2333,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2334,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2335,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2336,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2337,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2338,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2339,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2340,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2341,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+2342,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2343,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2344,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2345,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2346,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2347,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2348,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2349,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2350,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+2351,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2352,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2353,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2354,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2355,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2356,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2357,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2358,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2359,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+2360,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2361,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4264[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4264[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4264[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2362,(__Vtemp4264),85);
            tracep->chgBit(oldp+2365,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2366,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2367,((((QData)((IData)(
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
            tracep->chgBit(oldp+2369,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+2370,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2371,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2372,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2373,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2374,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgBit(oldp+2375,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2376,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2377,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2378,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2379,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2380,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2381,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2382,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2383,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+2384,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2385,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2386,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2387,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2388,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2389,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2390,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2391,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2392,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+2393,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2394,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2395,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2396,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2397,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2398,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2399,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2400,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2401,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+2402,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2403,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2404,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2405,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2406,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2407,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2408,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2409,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2410,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+2411,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2412,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2413,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2414,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2415,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2416,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2417,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2418,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2419,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+2420,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2421,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2422,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2423,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2424,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2425,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2426,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2427,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2428,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+2429,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2430,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2431,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2432,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2433,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2434,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2435,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2436,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2437,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+2438,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2439,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2440,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2441,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2442,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2443,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2444,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2445,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2446,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+2447,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest),2);
            tracep->chgCData(oldp+2448,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hgrant),2);
            tracep->chgBit(oldp+2449,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2450,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2451,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2452,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2453,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2454,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2455,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2456,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2457,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+2458,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrequest))));
            tracep->chgBit(oldp+2459,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2460,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2461,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2462,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2463,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2464,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2465,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2466,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2467,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+2468,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2469,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+2470,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2471,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2472,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2473,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2474,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2475,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2476,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2477,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2478,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2479,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2480,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2481,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2482,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2483,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2484,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2485,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2486,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2487,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2488,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2489,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2490,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2491,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2492,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp4308[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[0U]);
            __Vtemp4308[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[1U]));
            __Vtemp4308[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2493,(__Vtemp4308),85);
            tracep->chgBit(oldp+2496,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+2497,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2498,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2499,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2500,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2501,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2502,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2503,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2504,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2505,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+2506,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2507,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2508,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2509,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2510,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2511,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2512,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2513,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2514,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+2515,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2516,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2517,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2518,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2519,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2520,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2521,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2522,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2523,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+2524,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2525,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4312[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4312[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4312[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2526,(__Vtemp4312),85);
            tracep->chgBit(oldp+2529,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2530,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2531,((((QData)((IData)(
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
            tracep->chgBit(oldp+2533,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2534,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2535,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2536,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2537,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2538,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2539,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2540,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2541,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+2542,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2543,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2544,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2545,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2546,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2547,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2548,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2549,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2550,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+2551,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2552,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2553,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2554,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2555,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2556,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2557,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2558,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2559,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+2560,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2561,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4316[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4316[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4316[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2562,(__Vtemp4316),85);
            tracep->chgBit(oldp+2565,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2566,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2567,((((QData)((IData)(
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
            tracep->chgWData(oldp+2569,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2572,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+2575,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgWData(oldp+2576,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2579,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2580,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2581,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2582,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2583,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__LDO2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1bU])) {
            tracep->chgBit(oldp+2584,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2585,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2586,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2587,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2588,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2589,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2590,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2591,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2592,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_d_o[0U])));
            tracep->chgBit(oldp+2593,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2594,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2595,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2596,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2597,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2598,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2599,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2600,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2601,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_d_o[0U])));
            tracep->chgBit(oldp+2602,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2603,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2604,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2605,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2606,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2607,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2608,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2609,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2610,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                       [0U][0U])));
            tracep->chgBit(oldp+2611,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2612,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2613,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2614,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2615,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2616,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2617,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2618,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2619,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_7
                                       [1U][0U])));
            tracep->chgBit(oldp+2620,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2621,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2622,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2623,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2624,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2625,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2626,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2627,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2628,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                    [0U]))));
            tracep->chgBit(oldp+2629,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2630,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2631,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2632,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2633,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2634,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2635,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2636,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2637,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_7
                                                    [1U]))));
            tracep->chgBit(oldp+2638,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2639,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2640,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2641,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2642,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2643,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2644,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2645,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2646,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                       [0U][0U])));
            tracep->chgBit(oldp+2647,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2648,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2649,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2650,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2651,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2652,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2653,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2654,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2655,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_9
                                       [1U][0U])));
            tracep->chgBit(oldp+2656,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2657,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2658,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2659,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2660,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2661,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2662,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2663,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2664,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                    [0U]))));
            tracep->chgBit(oldp+2665,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2666,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2667,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2668,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2669,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2670,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2671,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2672,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2673,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_9
                                                    [1U]))));
            tracep->chgBit(oldp+2674,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2675,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2676,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2677,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2678,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2679,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2680,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2681,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2682,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+2683,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2684,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2685,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2686,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2687,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2688,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2689,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2690,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2691,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+2692,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2693,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2694,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2695,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2696,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2697,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2698,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2699,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2700,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+2701,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2702,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2703,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2704,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2705,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2706,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2707,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2708,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2709,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+2710,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2711,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2712,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2713,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2714,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2715,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2716,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2717,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2718,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+2719,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2720,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2721,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2722,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2723,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2724,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2725,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2726,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2727,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+2728,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2729,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2730,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2731,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2732,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2733,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2734,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2735,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2736,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+2737,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2738,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2739,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2740,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2741,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2742,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2743,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2744,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2745,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+2746,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrequest),2);
            tracep->chgCData(oldp+2747,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hgrant),2);
            tracep->chgBit(oldp+2748,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2749,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2750,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2751,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2752,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2753,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2754,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2755,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2756,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+2757,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrequest))));
            tracep->chgBit(oldp+2758,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2759,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2760,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2761,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2762,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2763,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2764,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2765,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2766,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+2767,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2768,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+2769,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2770,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2771,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2772,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2773,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2774,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2775,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2776,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2777,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2778,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2779,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2780,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2781,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2782,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2783,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2784,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2785,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2786,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2787,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2788,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2789,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2790,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2791,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp4396[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[0U]);
            __Vtemp4396[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[1U]));
            __Vtemp4396[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2792,(__Vtemp4396),85);
            tracep->chgBit(oldp+2795,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+2796,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2797,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2798,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2799,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2800,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2801,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2802,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2803,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2804,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+2805,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2806,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2807,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2808,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2809,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2810,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2811,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2812,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2813,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+2814,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2815,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2816,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2817,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2818,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2819,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2820,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2821,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2822,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+2823,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2824,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4400[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4400[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4400[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2825,(__Vtemp4400),85);
            tracep->chgBit(oldp+2828,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2829,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2830,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+2832,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2833,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2834,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2835,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2836,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2837,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2838,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2839,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2840,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+2841,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2842,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2843,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2844,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2845,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2846,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2847,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2848,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2849,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+2850,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2851,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2852,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2853,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2854,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2855,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2856,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2857,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2858,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+2859,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2860,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4404[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4404[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4404[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2861,(__Vtemp4404),85);
            tracep->chgBit(oldp+2864,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2865,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2866,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgWData(oldp+2868,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2871,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+2874,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgWData(oldp+2875,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2878,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2879,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2880,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2881,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2882,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__PLL1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgBit(oldp+2883,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2884,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2885,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2886,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2887,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2888,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2889,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2890,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2891,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+2892,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2893,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2894,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2895,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2896,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2897,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2898,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2899,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2900,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+2901,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2902,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2903,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2904,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2905,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2906,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2907,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2908,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2909,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+2910,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2911,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2912,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2913,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2914,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2915,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2916,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2917,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2918,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+2919,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2920,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2921,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2922,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2923,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2924,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2925,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2926,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2927,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+2928,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2929,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2930,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2931,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2932,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2933,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2934,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2935,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2936,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+2937,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2938,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2939,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2940,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2941,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2942,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2943,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2944,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2945,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+2946,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+2947,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+2948,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+2949,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+2950,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+2951,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+2952,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+2953,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2954,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+2955,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest),2);
            tracep->chgCData(oldp+2956,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hgrant),2);
            tracep->chgBit(oldp+2957,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2958,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2959,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2960,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2961,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2962,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2963,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2964,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2965,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+2966,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrequest))));
            tracep->chgBit(oldp+2967,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2968,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2969,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2970,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2971,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2972,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2973,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2974,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2975,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[0U])));
            tracep->chgCData(oldp+2976,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2977,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dfifo_rspready))));
            tracep->chgBit(oldp+2978,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2979,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2980,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2981,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2982,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2983,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2984,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2985,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2986,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2987,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2988,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2989,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+2990,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+2991,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+2992,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+2993,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+2994,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+2995,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+2996,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+2997,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+2998,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2999,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3000,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp4448[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[0U]);
            __Vtemp4448[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[1U]));
            __Vtemp4448[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+3001,(__Vtemp4448),85);
            tracep->chgBit(oldp+3004,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__dreq_fifo_i[0U])));
            tracep->chgBit(oldp+3005,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3006,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3007,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3008,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3009,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3010,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3011,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3012,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3013,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3014,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3015,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3016,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3017,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3018,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3019,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3020,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3021,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3022,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3023,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3024,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3025,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3026,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3027,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3028,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3029,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3030,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3031,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3032,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3033,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4452[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4452[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4452[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3034,(__Vtemp4452),85);
            tracep->chgBit(oldp+3037,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3038,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3039,((((QData)((IData)(
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
            tracep->chgBit(oldp+3041,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3042,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3043,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3044,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3045,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3046,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3047,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3048,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3049,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3050,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3051,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3052,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3053,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3054,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3055,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3056,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3057,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3058,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3059,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3060,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3061,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3062,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3063,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3064,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3065,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3066,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3067,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+3068,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3069,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4456[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4456[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4456[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3070,(__Vtemp4456),85);
            tracep->chgBit(oldp+3073,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3074,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3075,((((QData)((IData)(
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
            tracep->chgWData(oldp+3077,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+3080,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+3083,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgWData(oldp+3084,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+3087,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+3088,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+3089,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+3090,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+3091,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1cU])) {
            tracep->chgBit(oldp+3092,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3093,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3094,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3095,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3096,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3097,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3098,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3099,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3100,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                       [0U][0U])));
            tracep->chgBit(oldp+3101,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3102,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3103,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3104,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3105,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3106,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3107,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3108,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3109,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_8
                                       [1U][0U])));
            tracep->chgBit(oldp+3110,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3111,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3112,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3113,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3114,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3115,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3116,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3117,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3118,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                    [0U]))));
            tracep->chgBit(oldp+3119,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3120,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3121,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3122,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3123,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3124,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3125,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3126,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3127,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_8
                                                    [1U]))));
            tracep->chgBit(oldp+3128,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3129,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3130,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3131,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3132,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3133,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3134,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3135,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3136,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                       [0U][0U])));
            tracep->chgBit(oldp+3137,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3138,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3139,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3140,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3141,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3142,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3143,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3144,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3145,((1U & vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_12
                                       [1U][0U])));
            tracep->chgBit(oldp+3146,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3147,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3148,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3149,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3150,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3151,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3152,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3153,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3154,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                    [0U]))));
            tracep->chgBit(oldp+3155,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3156,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3157,((7U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3158,((3U & (IData)(
                                                      (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3159,((0xffU & (IData)(
                                                         (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3160,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3161,((IData)((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3162,((1U & (IData)(
                                                    (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3163,((1U & (IData)(
                                                    vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__sm1_s1n_12
                                                    [1U]))));
            tracep->chgBit(oldp+3164,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3165,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3166,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3167,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3168,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3169,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3170,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3171,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3172,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+3173,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3174,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3175,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3176,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3177,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3178,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3179,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3180,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3181,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+3182,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3183,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3184,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3185,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3186,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3187,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3188,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3189,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3190,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+3191,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3192,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3193,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3194,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3195,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3196,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3197,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3198,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3199,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+3200,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3201,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3202,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3203,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3204,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3205,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3206,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3207,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3208,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+3209,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3210,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3211,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3212,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3213,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3214,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3215,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3216,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3217,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+3218,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3219,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3220,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3221,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3222,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3223,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3224,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3225,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3226,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3227,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3228,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3229,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3230,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3231,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3232,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3233,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3234,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3235,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+3236,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrequest),2);
            tracep->chgCData(oldp+3237,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hgrant),2);
            tracep->chgBit(oldp+3238,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrequest))));
            tracep->chgBit(oldp+3239,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3240,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3241,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3242,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3243,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3244,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3245,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3246,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3247,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3248,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3249,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3250,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3251,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3252,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3253,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3254,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3255,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3256,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3257,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3258,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3259,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3260,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3261,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3262,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3263,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3264,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3265,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3266,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3267,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3268,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3269,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3270,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3271,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3272,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3273,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3274,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3275,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3276,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3277,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3278,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3279,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3280,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3281,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3282,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3283,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3284,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3285,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3286,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3287,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3288,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3289,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4536[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4536[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4536[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3290,(__Vtemp4536),85);
            tracep->chgBit(oldp+3293,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3294,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3295,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+3297,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3298,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3299,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3300,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3301,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3302,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3303,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3304,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3305,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3306,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3307,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3308,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3309,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3310,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3311,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3312,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3313,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3314,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3315,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3316,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3317,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3318,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3319,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3320,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3321,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3322,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3323,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+3324,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3325,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4540[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4540[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4540[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3326,(__Vtemp4540),85);
            tracep->chgBit(oldp+3329,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3330,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3331,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+3333,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+3334,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+3335,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+3336,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+3337,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+3338,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__TSEN1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgBit(oldp+3339,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3340,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3341,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3342,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3343,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3344,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3345,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3346,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3347,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                       [0U][0U])));
            tracep->chgBit(oldp+3348,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3349,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3350,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3351,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3352,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3353,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3354,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3355,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3356,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                       [1U][0U])));
            tracep->chgBit(oldp+3357,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3358,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3359,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3360,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3361,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3362,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3363,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3364,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3365,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [0U]))));
            tracep->chgBit(oldp+3366,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3367,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3368,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3369,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3370,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3371,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3372,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3373,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3374,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_o
                                                    [1U]))));
            tracep->chgBit(oldp+3375,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3376,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3377,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3378,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3379,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3380,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3381,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3382,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [0U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3383,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                       [0U][0U])));
            tracep->chgBit(oldp+3384,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3385,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3386,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3387,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                               [1U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3388,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3389,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                          [1U][2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [1U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3390,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                                    [1U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3391,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                          [1U][1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                            [1U][0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3392,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hreq_fifo_o
                                       [1U][0U])));
            tracep->chgBit(oldp+3393,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3394,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3395,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3396,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3397,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3398,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3399,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3400,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3401,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3402,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3403,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3404,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3405,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3406,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3407,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3408,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3409,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3410,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgCData(oldp+3411,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest),2);
            tracep->chgCData(oldp+3412,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hgrant),2);
            tracep->chgBit(oldp+3413,((0U != (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrequest))));
            tracep->chgBit(oldp+3414,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3415,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3416,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3417,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3418,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3419,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3420,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3421,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3422,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3423,((0xfeU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3424,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3425,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3426,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3427,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3428,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3429,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3430,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3431,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3432,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3433,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgCData(oldp+3434,((1U | (0xfeU 
                                               & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3435,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3436,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3437,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3438,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3439,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3440,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3441,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3442,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3443,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3444,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3445,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3446,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3447,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3448,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3449,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3450,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3451,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3452,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3453,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3454,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3455,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3456,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3457,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [0U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3458,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                          [0U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3459,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3460,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [0U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3461,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3462,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U]))));
            tracep->chgBit(oldp+3463,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3464,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp4584[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4584[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4584[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3465,(__Vtemp4584),85);
            tracep->chgBit(oldp+3468,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3469,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3470,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+3472,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3473,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3474,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3475,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3476,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3477,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3478,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3479,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3480,((1U & (IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_h_o))));
            tracep->chgBit(oldp+3481,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3482,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3483,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3484,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3485,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3486,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3487,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3488,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3489,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__Vcellout__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo__tl_d_o[0U])));
            tracep->chgBit(oldp+3490,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgCData(oldp+3491,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x30U)))),3);
            tracep->chgCData(oldp+3492,((7U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2dU)))),3);
            tracep->chgCData(oldp+3493,((3U & (IData)(
                                                      (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                       [1U] 
                                                       >> 0x2bU)))),2);
            tracep->chgCData(oldp+3494,((0xffU & (IData)(
                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                          [1U] 
                                                          >> 0x23U)))),8);
            tracep->chgBit(oldp+3495,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x22U)))));
            tracep->chgIData(oldp+3496,((IData)((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                 [1U] 
                                                 >> 2U))),32);
            tracep->chgBit(oldp+3497,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+3498,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U]))));
            tracep->chgBit(oldp+3499,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+3500,((1U & (IData)(
                                                    vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp4588[0U] = (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp4588[1U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp4588[2U] = ((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+3501,(__Vtemp4588),85);
            tracep->chgBit(oldp+3504,((1U & (IData)(
                                                    (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+3505,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+3506,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+3508,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+3509,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+3510,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+3511,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+3512,((2U & ((IData)(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+3513,(vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DEBUG_ROM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0x1dU])) {
            tracep->chgBit(oldp+3514,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3515,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3516,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3517,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3518,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3519,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3520,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3521,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3522,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DCDC.tl_d_o[0U])));
            tracep->chgBit(oldp+3523,((1U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3524,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3525,((7U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3526,((3U & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3527,((0xffU & (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3528,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                          << 0x1bU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3529,((0xfU & ((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[2U] 
                                                  << 0x1fU) 
                                                 | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3530,(((vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[1U] 
                                          << 0x1fU) 
                                         | (vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[0U] 
                                            >> 1U))),32);
            tracep->chgBit(oldp+3531,((1U & vlSymsp->TOP__opentitan_soc_top__DOT__periph_switch__DOT__DAP.tl_d_o[0U])));
            tracep->chgBit(oldp+3532,((1U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+3533,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                               [0U][2U] 
                                               >> 0x12U))),3);
            tracep->chgCData(oldp+3534,((7U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                               [0U][2U] 
                                               >> 0xfU))),3);
            tracep->chgCData(oldp+3535,((3U & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                               [0U][2U] 
                                               >> 0xdU))),2);
            tracep->chgCData(oldp+3536,((0xffU & (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                                  [0U][2U] 
                                                  >> 5U))),8);
            tracep->chgIData(oldp+3537,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                          [0U][2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                            [0U][1U] 
                                            >> 5U))),32);
            tracep->chgCData(oldp+3538,((0xfU & ((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                                  [0U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                                    [0U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+3539,(((vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                          [0U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->opentitan_soc_top__DOT__periph_switch__DOT__s1n_sm1_6
                                            [0U][0U] 
                                            >> 1U))),32);
        }
    }
}
