// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036617c asm("D_0036617c");
extern "C" u32 D_01e38a80 asm("D_01e38a80");
extern "C" u32 D_01e38ac0 asm("D_01e38ac0");
extern "C" u32 D_01e38b00 asm("D_01e38b00");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");

// 0x0030d8a8 func_0030d8a8
u32 func_0030d8a8(u32 a0) asm("func_0030d8a8");
u32 func_0030d8a8(u32 a0) {
    u32 v0;
    u32 loc_0;
    u32 v0_0;
    v0 = *(u32*)(&D_0036617c);
    if (((s32)(v0) >= 0)) {
        *(u32*)(&D_01e38b00) = a0;
        loc_0 = 0;
        v0_0 = ((s32)(func_003094b8((u32)&D_01e38a80, 1, 0, (u32)&D_01e38b00, 4, (u32)&D_01e38ac0, 4, 0)) < 0) ? 0 : *(u32*)(&D_01e38ac0);
        v0 = v0_0;
    } else {
        v0 = 0;
    }
    return v0;
}
