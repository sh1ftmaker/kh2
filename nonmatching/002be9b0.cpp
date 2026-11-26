// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002be908(u32) asm("func_002be908");
extern "C" u32 func_002c1dc0() asm("func_002c1dc0");

// 0x002be9b0 func_002be9b0
u32 func_002be9b0() asm("func_002be9b0");
u32 func_002be9b0() {
    u32 s0;
    u32 v0;
    s0 = 0;
    while ((v0 = func_002be908(s0)), (s0 = v0), ((s32)(v0) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(s0) + 0x7c))))(v0);
    }
    return func_002c1dc0();
}
