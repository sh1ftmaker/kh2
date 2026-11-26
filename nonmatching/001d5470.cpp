// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_001d5370(u32, u32, u32) asm("func_001d5370");

// 0x001d5470 func_001d5470
u32 func_001d5470(u32 a0, u32 a1, u32 a2) asm("func_001d5470");
u32 func_001d5470(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    v0 = func_00168b38(a1, 0xffffffff, *(u8*)((a2 + 4)));
    *(u32*)((a0 + 4)) = *(u32*)((v0 + 8));
    *(u32*)((a0 + 8)) = *(u16*)((a2 + 6));
    if (((s32)((*(u8*)((a2 + 5)) & 0xff)) != 0)) {
        if ((*(u32*)(a0) == 0xc)) {
            *(u32*)(a0) = 0xd;
        }
        return func_001d5370(a0 + 0xc, a1, (*(u8*)((a2 + 5)) & 0xff) + -1);
    } else {
        return v0;
    }
}
