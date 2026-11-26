// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001bb4a0(u32) asm("func_001bb4a0");
extern "C" u32 func_001bbcb0() asm("func_001bbcb0");
extern "C" void func_001d4fa8(u32, u32) asm("func_001d4fa8");

// 0x001bbdb8 func_001bbdb8
u32 func_001bbdb8(u32 a0) asm("func_001bbdb8");
u32 func_001bbdb8(u32 a0) {
    u32 v0;
    u32 v0_0;
    if (((s32)(func_001bb4a0(a0)) != 0)) {
        if (((s32)((*(u32*)((func_001bbcb0() + 0x2f0)) & 4)) != 0)) {
            func_001d4fa8(func_001bbcb0() + 0x2e4, a0);
            v0 = 1;
        } else {
            v0 = 0;
        }
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
