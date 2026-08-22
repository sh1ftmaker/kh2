// coverage: addr=0x00241770 symbol=func_00241770 size=44 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:80.77;m2c:near:54.88
#include "common/types.h"

extern "C" u32 D_0035ec94 asm("D_0035ec94");

// 0x00241770 func_00241770
u32 func_00241770(u32 a0) asm("func_00241770");
u32 func_00241770(u32 a0) {
    if (((s32)(a0) < 0)) {
        a0 = *(s8*)((*(u32*)(&D_0035ec94) + 1));
    }
    return (((s32)(*(u32*)((((a0 << 5) + *(u32*)(&D_0035ec94)) + 8))) >> 4) & 1);
}
