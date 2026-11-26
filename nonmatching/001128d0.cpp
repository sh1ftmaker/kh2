// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00341788 asm("D_00341788");
extern "C" u32 D_003417a8 asm("D_003417a8");

// 0x001128d0 u_tail4_001128d0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001128d0(u32 a0, u8 a1) asm("_Z16u_tail4_001128d0jjjj");
void lift_001128d0(u32 a0, u8 a1) {
    u32 t5;
    u32 t3;
    u32 t6;
    u32 t7;
    u32 t7_0;
    u32 t3_1;
    u32 t2;
    u32 t5_2;
    u32 t6_3;
    u32 t5_4;
    u32 t6_5;
    u32 t7_6;
    u32 t4;
    u32 t5_7;
    u32 t6_8;
    u32 t6_9;
    u32 t4_10;
    u32 t5_11;
    u32 t6_12;
    u32 t7_13;
    t5 = *(u32*)(&D_003417a8);
    t3 = 0;
    if (((s32)(t5) > 0)) {
        t6 = (u32)&D_00341788;
        t7 = *(u32*)((u32)&D_00341788);
        do {
            t7_0 = *(u32*)(t6);
            if ((t7_0 == a0)) {
                break;
            }
            t3_1 = (t3 + 1);
            t3 = t3_1;
            t6 = (t6 + 4);
            t7 = ((s32)(t3_1) < (s32)(t5));
        } while ((t7 != 0));
    }
    t2 = *(u32*)(&D_003417a8);
    if (((s32)(((s32)(t3) < (s32)(t2))) != 0)) {
        if (((s32)(a1) == 0)) {
            t5_2 = (t3 + 1);
            if (((s32)(((s32)(t5_2) < (s32)(t2))) != 0)) {
                t6_3 = (t5_2 << 2);
                t5_4 = (t2 - t5_2);
                t6_5 = (t6_3 + (u32)&D_00341788);
                do {
                    *(u32*)((t6_5 + -4)) = *(u32*)(t6_5);
                    t5_4 = (t5_4 + -1);
                    t6_5 = (t6_5 + 4);
                } while (((s32)(t5_4) != 0));
            }
            t7_6 = *(u32*)(&D_003417a8);
            *(u32*)(&D_003417a8) = (t7_6 + -1);
            return;
        } else {
            t4 = (t3 + 1);
            if (((s32)(((s32)(t4) < (s32)(t2))) != 0)) {
                t5_7 = (t4 << 2);
                t6_8 = (t3 << 2);
                t6_9 = ((t5_7 - t6_8) + (u32)&D_00341788);
                t4_10 = (t2 - t4);
                t5_11 = (t5_7 + (u32)&D_00341788);
                t6_12 = (t6_9 + -4);
                do {
                    *(u32*)(t6_12) = *(u32*)(t5_11);
                    t4_10 = (t4_10 + -1);
                    t5_11 = (t5_11 + 4);
                    t6_12 = (t6_12 + 4);
                } while (((s32)(t4_10) != 0));
            }
            t7_13 = *(u32*)(&D_003417a8);
            *(u32*)(&D_003417a8) = ((t7_13 - t3) + -1);
            return;
        }
    } else {
        return;
    }
}
