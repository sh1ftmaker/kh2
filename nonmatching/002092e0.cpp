// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00209178(u32, u32, u32) asm("func_00209178");

// 0x002092e0 func_002092e0
u32 func_002092e0(u32 a0, u32 a1, u32 a2) asm("func_002092e0");
u32 func_002092e0(u32 a0, u32 a1, u32 a2) {
    u32 t7;
    u32 v0;
    u32 v0_0;
    t7 = (a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8)));
    if ((*(u32*)(a1) == *(u32*)((a0 + 0xc)))) {
        v0 = func_00209178(a1, t7 + 0xa0, a2);
        v0_0 = v0;
    }
    return v0_0;
}
