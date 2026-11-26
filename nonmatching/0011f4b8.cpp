// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003479a8 asm("D_003479a8");
extern "C" u32 func_0011ee18(u32) asm("func_0011ee18");

// 0x0011f4b8 func_0011f4b8
u32 func_0011f4b8(u32 a0) asm("_ZN2kn7ModelBGC1EPv");
u32 func_0011f4b8(u32 a0) {
    u32 v0;
    u32 t5;
    u32 t7;
    u32 t6;
    u32 t7_0;
    u16 t7_1;
    v0 = func_0011ee18(a0);
    *(u32*)(a0) = (u32)&D_003479a8;
    if (((s32)(*(u16*)((*(u32*)((a0 + 4)) + 0x10))) != 0)) {
        t5 = 0;
        t7 = *(u32*)((*(u32*)((a0 + 4)) + 0x28));
        t6 = *(u32*)((a0 + 4));
        do {
            if (((u32)(0xffff) < (u32)(*(u32*)(((t6 + (t5 * 0x10)) + 0x28))))) {
                *(u32*)((a0 + 0xc)) = (*(u32*)((a0 + 0xc)) | 1);
            }
            t7_0 = *(u16*)(((t6 + (t5 * 0x10)) + 0x26));
            t7_1 = (t7_0 & 1);
            if (((s32)(t7_1) != 0)) {
                *(u32*)((a0 + 0xc)) = (*(u32*)((a0 + 0xc)) | 2);
            }
            t5 = (t5 + 1);
            t7 = ((s32)(t5) < (s32)(*(u16*)((*(u32*)((a0 + 4)) + 0x10))));
        } while ((t7 != 0));
    }
    return v0;
}
