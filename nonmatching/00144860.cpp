// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00144860 func_00144860(void*)
f32 lift_00144860(u32 a0, u32 a1, u32 a2) asm("_Z13func_00144860Pv");
f32 lift_00144860(u32 a0, u32 a1, u32 a2) {
    f32 f0;
    f32 f2;
    f32 f0_0;
    f32 f3;
    f32 f0_1;
    f32 f3_2;
    f32 f0_3;
    f32 f3_4;
    f32 f0_5;
    f32 f3_6;
    f32 f2_7;
    f32 f0_8;
    f0 = *(f32*)(a1);
    f2 = *(f32*)(a2);
    if (!((f0 < f2))) {
        f0 = f2;
    }
    f0_0 = *(f32*)((a1 + 4));
    f3 = *(f32*)((a2 + 4));
    *(f32*)(a0) = f0;
    if (!((f0_0 < f3))) {
        f0_0 = f3;
    }
    f0_1 = *(f32*)((a1 + 8));
    f3_2 = *(f32*)((a2 + 8));
    *(f32*)((a0 + 4)) = f0_0;
    if (!((f0_1 < f3_2))) {
        f0_1 = f3_2;
    }
    f0_3 = *(f32*)((a1 + 0xc));
    f3_4 = *(f32*)((a2 + 0xc));
    *(f32*)((a0 + 8)) = f0_1;
    if (!((f3_4 < f0_3))) {
        f0_3 = f3_4;
    }
    f0_5 = *(f32*)((a1 + 0x10));
    f3_6 = *(f32*)((a2 + 0x10));
    *(f32*)((a0 + 0xc)) = f0_3;
    if (!((f3_6 < f0_5))) {
        f0_5 = f3_6;
    }
    f2_7 = *(f32*)((a2 + 0x14));
    f0_8 = *(f32*)((a1 + 0x14));
    *(f32*)((a0 + 0x10)) = f0_5;
    if (!((f2_7 < f0_8))) {
        f0_8 = f2_7;
    }
    *(f32*)((a0 + 0x14)) = f0_8;
    return f0_8;
}
