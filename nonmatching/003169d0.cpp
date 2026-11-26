// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00316998 asm("D_00316998");
extern "C" u32 D_00367920 asm("D_00367920");
extern "C" u32 D_00367924 asm("D_00367924");
extern "C" u32 func_0030edb0() asm("func_0030edb0");
extern "C" u32 func_0030ee00() asm("func_0030ee00");

// 0x003169d0 func_003169d0
u32 func_003169d0() asm("func_003169d0");
u32 func_003169d0() {
    u32 t7;
    u32 v0;
    u32 s1;
    u32 v0_0;
    u32 v0_1;
    u32 t6;
    t7 = *(u32*)(&D_00367924);
    v0 = func_0030edb0();
    if (((s32)(t7) == 0)) {
        *(u32*)(&D_00367924) = 1;
        s1 = 1;
    } else {
        s1 = 0;
    }
    if (((s32)(v0) != 0)) {
        v0_0 = func_0030ee00();
        v0 = v0_0;
    }
    if (((s32)(s1) != 0)) {
        v0_1 = ((u32(*)())((u32)&D_00316998))();
        v0 = v0_1;
    }
    t6 = *(u32*)(&D_00367920);
    *(u32*)(&D_00367920) = (((s32)(*(u32*)(&D_00367920)) < (s32)(0)) ? 0 : t6);
    return v0;
}
