// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f230 asm("D_0035f230");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_0027bf20(u32) asm("func_0027bf20");
extern "C" u32 func_00287bc0(u32) asm("func_00287bc0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_0027aed8(u32, u32, u32) asm("func_0027aed8");

// 0x0027c3e0 Tz::CmAbility::SelCheck(int)
u32 lift_0027c3e0(u32 a0) asm("_ZN2Tz9CmAbility8SelCheckEi");
u32 lift_0027c3e0(u32 a0) {
    u32 s0;
    u32 s2;
    u32 loc_0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    s0 = func_00287bc0(a0);
    if ((s0 != 0xf)) {
        if ((s0 == 0x10)) {
            s2 = func_0028b040(*(u32*)(&D_0035f01c));
            func_0027aed8(func_002570a0(0xf), (u32)&loc_0, (u32)&loc_0 + 4);
            if ((a0 != 0xfffffff9)) {
                if ((a0 != 0xfffffffa)) {
                    if (((s32)(((u32)((a0 + 0xb)) < (u32)(2))) != 0)) {
                        v0_3 = ((u32)(((s32)(*(s8*)((*(u32*)(&D_0035f230) + 6))) < (s32)(2))) < (u32)(1));
                    } else {
                        if ((a0 != 0xfffffffb)) {
                            if (((s32)(*(s8*)((((a0 << 3) + *(u32*)(&D_0035f230)) + 0x11))) != 0)) {
                                if ((loc_0 == 0)) {
                                    v0 = func_0027bf20(s2);
                                    v0_0 = v0;
                                } else {
                                    v0_0 = 0;
                                }
                                v0_1 = v0_0;
                            } else {
                                v0_1 = 0;
                            }
                            v0_2 = v0_1;
                        } else {
                            v0_2 = 1;
                        }
                        v0_3 = v0_2;
                    }
                    v0_5 = v0_3;
                } else {
                    v0_4 = func_0027bf20(s2);
                    v0_5 = v0_4;
                }
                v0_6 = v0_5;
            } else {
                v0_6 = 1;
            }
            v0_7 = v0_6;
        } else {
            v0_7 = 1;
        }
        v0_8 = v0_7;
    } else {
        v0_8 = 1;
    }
    return v0_8;
}
