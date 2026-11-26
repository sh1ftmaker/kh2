// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ed20 asm("D_0035ed20");
extern "C" u32 D_0035ed40 asm("D_0035ed40");
extern "C" u32 D_00371ca8 asm("D_00371ca8");
extern "C" u32 D_00371cb0 asm("D_00371cb0");
extern "C" u32 D_00371cb8 asm("D_00371cb8");
extern "C" u32 D_00371cc0 asm("D_00371cc0");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" u32 func_001d56c8(u32) asm("func_001d56c8");
extern "C" u32 func_00246840() asm("func_00246840");
extern "C" u32 func_002469a0(u32) asm("func_002469a0");
extern "C" u32 func_002474e0(u32) asm("func_002474e0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");

// 0x00247870 Tz::HECO::MoveMaker(bool)
u32 lift_00247870(u8 a0) asm("_ZN2Tz4HECO9MoveMakerEb");
u32 lift_00247870(u8 a0) {
    u32 s5;
    u32 v0;
    u32 s1;
    u32 t7;
    u32 s2;
    u32 s3;
    u32 t7_0;
    u32 v0_1;
    u32 t3;
    u32 v0_2;
    u32 t3_3;
    u32 v0_4;
    u32 t4;
    u32 t4_5;
    u32 t4_6;
    u32 t7_7;
    u32 t4_8;
    u32 t4_9;
    u32 t4_10;
    u32 t4_11;
    u32 t6;
    u32 t6_12;
    u32 t7_13;
    u32 t7_14;
    s5 = func_00167f18(0);
    v0 = func_002891e8(*(u32*)(&D_0035ed20));
    if (((s32)(func_002474e0(v0)) != 0)) {
        s1 = func_002469a0(v0);
        if (((s32)(func_00246840()) != 0)) {
            t7 = (u32)&D_00371cb0;
        } else {
            t7 = (u32)&D_00371ca8;
        }
        s2 = *(u8*)((s1 + t7));
        s3 = func_001d56c8(*(u8*)((s1 + t7)));
        if (((s32)(func_00246840()) != 0)) {
            t7_0 = (u32)&D_00371cc0;
        } else {
            t7_0 = (u32)&D_00371cb8;
        }
        if ((*(u8*)(s3) == 2)) {
            if ((s2 == 7)) {
                v0_1 = (((s32)(*(u32*)((s3 + 4))) / 0xa) * 0xa);
                t3 = 0xa;
                v0_2 = (v0_1 + 1);
            } else {
                t3 = 1;
                v0_2 = *(u8*)((s1 + t7_0));
            }
            t3_3 = t3;
            v0_4 = v0_2;
        } else {
            t3_3 = 1;
            v0_4 = *(u8*)((s1 + t7_0));
        }
        if (((s32)(a0) != 0)) {
            if (((s32)(*(s8*)(((v0 + *(u32*)(&D_0035ed40)) + 0x3948))) <= 0)) {
                t4 = ((*(u64*)((s5 + 8)) & 0x40) == 0) ? *(s8*)(((v0 + *(u32*)(&D_0035ed40)) + 0x3948)) : (v0_4 + -1);
                t4_6 = t4;
            } else {
                t4_5 = ((s32)((*(s8*)(((v0 + *(u32*)(&D_0035ed40)) + 0x3948)) - t3_3)) < 0) ? 0 : (*(s8*)(((v0 + *(u32*)(&D_0035ed40)) + 0x3948)) - t3_3);
                t4_6 = t4_5;
            }
            t4_11 = t4_6;
        } else {
            t7_7 = (*(s8*)(((v0 + *(u32*)(&D_0035ed40)) + 0x3948)) + 1);
            if (((s32)(t7_7) >= (s32)(v0_4))) {
                t4_8 = ((s32)((*(u64*)((s5 + 8)) & 0x80)) != 0) ? 0 : *(s8*)(((v0 + *(u32*)(&D_0035ed40)) + 0x3948));
                t4_10 = t4_8;
            } else {
                t4_9 = (*(s8*)(((v0 + *(u32*)(&D_0035ed40)) + 0x3948)) + t3_3);
                t4_10 = (((s32)((*(s8*)(((v0 + *(u32*)(&D_0035ed40)) + 0x3948)) + t3_3)) < (s32)(v0_4)) ? t4_9 : (v0_4 + -1));
            }
            t4_11 = t4_10;
        }
        t6 = (v0 + *(u32*)(&D_0035ed40));
        t6_12 = (t6 + 0x3940);
        t7_13 = *(s8*)((t6_12 + 8));
        *(u8*)((t6_12 + 8)) = t4_11;
        t7_14 = ((u32)(0) < (u32)((t7_13 ^ t4_11)));
    } else {
        t7_14 = 0;
    }
    return t7_14;
}
