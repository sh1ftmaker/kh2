// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f620 asm("D_0035f620");

// 0x002ad338 func_002ad338
u32 func_002ad338() asm("func_002ad338");
u32 func_002ad338() {
    u32 t4;
    u32 t7;
    t4 = 0;
    t7 = (0 >> 5);
    do {
        if (((s32)((*(u32*)((((t4 >> 5) << 2) + (*(u32*)(&D_0035f620) + 0x13c))) & (1 << (t4 & 0x1f)))) == 0)) {
            return 0;
        }
        t4 = (t4 + 1);
        t7 = ((s32)(t4) < (s32)(0xd));
    } while ((t7 != 0));
    return 1;
}
