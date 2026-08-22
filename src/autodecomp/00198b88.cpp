// coverage: addr=0x00198b88 symbol=func_00198b88 size=68 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:exact:100.0;m2c:near:99.88;ghidra:near:85.94;e3:near:66.68
#include "common/types.h"

extern "C" u32 D_01c61b48 asm("D_01c61b48");
extern "C" u32 func_00198dc0(u32) asm("func_00198dc0");

// 0x00198b88 func_00198b88
u32 func_00198b88() asm("func_00198b88");
u32 func_00198b88() {
    u32 s0;
    u32 s1;
    u32 v0_0;
    s0 = (u32)&D_01c61b48;
    s1 = ((u32)&D_01c61b48 + 0x580);
    do {
        v0_0 = func_00198dc0(s0);
        s0 = (s0 + 0x58);
    } while (((s32)(((s32)(s0) < (s32)(s1))) != 0));
    return v0_0;
}
