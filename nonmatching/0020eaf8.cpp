// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00359780 asm("D_00359780");
extern "C" u32 D_00359788 asm("D_00359788");
extern "C" u32 D_00359808 asm("D_00359808");
extern "C" u32 D_00359810 asm("D_00359810");

// 0x0020eaf8 func_0020eaf8
void func_0020eaf8(u32 a0) asm("func_0020eaf8");
void func_0020eaf8(u32 a0) {
    if (((s32)(((s32)(*(u32*)(&D_00359780)) < (s32)(0x1f))) != 0)) {
        if (((s32)(((s32)(*(u32*)(((*(u32*)(&D_00359808) << 2) + (u32)&D_00359810))) < (s32)((*(u32*)(((*(u32*)(&D_00359780) << 2) + (u32)&D_00359788)) + a0)))) == 0)) {
            *(u32*)(&D_00359780) = (*(u32*)(&D_00359780) + 1);
            *(u32*)((((*(u32*)(&D_00359780) + 1) << 2) + (u32)&D_00359788)) = (*(u32*)(((*(u32*)(&D_00359780) << 2) + (u32)&D_00359788)) + a0);
            return;
        } else {
            *(u32*)(0) = 0;
            return;
        }
    } else {
        *(u32*)(0) = 0;
        return;
    }
}
