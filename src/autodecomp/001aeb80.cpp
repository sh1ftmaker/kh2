// coverage: addr=0x001aeb80 symbol=func_001aeb80 size=112 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:96.48;ghidra:near:73.28
#include "common/types.h"

extern "C" u32 D_00350de8 asm("D_00350de8");
extern "C" u32 D_01c94040 asm("D_01c94040");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_001b1490(u32) asm("func_001b1490");

// 0x001aeb80 func_001aeb80
void func_001aeb80() asm("func_001aeb80");
void func_001aeb80() {
    u32 s1;
    u32 s2;
    u32 s0;
    s1 = 0;
    s2 = func_001b1490(*(u32*)(&D_00350de8));
    s0 = (u32)&D_01c94040;
    do {
        *(u32*)((s0 + (s1 * 4))) = *(u32*)((func_00168b38(s2, 2, s1) + 8));
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(0x13))) != 0));
    return;
}
