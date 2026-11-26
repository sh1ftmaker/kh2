// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003726b8 asm("D_003726b8");

// 0x00253380 func_00253380
u32 func_00253380(u32 a0) asm("func_00253380");
u32 func_00253380(u32 a0) {
    u32 t4;
    u32 t7;
    if (((s32)(*(s16*)(&D_003726b8)) >= 0)) {
        t4 = 0;
        t7 = (u32)&D_003726b8;
        do {
            if ((*(s16*)(t7) == a0)) {
                t4 = (t4 + 1);
                return 1;
            }
            t4 = (t4 + 1);
            t7 = (t4 << 1);
            t7 = (t7 + (u32)&D_003726b8);
        } while (((s32)(t7) >= 0));
        return 0;
    } else {
        return 0;
    }
}
