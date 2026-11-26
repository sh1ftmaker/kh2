// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f5f4 asm("D_0035f5f4");
extern "C" u32 D_00374be0 asm("D_00374be0");
extern "C" u32 D_00374be8 asm("D_00374be8");
extern "C" u32 D_00374bf4 asm("D_00374bf4");
extern "C" u32 D_00374bf8 asm("D_00374bf8");
extern "C" u32 D_00374c00 asm("D_00374c00");
extern "C" u32 func_001058e8() asm("func_001058e8");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00192c40(u32, u32) asm("func_00192c40");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00276c18() asm("func_00276c18");
extern "C" u32 func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" u32 func_002a7490() asm("func_002a7490");
extern "C" u32 func_002a74c0() asm("func_002a74c0");
extern "C" u32 func_002abc60(u32) asm("func_002abc60");
extern "C" u32 func_002abdc8() asm("func_002abdc8");
extern "C" u32 func_002adf60(u32) asm("func_002adf60");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00192cc0(u32, u32, u32, u32) asm("func_00192cc0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");

// 0x002a6e50 func_002a6e50
u32 func_002a6e50() asm("_ZN2Tz8JmSynthe10CreateListEv");
u32 func_002a6e50() {
    u32 s7;
    u32 loc_10;
    u32 loc_14;
    u32 loc_18;
    u32 loc_1c;
    u32 s2;
    u32 s5;
    u32 t3;
    u32 s5_0;
    u32 s2_1;
    u32 s4;
    u32 t2;
    u32 t3_2;
    u32 s4_3;
    u32 s2_4;
    u32 s3;
    u32 t2_5;
    u32 t3_6;
    u32 s3_7;
    u32 loc_20;
    u32 v0;
    u32 loc_24;
    u32 loc_30;
    u32 s2_8;
    u32 fp;
    u32 fp_9;
    u32 s6;
    u32 loc_0;
    u32 s1;
    u32 loc_28;
    u32 loc_2c;
    u32 s1_10;
    u32 s0;
    u32 a3_11;
    u32 s0_12;
    u32 s6_13;
    u32 s0_14;
    u32 s0_15;
    u32 s0_16;
    u32 v0_17;
    u32 v0_18;
    u32 v0_19;
    u32 s6_20;
    u32 s1_21;
    u32 s1_22;
    u32 s0_23;
    u32 a3_24;
    u32 s0_25;
    u32 s6_26;
    u32 s0_27;
    u32 s0_28;
    u32 s0_29;
    u32 v0_30;
    u32 v0_31;
    u32 v0_32;
    s7 = (func_001058e8() + 0x49f4);
    loc_10 = func_002766d0();
    loc_14 = func_002a7490();
    loc_18 = func_002a74c0();
    loc_1c = func_00276c18();
    s2 = 0;
    s5 = 0;
    t3 = 1;
    do {
        s5_0 = ((*(u32*)((((s2 >> 5) << 2) + s7)) & (t3 << (s2 & 0x1f))) ? (s5 + 1) : s5);
        s2 = (s2 + 1);
        s5 = s5_0;
    } while (((s32)(((s32)(s2) < (s32)(0x3c))) != 0));
    s2_1 = 0;
    s4 = 0;
    t2 = 1;
    t3_2 = (s7 + 8);
    do {
        s4_3 = ((*(u32*)((((s2_1 >> 5) << 2) + t3_2)) & (t2 << (s2_1 & 0x1f))) ? (s4 + 1) : s4);
        s2_1 = (s2_1 + 1);
        s4 = s4_3;
    } while (((s32)(((s32)(s2_1) < (s32)(0x40))) != 0));
    s2_4 = 0;
    s3 = 0;
    t2_5 = 1;
    t3_6 = (s7 + 0x1c);
    do {
        s3_7 = ((*(u32*)((((s2_4 >> 5) << 2) + t3_6)) & (t2_5 << (s2_4 & 0x1f))) ? (s3 + 1) : s3);
        s2_4 = (s2_4 + 1);
        s3 = s3_7;
    } while (((s32)(((s32)(s2_4) < (s32)(0x3b))) != 0));
    v0 = func_002abdc8();
    loc_20 = 0;
    loc_24 = *(u32*)(&D_0035f3d4);
    loc_30 = (u32)&D_00374bf8;
    s2_8 = 0;
    do {
        if (((s32)(s2_8) != 0)) {
            if ((s2_8 == 3)) {
                fp = loc_14;
            } else {
                fp = loc_18;
            }
            fp_9 = fp;
        } else {
            fp_9 = loc_14;
        }
        if (((s32)(fp_9) == 0)) {
            if (((s32)(loc_1c) != 0)) {
                s6 = (*(u32*)(&D_0035f5f4) + (loc_20 * 0x368));
                loc_0 = 0;
                func_0028d980(s6, loc_24, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), *(u32*)(&D_00374bf4), 0xffffffff, 0xffffffff);
                s1 = func_0023aa78(s6 + 0x18);
                loc_28 = func_0023aa18(s6 + 0x18);
                loc_2c = func_0023aa38(s6 + 0x18);
                func_00139620(s6);
                s1_10 = (s1 * loc_20);
                func_00138c68(s6, 0, s1 * loc_20);
                func_0028dcc0(s6, loc_10);
                *(u32*)((s6 + 0x1a4)) = 0x60000008;
                *(u32*)((s6 + 0x1ac)) = 3;
                if (((s32)(fp_9) != 0)) {
                    if (((s32)(s2_8) == 0)) {
                        *(u32*)((s6 + 0x198)) = ((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0);
                        s0 = ((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0);
                        func_00192cc0(s0 + func_00192c40(func_00192048(*(u16*)(&D_00374bf8)), s0), (u32)&D_00374be0, *(u8*)((s7 + 0x240)) + 1, a3_11);
                    } else {
                        *(u32*)((s6 + 0x198)) = func_00192048(*(u16*)(loc_30));
                    }
                    loc_0 = 0;
                    s0_12 = (loc_20 * 0x368);
                    s6_13 = ((*(u32*)(&D_0035f5f4) + (loc_20 * 0x368)) + 0x1b4);
                    func_0028d980((*(u32*)(&D_0035f5f4) + (loc_20 * 0x368)) + 0x1b4, loc_24, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 2, 0xffffffff, 0xffffffff);
                    func_00139620(loc_10);
                    func_00138c68(s6_13, loc_28, loc_2c);
                    func_0028dcc0(s6_13, *(u32*)(&D_0035f5f4) + s0_12);
                    *(u32*)((s6_13 + 0x1a4)) = 0x60000008;
                    *(u32*)((s6_13 + 0x1ac)) = 3;
                    *(u32*)((s6_13 + 0x1b0)) = 1;
                    if (((s32)(s2_8) == 0)) {
                        *(u32*)((s6_13 + 0x198)) = func_00192048(*(u16*)(((*(u8*)((s7 + 0x240)) << 1) + (u32)&D_00374c00)));
                    } else {
                        *(u32*)((s6_13 + 0x198)) = ((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0);
                        if ((loc_1c != 0)) {
                            s0_14 = ((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0);
                            func_00192cc0((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0, (u32)&D_00374be8, s5, 0x3c);
                        } else {
                            s0_15 = ((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0);
                            func_00192cc0((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0, (u32)&D_00374be0, s5, 0x3c);
                        }
                    }
                    s6 = s6_13;
                } else {
                    if (((s32)(loc_1c) != 0)) {
                        *(u32*)((s6 + 0x198)) = func_00192048(0x36f8);
                    }
                }
                s0_16 = ((loc_10 + (loc_20 * 0x198)) + 0xa998);
                func_0028d8c0((loc_10 + (loc_20 * 0x198)) + 0xa998, loc_24 + 2, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 2, 0xffffffff, 0);
                v0_17 = func_0028dcc0(s0_16, s6);
                if (((s32)(fp_9) != 0)) {
                    v0_18 = func_002abc60(s2_8);
                    if (((s32)(v0_18) != 0)) {
                        v0_19 = func_00138c10(s0_16, 0x3a);
                        v0_18 = v0_19;
                    }
                    v0_17 = v0_18;
                }
                loc_20 = (loc_20 + 1);
                v0 = v0_17;
            }
        } else {
            s6_20 = (*(u32*)(&D_0035f5f4) + (loc_20 * 0x368));
            loc_0 = 0;
            func_0028d980(s6_20, loc_24, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), *(u32*)(&D_00374bf4), 0xffffffff, 0xffffffff);
            s1_21 = func_0023aa78(s6_20 + 0x18);
            loc_28 = func_0023aa18(s6_20 + 0x18);
            loc_2c = func_0023aa38(s6_20 + 0x18);
            func_00139620(s6_20);
            s1_22 = (s1_21 * loc_20);
            func_00138c68(s6_20, 0, s1_21 * loc_20);
            func_0028dcc0(s6_20, loc_10);
            *(u32*)((s6_20 + 0x1a4)) = 0x60000008;
            *(u32*)((s6_20 + 0x1ac)) = 3;
            if (((s32)(fp_9) != 0)) {
                if (((s32)(s2_8) == 0)) {
                    *(u32*)((s6_20 + 0x198)) = ((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0);
                    s0_23 = ((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0);
                    func_00192cc0(s0_23 + func_00192c40(func_00192048(*(u16*)(&D_00374bf8)), s0_23), (u32)&D_00374be0, *(u8*)((s7 + 0x240)) + 1, a3_24);
                } else {
                    *(u32*)((s6_20 + 0x198)) = func_00192048(*(u16*)(loc_30));
                }
                loc_0 = 0;
                s0_25 = (loc_20 * 0x368);
                s6_26 = ((*(u32*)(&D_0035f5f4) + (loc_20 * 0x368)) + 0x1b4);
                func_0028d980((*(u32*)(&D_0035f5f4) + (loc_20 * 0x368)) + 0x1b4, loc_24, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 2, 0xffffffff, 0xffffffff);
                func_00139620(loc_10);
                func_00138c68(s6_26, loc_28, loc_2c);
                func_0028dcc0(s6_26, *(u32*)(&D_0035f5f4) + s0_25);
                *(u32*)((s6_26 + 0x1a4)) = 0x60000008;
                *(u32*)((s6_26 + 0x1ac)) = 3;
                *(u32*)((s6_26 + 0x1b0)) = 1;
                if (((s32)(s2_8) == 0)) {
                    *(u32*)((s6_26 + 0x198)) = func_00192048(*(u16*)(((*(u8*)((s7 + 0x240)) << 1) + (u32)&D_00374c00)));
                } else {
                    *(u32*)((s6_26 + 0x198)) = ((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0);
                    if ((loc_1c != 0)) {
                        s0_27 = ((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0);
                        func_00192cc0((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0, (u32)&D_00374be8, s5, 0x3c);
                    } else {
                        s0_28 = ((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0);
                        func_00192cc0((*(u32*)(&D_0035f5f4) + (loc_20 << 5)) + 0xda0, (u32)&D_00374be0, s5, 0x3c);
                    }
                }
                s6_20 = s6_26;
            } else {
                if (((s32)(loc_1c) != 0)) {
                    *(u32*)((s6_20 + 0x198)) = func_00192048(0x36f8);
                }
            }
            s0_29 = ((loc_10 + (loc_20 * 0x198)) + 0xa998);
            func_0028d8c0((loc_10 + (loc_20 * 0x198)) + 0xa998, loc_24 + 2, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 2, 0xffffffff, 0);
            v0_30 = func_0028dcc0(s0_29, s6_20);
            if (((s32)(fp_9) != 0)) {
                v0_31 = func_002abc60(s2_8);
                if (((s32)(v0_31) != 0)) {
                    v0_32 = func_00138c10(s0_29, 0x3a);
                    v0_31 = v0_32;
                }
                v0_30 = v0_31;
            }
            loc_20 = (loc_20 + 1);
            v0 = v0_30;
        }
        loc_30 = (loc_30 + 2);
        s2_8 = (s2_8 + 1);
    } while (((s32)(((s32)(s2_8) < (s32)(4))) != 0));
    return v0;
}
