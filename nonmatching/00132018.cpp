// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00132018 func_00132018
u32 func_00132018(u32 a0) asm("func_00132018");
u32 func_00132018(u32 a0) {
    u32 t6;
    u32 t7;
    u32 t6_0;
    u32 t7_1;
    while (((s32)(a0) != 0)) {
        t6 = *(s16*)(a0);
        if ((t6 != 0xffffffff)) {
            if (((s32)(t6) == 0)) {
                t7 = *(u32*)((a0 + 4));
                t6_0 = *(u32*)((a0 + 0x20));
                return (a0 + (t6_0 + (t7 << 2)));
            } else {
                return 0;
            }
            break;
        }
        t7_1 = *(u32*)((a0 + 4));
        a0 = (a0 + *(u32*)((((t7_1 << 2) + a0) + 4)));
    }
    return 0;
}
