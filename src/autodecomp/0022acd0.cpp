// coverage: addr=0x0022acd0 symbol=_ZN2sa13MUSICAL_INPUT6updateEv size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001390f0(u32) asm("func_001390f0");
extern "C" void func_0022ac60(u32) asm("func_0022ac60");

// 0x0022acd0 sa::MUSICAL_INPUT::update()
u32 lift_0022acd0(u32 a0) asm("_ZN2sa13MUSICAL_INPUT6updateEv");
u32 lift_0022acd0(u32 a0) {
    func_0022ac60(a0);
    return func_001390f0(a0);
}
