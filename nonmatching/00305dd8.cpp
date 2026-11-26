// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00305dd8 func_00305dd8
u32 func_00305dd8(u32 a0, u32 a1) asm("func_00305dd8");
u32 func_00305dd8(u32 a0, u32 a1) {
    *(u32*)((a1 + 4)) = 0x2000;
    *(u64*)((a1 + 0x48)) = 0;
    return 0;
}
