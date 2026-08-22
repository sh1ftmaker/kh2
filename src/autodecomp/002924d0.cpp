// coverage: addr=0x002924d0 symbol=func_002924d0 size=76 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:57.89;m2c:near:57.75
#include "common/types.h"

extern "C" u32 func_001a80c8(u32, u32) asm("func_001a80c8");
extern "C" u32 func_001a8190(u32) asm("func_001a8190");

// 0x002924d0 func_002924d0
u32 func_002924d0(u32 a0, u32 a1) asm("func_002924d0");
u32 func_002924d0(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    if (((s32)(a1) != 0)) {
        v0 = func_001a8190(func_001a80c8(a1, a1));
        v0_0 = v0;
    } else {
        v0_0 = (a0 + 0x2b3c);
    }
    return (v0_0 ? v0_0 : (a0 + 0x2b3c));
}
