// coverage: addr=0x001900d0 symbol=func_001900d0 size=84 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.62;m2c:near:68.24;e3:near:44.39
#include "common/types.h"

extern "C" u32 D_01c60d10 asm("D_01c60d10");
extern "C" u32 D_01c60d50 asm("D_01c60d50");
extern "C" u32 D_01c61950 asm("D_01c61950");
extern "C" u32 func_001cd660(u32) asm("func_001cd660");

// 0x001900d0 func_001900d0
void func_001900d0() asm("func_001900d0");
void func_001900d0() {
    u32 t6;
    u32 t5;
    t6 = 0;
    t5 = (u32)&D_01c60d50;
    do {
        *(u32*)(((t5 + (t6 * 4)) + 0xa00)) = t6;
        t6 = (t6 + 1);
    } while (((s32)(((s32)(t6) < (s32)(0x80))) != 0));
    *(u32*)(&D_01c61950) = 0x80;
    func_001cd660((u32)&D_01c60d10);
    return;
}
