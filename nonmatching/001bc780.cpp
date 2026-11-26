// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001b8e88(u32, u32) asm("func_001b8e88");
extern "C" u32 func_001bc948(u32) asm("func_001bc948");
extern "C" u32 func_001bd570(u32, u32) asm("func_001bd570");
extern "C" void func_0019ba60(u32) asm("func_0019ba60");
extern "C" void func_001bc6a8(u32, u32, u32, u32, u32) asm("func_001bc6a8");

// 0x001bc780 YS::COMMAND_MENU::add(int, YS::TARGET const*, int)
u32 lift_001bc780(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2YS12COMMAND_MENU3addEiPKNS_6TARGETEi");
u32 lift_001bc780(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 s1;
    u32 t6;
    u32 t6_0;
    u32 s2;
    u32 s2_1;
    u32 s3;
    u32 s5;
    u32 a0_2;
    u32 a0_3;
    u32 t7;
    u32 t7_4;
    u32 t7_5;
    u32 t6_6;
    u32 t6_7;
    u32 t7_8;
    u32 t7_9;
    u32 v0;
    u32 t6_10;
    u32 t7_11;
    u32 t7_12;
    u32 t7_13;
    u32 t7_14;
    u32 t7_15;
    u32 t7_16;
    u32 v0_17;
    u32 v0_18;
    u32 v0_19;
    s1 = func_001b8e88(a1, a1);
    t6 = *(u8*)((s1 + 7));
    func_0019ba60(*(u32*)((*(u32*)((a0 + 4)) + 0x9e0)));
    if ((t6 == 1)) {
        s2_1 = func_001bd570(*(u32*)((a0 + 4)), 0);
    } else {
        t6_0 = *(u16*)(s1);
        s2 = (t6_0 == 0x51) ? func_001bd570(*(u32*)((a0 + 4)), 2) : 0;
        s2_1 = s2;
    }
    if ((s2_1 != 0)) {
        s3 = *(u8*)((s2_1 + 4));
        s1 = func_001b8e88(*(u16*)((s2_1 + 2)), *(u16*)((s2_1 + 2)));
        a3 = s3;
        a2 = (s2_1 + 0xc);
        s5 = 1;
    } else {
        s5 = 0;
    }
    a0_2 = *(u32*)((a0 + 8));
    a0_3 = (a0_2 * 0xc);
    func_001bc6a8((a0 + a0_3) + 0xc, s1, *(u32*)((*(u32*)((a0 + 4)) + 0x9e0)), a2, a3);
    if ((s5 != 0)) {
        t7 = *(u32*)((a0 + 8));
        t7_4 = (t7 * 0xc);
        t7_5 = (a0 + t7_4);
        t6_6 = *(u16*)((t7_5 + 0xc));
        *(u16*)((t7_5 + 0xc)) = (t6_6 | 1);
    }
    t6_7 = *(u16*)((s1 + 2));
    if ((t6_7 == 3)) {
        if ((a3 == 0)) {
            t7_8 = *(u32*)((a0 + 8));
            t7_9 = (t7_8 * 0xc);
            *(u8*)(((t7_9 + a0) + 0x11)) = 6;
        }
    }
    v0 = *(s8*)((s1 + 6));
    if (((s32)(v0) >= 0)) {
        if ((v0 != 4)) {
            t6_10 = *(u32*)((a0 + 4));
            t7_11 = *(u32*)((((t6_10 + (v0 * 0x74)) + 0x24) + 8));
            if (((s32)(t7_11) == 0)) {
                t7_12 = *(u32*)((a0 + 8));
                t7_13 = (t7_12 * 0xc);
                *(u8*)(((t7_13 + a0) + 0x11)) = 5;
            } else {
                if (((s32)(func_001bc948((t6_10 + (v0 * 0x74)) + 0x24)) == 0)) {
                    t7_14 = *(u32*)((a0 + 8));
                    t7_15 = (t7_14 * 0xc);
                    *(u8*)(((t7_15 + a0) + 0x11)) = 1;
                }
            }
        }
    }
    t7_16 = *(u32*)((a0 + 8));
    *(u32*)((a0 + 8)) = (t7_16 + 1);
    v0_17 = (t7_16 * 0xc);
    v0_18 = (a0 + v0_17);
    v0_19 = (v0_18 + 0xc);
    return v0_19;
}
