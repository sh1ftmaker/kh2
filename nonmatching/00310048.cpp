// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0030edb0() asm("func_0030edb0");
extern "C" u32 func_0030ffd8() asm("func_0030ffd8");
extern "C" void func_0030ee00() asm("func_0030ee00");

// 0x00310048 func_00310048
u32 func_00310048() asm("func_00310048");
u32 func_00310048() {
    u32 s0;
    u32 s1;
    s0 = func_0030edb0();
    s1 = func_0030ffd8();
    if (((s32)(s0) != 0)) {
        func_0030ee00();
    }
    return s1;
}
