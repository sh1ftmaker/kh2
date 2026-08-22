// coverage: addr=0x002ed438 symbol=_ZN2Ts16TRINITY_SHOT_OBJ4InitEv size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_0016e920(u32) asm("func_0016e920");
extern "C" u32 func_002ed300(u32, u32, u32) asm("func_002ed300");

// 0x002ed438 Ts::TRINITY_SHOT_OBJ::Init()
u32 lift_002ed438() asm("_ZN2Ts16TRINITY_SHOT_OBJ4InitEv");
u32 lift_002ed438() {
    u32 s0;
    s0 = func_001050d8(0xa00);
    return func_002ed300(s0, func_0016e920(0x5c3), 0x100);
}
