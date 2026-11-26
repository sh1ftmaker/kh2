// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x0028dd90 func_0028dd90
u32 func_0028dd90(u32 a0) asm("_ZN2Tz8MenuUtil12GetAlignTypeEi");
u32 func_0028dd90(u32 a0) {
    u32 v0;
    u32 v0_0;
    if ((((s32)(a0) % 0xa) != 1)) {
        if (((s32)(((s32)(((s32)(a0) % 0xa)) < (s32)(2))) == 0)) {
            if ((((s32)(a0) % 0xa) != 2)) {
                v0 = 0;
            } else {
                v0 = 1;
            }
            v0_0 = v0;
        } else {
            v0_0 = 0;
        }
        return v0_0;
    } else {
        return 2;
    }
}
