// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00179b68(u32) asm("func_00179b68");

// 0x002d5bd8 func_002d5bd8
u32 func_002d5bd8(u32 a0) asm("func_002d5bd8");
u32 func_002d5bd8(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)((*(u32*)((*(u32*)((a0 + 0xc)) + 4)) ^ 0x38)) != 0)) {
        if (((s32)((*(u32*)((*(u32*)((a0 + 0xc)) + 4)) ^ 0x37)) == 0)) {
            v0_0 = 1;
        } else {
            v0 = func_00179b68(a0);
            v0_0 = v0;
        }
        v0_1 = v0_0;
    } else {
        v0_1 = 1;
    }
    return v0_1;
}
