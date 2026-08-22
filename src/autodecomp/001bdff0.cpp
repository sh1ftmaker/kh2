// coverage: addr=0x001bdff0 symbol=func_001bdff0 size=108 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.07;ghidra:near:37.44
#include "common/types.h"

extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 func_001a67b0(u32) asm("func_001a67b0");
extern "C" u32 func_001b8e88(u32) asm("func_001b8e88");

// 0x001bdff0 func_001bdff0
void func_001bdff0() asm("func_001bdff0");
void func_001bdff0() {
    u32 s1;
    u32 s0;
    u32 s0_0;
    u32 v0;
    s1 = 3;
    s0 = (u32)&D_0032bb30;
    do {
        s0_0 = ((s0 + ((s1 - 3) * -2)) + 0x36f0);
        v0 = func_001b8e88(*(u16*)((s0_0 + 8)));
        if ((*(u16*)((v0 + 2)) == 2)) {
            *(u16*)((s0_0 + 8)) = func_001a67b0(*(s16*)((v0 + 4)));
        }
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}
