// coverage: addr=0x0019ab30 symbol=func_0019ab30 size=80 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.9;ghidra:near:63.6;m2c:near:60.19
#include "common/types.h"

extern "C" u32 D_0034f250 asm("D_0034f250");
extern "C" u32 func_00195700(u32) asm("func_00195700");

// 0x0019ab30 func_0019ab30
u32 func_0019ab30(u32 a0) asm("func_0019ab30");
u32 func_0019ab30(u32 a0) {
    u32 t6;
    if (!(((s32)(func_00195700((u32)&D_0034f250)) == 0)) == 0) {
        u32 cse10 = ((((u32*)a0)[7] + 1));
        *(u32*)(((a0) + 0x1c)) = (s32)cse10;
        *(u32*)((a0 + 0x18)) = (u32)cse10;
        t6 = 1;
    } else {
        t6 = 0;
    }
    return t6;
}
