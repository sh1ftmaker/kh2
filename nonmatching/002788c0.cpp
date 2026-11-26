// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S6_4_s16 { u8 _p[4]; s16 m; };
extern "C" u32 D_0027b960 asm("D_0027b960");
extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 D_0035f230 asm("D_0035f230");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_00373e30 asm("D_00373e30");
extern "C" u32 D_00373e48 asm("D_00373e48");
extern "C" u32 D_00373e50 asm("D_00373e50");
extern "C" u32 D_01e21ee0 asm("D_01e21ee0");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_002570f0() asm("func_002570f0");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0027af58() asm("func_0027af58");
extern "C" u32 func_0027c3b8(u32) asm("func_0027c3b8");
extern "C" u32 func_00283ab8(u32) asm("func_00283ab8");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028af88(u32) asm("func_0028af88");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00138c78(u32, u32, u32) asm("func_00138c78");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00256cc0(u32, u32, u32) asm("func_00256cc0");
extern "C" void func_0027aaa0() asm("func_0027aaa0");
extern "C" void func_0027aed8(u32, u32, u32) asm("func_0027aed8");
extern "C" void func_0027afe0() asm("func_0027afe0");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e08(u32, u32, u32, u32) asm("func_00288e08");
extern "C" void func_0028af18(u32, u32) asm("func_0028af18");
extern "C" void func_0028bae0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028bae0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");

// 0x002788c0 func_002788c0
u32 func_002788c0() asm("_ZN2Tz9CmAbility12SetupAbilityEv");
u32 func_002788c0() {
    u32 s6;
    u32 v0;
    u32 loc_28;
    u32 s4;
    u32 t7;
    u32 s0;
    u32 t4;
    u32 t5;
    u32 t6;
    u32 t7_0;
    u32 loc_20;
    u32 loc_10;
    u32 loc_14;
    u32 v0_1;
    u32 loc_2c;
    u32 loc_30;
    u32 loc_24;
    u32 loc_0;
    u32 s7;
    u32 v0_2;
    u32 loc_18;
    u32 v0_3;
    u32 loc_1c;
    u32 s1;
    u32 s4_4;
    u32 s5;
    u32 v0_5;
    u32 s1_6;
    u32 s0_7;
    s6 = func_00257770();
    func_0028f4d8(2, 0xffffffff, 0);
    v0 = func_0027af58();
    loc_28 = v0;
    s4 = 0;
    t7 = (0 << 3);
    do {
        s0 = (v0 << 1);
        t4 = *(u16*)(((v0 << 1) + (u32)&D_00373e50));
        t5 = 3;
        t6 = (u32)&D_01e21ee0;
        t7_0 = (t7 + (u32)&D_01e21ee0);
        do {
            *(u16*)(t7_0) = t4;
            t5 = (t5 + -1);
            t7_0 = (t7_0 + 2);
        } while (((s32)(t5) >= 0));
        s4 = (s4 + 1);
        t7 = (s4 << 3);
    } while (((s32)(t7) != 0));
    loc_20 = *(u32*)(&D_0035f3d4);
    func_0028d8c0(s6, loc_20, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), *(s16*)(((loc_28 * 6) + (u32)&D_00373e30)), ((S6_4_s16*)&D_00373e30)[loc_28].m, 0);
    loc_20 = (loc_20 + 1);
    func_0027aed8(func_002570a0(0xf), (u32)&loc_10, (u32)&loc_14);
    v0_1 = func_002570a0(0x10);
    loc_2c = v0_1;
    loc_30 = *(s8*)((((v0_1 << 3) + *(u32*)(&D_0035f230)) + 0x10));
    if (((s32)(loc_10) == 0)) {
        if (((s32)(loc_14) != 0)) {
            if (((s32)(loc_28) == 0)) {
                if (((s32)(loc_30) == 0)) {
                    loc_24 = 4;
                    if (((s32)(func_0027c3b8(loc_2c)) != 0)) {
                        loc_24 = 2;
                    }
                } else {
                    loc_24 = 2;
                }
            } else {
                loc_24 = 2;
            }
        } else {
            loc_24 = 2;
        }
    } else {
        loc_24 = 2;
    }
    loc_0 = 0;
    func_0028d980(s6 + 0x660, loc_20, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), *(s16*)((s0 + (u32)&D_00373e48)), 0xffffffff, 0xffffffff);
    s7 = (loc_20 + 1);
    func_00139620(s6 + 0x660);
    func_0028dcc0(s6 + 0x660, s6);
    v0_2 = func_00257140(0);
    loc_0 = 0;
    func_0028d980(s6 + 0x5ef0, s7, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), v0_2, 0xffffffff, 0xffffffff);
    func_0028dcc0(s6 + 0x5ef0, s6 + 0x660);
    func_00139620(s6 + 0x5ef0);
    func_001395f8(s6 + 0x5ef0);
    loc_0 = 0;
    func_0028d980(s6 + 0x814, s7, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x98, 0xffffffff, 0xffffffff);
    func_0028dcc0(s6 + 0x814, s6 + 0x660);
    func_00139620(s6 + 0x814);
    func_001395f8(s6 + 0x814);
    loc_18 = func_0023aa18(s6 + 0x678);
    v0_3 = func_0023aa38(s6 + 0x678);
    loc_1c = v0_3;
    func_00138c68(s6 + 0x814, loc_18, v0_3);
    *(u32*)(((s6 + 0x814) + 0x1b0)) = 1;
    if (((s32)(loc_24) != 0)) {
        s1 = (s6 + 0x60a4);
        s4_4 = 0;
        do {
            s5 = func_00257140(0);
            func_00288d80(*(u32*)(&D_0035f01c), s4_4, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xffffffff, (u32)&D_01e21ee0, (u32)&D_01e21ee0 + 8);
            v0_5 = func_002891b8(*(u32*)(&D_0035f01c), s4_4);
            func_00288e08(*(u32*)(&D_0035f01c), s4_4, 0, func_0023aa78(v0_5 + 0x18));
            func_0028dcc0(v0_5, s6);
            func_00139620(v0_5);
            if (((s32)(loc_10) == 0)) {
                if (((s32)(loc_14) != 0)) {
                    if ((loc_28 == 0)) {
                        if (((s32)(loc_30) == 0)) {
                            if (((s32)(func_0027c3b8(loc_2c)) == 0)) {
                                *(u32*)((v0_5 + 0x1b4)) = (u32)&D_0027b960;
                            }
                        }
                    }
                }
            }
            loc_0 = 0;
            func_0028d980(s1, s7, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), s5, 0xffffffff, 0xffffffff);
            func_0028dcc0(s1, v0_5);
            func_00138c78(func_002891b8(*(u32*)(&D_0035f01c), s4_4), (u32)&loc_18, (u32)&loc_1c);
            func_00139620(s1);
            func_001395f8(s1);
            s1 = (s1 + 0x1b4);
            s4_4 = (s4_4 + 1);
        } while (((s32)(((s32)(s4_4) < (s32)(loc_24))) != 0));
    }
    s1_6 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f03c)), *(u32*)(&D_0035ef68));
    s0_7 = func_00236ca8(*(u32*)((func_0023f1b0(*(u32*)(&D_0035f03c)) + 0x28)), *(u32*)(&D_0035ef64));
    loc_0 = 0;
    func_0028bae0(*(u32*)(&D_0035f04c), loc_20, s1_6, s0_7, func_002570f0(), loc_24, loc_24, s6);
    func_0027afe0();
    func_0027aaa0();
    if (((s32)(func_00283ab8(2)) != 0)) {
        func_0028af18(*(u32*)(&D_0035f01c), func_0028af88(*(u32*)(&D_0035f01c)) | 0x400);
        func_00256cc0(0xcbdd, 0xffffffff, 0xffffffff);
    }
    return func_00287cc0(0);
}
