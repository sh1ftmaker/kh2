// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001945a0(u32, u32, u32, f32) asm("func_001945a0");

// 0x00172078 func_00172078
u32 func_00172078(u32 a0) asm("_ZN2YS24trap_obj_set_parts_colorEP8BD_VALUE");
u32 func_00172078(u32 a0) {
    return func_001945a0(*(u32*)((*(u32*)(a0) + 4)), *(u32*)((a0 + 4)), *(u32*)((a0 + 8)), *(f32*)((a0 + 0xc)));
}
