// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e38c40 asm("D_01e38c40");
extern "C" u32 D_01e38e40 asm("D_01e38e40");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" u32 func_0030dd70(u32) asm("func_0030dd70");
extern "C" u32 func_0030de70() asm("func_0030de70");

// 0x0030e478 func_0030e478
u32 func_0030e478(u32 a0) asm("func_0030e478");
u32 func_0030e478(u32 a0) {
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(func_0030dd70(a0)) >= 0)) {
        if (((s32)(func_0030de70()) != 0)) {
            v0_0 = 0xfffefffc;
        } else {
            *(u32*)(&D_01e38c40) = a0;
            loc_0 = 0;
            v0 = func_003094b8((u32)&D_01e38e40, 0xa, 0, (u32)&D_01e38c40, 4, (u32)&D_01e38c40, 4, 0);
            v0 = ((s32)(v0) < 0) ? 0xfffeffff : *(u32*)(&D_01e38c40);
            v0_0 = v0;
        }
        v0_1 = v0_0;
    } else {
        v0_1 = 0xffff0000;
    }
    return v0_1;
}
