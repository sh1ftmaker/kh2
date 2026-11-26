// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00186d18 func_00186d18
u32 func_00186d18(u32 a0) asm("_ZN2YS6BTLOBJ17is_reflect_motionEv");
u32 func_00186d18(u32 a0) {
    u32 v0;
    v0 = ((s32)(*(u32*)((a0 + 0x140))) != 0) ? (((s32)(*(u32*)(((a0 + 0x140) + 0x14))) < (s32)(0x8c)) ? 0 : ((s32)(*(u32*)(((a0 + 0x140) + 0x14))) < (s32)(0x97))) : 0;
    return v0;
}
