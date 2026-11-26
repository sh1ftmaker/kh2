// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S36_18_u16 { u8 _p[18]; u16 m; u8 _q[16]; };
extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035ef70 asm("D_0035ef70");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f020 asm("D_0035f020");
extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 D_0035f038 asm("D_0035f038");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f05b asm("D_0035f05b");
extern "C" u32 D_0035f05c asm("D_0035f05c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_00372968 asm("D_00372968");
extern "C" u32 D_0037296c asm("D_0037296c");
extern "C" u32 D_00372a28 asm("D_00372a28");
extern "C" u32 D_00372a30 asm("D_00372a30");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_00257e00() asm("func_00257e00");
extern "C" u32 func_00257ff8(u32) asm("func_00257ff8");
extern "C" u32 func_0027dee8(u32, u32, u32) asm("func_0027dee8");
extern "C" u32 func_002831e0(u32, u32) asm("func_002831e0");
extern "C" u32 func_00285d58(u32) asm("func_00285d58");
extern "C" u32 func_00285e30(u32) asm("func_00285e30");
extern "C" u32 func_00286068(u32) asm("func_00286068");
extern "C" u32 func_00286160(u32) asm("func_00286160");
extern "C" u32 func_00286418(u32) asm("func_00286418");
extern "C" u32 func_002864f8(u32) asm("func_002864f8");
extern "C" u32 func_00286d28(u32, u32) asm("func_00286d28");
extern "C" u32 func_00286ec8(u32, u32) asm("func_00286ec8");
extern "C" u32 func_00287028(u32, u32) asm("func_00287028");
extern "C" u32 func_00287218(u32, u32) asm("func_00287218");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00254ab8() asm("func_00254ab8");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e08(u32, u32, u32, u32) asm("func_00288e08");
extern "C" void func_00288f48(u32, u32, u32, u32, u32) asm("func_00288f48");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028b1e8(u32, u32) asm("func_0028b1e8");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_002937c0() asm("func_002937c0");

// 0x002551b8 func_002551b8
u32 func_002551b8() asm("_ZN2Tz5CmTop8SetupTopEv");
u32 func_002551b8() {
    u32 loc_0;
    u32 t6;
    u32 s4;
    u32 s1;
    u8 t7;
    u32 v0;
    u32 s7;
    u32 s6;
    u32 s2;
    u32 s2_0;
    u32 s6_1;
    u32 v0_2;
    u32 s2_3;
    u32 s2_4;
    u32 s2_5;
    u32 v0_6;
    u32 s2_7;
    u32 s2_8;
    u32 s2_9;
    u32 s6_10;
    u32 v0_11;
    u32 s2_12;
    u32 s2_13;
    u32 s6_14;
    u32 s2_15;
    u32 s2_16;
    u32 s2_17;
    u32 s2_18;
    u32 s2_19;
    u32 s6_20;
    u32 s2_21;
    u32 s6_22;
    u32 s2_23;
    u32 s6_24;
    u32 v0_25;
    u32 v0_26;
    u32 s2_27;
    u32 v0_28;
    if (((s32)(*(s8*)(&D_0035f05b)) == 0)) {
        func_002937c0();
    }
    func_00288f48(*(u32*)(&D_0035f01c), 0x10, 0x20, 0, 0);
    func_00288f48(*(u32*)(&D_0035f020), 0x10, 0x20, 0, 0);
    func_00288f48(*(u32*)(&D_0035f024), 0x10, 0x20, 0, 0);
    func_0028b1e8(*(u32*)(&D_0035f024), 0);
    *(u16*)(&D_0035ef70) = func_00257e00();
    loc_0 = (*(u32*)(&D_0035f3d4) + 1);
    t6 = 0x360000;
    s4 = 0;
    s1 = 0;
    do {
        t7 = ((((s32)(*(u16*)((t6 + -0x1090))) >> s1) ^ 1) & 1);
        if ((t7 == 0)) {
            func_00288d80(*(u32*)(&D_0035f01c), s4, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), ((S36_18_u16*)&D_00372a28)[s1].m, (s1 * 0x24) + (u32)&D_00372a28, (s1 * 0x24) + (u32)&D_00372a30);
            func_00288e08(*(u32*)(&D_0035f01c), s4, 0, 0xffffffff);
            v0 = func_002891b8(*(u32*)(&D_0035f01c), s4);
            func_00139620(v0);
            func_001395f8(v0);
            s7 = func_0023aa18(v0 + 0x18);
            if (((s32)(s1) == 0)) {
                s6 = func_0023aa38(v0 + 0x18);
                if (((s32)(func_00285d58(0xffffffff)) != 0)) {
                    s2 = ((s32)(func_00285e30(0xffffffff)) == 0) ? *(u32*)(&D_00372968) : *(u32*)(&D_0037296c);
                    s2_0 = s2;
                } else {
                    s2_0 = 0xffffffff;
                }
                s2_23 = s2_0;
                s6_24 = s6;
            } else {
                if ((s1 == 1)) {
                    s6_1 = func_0023aa38(v0 + 0x18);
                    if (((s32)(func_00286d28(0xffffffff, 0xffffffff)) == 0)) {
                        if (((s32)(func_00286ec8(0xffffffff, 0xffffffff)) != 0)) {
                            if (((s32)(func_00287028(0xffffffff, 0xffffffff)) != 0)) {
                                v0_2 = func_00287218(0xffffffff, 0xffffffff);
                                s2_3 = ((s32)(v0_2) == 0) ? *(u32*)(&D_00372968) : *(u32*)(&D_0037296c);
                                s2_4 = s2_3;
                            } else {
                                s2_4 = *(u32*)(&D_00372968);
                            }
                            s2_5 = s2_4;
                        } else {
                            s2_5 = 0xffffffff;
                        }
                        s2_9 = s2_5;
                    } else {
                        if (((s32)(func_00287028(0xffffffff, 0xffffffff)) != 0)) {
                            v0_6 = func_00287218(0xffffffff, 0xffffffff);
                            s2_7 = ((s32)(v0_6) == 0) ? *(u32*)(&D_00372968) : *(u32*)(&D_0037296c);
                            s2_8 = s2_7;
                        } else {
                            s2_8 = *(u32*)(&D_00372968);
                        }
                        s2_9 = s2_8;
                    }
                    s2_21 = s2_9;
                    s6_22 = s6_1;
                } else {
                    if ((s1 == 2)) {
                        s6_10 = func_0023aa38(v0 + 0x18);
                        if (((s32)(func_00286068(0xffffffff)) != 0)) {
                            v0_11 = func_00286160(0xffffffff);
                            s2_12 = ((s32)(v0_11) == 0) ? *(u32*)(&D_00372968) : *(u32*)(&D_0037296c);
                            s2_13 = s2_12;
                        } else {
                            s2_13 = 0xffffffff;
                        }
                        s2_19 = s2_13;
                        s6_20 = s6_10;
                    } else {
                        s6_14 = func_0023aa38(v0 + 0x18);
                        if ((s1 == 4)) {
                            if (((s32)(func_00286418(0xffffffff)) != 0)) {
                                s2_15 = ((s32)(func_002864f8(0xffffffff)) != 0) ? *(u32*)(&D_0037296c) : *(u32*)(&D_00372968);
                                s2_16 = s2_15;
                            } else {
                                s2_16 = 0xffffffff;
                            }
                            s2_18 = s2_16;
                        } else {
                            if ((s1 == 5)) {
                                t6 = 0x32;
                                s2_17 = (*(s8*)(&D_0035f05c) ? t6 : 0xffffffff);
                            } else {
                                s2_17 = 0xffffffff;
                            }
                            s2_18 = s2_17;
                        }
                        s2_19 = s2_18;
                        s6_20 = s6_14;
                    }
                    s2_21 = s2_19;
                    s6_22 = s6_20;
                }
                s2_23 = s2_21;
                s6_24 = s6_22;
            }
            if (((s32)(s2_23) >= 0)) {
                func_0028d8c0((*(u32*)(&D_0035f038) + (s1 * 0x198)) + 0x87d0, loc_0, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), s2_23, 0xffffffff, 0);
                func_0028dcc0((*(u32*)(&D_0035f038) + (s1 * 0x198)) + 0x87d0, v0);
                func_00138c68((*(u32*)(&D_0035f038) + (s1 * 0x198)) + 0x87d0, s7, s6_24);
            }
            s4 = (s4 + 1);
        }
        s1 = (s1 + 1);
        t6 = 0x360000;
    } while (((s32)(((s32)(s1) < (s32)(8))) != 0));
    v0_25 = func_00257ff8(func_00257070(0));
    func_002891f0(*(u32*)(&D_0035f01c), ((s32)(v0_25) < (s32)(0)) ? 0 : v0_25, 1, 0, 2);
    func_00254ab8();
    v0_26 = func_0027dee8(0, 0, 4);
    if ((*(s8*)(&D_0035f05b) != 0)) {
        s2_27 = func_00287bc0();
        func_00287bd0(0x25, 0);
        v0_28 = func_002831e0(0xffffffff, s2_27);
        *(u8*)(&D_0035f05b) = 0;
        v0_26 = v0_28;
    }
    return v0_26;
}
