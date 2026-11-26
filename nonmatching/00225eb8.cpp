// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00225eb8 func_00225eb8
void func_00225eb8(u32 a0, u32 a1, u32 a2) asm("func_00225eb8");
void func_00225eb8(u32 a0, u32 a1, u32 a2) {
    u32 a1_0;
    u32 t6;
    u32 t7;
    u32 t5;
    u32 t7_1;
    u32 t7_2;
    u32 a1_3;
    u32 a1_4;
    u32 a1_5;
    u32 t5_6;
    u32 t7_7;
    u32 t6_8;
    u32 t4;
    u32 t5_9;
    u32 t4_10;
    a1_0 = (a1 + 0x3f);
    t6 = *(u32*)((a0 + 8));
    if (((s32)(t6) != 0)) {
        t7 = *(u8*)((t6 + 8));
        t5 = 0;
        do {
            t7_1 = *(u8*)((t6 + 8));
            if ((t7_1 == 0)) {
                t7_2 = *(u32*)((t6 + 0xc));
                a1_3 = ((a1_0 & 0xffffffc0) + 0x40);
                if (((u32)(a1_3) < (u32)(t7_2))) {
                    if ((a2 != 1)) {
                        break;
                    }
                    t5 = t6;
                }
                a1_4 = a1_3;
            } else {
                a1_4 = ((a1_0 & 0xffffffc0) + 0x40);
            }
            t6 = *(u32*)(t6);
            t7 = ((u32)(a1_3) < (u32)(t7_2));
        } while ((t6 != 0));
        a1_5 = a1_4;
        t5_6 = t5;
    } else {
        a1_5 = ((a1_0 & 0xffffffc0) + 0x40);
        t5_6 = 0;
    }
    if (((s32)(t5_6) != 0)) {
        t7_7 = *(u32*)((t5_6 + 0xc));
        if (((u32)((t7_7 - a1_5)) >= (u32)(0x80))) {
            if ((a2 != 1)) {
                t6_8 = (t5_6 + a1_5);
                *(u32*)((t6_8 + 0xc)) = (t7_7 - a1_5);
                t4 = *(u32*)(t5_6);
                *(u32*)(t6_8) = t4;
                *(u32*)((t6_8 + 4)) = t5_6;
                *(u8*)((t6_8 + 8)) = 0;
                if (((s32)(t4) != 0)) {
                    *(u32*)((t4 + 4)) = t6_8;
                }
                *(u32*)(t5_6) = t6_8;
                *(u8*)((t5_6 + 8)) = 1;
                *(u32*)((t5_6 + 0xc)) = a1_5;
            } else {
                t5_9 = (t5_6 + (t7_7 - a1_5));
                *(u8*)((t5_9 + 8)) = a2;
                *(u32*)((t5_9 + 0xc)) = a1_5;
                t4_10 = *(u32*)(t5_6);
                *(u32*)(t5_9) = t4_10;
                *(u32*)((t5_9 + 4)) = t5_6;
                if (((s32)(t4_10) != 0)) {
                    *(u32*)((t4_10 + 4)) = t5_9;
                }
                *(u32*)((t5_6 + 0xc)) = (t7_7 - a1_5);
                *(u32*)(t5_6) = t5_9;
                *(u8*)((t5_6 + 8)) = 0;
                t5_6 = t5_9;
            }
        } else {
            *(u8*)((t5_6 + 8)) = 1;
        }
    }
    return;
}
