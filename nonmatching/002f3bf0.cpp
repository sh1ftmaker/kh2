// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_002f3500(u32, u32, u32, u32) asm("func_002f3500");

// 0x002f3bf0 func_002f3bf0
void func_002f3bf0(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002f3bf0");
void func_002f3bf0(u32 a0, u32 a1, u32 a2, u32 a3) {
    if ((a2 != 1)) {
        func_002f3500(a0, a1, a3, a3);
    }
    return;
}
