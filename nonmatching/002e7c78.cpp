// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016c568(u32, u32, f32) asm("func_0016c568");

// 0x002e7c78 func_002e7c78
u32 func_002e7c78(u32 a0) asm("_ZN2Ts13trap_obj_stopEP8BD_VALUE");
u32 func_002e7c78(u32 a0) {
    return func_0016c568(*(u32*)((*(u32*)(a0) + 4)), *(u32*)((a0 + 4)), *(f32*)((a0 + 8)));
}
