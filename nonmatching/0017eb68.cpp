// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0017ee68(u32) asm("func_0017ee68");
extern "C" void func_00180ce0(u32) asm("func_00180ce0");

// 0x0017eb68 func_0017eb68
u32 func_0017eb68(u32 a0) asm("func_0017eb68");
u32 func_0017eb68(u32 a0) {
    func_00180ce0(a0);
    return func_0017ee68(a0);
}
