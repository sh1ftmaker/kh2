// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003661a0 asm("D_003661a0");
extern "C" u32 D_003661a4 asm("D_003661a4");
extern "C" u32 D_003783f0 asm("D_003783f0");
extern "C" u32 D_00378400 asm("D_00378400");
extern "C" u32 func_00305620(u32, u32) asm("func_00305620");

// 0x0030ee18 func_0030ee18
u32 func_0030ee18() asm("func_0030ee18");
u32 func_0030ee18() {
    u32 loc_0;
    u32 loc_14;
    u32 loc_28;
    u32 loc_34;
    u32 loc_4;
    u32 loc_8;
    u32 loc_24;
    u32 a1_0;
    u32 v0;
    loc_4 = 1;
    loc_8 = 1;
    loc_14 = (u32)&D_003783f0;
    loc_24 = 1;
    loc_28 = 1;
    loc_34 = (u32)&D_00378400;
    *(u32*)(&D_003661a0) = func_00305620((u32)&loc_0, (u32)&D_00378400);
    v0 = func_00305620((u32)&loc_14 + 0xc, a1_0);
    *(u32*)(&D_003661a4) = v0;
    return v0;
}
