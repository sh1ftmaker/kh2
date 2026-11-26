// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00316d08() asm("func_00316d08");

// 0x00305ce0 func_00305ce0
u32 func_00305ce0() asm("func_00305ce0");
u32 func_00305ce0() {
    *(u32*)(func_00316d08()) = 5;
    return 0xffffffff;
}
