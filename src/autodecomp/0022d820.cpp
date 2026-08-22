// coverage: addr=0x0022d820 symbol=func_0022d820 size=92 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.57;m2c:near:99.52
#include "common/types.h"

extern "C" u32 D_01dad9c0 asm("D_01dad9c0");

// 0x0022d820 func_0022d820
void func_0022d820() asm("func_0022d820");
void func_0022d820() {
    u32 s0;
    u32 s1;
    s0 = (u32)&D_01dad9c0;
    s1 = 0x1f;
    do {
        if (((s32)(*(u32*)(s0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(s0)) + 0x20))))(*(u32*)(s0));
            *(u32*)(s0) = 0;
        }
        s0 = (s0 + 8);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}
