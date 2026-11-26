// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f12c asm("D_0035f12c");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00281180(u32, u32) asm("func_00281180");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");

// 0x00273b30 func_00273b30
u32 func_00273b30() asm("_ZN2Tz8CmCustom9isTakeOffEv");
u32 func_00273b30() {
    u32 s1;
    u32 s0;
    u32 t6;
    u32 t6_0;
    u32 t7;
    u32 s0_1;
    u32 t7_2;
    u32 t7_3;
    u32 t3;
    u32 t4;
    u32 t5;
    u32 t7_4;
    u32 t4_5;
    s1 = (func_00287bc0() + -0x1a);
    s0 = ((s32)(((u32)(s1) < (u32)(2))) == 0) ? func_002570a0(0x1a) : func_0028b040(*(u32*)(&D_0035f01c));
    t6 = ((func_002570a0(0x19) ? (s0 + -1) : s0) << 3);
    t6_0 = (t6 + *(u32*)(&D_0035f12c));
    t7 = *(s8*)((t6_0 + 0xa));
    s0_1 = *(s16*)((t6_0 + 8));
    t7_2 = ((s32)(((u32)(s1) < (u32)(2))) != 0) ? ((u32)(0) < (u32)(t7)) : ((u32)((func_0028b040(*(u32*)(&D_0035f01c)) & 1)) < (u32)(1));
    if (((s32)(t7_2) != 0)) {
        t7_3 = *(u32*)((func_00281180(*(u32*)(&D_0035f010), func_00257070(0x19)) + 0x244));
        t3 = *(u8*)((t7_3 + 0x12));
        if (((s32)(t3) != 0)) {
            t4 = 0;
            do {
                t5 = *(u16*)((t7_3 + 0x34));
                if ((t5 != s0_1)) {
                    t7_4 = *(u16*)((t7_3 + 0x44));
                    if ((t7_4 == s0_1)) {
                        if ((t5 != s0_1)) {
                            return 1;
                        }
                    }
                }
                t4_5 = (t4 + 1);
                t4 = t4_5;
                t7_3 = (t7_3 + 2);
            } while (((s32)(((s32)(t4_5) < (s32)(t3))) != 0));
        }
    }
    return 0;
}
