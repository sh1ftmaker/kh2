// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00306f30(u32) asm("func_00306f30");

// 0x00307f68 func_00307f68
u32 func_00307f68(u32 a0, u32 a1, u32 a2) asm("func_00307f68");
u32 func_00307f68(u32 a0, u32 a1, u32 a2) {
    if (((s32)(a2) != 0)) {
        func_00306f30(a2);
    }
    return 1;
}
