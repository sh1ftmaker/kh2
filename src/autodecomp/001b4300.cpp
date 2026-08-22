// coverage: addr=0x001b4300 symbol=_ZN2YS5LIMIT4InitEv size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:99.93;ghidra:near:94.87;m2c:near:77.44
#include "common/types.h"

extern "C" u32 D_001b4340 asm("D_001b4340");
extern "C" u32 D_001b43e0 asm("D_001b43e0");
extern "C" u32 D_01d48cb0 asm("D_01d48cb0");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");

// 0x001b4300 YS::LIMIT::Init()
u32 lift_001b4300() asm("_ZN2YS5LIMIT4InitEv");
u32 lift_001b4300() {
    u32 v0;
    *(u32*)(&D_01d48cb0) = 0;
    v0 = func_00102c18(1, 0x5078, (u32)&D_001b4340);
    *(u32*)((v0 + 0x30)) = (u32)&D_001b43e0;
    return v0;
}
