// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");

// 0x0016ac38 func_0016ac38
u32 func_0016ac38(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_0016ac38");
u32 func_0016ac38(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    if (((s32)(*(u32*)((a0 + 0x80))) != 0)) {
        return func_001de168(a0 + 0x80, a1, a2, 1, a3, a4 ? a4 : a0);
    } else {
        return 0;
    }
}
