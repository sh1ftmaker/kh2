// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002be908(u32) asm("func_002be908");

// 0x002be960 func_002be960
u32 func_002be960() asm("func_002be960");
u32 func_002be960() {
    u32 s0;
    u32 v0_0;
    s0 = 0;
    while ((v0_0 = func_002be908(s0)), (s0 = v0_0), ((s32)(v0_0) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(s0) + 0x80))))(v0_0);
    }
    return v0_0;
}
