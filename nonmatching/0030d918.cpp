// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036617c asm("D_0036617c");
extern "C" u32 D_01e38a80 asm("D_01e38a80");
extern "C" u32 D_01e38ac0 asm("D_01e38ac0");
extern "C" u32 D_01e38b00 asm("D_01e38b00");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");

// 0x0030d918 func_0030d918
u32 func_0030d918(u32 a0, u32 a1, u32 a2) asm("func_0030d918");
u32 func_0030d918(u32 a0, u32 a1, u32 a2) {
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)(&D_0036617c)) >= 0)) {
        *(u32*)(&D_01e38b00) = a1;
        loc_0 = 0;
        *(u32*)(((u32)&D_01e38b00 + 4)) = a0;
        *(u32*)(((u32)&D_01e38b00 + 8)) = a2;
        v0 = ((s32)(func_003094b8((u32)&D_01e38a80, 4, 0, (u32)&D_01e38b00, 0xc, (u32)&D_01e38ac0, 4, 0)) < 0) ? 0 : *(u32*)(&D_01e38ac0);
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
