// coverage: addr=0x0016f930 symbol=func_0016f930 size=64 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:68.62;ghidra:near:63.41
#include "common/types.h"

extern "C" u32 D_004f63a8 asm("D_004f63a8");

// 0x0016f930 func_0016f930
u32 func_0016f930(u32 a0) asm("func_0016f930");
u32 func_0016f930(u32 a0) {
    u32 t5;
    u32 t7;
    u32 t6;
    u32 t4;
    t5 = 0;
    t7 = *(u32*)((u32)&D_004f63a8);
    t6 = 0x96a;
    t4 = (u32)&D_004f63a8;
    do {
        if ((*(u32*)((t4 + (t5 * 4))) == a0)) {
            return (t6 + (t5 * 0xa));
        }
        t5 = (t5 + 1);
        t7 = ((s32)(t5) < (s32)(2));
    } while ((t7 != 0));
    return 0x960;
}
