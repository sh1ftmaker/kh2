// coverage: addr=0x0024e530 symbol=func_0024e530 size=124 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:55.45;m2c:near:17.69
#include "common/types.h"

extern "C" u32 D_0035ede8 asm("D_0035ede8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0024dfe0() asm("func_0024dfe0");

// 0x0024e530 func_0024e530
void func_0024e530() asm("func_0024e530");
void func_0024e530() {
    u32 s1;
    u32 s0;
    s1 = 0;
    s0 = 0;
    while (((s32)(((s32)(s1) < (s32)(func_0024dfe0()))) != 0)) {
        if (((s32)(func_00139d78(*(u32*)(&D_0035ede8) + (s0 + (s1 * 0x198)))) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(((s0 + (s1 * 0x198)) + *(u32*)(&D_0035ede8))) + 0x14))))((s0 + (s1 * 0x198)) + *(u32*)(&D_0035ede8));
        }
        s1 = (s1 + 1);
    }
    return;
}
