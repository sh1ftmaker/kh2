// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00305a80() asm("func_00305a80");
extern "C" u32 func_00305a90() asm("func_00305a90");
extern "C" u32 func_00311530() asm("func_00311530");

// 0x003114f0 func_003114f0
u32 func_003114f0() asm("func_003114f0");
u32 func_003114f0() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if ((func_00305a80() == 0x2000000)) {
        v0 = func_00311530();
        v0_1 = v0;
    } else {
        v0_0 = func_00305a90();
        v0_1 = v0_0;
    }
    return v0_1;
}
