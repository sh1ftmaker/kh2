// coverage: addr=0x001afe30 symbol=func_001afe30 size=60 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:59.6;ghidra:near:36.44
#include "common/types.h"

extern "C" u32 D_01c94090 asm("D_01c94090");

// 0x001afe30 func_001afe30
u32 func_001afe30(u32 a0) asm("func_001afe30");
u32 func_001afe30(u32 a0) {
    u32 t5;
    u32 t7;
    u32 t4;
    u32 t7_0;
    t5 = 0;
    t7 = *(u32*)(((u32)&D_01c94090 + 4));
    t4 = (u32)&D_01c94090;
    do {
        if ((*(u32*)(((t4 + (t5 * 0xc)) + 4)) == a0)) {
            return t5;
        }
        t7_0 = *(u32*)(((t4 + (t5 * 0xc)) + 4));
        t5 = (t5 + 1);
        t7 = t7_0;
    } while (((s32)(t5) < (s32)(3)));
    return 0xffffffff;
}
