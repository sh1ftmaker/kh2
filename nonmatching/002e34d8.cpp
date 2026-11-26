// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002e34d8 func_002e34d8
u32 func_002e34d8(u32 a0, u32 a1) asm("func_002e34d8");
u32 func_002e34d8(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 t6;
    u32 t7;
    v0 = *(u32*)(a0);
    v0_0 = (v0 + 0x10);
    if (((s32)(a1) > 0)) {
        t6 = 0xc;
        do {
            t7 = *(u8*)((v0_0 + 0xa));
            a1 = (a1 + -1);
            v0_0 = ((v0_0 + (t7 * t6)) + 0x40);
        } while (((s32)(a1) != 0));
    }
    return v0_0;
}
