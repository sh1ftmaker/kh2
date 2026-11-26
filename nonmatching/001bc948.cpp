// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001bc948 func_001bc948
u32 func_001bc948(u32 a0) asm("func_001bc948");
u32 func_001bc948(u32 a0) {
    u32 t6;
    u32 t7;
    if (((s32)(*(u32*)((a0 + 8))) > 0)) {
        t6 = 0;
        t7 = *(u8*)((a0 + 0x11));
        do {
            if (((s32)((((u32)(*(u8*)(((a0 + (t6 * 0xc)) + 0x11))) < (u32)(4)) & 0xff)) != 0)) {
                return 1;
            }
            t6 = (t6 + 1);
            t7 = ((s32)(t6) < (s32)(*(u32*)((a0 + 8))));
        } while ((t7 != 0));
    }
    return 0;
}
