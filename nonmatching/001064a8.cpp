// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_00313bc0(f32) asm("func_00313bc0");
extern "C" u32 func_002fea18(u32) asm("func_002fea18");

// 0x001064a8 func_001064a8(void*)
// minilink-rodata 0x0036a098   (float literals live here in the original)
f32 lift_001064a8(u32 a0) asm("_Z13func_001064a8Pv");
f32 lift_001064a8(u32 a0) {
    f32 f20;
    f20 = (f32)(a0);
    return func_00313bc0((f20 * (f32)((s32)(func_002fea18(a0)))) / 2147483520.0f);
}
