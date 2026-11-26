// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e35980 asm("D_01e35980");

// 0x00308200 func_00308200
u32 func_00308200(u32 a0) asm("func_00308200");
u32 func_00308200(u32 a0) {
    return *(u32*)(((a0 << 2) + (u32)&D_01e35980));
}
