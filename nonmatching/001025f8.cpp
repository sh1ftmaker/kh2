// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001022e8(u32, u32) asm("func_001022e8");

// 0x001025f8 func_001025f8(void*)
void lift_001025f8(u32 a0, u32 a1) asm("_Z13func_001025f8Pv");
void lift_001025f8(u32 a0, u32 a1) {
    u32 t7;
    if ((a1 == *(u32*)((a0 + 0x110)))) {
        t7 = (a1 == 0) ? *(u32*)((a0 + 8)) : *(u32*)((a1 + 0x38));
        *(u32*)((a0 + 0x110)) = t7;
    }
    if (((s32)(*(u32*)((a1 + 0x3c))) == 0)) {
        *(u32*)((a0 + 8)) = *(u32*)((a1 + 0x38));
    } else {
        *(u32*)((*(u32*)((a1 + 0x3c)) + 0x38)) = *(u32*)((a1 + 0x38));
    }
    if (((s32)(*(u32*)((a1 + 0x38))) == 0)) {
        *(u32*)(((a0 + 8) + 4)) = *(u32*)((a1 + 0x3c));
    } else {
        *(u32*)((*(u32*)((a1 + 0x38)) + 0x3c)) = *(u32*)((a1 + 0x3c));
    }
    *(u32*)((a1 + 0x3c)) = 0;
    *(u32*)((a1 + 0x38)) = 0;
    func_001022e8(a1, a1);
    return;
}
