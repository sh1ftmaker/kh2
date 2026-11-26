// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003718d0 asm("D_003718d0");

// 0x00243190 func_00243190
u32 func_00243190(u32 a0) asm("func_00243190");
u32 func_00243190(u32 a0) {
    u32 t7;
    u32 v0;
    u32 t6;
    t7 = *(u32*)((u32)&D_003718d0);
    v0 = 0;
    t6 = (u32)&D_003718d0;
    do {
        if ((*(u32*)((t6 + (v0 * 4))) == a0)) {
            break;
        }
        t7 = ((u32)((v0 + 1)) < (u32)(0xb));
        v0 = (v0 + 1);
    } while ((t7 != 0));
    return v0;
}
