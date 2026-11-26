// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348804 asm("D_00348804");
extern "C" u32 func_001652c8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_001652c8");

// 0x00143470 func_00143470
u32 func_00143470(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_00143470");
u32 func_00143470(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    return func_001652c8(*(u32*)(&D_00348804), a0, a1, a2, a3, a4, a5, a6);
}
