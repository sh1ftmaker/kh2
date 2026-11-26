// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_002f3490(u32, u32) asm("func_002f3490");

// 0x002f3bb8 func_002f3bb8
u32 func_002f3bb8(u32 a0, u32 a1) asm("func_002f3bb8");
u32 func_002f3bb8(u32 a0, u32 a1) {
    u32 v0;
    if ((a1 == 1)) {
        v0 = ((*(u32*)(a0) >> 8) & 1);
    } else {
        func_002f3490(a0, a1);
        v0 = 0;
    }
    return v0;
}
