// coverage: addr=0x0019f8f8 symbol=func_0019f8f8 size=84 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:87.33;m2c:near:87.29
#include "common/types.h"

extern "C" u32 func_001c0150(u32, u32) asm("func_001c0150");

// 0x0019f8f8 func_0019f8f8
u32 func_0019f8f8(u32 a0, u32 a1) asm("func_0019f8f8");
u32 func_0019f8f8(u32 a0, u32 a1) {
    u32 v0;
    u32 t7;
    *(u32*)(a0) = a1;
    *(u32*)((a0 + 4)) = 0;
    v0 = func_001c0150(a0 + 0x48, a1);
    t7 = 7;
    do {
        *(u32*)(((a0 + ((t7 - 7) * -8)) + 0xc)) = 0;
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    return v0;
}
