// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002ba200(u32) asm("func_002ba200");
extern "C" void func_00102448(u32, u32) asm("func_00102448");

// 0x002ba7c8 func_002ba7c8
u32 func_002ba7c8(u32 a0) asm("func_002ba7c8");
u32 func_002ba7c8(u32 a0) {
    u32 v0_0;
    while ((v0_0 = func_002ba200(a0)), ((s32)(v0_0) != 0)) {
        func_00102448(a0, 0);
    }
    return v0_0;
}
