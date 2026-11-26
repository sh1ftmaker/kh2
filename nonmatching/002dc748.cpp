// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003629e8 asm("D_003629e8");
extern "C" u32 func_002cea28(u32) asm("func_002cea28");
extern "C" void func_002e4a90(u32) asm("func_002e4a90");

// 0x002dc748 func_002dc748
u32 func_002dc748(u32 a0) asm("func_002dc748");
u32 func_002dc748(u32 a0) {
    *(u32*)(a0) = (u32)&D_003629e8;
    func_002e4a90(a0 + 0x100);
    return func_002cea28(a0);
}
