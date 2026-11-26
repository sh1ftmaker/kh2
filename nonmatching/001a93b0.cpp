// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a9218(u32) asm("func_001a9218");
extern "C" void func_001a9350(u32, u32) asm("func_001a9350");

// 0x001a93b0 func_001a93b0
u32 func_001a93b0(u32 a0, u32 a1) asm("func_001a93b0");
u32 func_001a93b0(u32 a0, u32 a1) {
    func_001a9350(a0, a1);
    *(u32*)(a0) = a1;
    return func_001a9218(a0);
}
