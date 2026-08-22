// coverage: addr=0x002675e8 symbol=_ZN2Tz7CmEquip4InitEv size=28 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:87.25;corpus:near:86.12
#include "common/types.h"

extern "C" u32 D_0035f0ec asm("D_0035f0ec");
extern "C" u32 func_00267620() asm("func_00267620");

// 0x002675e8 Tz::CmEquip::Init()
u32 lift_002675e8() asm("_ZN2Tz7CmEquip4InitEv");
u32 lift_002675e8() {
    *(u32*)(&D_0035f0ec) = 0;
    return func_00267620();
}
