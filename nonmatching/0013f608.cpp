// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0017ce10(u32, f32) asm("func_0017ce10");

// 0x0013f608 func_0013f608
f32 func_0013f608(u32 a0) asm("func_0013f608");
f32 func_0013f608(u32 a0) {
    *(f32*)((a0 + 0xa0)) = *(f32*)((a0 + 0x30));
    *(f32*)((a0 + 0xa4)) = *(f32*)((a0 + 0x34));
    *(f32*)((a0 + 0xa4)) = func_0017ce10(a0, *(f32*)((a0 + 0x34)));
    return func_0017ce10(a0, *(f32*)((a0 + 0x34)));
}
