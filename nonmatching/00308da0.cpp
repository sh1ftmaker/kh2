// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00308da0 func_00308da0
u32 func_00308da0(u32 a0) asm("func_00308da0");
u32 func_00308da0(u32 a0) {
    *(u32*)((a0 + 0x10)) = (*(u32*)((a0 + 0x10)) & 0xfffffffe);
    *(u32*)((a0 + 0x18)) = 0;
    return 0xfffffffe;
}
