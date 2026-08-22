// coverage: addr=0x00185920 symbol=func_00185920 size=104 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:86.63;ghidra:near:63.0;e3:near:48.79
#include "common/types.h"

extern "C" u32 D_0036c8f0 asm("D_0036c8f0");
extern "C" u32 D_01c6088c asm("D_01c6088c");
extern "C" u32 D_01c60890 asm("D_01c60890");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");

// 0x00185920 func_00185920
u32 func_00185920(u32 a0, u32 a1, u32 a2) asm("func_00185920");
u32 func_00185920(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    if (((s32)(*(s8*)(((a1 << 5) + (*(u32*)(&D_01c6088c) + (a0 << 6))))) != 0)) {
        if (((s32)(a2) == 0)) {
            a2 = (u32)&D_01c60890;
        }
        func_002fee78(a2, (u32)&D_0036c8f0, (a1 << 5) + (*(u32*)(&D_01c6088c) + (a0 << 6)));
        v0 = a2;
    } else {
        v0 = 0;
    }
    return v0;
}
