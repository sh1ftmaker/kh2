// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a7588(u32, u32, u32, u32) asm("func_001a7588");

// 0x001732c8 YS::trap_bg_cross_pos(BD_VALUE*)
u32 lift_001732c8(u32 a0) asm("_ZN2YS17trap_bg_cross_posEP8BD_VALUE");
u32 lift_001732c8(u32 a0) {
    u32 v0;
    v0 = func_001a7588(*(u32*)(a0), *(u32*)((a0 + 4)), *(u32*)((a0 + 8)), *(u32*)((a0 + 0xc)));
    *(u32*)(a0) = v0;
    return v0;
}
