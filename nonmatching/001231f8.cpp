// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001231f8 func_001231f8
u32 func_001231f8(u32 a0, u32 a1, u32 a2) asm("func_001231f8");
u32 func_001231f8(u32 a0, u32 a1, u32 a2) {
    return ((u32(*)(u32, u32, u32))(*(u32*)((*(u32*)(a0) + 0x4c))))(a0, a1, a2);
}
