// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x00139c18 dk::Obj2D::checkDoubleCreate(dk::Obj2D*)
u32 lift_00139c18(u32 a0) asm("_ZN2dk5Obj2D17checkDoubleCreateEPS0_");
u32 lift_00139c18(u32 a0) {
    u32 v0;
    if (((s32)(func_00139d78(a0)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
        v0 = 1;
    } else {
        if (((s32)(func_00139d78(a0 + 0x18)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((a0 + 0x18)) + 0x14))))(a0 + 0x18);
        }
        v0 = 0;
    }
    return v0;
}
