// coverage: addr=0x001c10c8 symbol=func_001c10c8 size=48 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:99.92;corpus:near:94.83
#include "common/types.h"

extern "C" u32 D_01d49388 asm("D_01d49388");

// 0x001c10c8 func_001c10c8
void func_001c10c8() asm("func_001c10c8");
void func_001c10c8() {
    u32 t6;
    u32 t7;
    t6 = 5;
    t7 = (u32)&D_01d49388;
    do {
        *(u16*)((t7 + ((t6 - 5) * -0x40))) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    return;
}
