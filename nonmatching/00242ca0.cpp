// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001058e8(u32) asm("func_001058e8");

// 0x00242ca0 func_00242ca0
u32 func_00242ca0(u32 a0) asm("_ZN2Tz6Config13SetCommandKH2Eb");
u32 func_00242ca0(u32 a0) {
    u32 v0;
    u32 t7;
    v0 = (func_001058e8(a0) + 0x41a0);
    t7 = *(u32*)((v0 + 4));
    *(u32*)((v0 + 4)) = ((t7 & 0xffffffbf) | (((u32)((a0 & 0xff)) < (u32)(1)) << 6));
    return v0;
}
