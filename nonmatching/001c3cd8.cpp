// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0017c660(u32) asm("func_0017c660");

// 0x001c3cd8 func_001c3cd8
f32 func_001c3cd8(u32 a0, u32 a1) asm("_ZN2YS12ACTION_GLIDE3endEPNS_3OBJE");
f32 func_001c3cd8(u32 a0, u32 a1) {
    *(f32*)((a1 + 0x11c)) = *(f32*)((*(u32*)((a1 + 0x12c)) + 0xc));
    return func_0017c660(a0);
}
