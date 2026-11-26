// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00372ea0 asm("D_00372ea0");
extern "C" u32 func_002408d0(u32) asm("func_002408d0");
extern "C" u32 func_00240ba0() asm("func_00240ba0");
extern "C" u32 func_00241a00() asm("func_00241a00");
extern "C" u32 func_00241a48() asm("func_00241a48");
extern "C" u32 func_00241f10() asm("func_00241f10");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_002b4c88(u32) asm("func_002b4c88");
extern "C" u32 func_002b4fb8() asm("func_002b4fb8");
extern "C" u32 func_002b5188(u32, u32) asm("func_002b5188");
extern "C" void func_00234570(u32, u32) asm("func_00234570");
extern "C" void func_002417a0() asm("func_002417a0");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287c00(u32) asm("func_00287c00");
extern "C" void func_00287c30() asm("func_00287c30");
extern "C" void func_00287d20(u32) asm("func_00287d20");
extern "C" void func_002b4ee0() asm("func_002b4ee0");
extern "C" void func_002b5108(u32, u32) asm("func_002b5108");

// 0x0025b5e0 func_0025b5e0
void func_0025b5e0() asm("_ZN2Tz6CmSave15CtrlChkFreeSizeEv");
void func_0025b5e0() {
    u32 s2;
    u32 v0;
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    u32 s1;
    u32 s0_2;
    u32 s0_3;
    u32 s0_4;
    u32 s0_5;
    u32 s0_6;
    u32 s0_7;
    u32 s0_8;
    u32 s0_9;
    u32 s0_10;
    u32 s0_11;
    s2 = func_00240ba0();
    v0 = func_00287cd0();
    if ((v0 == 2)) {
        if (((s32)(func_002b4fb8()) == 0)) {
            func_00287c30();
            func_00287d20(0);
            s0 = func_00287bc0();
            func_00287cc0(0);
            if ((s0 == 0xc)) {
                func_002417a0();
                func_002b5188((u32)&D_00372ea0, 0);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        if (((s32)(v0) == 0)) {
            func_00287cc0(1);
        }
        s0_0 = *(s16*)((func_00241f10() + 2));
        s0_1 = ((s32)(s0_0) < (s32)(func_002408d0(0)));
        s1 = ((u32)(((s32)(s0_0) < (s32)(func_002408d0(0)))) < (u32)(1));
        if (((s32)(func_00241a00()) != 0)) {
            if ((func_00241a48() == 0)) {
                if (((s32)(func_00241a00()) != 0)) {
                    s0_2 = *(s16*)((func_00241f10() + 2));
                    if (((s32)(((s32)(s0_2) < (s32)(func_002408d0(2)))) == 0)) {
                        s1 = 1;
                    } else {
                        s0_3 = ((s32)(s0_2) < (s32)(func_002408d0(2)));
                        if (((s32)(func_00241a48()) != 0)) {
                            s0_4 = *(s16*)((func_00241f10() + 2));
                            s1 = (((s32)(s0_4) < (s32)(func_002408d0(1))) ? s1 : 1);
                        }
                    }
                } else {
                    if (((s32)(func_00241a48()) != 0)) {
                        s0_5 = *(s16*)((func_00241f10() + 2));
                        s1 = (((s32)(s0_5) < (s32)(func_002408d0(1))) ? s1 : 1);
                    }
                }
            } else {
                s1 = 1;
            }
        } else {
            if (((s32)(func_00241a00()) != 0)) {
                s0_6 = *(s16*)((func_00241f10() + 2));
                if (((s32)(((s32)(s0_6) < (s32)(func_002408d0(2)))) == 0)) {
                    s1 = 1;
                } else {
                    s0_7 = ((s32)(s0_6) < (s32)(func_002408d0(2)));
                    if (((s32)(func_00241a48()) != 0)) {
                        s0_8 = *(s16*)((func_00241f10() + 2));
                        s1 = (((s32)(s0_8) < (s32)(func_002408d0(1))) ? s1 : 1);
                    }
                }
            } else {
                if (((s32)(func_00241a48()) != 0)) {
                    s0_9 = *(s16*)((func_00241f10() + 2));
                    s1 = (((s32)(s0_9) < (s32)(func_002408d0(1))) ? s1 : 1);
                }
            }
        }
        if ((s1 != 0)) {
            s0_10 = ((s32)(s0_2) < (s32)(func_002408d0(2)));
            func_002b4ee0();
            func_00287c00(0xc);
            func_00287cc0(2);
            return;
        } else {
            s0_11 = ((s32)(s0_2) < (s32)(func_002408d0(2)));
            func_00234570(s2, 0);
            func_002b5108(0xc6c8, s2);
            func_00287bd0(7, 0);
            func_002b4c88(0);
            return;
        }
    }
}
