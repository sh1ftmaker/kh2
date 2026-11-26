// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00308dc0 func_00308dc0
u32 func_00308dc0(u32 a0) asm("func_00308dc0");
u32 func_00308dc0(u32 a0) {
    *(u32*)((a0 + 0x24)) = (((s32)(*(u32*)((a0 + 0x24))) % (s32)(*(u32*)((a0 + 0x18)))) + 1);
    return (*(u32*)((a0 + 0x14)) + (((s32)(*(u32*)((a0 + 0x24))) % (s32)(*(u32*)((a0 + 0x18)))) << 6));
}
