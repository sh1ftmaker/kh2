// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c60cd8 asm("D_01c60cd8");

// 0x0018f070 YS::ATTACK::is_exist()
u32 lift_0018f070(u32 a0) asm("_ZN2YS6ATTACK8is_existEv");
u32 lift_0018f070(u32 a0) {
    u32 t6;
    u32 t7;
    if (((s32)(a0) != 0)) {
        t6 = 0;
        while ((t7 = (t6 == 0) ? *(u32*)(&D_01c60cd8) : *(u32*)((t6 + 0xc0))), (t6 = t7), ((s32)(t7) != 0)) {
            if ((t7 == a0)) {
                return 1;
            }
        }
    }
    return 0;
}
