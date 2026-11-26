// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016cf00(u32, u32, u32, u32, u32) asm("func_0016cf00");
extern "C" void func_00187b90(u32, u32) asm("func_00187b90");
extern "C" void func_00188398(u32, u32, u32, u32) asm("func_00188398");

// 0x00187fd8 func_00187fd8
void func_00187fd8(u32 a0, u32 a1) asm("_ZN2YS3ACT5startEPKNS0_5TABLE4ELEME");
void func_00187fd8(u32 a0, u32 a1) {
    u32 loc_0;
    u8 t7;
    if (((s32)((*(u32*)((*(u32*)((*(u32*)((*(u32*)((a0 + 0x88)) + 4)) + 0x484)) + 0x1c)) & 2)) == 0)) {
        func_00187b90(a0, a1);
        loc_0 = *(u32*)((a0 + 0x88));
        *(u32*)((a0 + 0x90)) = a1;
        *(u32*)((a0 + 0x94)) = func_0016cf00(*(u32*)((*(u32*)((*(u32*)((a0 + 0x88)) + 4)) + 0x484)), 0, *(u16*)((a1 + 8)), (u32)&loc_0, 1);
        *(u32*)((a0 + 0x98)) = *(u16*)((a1 + 4));
        *(u32*)((a0 + 0x9c)) = 0;
        if (((s32)((*(u16*)((a1 + 6)) & 2)) != 0)) {
            *(u32*)((a0 + 0x9c)) = 1;
        }
        t7 = ((*(u8*)((a1 + 6)) ^ 1) & 1);
        if (((s32)(t7) != 0)) {
            *(u32*)((a0 + 0x9c)) = (*(u32*)((a0 + 0x9c)) | 4);
        }
        *(u32*)((a0 + 0x9c)) = (*(u32*)((a0 + 0x9c)) | 2);
        func_00188398(a0, *(u16*)((a1 + 0x16)), (u32)&loc_0, 1);
    }
    return;
}
