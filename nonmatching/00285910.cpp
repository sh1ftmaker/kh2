// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2e4 asm("D_0035f2e4");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" u32 func_002859a0() asm("func_002859a0");

// 0x00285910 func_00285910
u32 func_00285910() asm("func_00285910");
u32 func_00285910() {
    u32 v0;
    u32 t3;
    u32 t7;
    u32 v0_0;
    v0 = func_002859a0();
    t3 = 0;
    t7 = (0 >> 5);
    do {
        if (((s32)((*(u32*)(((*(u32*)(&D_0035f2e4) + (t7 << 2)) + 0xcc)) & (1 << (t3 & 0x1f)))) != 0)) {
            *(u32*)((v0 + (t7 << 2))) = (*(u32*)((v0 + (t7 << 2))) | (1 << (t3 & 0x1f)));
        }
        t3 = (t3 + 1);
        t7 = (t3 >> 5);
    } while (((s32)(((s32)(t3) < (s32)(0x280))) != 0));
    if ((*(u32*)(&D_0035f2e4) != 0)) {
        v0_0 = func_00106420(*(u32*)(&D_0035f2e4));
        *(u32*)(&D_0035f2e4) = 0;
        v0 = v0_0;
    }
    return v0;
}
