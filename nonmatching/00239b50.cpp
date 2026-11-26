// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00239b50 func_00239b50
u32 func_00239b50(u32 a0, u32 a1) asm("_ZN2YI8SEQUENCE11GetAllFrameEi");
u32 func_00239b50(u32 a0, u32 a1) {
    u32 t7;
    u32 t3;
    u32 t4;
    u32 v0;
    u32 v0_0;
    t7 = (*(u32*)((a0 + 0xb4)) + (a1 * 0x24));
    t3 = *(u16*)((t7 + 2));
    t4 = (*(u32*)((a0 + 0xb0)) + (*(u16*)(t7) * 0x90));
    v0 = 0;
    while (((s32)(t3) > 0)) {
        if (((s32)(((s32)(v0) < (s32)(*(u32*)((t4 + 0xc))))) != 0)) {
            v0 = ((*(u32*)(t4) & 0x8000) ? (*(u32*)((t4 + 0xc)) + -1) : *(u32*)((t4 + 0xc)));
        }
        t3 = (t3 + -1);
        t4 = (t4 + 0x90);
    }
    v0_0 = (v0 + 1);
    return v0_0;
}
