// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_01c62fb0 asm("D_01c62fb0");
extern "C" u32 func_00105ee8(u32, u32) asm("func_00105ee8");
extern "C" u32 func_00168b88(u32, u32, u32, u32) asm("func_00168b88");

// 0x0019f7d0 func_0019f7d0
u32 func_0019f7d0(u32 a0, u32 a1) asm("_ZN2YS5PLACE7GetElemEii");
u32 func_0019f7d0(u32 a0, u32 a1) {
    u32 s0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(a0) < 0)) {
        a0 = *(u8*)(((u32)&D_0032bae0 + 1));
    }
    s0 = *(u32*)(&D_01c62fb0);
    v0 = func_00105ee8(((s32)(a1) < (s32)(0)) ? *(u8*)(&D_0032bae0) : a1, a1);
    v0_0 = func_00168b88(s0, 2, (*(s8*)(v0) | (*(s8*)((v0 + 3)) << 0x18)) | ((*(s8*)((v0 + 2)) << 0x10) | (*(s8*)((v0 + 1)) << 8)), 0);
    if ((v0_0 != 0)) {
        v0_1 = ((s32)(*(u32*)((v0_0 + 8))) != 0) ? (*(u32*)((v0_0 + 8)) + (a0 << 2)) : 0;
        v0_0 = v0_1;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
