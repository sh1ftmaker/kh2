// coverage: addr=0x001c11e0 symbol=func_001c11e0 size=56 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:34.88;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_01d49388 asm("D_01d49388");

// 0x001c11e0 func_001c11e0
u32 func_001c11e0() asm("func_001c11e0");
u32 func_001c11e0() {
    u32 t5;
    u32 t7;
    u32 t6;
    u32 t7_0;
    t5 = 5;
    t7 = *(u16*)(((u32)&D_01d49388 + 0x140));
    t6 = (u32)&D_01d49388;
    do {
        if (((s32)(*(u16*)(((t6 + ((t5 - 5) * 0x40)) + 0x140))) != 0)) {
            return ((t6 + ((t5 - 5) * 0x40)) + 0x140);
        }
        t7_0 = *(u16*)(((t6 + ((t5 - 5) * 0x40)) + 0x140));
        t5 = (t5 + -1);
        t7 = t7_0;
    } while (((s32)(t5) > 0));
    return 0;
}
