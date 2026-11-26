// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_002fd160() asm("func_002fd160");

// 0x00315418 func_00315418
void func_00315418(u32 a0) asm("func_00315418");
void func_00315418(u32 a0) {
    ((void(*)(u32))(a0))(a0);
    func_002fd160();
}
