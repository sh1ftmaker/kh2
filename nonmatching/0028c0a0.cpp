// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_00138d60(u32, u32, u32, u32, u32, u32, u32) asm("func_00138d60");
extern "C" u32 func_00192048(u32) asm("func_00192048");

// 0x0028c0a0 func_0028c0a0
u32 func_0028c0a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("_ZN2Tz8MenuItem5startEPvPN2YI5IMAGEEiii");
u32 func_0028c0a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u32 v0;
    u32 v0_0;
    v0 = func_00138d60(a0, *(u32*)(&D_0035f3d4), a2, a3, a1, 0, a5);
    *(u32*)((a0 + 0xc)) = (*(u32*)((a0 + 0xc)) | 8);
    if (((s32)(a4) >= 0)) {
        v0_0 = func_00192048(a4);
        *(u32*)((a0 + 0x198)) = v0_0;
        v0 = v0_0;
    }
    *(u32*)((a0 + 0x1a4)) = 0x80e5e5e5;
    *(u32*)((a0 + 0x1ac)) = 1;
    return v0;
}
