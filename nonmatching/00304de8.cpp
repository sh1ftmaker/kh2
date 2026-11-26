// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00305168(u32, u32, u32, u32) asm("func_00305168");

// 0x00304de8 func_00304de8
void func_00304de8(u32 a0, u32 a1, u32 a2) asm("func_00304de8");
void func_00304de8(u32 a0, u32 a1, u32 a2) {
    u32 t7;
    u32 t7_0;
    if (((s32)((s32)((u64)(func_00305168(*(u32*)((a0 + 0x54)), *(s16*)((a0 + 0xe)), a1, a2)))) >= 0)) {
        t7 = *(u32*)((a0 + 0x50));
        *(u32*)((a0 + 0x50)) = (t7 + (s32)((u64)(func_00305168(*(u32*)((a0 + 0x54)), *(s16*)((a0 + 0xe)), a1, a2))));
    } else {
        t7_0 = *(u16*)((a0 + 0xc));
        *(u16*)((a0 + 0xc)) = (t7_0 & 0xefff);
    }
    return;
}
