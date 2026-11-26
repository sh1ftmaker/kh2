// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00316d08() asm("func_00316d08");

// 0x00305e48 func_00305e48
u32 func_00305e48() asm("func_00305e48");
u32 func_00305e48() {
    *(u32*)(func_00316d08()) = 5;
    return 0xffffffff;
}
