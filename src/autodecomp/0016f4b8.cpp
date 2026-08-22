// coverage: addr=0x0016f4b8 symbol=func_0016f4b8 size=100 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:82.81;ghidra:near:57.24
#include "common/types.h"

extern "C" u32 D_0033caf0 asm("D_0033caf0");
extern "C" u32 D_0036c450 asm("D_0036c450");
extern "C" u32 D_004f63d8 asm("D_004f63d8");
extern "C" void func_002fee78(u32, u32, u32, u32) asm("func_002fee78");

// 0x0016f4b8 func_0016f4b8
u32 func_0016f4b8(u32 a0, u32 a1) asm("func_0016f4b8");
u32 func_0016f4b8(u32 a0, u32 a1) {
    u32 t7;
    u32 v0;
    t7 = *(u8*)((a0 + 0x48));
    if (((s32)(((t7 ^ 1) & 1)) != 0)) {
        if (((s32)(a1) == 0)) {
            a1 = (u32)&D_004f63d8;
        }
        func_002fee78(a1, (u32)&D_0036c450, a0 + 8, *(u32*)(&D_0033caf0));
        v0 = a1;
    } else {
        v0 = 0;
    }
    return v0;
}
