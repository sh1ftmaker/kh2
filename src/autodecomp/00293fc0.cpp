// coverage: addr=0x00293fc0 symbol=_ZN2Tz6JmInfo11SetLeadDataEv size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:93.94;e3:near:59.26
#include "common/types.h"

extern "C" u32 D_0035f574 asm("D_0035f574");
extern "C" u32 func_00290960(u32, u32, u32) asm("func_00290960");
extern "C" u32 func_00293db8(u32, u32) asm("func_00293db8");
extern "C" void func_00290940(u32) asm("func_00290940");

// 0x00293fc0 Tz::JmInfo::SetLeadData()
u32 lift_00293fc0() asm("_ZN2Tz6JmInfo11SetLeadDataEv");
u32 lift_00293fc0() {
    func_00290940(*(u32*)(&D_0035f574));
    return func_00290960(*(u32*)(&D_0035f574), func_00293db8(0, 0), 0x2b);
}
