// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00207308 func_00207308
u32 func_00207308(u32 a0, u32 a1) asm("func_00207308");
u32 func_00207308(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    if (((s32)(*(u32*)((a0 + 0x10))) != 0)) {
        if ((*(u8*)((a1 + 0x106)) != 0)) {
            if (((s32)(*(u32*)((a0 + 0x14))) != 0)) {
                if (((s32)(*(u8*)((a1 + 0x101))) != 0)) {
                    if (((s32)(*(u32*)((a0 + 0x18))) != 0)) {
                        v0 = 1;
                    } else {
                        v0 = 0;
                    }
                    v0_0 = v0;
                } else {
                    v0_0 = 1;
                }
                v0_1 = v0_0;
            } else {
                v0_1 = 0;
            }
            v0_4 = v0_1;
        } else {
            if (((s32)(*(u8*)((a1 + 0x101))) != 0)) {
                if (((s32)(*(u32*)((a0 + 0x18))) != 0)) {
                    v0_2 = 1;
                } else {
                    v0_2 = 0;
                }
                v0_3 = v0_2;
            } else {
                v0_3 = 1;
            }
            v0_4 = v0_3;
        }
        v0_5 = v0_4;
    } else {
        v0_5 = 0;
    }
    return v0_5;
}
