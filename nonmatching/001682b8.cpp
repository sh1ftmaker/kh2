// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001adf00() asm("func_001adf00");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x001682b8 func_001682b8
u32 func_001682b8() asm("_ZN2YS4FILE4ReadEPKcPv");
u32 func_001682b8() {
    u32 s0;
    s0 = func_001adf00();
    func_003058a0(0);
    return s0;
}
