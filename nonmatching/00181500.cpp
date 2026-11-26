// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032d7c0 asm("D_0032d7c0");

// 0x00181500 YS::PROGRESS::CheckFlag(int)
u32 lift_00181500(u32 a0) asm("_ZN2YS8PROGRESS9CheckFlagEi");
u32 lift_00181500(u32 a0) {
    u32 v0;
    v0 = (a0 != 0xffff) ? ((u32)(0) < (u32)((*(u32*)(((((a0 & 0x3ff) >> 5) << 2) + ((((s32)(a0) >> 0xa) << 5) + (u32)&D_0032d7c0))) & (1 << ((a0 & 0x3ff) & 0x1f))))) : 0;
    return v0;
}
