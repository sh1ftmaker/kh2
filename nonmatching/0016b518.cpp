// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016b558(u32, u32) asm("func_0016b558");
extern "C" u32 func_00176db0(u32) asm("func_00176db0");

// 0x0016b518 func_0016b518
u32 func_0016b518(u32 a0, u32 a1, u32 a2) asm("func_0016b518");
u32 func_0016b518(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)((*(u32*)((a0 + 0x588)) & 4)) != 0)) {
        v0 = func_00176db0(a0);
        v0_1 = v0;
    } else {
        v0_0 = func_0016b558(a0, a2);
        v0_1 = v0_0;
    }
    return v0_1;
}
