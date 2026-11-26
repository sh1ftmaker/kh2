// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c620c8 asm("D_01c620c8");
extern "C" u32 D_01c62140 asm("D_01c62140");

// 0x001993a0 func_001993a0
void func_001993a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("func_001993a0");
void func_001993a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 t5;
    u32 t7;
    u32 t7_0;
    u32 t6;
    u32 t0;
    u32 t1;
    u32 t2;
    u32 t4;
    u32 t7_1;
    u32 t0_2;
    u32 t1_3;
    u32 t2_4;
    u32 t4_5;
    u32 t7_6;
    u32 t6_7;
    u32 t0_8;
    u32 t1_9;
    u32 t2_10;
    u32 t4_11;
    t5 = *(u32*)(&D_01c62140);
    if (((s32)(t5) != 0)) {
        do {
            t7 = *(u32*)((t5 + 4));
            if ((t7 == a0)) {
                t7_0 = *(u32*)(&D_01c62140);
                if ((t5 == t7_0)) {
                    *(u32*)(&D_01c62140) = *(u32*)((t5 + 0x14));
                    t0_2 = 0x1c60000;
                    t1_3 = (u32)&D_01c620c8;
                    t2_4 = *(u32*)((t5 + 0x14));
                    a7 = 0;
                    t4_5 = 0xaaaaaaab;
                } else {
                    t6 = *(u32*)((t7_0 + 0x14));
                    t0 = 0x1c60000;
                    t1 = (u32)&D_01c620c8;
                    t2 = *(u32*)((t5 + 0x14));
                    t4 = 0xaaaaaaab;
                    if ((t6 != t5)) {
                        do {
                            t7_1 = *(u32*)((t6 + 0x14));
                            t6 = t7_1;
                            t7_0 = t6;
                        } while ((t7_1 != t5));
                    }
                    *(u32*)((t7_0 + 0x14)) = *(u32*)((t5 + 0x14));
                    t0_2 = t0;
                    t1_3 = t1;
                    t2_4 = t2;
                    a7 = t7_0;
                    t4_5 = t4;
                }
                t7_6 = *(u32*)(((t0_2 + 0x2140) + 4));
                if ((t5 == t7_6)) {
                    *(u32*)(((t0_2 + 0x2140) + 4)) = a7;
                }
                *(u32*)((t5 + 0x14)) = 0;
                t5 = (t5 - t1_3);
                t5 = ((s32)(t5) >> 3);
                t5 = (t5 * t4_5);
                t6_7 = *(u32*)((t1_3 + 0x70));
                *(u32*)((((t6_7 << 2) + t1_3) + 0x60)) = t5;
                *(u32*)((t1_3 + 0x70)) = (t6_7 + 1);
                t0_8 = t0_2;
                t1_9 = t1_3;
                t2_10 = t2_4;
                t4_11 = t4_5;
            } else {
                t0_8 = 0x1c60000;
                t1_9 = (u32)&D_01c620c8;
                t2_10 = *(u32*)((t5 + 0x14));
                t4_11 = 0xaaaaaaab;
            }
            t5 = t2_10;
        } while (((s32)(t2_10) != 0));
    }
    return;
}
