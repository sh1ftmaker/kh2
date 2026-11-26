// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001bb4a0(u32) asm("func_001bb4a0");
extern "C" u32 func_001bbcb0() asm("func_001bbcb0");

// 0x001d8898 func_001d8898
u32 func_001d8898(u32 a0) asm("func_001d8898");
u32 func_001d8898(u32 a0) {
    u32 t7;
    u8 t7_0;
    u32 v0;
    u32 v0_1;
    if (((s32)(func_001bb4a0(a0)) != 0)) {
        t7 = *(u32*)(((func_001bbcb0() + (a0 * 0x38)) + 0xf4));
        t7_0 = (t7 & 1);
        v0 = ((s32)(t7_0) != 0) ? ((u32)(0) < (u32)((*(u32*)(((func_001bbcb0() + (a0 * 0x38)) + 0xf4)) & 8))) : 0;
        v0_1 = v0;
    } else {
        v0_1 = 0;
    }
    return v0_1;
}
