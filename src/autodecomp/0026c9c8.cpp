// coverage: addr=0x0026c9c8 symbol=_ZN2Tz7CmParty10CreateInfoEv size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0026ceb0() asm("func_0026ceb0");
extern "C" void func_00257708(u32) asm("func_00257708");
extern "C" void func_0026bc10() asm("func_0026bc10");

// 0x0026c9c8 Tz::CmParty::CreateInfo()
u32 lift_0026c9c8() asm("_ZN2Tz7CmParty10CreateInfoEv");
u32 lift_0026c9c8() {
    func_0026bc10();
    func_00257708(0);
    return func_0026ceb0();
}
