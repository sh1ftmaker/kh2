// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00305240(u32) asm("func_00305240");
extern "C" void func_0030f3a8(u32) asm("func_0030f3a8");

// 0x0030f468 func_0030f468
u32 func_0030f468(u32 a0) asm("func_0030f468");
u32 func_0030f468(u32 a0) {
    func_0030f3a8(a0);
    return func_00305240(a0);
}
