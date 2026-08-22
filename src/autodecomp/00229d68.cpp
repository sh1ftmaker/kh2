// coverage: addr=0x00229d68 symbol=_ZN2sa13MUSICAL_COMBO6updateEv size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001390f0(u32) asm("func_001390f0");
extern "C" void func_00229d40(u32) asm("func_00229d40");

// 0x00229d68 sa::MUSICAL_COMBO::update()
u32 lift_00229d68(u32 a0) asm("_ZN2sa13MUSICAL_COMBO6updateEv");
u32 lift_00229d68(u32 a0) {
    func_00229d40(a0);
    return func_001390f0(a0);
}
