// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016c568(u32, u32, f32) asm("func_0016c568");

// 0x002f0948 func_002f0948
u32 func_002f0948(u32 a0) asm("_ZN2kn23trap_obj_set_stop_timerEP8BD_VALUE");
u32 func_002f0948(u32 a0) {
    return func_0016c568(*(u32*)((*(u32*)(a0) + 4)), *(u32*)((a0 + 4)), *(f32*)((a0 + 8)));
}
