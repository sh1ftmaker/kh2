// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0037aa2c asm("D_0037aa2c");
extern "C" u32 D_0037aa30 asm("D_0037aa30");
extern "C" u32 func_0030edb0(u32, u32, u32, u32) asm("func_0030edb0");
extern "C" u32 func_0030ee00() asm("func_0030ee00");

// 0x00100700 wtarget_00100700(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00100700(u32 a0, u32 a1, u32 a2, u32 a3) asm("_Z16wtarget_00100700jjjj");
u32 lift_00100700(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    u32 v0_0;
    *(u32*)((a1 + 0x10)) = 0;
    *(u32*)(a1) = 0xffffffff;
    *(u32*)((a1 + 4)) = a2;
    *(u32*)((a1 + 8)) = a3;
    *(u64*)((a1 + 0x10)) = (*(u64*)((a1 + 0x10)) | 0x7fa);
    *(u32*)((a1 + 0xc)) = a0;
    v0 = func_0030edb0(a0, a1, a2, a3);
    *(u32*)(&D_0037aa2c) = v0;
    *(u32*)((a1 + 0x18)) = *(u32*)(&D_0037aa30);
    *(u32*)(&D_0037aa30) = a1;
    if (((s32)(v0) != 0)) {
        v0_0 = func_0030ee00();
        v0 = v0_0;
    }
    return v0;
}
