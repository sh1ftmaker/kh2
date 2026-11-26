// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00180698() asm("func_00180698");

// 0x00180770 func_00180770
u32 func_00180770() asm("_ZN2YS6MOTION12get_loop_topEi");
u32 func_00180770() {
    u32 v0;
    v0 = func_00180698();
    return ((u32(*)(u32))(*(u32*)((*(u32*)(v0) + 0x1c))))(v0);
}
