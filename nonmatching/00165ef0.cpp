// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f41c0 asm("D_004f41c0");

// 0x00165ef0 func_00165ef0
void func_00165ef0(u32 a0) asm("_ZN2dk6ObjOcc4eachEPS0_");
void func_00165ef0(u32 a0) {
    u32 v0;
    do {
        v0 = ((s32)(a0) != 0) ? *(u32*)((a0 + 0xc)) : *(u32*)(&D_004f41c0);
        a0 = v0;
        if (((s32)(v0) == 0)) {
            break;
        }
    } while (((s32)((*(u32*)((v0 + 8)) & 2)) != 0));
    return;
}
