// coverage: addr=0x0027ae78 symbol=func_0027ae78 size=92 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:77.29;e3:near:50.97;m2c:near:44.91
#include "common/types.h"

extern "C" u32 D_0035f230 asm("D_0035f230");

// 0x0027ae78 func_0027ae78
u32 func_0027ae78(u32 a0) asm("func_0027ae78");
u32 func_0027ae78(u32 a0) {
    u32 t6;
    u32 v0;
    u8 t7;
    t6 = 0;
    v0 = 0;
    do {
        if ((v0 != 6)) {
            t7 = ((((s32)(*(s16*)(*(u32*)(&D_0035f230))) >> v0) ^ 1) & 1);
            if ((t7 == 0)) {
                if ((a0 == t6)) {
                    break;
                }
                t6 = (t6 + 1);
            }
        }
        v0 = (v0 + 1);
    } while (((s32)(((s32)(v0) < (s32)(8))) != 0));
    return v0;
}
