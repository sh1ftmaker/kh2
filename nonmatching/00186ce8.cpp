// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00186ce8 YS::BTLOBJ::is_damage_motion()
u32 lift_00186ce8(u32 a0) asm("_ZN2YS6BTLOBJ16is_damage_motionEv");
u32 lift_00186ce8(u32 a0) {
    u32 v0;
    v0 = ((s32)(*(u32*)((a0 + 0x140))) != 0) ? (((s32)(*(u32*)(((a0 + 0x140) + 0x14))) < (s32)(0xa)) ? 0 : ((s32)(*(u32*)(((a0 + 0x140) + 0x14))) < (s32)(0x28))) : 0;
    return v0;
}
