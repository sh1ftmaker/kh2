// coverage: addr=0x00249358 symbol=func_00249358 size=108 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:near:95.36;m2c:near:78.39;e3:near:2.75
#include "common/types.h"

extern "C" u32 D_0035ed64 asm("D_0035ed64");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x00249358 func_00249358
void func_00249358() asm("func_00249358");
void func_00249358() {
    u32 s0;
    u32 s1;
    s0 = 0;
    s1 = 2;
    do {
        if (((s32)(func_00139d78(*(u32*)(&D_0035ed64) + s0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s0 + *(u32*)(&D_0035ed64))) + 0x14))))(s0 + *(u32*)(&D_0035ed64));
        }
        s0 = (s0 + 0x198);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}
