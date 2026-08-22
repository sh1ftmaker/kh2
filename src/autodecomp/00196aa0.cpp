// coverage: addr=0x00196aa0 symbol=func_00196aa0 size=136 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:87.88;ghidra:near:65.24
#include "common/types.h"

extern "C" u32 D_00350338 asm("D_00350338");
extern "C" void func_0016cce8(u32, u32, u32, u32, u32) asm("func_0016cce8");

// 0x00196aa0 func_00196aa0
void func_00196aa0(u32 a0, u32 a1, u32 a2) asm("func_00196aa0");
void func_00196aa0(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    u32 t7;
    u32 s1;
    s0 = 7;
    t7 = *(u32*)(((u32)&D_00350338 + 4));
    s1 = (u32)&D_00350338;
    do {
        if (((s32)(*(u32*)(((s1 + ((s0 - 7) * -8)) + 4))) != 0)) {
            func_0016cce8(*(u32*)(((s1 + ((s0 - 7) * -8)) + 4)), a0, a1, a2, 0);
        }
        s0 = (s0 + -1);
    } while (((s32)(s0) >= 0));
    return;
}
