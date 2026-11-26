// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00372b50 asm("D_00372b50");

// 0x00259460 func_00259460
u32 func_00259460(u32 a0, u8 a1) asm("_ZN2Tz6CmComm11GetItemIconEib");
u32 func_00259460(u32 a0, u8 a1) {
    u32 t6;
    u32 t6_0;
    if (((s32)(*(s16*)(&D_00372b50)) >= 0)) {
        t6 = (u32)&D_00372b50;
        do {
            if ((*(s16*)(t6) == a0)) {
                if (((s32)(a1) != 0)) {
                    return *(s16*)(((t6 + 6) + 4));
                } else {
                    return *(s16*)(((t6 + 6) + 2));
                }
            }
            t6_0 = (t6 + 6);
            t6 = t6_0;
        } while (((s32)(*(s16*)(t6_0)) >= 0));
        return 0xb;
    } else {
        return 0xb;
    }
}
