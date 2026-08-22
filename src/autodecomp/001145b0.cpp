// coverage: addr=0x001145b0 symbol=func_001145b0 size=76 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:78.95;ghidra:near:54.41
#include "common/types.h"

extern "C" u32 D_00345d30 asm("D_00345d30");
extern "C" u32 func_00114738(u32) asm("func_00114738");

// 0x001145b0 func_001145b0
u32 func_001145b0(u32 a0) asm("func_001145b0");
u32 func_001145b0(u32 a0) {
    u32 t5;
    u32 t7;
    u32 t4;
    u32 t7_0;
    t5 = 0;
    t7 = *(s16*)((u32)&D_00345d30);
    t4 = (u32)&D_00345d30;
    do {
        if ((*(s16*)((t4 + (t5 * 2))) == a0)) {
            return t5;
        }
        t7_0 = *(s16*)((t4 + (t5 * 2)));
        t5 = (t5 + 1);
        t7 = t7_0;
    } while (((s32)(t5) < (s32)(7)));
    return (func_00114738(a0) + 7);
}
