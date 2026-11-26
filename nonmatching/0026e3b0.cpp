// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f104 asm("D_0035f104");
extern "C" u32 D_0035f10c asm("D_0035f10c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");

// 0x0026e3b0 Tz::Selector::AdjustSeqPos()
void lift_0026e3b0() asm("_ZN2Tz8Selector12AdjustSeqPosEv");
void lift_0026e3b0() {
    u8 frame[48];
    u32 loc_0;
    u32 t6;
    u32 t7;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s4;
    u32 v0;
    u32 s0_0;
    u32 s2_1;
    u32 s3;
    u32 t4;
    u32 t5;
    u32 t6_2;
    u32 s0_3;
    u32 s1_4;
    u32 s2_5;
    u32 s4_6;
    u32 s6;
    u32 s0_7;
    u32 s1_8;
    u32 s4_9;
    u32 s2_10;
    t6 = 0xa;
    t7 = (u32)&loc_0;
    do {
        *(u32*)(t7) = 0;
        t6 = (t6 + -1);
        t7 = (t7 + 4);
    } while (((s32)(t6) >= 0));
    s0 = 0;
    s1 = (u32)&loc_0;
    s2 = 2;
    s4 = 0;
    do {
        if ((func_00139d78(*(u32*)(&D_0035f104) + s0) != 0)) {
            *(u32*)(s1) = func_0023aa98((*(u32*)(&D_0035f104) + s0) + 0x18);
            s1 = (s1 + 4);
            s4 = (s4 + 1);
        }
        s0 = (s0 + 0x1b4);
        s2 = (s2 + -1);
    } while (((s32)(s2) >= 0));
    v0 = func_002892f8(*(u32*)(&D_0035f10c));
    if (((s32)(v0) > 0)) {
        s0_0 = ((s4 << 2) + (u32)frame);
        s2_1 = 0;
        s3 = 0x360000;
        do {
            *(u32*)(s0_0) = func_0023aa98(func_002891b8(*(u32*)((s3 + -0xef4)), s2_1) + 0x18);
            s0_0 = (s0_0 + 4);
            s4 = (s4 + 1);
            s2_1 = (s2_1 + 1);
        } while (((s32)(((s32)(s2_1) < (s32)(v0))) != 0));
    }
    if (((s32)(s4) >= (s32)(2))) {
        t4 = 0xa;
        t5 = 0;
        t6_2 = (u32)&loc_0;
        do {
            t4 = (t4 + -1);
            t5 = (t5 + *(u32*)(t6_2));
            t6_2 = (t6_2 + 4);
        } while (((s32)(t4) >= 0));
        s0_3 = 0;
        s1_4 = (u32)&loc_0;
        s2_5 = -(((s32)((t5 + (t5 >> 0x1f))) >> 1));
        s4_6 = 2;
        s6 = 0;
        do {
            if (((s32)(func_00139d78(*(u32*)(&D_0035f104) + s0_3)) != 0)) {
                func_00138c68(*(u32*)(&D_0035f104) + s0_3, 0, s2_5);
                s1_4 = (s1_4 + 4);
                s2_5 = (s2_5 + *(u32*)(s1_4));
                s6 = (s6 + 1);
            }
            s0_3 = (s0_3 + 0x1b4);
            s4_6 = (s4_6 + -1);
        } while (((s32)(s4_6) >= 0));
        if (((s32)(v0) > 0)) {
            s0_7 = ((s6 << 2) + (u32)frame);
            s1_8 = 0x360000;
            s4_9 = 0;
            do {
                func_00138c68(func_002891b8(*(u32*)((s1_8 + -0xef4)), s4_9), 0, s2_5);
                s2_10 = (s2_5 + *(u32*)(s0_7));
                s0_7 = (s0_7 + 4);
                s2_5 = s2_10;
                s4_9 = (s4_9 + 1);
            } while (((s32)(((s32)(s4_9) < (s32)(v0))) != 0));
        }
    }
    return;
}
