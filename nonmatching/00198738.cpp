// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00168b88(u32, u32, u32, u32) asm("func_00168b88");

// 0x00198738 func_00198738
u32 func_00198738(u32 a0, u32 a1) asm("_ZN2YS6STDOBJ15get_camera_dataEPKc");
u32 func_00198738(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)((a0 + 0x7b0))) != 0)) {
        v0 = func_00168b88(*(u32*)((a0 + 0x7b0)), 0x16, (*(s8*)(a1) | (*(s8*)((a1 + 3)) << 0x18)) | ((*(s8*)((a1 + 2)) << 0x10) | (*(s8*)((a1 + 1)) << 8)), 0);
        v0 = (v0 != 0) ? *(u32*)((v0 + 8)) : 0;
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
