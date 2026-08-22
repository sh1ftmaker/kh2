// coverage: addr=0x001542c8 symbol=func_001542c8 size=104 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:92.68;m2c:near:48.39
#include "common/types.h"

extern "C" u32 func_001387f8(u32, u32, u32, u32) asm("func_001387f8");
extern "C" u32 func_001541d8(u32, u32, u32) asm("func_001541d8");
extern "C" u32 func_00154288(u32, u32) asm("func_00154288");

// 0x001542c8 func_001542c8
u32 func_001542c8(u32 a0, u32 a1, u32 a2) asm("func_001542c8");
u32 func_001542c8(u32 a0, u32 a1, u32 a2) {
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    loc_0 = 0;
    v0 = func_001541d8(a0, (u32)&loc_0, a1);
    if ((v0 == 1)) {
        v0_0 = func_001387f8(a0, loc_0, a0 + 0x1a0, func_00154288(a0, a2));
        v0 = v0_0;
    }
    return v0;
}
