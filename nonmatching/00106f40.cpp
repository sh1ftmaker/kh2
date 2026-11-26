// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_002f8420(f32) asm("func_002f8420");
extern "C" f32 func_002f8a18(u32, f32) asm("func_002f8a18");

// 0x00106f40 func_00106f40
// minilink-rodata 0x0036a0c0   (float literals live here in the original)
f32 func_00106f40(u32 a0, f32 fa0) asm("_ZNK2kn10Projection7W2H_FOVEf");
f32 func_00106f40(u32 a0, f32 fa0) {
    f32 f20;
    f32 f20_0;
    f20 = (512.0f / *(f32*)((a0 + 0x4c)));
    f20_0 = ((f20 * 0.5f) / func_002f8a18(a0, fa0 * 0.5f));
    return func_002f8420(((416.0f / *(f32*)((a0 + 0x50))) * 0.5f) / ((f20 * 0.5f) / func_002f8a18(a0, fa0 * 0.5f)));
}
