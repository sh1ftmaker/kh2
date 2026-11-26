// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002eac70(u32, f32, f32, f32, f32) asm("func_002eac70");

// 0x002e7b88 func_002e7b88
u32 func_002e7b88(u32 a0) asm("_ZN2Ts18trap_dice_set_specEP8BD_VALUE");
u32 func_002e7b88(u32 a0) {
    return func_002eac70(a0, *(f32*)(a0), *(f32*)((a0 + 4)), *(f32*)((a0 + 8)), *(f32*)((a0 + 0xc)));
}
