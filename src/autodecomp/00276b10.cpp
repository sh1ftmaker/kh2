// coverage: addr=0x00276b10 symbol=func_00276b10 size=128 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.76;m2c:near:75.7
#include "common/types.h"

extern "C" u32 D_0035f21c asm("D_0035f21c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x00276b10 func_00276b10
void func_00276b10() asm("func_00276b10");
void func_00276b10() {
    u32 s0;
    u32 s1;
    s0 = 0;
    s1 = 0x1f;
    do {
        if (((s32)(func_00139d78((*(u32*)(&D_0035f21c) + s0) + 0xa998)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(((s0 + *(u32*)(&D_0035f21c)) + 0xa998)) + 0x14))))((s0 + *(u32*)(&D_0035f21c)) + 0xa998);
        }
        s0 = (s0 + 0x198);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}
