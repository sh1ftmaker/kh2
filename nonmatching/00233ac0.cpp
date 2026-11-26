// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_00313bc0(u32, f32) asm("func_00313bc0");

// 0x00233ac0 func_00233ac0
// minilink-rodata 0x003713b0   (float literals live here in the original)
f32 func_00233ac0(u32 a0) asm("func_00233ac0");
f32 func_00233ac0(u32 a0) {
    f32 f0;
    f0 = (f32)(a0);
    return func_00313bc0(a0, f0 / 216000.0f);
}
