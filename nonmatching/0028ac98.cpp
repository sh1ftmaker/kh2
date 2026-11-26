// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x0028ac98 func_0028ac98
u32 func_0028ac98(u32 a0, u32 a1) asm("func_0028ac98");
u32 func_0028ac98(u32 a0, u32 a1) {
    u32 t7;
    t7 = (a1 == *(s16*)(a0)) ? *(u32*)((a0 + 0x30)) : *(u32*)((a0 + 0x2c));
    return (t7 + (a1 << 3));
}
