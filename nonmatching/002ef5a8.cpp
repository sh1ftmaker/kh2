// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00239bf8(u32) asm("func_00239bf8");

// 0x002ef5a8 func_002ef5a8
void func_002ef5a8(u32 a0) asm("func_002ef5a8");
void func_002ef5a8(u32 a0) {
    *(u32*)((a0 + 0x330)) = 0;
    *(u32*)((a0 + 0x32c)) = 0;
    func_00239bf8(a0 + 0x1d4);
    return;
}
