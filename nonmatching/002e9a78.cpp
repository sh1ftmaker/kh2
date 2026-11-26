// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001c0cd8(u32, u32) asm("func_001c0cd8");
extern "C" u32 func_001c0ce8(u32) asm("func_001c0ce8");

// 0x002e9a78 func_002e9a78
u32 func_002e9a78(u32 a0, u32 a1, u32 a2) asm("_ZN2Ts15TARGET_SEARCHER7is_typeEPN2YS3OBJEi");
u32 func_002e9a78(u32 a0, u32 a1, u32 a2) {
    u32 a0_0;
    u32 a0_1;
    u32 a0_2;
    u32 a0_3;
    u32 a0_4;
    u32 a0_5;
    u32 a0_6;
    u32 a0_7;
    u32 a0_8;
    u32 a0_9;
    if (((s32)(func_001c0cd8(a1, a1)) != 0)) {
        if (((s32)(func_001c0ce8(a1)) == 0)) {
            if ((a2 != 1)) {
                if (((s32)(a2) < (s32)(2))) {
                    a0_0 = (a2 != 0) ? 1 : ((u32)(0) < (u32)((*(u32*)((a1 + 0x588)) & 0x10)));
                    a0_2 = a0_0;
                } else {
                    a0_1 = (a2 == 2) ? ((u32)(0) < (u32)((*(u32*)((a1 + 0x588)) & 4))) : 1;
                    a0_2 = a0_1;
                }
                a0_3 = a0_2;
            } else {
                a0_3 = ((u32)(0) < (u32)((*(u32*)((a1 + 0x588)) & 4)));
            }
            a0_4 = a0_3;
        } else {
            a0_4 = 0;
        }
        a0_9 = a0_4;
    } else {
        if ((a2 != 1)) {
            if (((s32)(a2) < (s32)(2))) {
                a0_5 = (a2 != 0) ? 1 : ((u32)(0) < (u32)((*(u32*)((a1 + 0x588)) & 0x10)));
                a0_7 = a0_5;
            } else {
                a0_6 = (a2 == 2) ? ((u32)(0) < (u32)((*(u32*)((a1 + 0x588)) & 4))) : 1;
                a0_7 = a0_6;
            }
            a0_8 = a0_7;
        } else {
            a0_8 = ((u32)(0) < (u32)((*(u32*)((a1 + 0x588)) & 4)));
        }
        a0_9 = a0_8;
    }
    return a0_9;
}
