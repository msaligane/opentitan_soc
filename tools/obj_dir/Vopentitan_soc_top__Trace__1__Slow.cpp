// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vopentitan_soc_top__Syms.h"


void Vopentitan_soc_top::traceFullSub1(void* userp, VerilatedVcd* tracep) {
    Vopentitan_soc_top__Syms* __restrict vlSymsp = static_cast<Vopentitan_soc_top__Syms*>(userp);
    Vopentitan_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+4366,(0x400c0000U),32);
        tracep->fullIData(oldp+4367,(0x400d0000U),32);
        tracep->fullIData(oldp+4368,(0x400e0000U),32);
        tracep->fullIData(oldp+4369,(0x400f0000U),32);
        tracep->fullIData(oldp+4370,(0x40050000U),32);
        tracep->fullIData(oldp+4371,(0xffffU),32);
        tracep->fullSData(oldp+4372,(0U),9);
        tracep->fullSData(oldp+4373,(4U),9);
        tracep->fullSData(oldp+4374,(8U),9);
        tracep->fullSData(oldp+4375,(0xcU),9);
        tracep->fullSData(oldp+4376,(0x10U),9);
        tracep->fullSData(oldp+4377,(0x14U),9);
        tracep->fullSData(oldp+4378,(0x18U),9);
        tracep->fullSData(oldp+4379,(0x1cU),9);
        tracep->fullSData(oldp+4380,(0x20U),9);
        tracep->fullSData(oldp+4381,(0x24U),9);
        tracep->fullSData(oldp+4382,(0x28U),9);
        tracep->fullSData(oldp+4383,(0x2cU),9);
        tracep->fullSData(oldp+4384,(0x30U),9);
        tracep->fullSData(oldp+4385,(0x34U),9);
        tracep->fullSData(oldp+4386,(0x38U),9);
        tracep->fullSData(oldp+4387,(0x3cU),9);
        tracep->fullSData(oldp+4388,(0x40U),9);
        tracep->fullSData(oldp+4389,(0x44U),9);
        tracep->fullSData(oldp+4390,(0x48U),9);
        tracep->fullSData(oldp+4391,(0x4cU),9);
        tracep->fullSData(oldp+4392,(0x50U),9);
        tracep->fullSData(oldp+4393,(0x54U),9);
        tracep->fullSData(oldp+4394,(0x58U),9);
        tracep->fullSData(oldp+4395,(0x5cU),9);
        tracep->fullSData(oldp+4396,(0x60U),9);
        tracep->fullSData(oldp+4397,(0x64U),9);
        tracep->fullSData(oldp+4398,(0x68U),9);
        tracep->fullSData(oldp+4399,(0x6cU),9);
        tracep->fullSData(oldp+4400,(0x70U),9);
        tracep->fullSData(oldp+4401,(0x74U),9);
        tracep->fullSData(oldp+4402,(0x78U),9);
        tracep->fullSData(oldp+4403,(0x7cU),9);
        tracep->fullSData(oldp+4404,(0x80U),9);
        tracep->fullSData(oldp+4405,(0x84U),9);
        tracep->fullSData(oldp+4406,(0x100U),9);
        tracep->fullSData(oldp+4407,(0x104U),9);
        tracep->fullSData(oldp+4408,(0x108U),9);
        tracep->fullSData(oldp+4409,(0x10cU),9);
        tracep->fullIData(oldp+4410,(0x505043U),24);
        tracep->fullBit(oldp+4411,(0U));
        tracep->fullCData(oldp+4412,(0U),3);
        tracep->fullCData(oldp+4413,(0U),3);
        tracep->fullCData(oldp+4414,(0U),2);
        tracep->fullCData(oldp+4415,(0U),8);
        tracep->fullIData(oldp+4416,(0U),32);
        tracep->fullCData(oldp+4417,(0U),4);
        tracep->fullIData(oldp+4418,(0U),32);
        tracep->fullBit(oldp+4419,(1U));
        tracep->fullBit(oldp+4420,(0U));
        tracep->fullCData(oldp+4421,(0U),3);
        tracep->fullCData(oldp+4422,(0U),3);
        tracep->fullCData(oldp+4423,(0U),2);
        tracep->fullCData(oldp+4424,(0U),8);
        tracep->fullBit(oldp+4425,(0U));
        tracep->fullIData(oldp+4426,(0U),32);
        tracep->fullBit(oldp+4427,(0U));
        tracep->fullBit(oldp+4428,(1U));
    }
}
