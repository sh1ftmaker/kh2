// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001d1d68(u32) asm("func_001d1d68");

// 0x001b5878 YS::LIMIT::close_gauge()
void lift_001b5878(u32 a0) asm("_ZN2YS5LIMIT11close_gaugeEv");
void lift_001b5878(u32 a0) {
    if (((s32)((*(u32*)((a0 + 0xb4)) & 4)) != 0)) {
        func_001d1d68(a0 + 0xa8);
        return;
    } else {
        return;
    }
}
