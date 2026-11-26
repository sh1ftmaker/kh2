// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");

// 0x002be908 func_002be908
u32 func_002be908(u32 a0) asm("func_002be908");
u32 func_002be908(u32 a0) {
    u32 s0;
    u32 v0;
    s0 = 0x40000000;
    while ((v0 = func_001b9bc8(a0)), ((s32)(v0) != 0)) {
        if (((*(u32*)((v0 + 0x588)) & s0) != 0)) {
            return v0;
        }
        a0 = v0;
    }
    return 0;
}
