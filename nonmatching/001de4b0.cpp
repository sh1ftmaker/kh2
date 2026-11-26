// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001de4b0 func_001de4b0
u32 func_001de4b0(u32 a0, u32 a1, u32 a2) asm("_ZN3ryj3PAX10each_groupEiPNS_6EFFECTE");
u32 func_001de4b0(u32 a0, u32 a1, u32 a2) {
    u32 t4;
    u32 v0;
    t4 = 0;
    v0 = *(u32*)((a0 + 0xc));
    while (((s32)(v0) != 0)) {
        if (((s32)(a1) < 0) || (*(u8*)((*(u32*)((v0 + 0x44)) + 4)) == a1)) {
            if (((s32)(a2) == 0)) {
                return *(u32*)((v0 + 0x40));
            }
            if ((t4 != 0)) {
                return *(u32*)((v0 + 0x40));
            }
            t4 = ((u32)((*(u32*)((v0 + 0x40)) ^ a2)) < (u32)(1));
        }
        v0 = *(u32*)((v0 + 0x60));
    }
    return 0;
}
