// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f0f4 asm("D_0035f0f4");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_002576d0() asm("func_002576d0");

// 0x0026d180 func_0026d180
u32 func_0026d180() asm("func_0026d180");
u32 func_0026d180() {
    u32 v0;
    u32 a0_0;
    u32 s1;
    u32 s0;
    v0 = func_002576d0();
    if (((s32)(v0) == 0)) {
        a0_0 = *(u32*)(&D_0035f0f4);
        s1 = 0;
        s0 = 0;
        do {
            if (((s32)(func_00139d78((a0_0 + (s0 + (s1 * 0x1b4))) + 0xee8)) != 0)) {
                return 1;
            }
            a0_0 = *(u32*)(&D_0035f0f4);
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(5))) != 0));
    }
    return v0;
}
