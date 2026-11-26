// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e3af00 asm("D_01e3af00");
extern "C" u32 D_01e3b300 asm("D_01e3b300");

// 0x00310990 func_00310990
u32 func_00310990() asm("func_00310990");
u32 func_00310990() {
    u32 a0_0;
    u32 a1_1;
    u32 v0;
    u32 v1;
    *(u32*)(&D_01e3b300) = (u32)&D_01e3af00;
    a0_0 = 0x3f;
    a1_1 = 0x1e40000;
    v0 = ((u32)&D_01e3af00 + 0x3f0);
    v1 = ((u32)&D_01e3af00 + 0x400);
    do {
        *(u32*)(v0) = v1;
        a0_0 = (a0_0 + -1);
        v0 = (v0 + -0x10);
        v1 = (v1 + -0x10);
    } while (((s32)(a0_0) >= 0));
    *(u32*)(((a1_1 + -0x5100) + 0x3f0)) = 0;
    return 0;
}
