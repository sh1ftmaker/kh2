// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001de4b0(u32, u32, u32) asm("func_001de4b0");

// 0x0022e0a8 func_0022e0a8
u32 func_0022e0a8(u32 a0) asm("func_0022e0a8");
u32 func_0022e0a8(u32 a0) {
    u32 v0;
    while ((v0 = func_001de4b0(a0 + 0x10, 0, 0)), ((s32)(v0) != 0)) {
        if ((*(u32*)((a0 + 0xc)) == v0)) {
            return 1;
        }
    }
    return 0;
}
