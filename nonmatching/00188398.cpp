// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_0016cc18(u32, u32) asm("func_0016cc18");

// 0x00188398 func_00188398
u32 func_00188398(u32 a0, u32 a1) asm("func_00188398");
u32 func_00188398(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)((*(u32*)((*(u32*)((a0 + 0x88)) + 4)) + 0x484))) != 0)) {
        if (((s32)(a1) != 0)) {
            func_0016cc18(*(u32*)((*(u32*)((*(u32*)((a0 + 0x88)) + 4)) + 0x484)), a1);
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
