// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00105300() asm("func_00105300");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00139598(u32) asm("func_00139598");
extern "C" u32 func_001395a8(u32) asm("func_001395a8");
extern "C" u32 func_001396b0(u32) asm("func_001396b0");
extern "C" u32 func_00139c18(u32) asm("func_00139c18");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0013a7e8(u32) asm("func_0013a7e8");
extern "C" u32 func_0013d7e0() asm("func_0013d7e0");
extern "C" u32 func_00155e30(u32) asm("func_00155e30");
extern "C" u32 func_00156010(u32) asm("func_00156010");
extern "C" u32 func_00156030(u32) asm("func_00156030");
extern "C" u32 func_00156058(u32) asm("func_00156058");
extern "C" u32 func_00156080(u32) asm("func_00156080");
extern "C" u32 func_00158290(u32) asm("func_00158290");
extern "C" u32 func_0031a260(u32, u32) asm("func_0031a260");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00155bf0(u32, u32) asm("func_00155bf0");
extern "C" void func_00155cb0(u32, u32, u32) asm("func_00155cb0");
extern "C" void func_00155d80(u32) asm("func_00155d80");
extern "C" void func_001560a8(u32, u32, u32) asm("func_001560a8");
extern "C" void func_00156408(u32) asm("func_00156408");
extern "C" void func_002ba2e8(u32, u32) asm("func_002ba2e8");

// 0x00157c88 func_00157c88
u32 func_00157c88(u32 a0) asm("_ZN2dk12GAUGE_PLAYER11updateDriveEv");
u32 func_00157c88(u32 a0) {
    u32 v0;
    u32 loc_0;
    u32 loc_4;
    u32 v0_0;
    u32 s1;
    u32 s1_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 s1_5;
    u32 v0_6;
    u32 s4;
    u32 s2;
    u32 s3;
    u32 v0_7;
    u32 v0_8;
    u32 s1_9;
    u32 v0_10;
    u32 v0_11;
    u32 v0_12;
    u32 v0_13;
    u32 v0_14;
    u32 v0_15;
    u32 v0_16;
    u32 v0_17;
    u32 v0_18;
    func_00156408(a0);
    v0 = func_00156010(a0);
    if ((v0 == 0)) {
        if (((s32)(func_00156030(a0)) == 0)) {
            if ((func_00156058(a0) == 0)) {
                if ((func_00156080(a0) != 0)) {
                    loc_0 = 0;
                    loc_4 = 0;
                    func_00155d80(a0);
                    func_001560a8(a0, (u32)&loc_0, (u32)&loc_4);
                    func_00155cb0(a0, loc_0, loc_4);
                    if ((*(u8*)((a0 + 0x3cf7)) == 1)) {
                        *(u8*)((a0 + 0x3cf7)) = 0;
                        func_00138c10(a0 + 0x30b8, func_00155e30(a0));
                    }
                    v0_0 = func_00139598(a0 + 0x394);
                    v0_14 = v0_0;
                } else {
                    func_00155bf0(a0, *(u8*)((*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)) + 0x1b0)));
                    func_00155d80(a0);
                    if (((((u32)(*(u8*)((*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)) + 0x1b1))) < (u32)(*(u8*)((*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)) + 0x1b2)))) ^ 1) != 0)) {
                        if (((s32)(*(u8*)((a0 + 0x3cf9))) == 0)) {
                            if ((*(u8*)((a0 + 0x3cf8)) == 1)) {
                                if (((s32)(func_00105300()) == 0)) {
                                    func_002ba2e8(0x21, 0);
                                }
                            }
                            s1 = (a0 + 0x394);
                            func_00138c10(s1, 0x14);
                            *(u8*)((a0 + 0x3cf9)) = 1;
                            s1_1 = s1;
                        } else {
                            s1_1 = (a0 + 0x394);
                        }
                        v0_2 = func_001395a8(s1_1);
                        v0_4 = v0_2;
                    } else {
                        *(u8*)((a0 + 0x3cf9)) = 0;
                        v0_3 = func_00139598(a0 + 0x394);
                        v0_4 = v0_3;
                    }
                    if ((*(u8*)((a0 + 0x3cf6)) == 1)) {
                        s1_5 = *(u8*)((a0 + 0x3cf6));
                        *(u8*)((a0 + 0x3cf6)) = 0;
                        v0_6 = func_00138c10(a0 + 0x30b8, func_00155e30(a0));
                        if ((*(u8*)((a0 + 0x3cf8)) == s1_5)) {
                            if (((s32)(*(u8*)((a0 + 0x3cf9))) == 0)) {
                                func_002ba2e8(0x20, 0);
                            }
                            s4 = func_00158290(a0);
                            s2 = func_0013a7e8(1);
                            s3 = func_0013d7e0();
                            v0_7 = func_00139c18(a0 + 0x9f4);
                            v0_8 = (v0_7 * 0x198);
                            s1_9 = ((a0 + v0_8) + 0x9f4);
                            v0_10 = func_00139d78(s1_9);
                            if ((v0_10 == 0)) {
                                func_001386e0(s1_9, 0x1b58, s2, s3, 0x16, s4);
                                *(u32*)((s1_9 + 0x18c)) = (a0 + 0x2d80);
                                v0_11 = func_001396b0(s1_9);
                                if ((*(u32*)((s1_9 + 0x18c)) != 0)) {
                                    *(u32*)((s1_9 + 0x190)) = 0;
                                    v0_12 = func_001396b0(s1_9);
                                    if ((*(u32*)((s1_9 + 0x190)) != 0)) {
                                        v0_13 = func_0031a260(s1_9, 0);
                                        *(u8*)((a0 + 0x3cf8)) = 0;
                                        v0_12 = v0_13;
                                    } else {
                                        *(u8*)((a0 + 0x3cf8)) = 0;
                                    }
                                    v0_11 = v0_12;
                                } else {
                                    *(u8*)((a0 + 0x3cf8)) = 0;
                                }
                                v0_10 = v0_11;
                            } else {
                                *(u8*)((a0 + 0x3cf8)) = 0;
                            }
                            v0_6 = v0_10;
                        }
                        v0_4 = v0_6;
                    }
                    v0_14 = v0_4;
                }
                v0_16 = v0_14;
            } else {
                loc_0 = 0;
                loc_4 = 0;
                func_00155d80(a0);
                func_001560a8(a0, (u32)&loc_0, (u32)&loc_4);
                func_00155cb0(a0, loc_0, loc_4);
                if ((*(u8*)((a0 + 0x3cf7)) == 1)) {
                    *(u8*)((a0 + 0x3cf7)) = 0;
                    func_00138c10(a0 + 0x30b8, func_00155e30(a0));
                }
                v0_15 = func_00139598(a0 + 0x394);
                v0_16 = v0_15;
            }
            v0_18 = v0_16;
        } else {
            v0_17 = func_00139598(a0 + 0x394);
            v0_18 = v0_17;
        }
        v0 = v0_18;
    }
    return v0;
}
