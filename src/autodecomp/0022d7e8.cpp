// coverage: addr=0x0022d7e8 symbol=func_0022d7e8 size=52 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.08;m2c:near:89.31
#include "common/types.h"

extern "C" u32 D_01dad9c0 asm("D_01dad9c0");

// 0x0022d7e8 func_0022d7e8
void func_0022d7e8() asm("func_0022d7e8");
void func_0022d7e8() {
    u32 t5;
    u32 t6;
    u32 t7;
    t5 = 0xffffffff;
    t6 = 0x1f;
    t7 = (u32)&D_01dad9c0;
    do {
        *(u32*)(t7) = 0;
        *(u16*)((t7 + 4)) = t5;
        *(u16*)((t7 + 6)) = t5;
        t6 = (t6 + -1);
        t7 = (t7 + 8);
    } while (((s32)(t6) >= 0));
    return;
}
