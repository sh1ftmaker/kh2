// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016ced0(u32) asm("func_0016ced0");
extern "C" void func_00188398(u32, u32, u32, u32) asm("func_00188398");

// 0x00187b90 ctarget0_00187b90()
u32 lift_00187b90(u32 a0) asm("_Z17ctarget0_00187b90v");
u32 lift_00187b90(u32 a0) {
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)((a0 + 0x94))) != 0)) {
        loc_0 = *(u32*)((a0 + 0x88));
        func_00188398(a0, *(u16*)((*(u32*)((a0 + 0x90)) + 0xa)), (u32)&loc_0, 1);
        v0 = func_0016ced0(*(u32*)((a0 + 0x94)));
        *(u32*)((a0 + 0x90)) = 0;
        *(u32*)((a0 + 0x94)) = 0;
        v0_0 = v0;
    }
    return v0_0;
}
