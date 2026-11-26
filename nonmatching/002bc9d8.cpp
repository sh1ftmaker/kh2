// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002bc9d8 func_002bc9d8
u32 func_002bc9d8(u32 a0, u32 a1) asm("func_002bc9d8");
u32 func_002bc9d8(u32 a0, u32 a1) {
    u32 t7;
    u32 v0;
    t7 = *(u32*)(((a0 + 0x84) + 4));
    v0 = (a0 + 0x84);
    do {
        if ((*(u32*)((v0 + 4)) == a1)) {
            v0 = (v0 + 0xc);
            return *(u32*)(v0);
        }
        v0 = (v0 + 0xc);
        t7 = ((s32)(v0) < (s32)((a0 + 0x12c)));
    } while ((t7 != 0));
    return 0xffffffff;
}
