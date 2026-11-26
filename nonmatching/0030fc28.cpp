// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00367130 asm("D_00367130");

// 0x0030fc28 func_0030fc28
u32 func_0030fc28(u32 a0) asm("func_0030fc28");
u32 func_0030fc28(u32 a0) {
    u32 v0;
    u32 v1;
    u32 v1_0;
    u32 v1_1;
    v0 = *(u32*)((a0 + 4));
    if (((s32)(v0) != 0)) {
        v1 = *(u32*)(a0);
        *(u32*)(v0) = v1;
        v1_1 = v1;
    } else {
        v1_0 = *(u32*)(a0);
        *(u32*)(&D_00367130) = v1_0;
        v1_1 = v1_0;
    }
    if ((v1_1 != 0)) {
        *(u32*)((a0 + 4)) = 0;
        *(u32*)((v1_1 + 4)) = *(u32*)((a0 + 4));
    } else {
        *(u32*)((a0 + 4)) = 0;
    }
    return v1_1;
}
