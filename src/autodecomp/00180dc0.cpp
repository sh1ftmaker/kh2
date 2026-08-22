// coverage: addr=0x00180dc0 symbol=func_00180dc0 size=52 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:near:94.85;m2c:near:44.79;ghidra:near:44.07
#include "common/types.h"


// 0x00180dc0 func_00180dc0
u32 func_00180dc0(u32 a0, u32 a1) asm("func_00180dc0");
u32 func_00180dc0(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    t6 = 0;
    t7 = *(u32*)((a0 + 0x14c));
    do {
        if ((*(u32*)(((a0 + (t6 * 4)) + 0x14c)) == a1)) {
            return 1;
        }
        t6 = (t6 + 1);
        t7 = ((s32)(t6) < (s32)(0x10));
    } while ((t7 != 0));
    return 0;
}
