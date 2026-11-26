// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0026b8f0 asm("D_0026b8f0");
extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f018 asm("D_0035f018");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f0ec asm("D_0035f0ec");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_00256ef0() asm("func_00256ef0");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_00257970() asm("func_00257970");
extern "C" u32 func_002678a8() asm("func_002678a8");
extern "C" u32 func_00269f58() asm("func_00269f58");
extern "C" u32 func_00269fc0() asm("func_00269fc0");
extern "C" u32 func_0026b2c0() asm("func_0026b2c0");
extern "C" u32 func_00281180(u32, u32) asm("func_00281180");
extern "C" u32 func_00281f20(u32) asm("func_00281f20");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00288018() asm("func_00288018");
extern "C" u32 func_00288040() asm("func_00288040");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028afa8(u32) asm("func_0028afa8");
extern "C" u32 func_0028f930(u32) asm("func_0028f930");
extern "C" u32 func_002911f8(u32) asm("func_002911f8");
extern "C" u32 func_00291288(u32) asm("func_00291288");
extern "C" void func_00188ac8(u32) asm("func_00188ac8");
extern "C" void func_00256c40() asm("func_00256c40");
extern "C" void func_00256e80() asm("func_00256e80");
extern "C" void func_00263c60() asm("func_00263c60");
extern "C" void func_00269378() asm("func_00269378");
extern "C" void func_00269a60() asm("func_00269a60");
extern "C" void func_00269e20() asm("func_00269e20");
extern "C" void func_00269ef8() asm("func_00269ef8");
extern "C" void func_0026a060() asm("func_0026a060");
extern "C" void func_0026ab18(u32) asm("func_0026ab18");
extern "C" void func_0026b008() asm("func_0026b008");
extern "C" void func_0026b448() asm("func_0026b448");
extern "C" void func_00281b30() asm("func_00281b30");
extern "C" void func_00281d48() asm("func_00281d48");
extern "C" void func_00281e20() asm("func_00281e20");
extern "C" void func_002831e0(u32, u32) asm("func_002831e0");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287c00(u32) asm("func_00287c00");
extern "C" void func_00287c10() asm("func_00287c10");
extern "C" void func_00287c30() asm("func_00287c30");
extern "C" void func_00287c90(u32) asm("func_00287c90");
extern "C" void func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_00287da0() asm("func_00287da0");
extern "C" void func_00287f90(u32) asm("func_00287f90");
extern "C" void func_0028f6f0(u32) asm("func_0028f6f0");
extern "C" void func_0028f7e8(u32) asm("func_0028f7e8");
extern "C" void func_0028fa98(u32) asm("func_0028fa98");

// 0x00268db8 Tz::CmEquip::CtrlEquip()
void lift_00268db8() asm("_ZN2Tz7CmEquip9CtrlEquipEv");
void lift_00268db8() {
    u32 s1;
    u32 s0;
    u32 s3;
    u32 s4;
    u32 s4_0;
    u32 s4_1;
    u32 s4_2;
    u32 s3_3;
    u32 s3_4;
    u32 s3_5;
    u32 s2;
    u32 s0_6;
    u32 t7;
    u32 t7_7;
    u32 s0_8;
    u32 t7_9;
    u32 t7_10;
    s1 = func_00289380(*(u32*)(&D_0035f01c));
    s0 = func_00287cd0();
    if ((s0 == 2)) {
        s3 = func_00287bc0();
        if ((func_00269f58() == 0)) {
            if ((func_002911f8(*(u32*)(&D_0035f018)) == 0)) {
                if ((func_0028f930(2) == 0)) {
                    if ((func_00256ef0() == 0)) {
                        s4 = 0;
                    } else {
                        s4 = 1;
                    }
                    s4_0 = s4;
                } else {
                    s4_0 = 1;
                }
                s4_1 = s4_0;
            } else {
                s4_1 = 1;
            }
            s4_2 = s4_1;
        } else {
            s4_2 = 1;
        }
        if (((s32)(s4_2) == 0)) {
            if (((s32)(func_00257970()) != 0)) {
                if ((s1 == 0xffffffff)) {
                    if (((s32)(func_00289310(*(u32*)(&D_0035f01c))) != 0)) {
                        func_00287f90(0);
                        func_00256c40();
                        func_00269ef8();
                        func_00291288(*(u32*)(&D_0035f018));
                        return;
                    } else {
                        return;
                    }
                } else {
                    func_00287f90(0);
                    func_00256c40();
                    func_00269ef8();
                    func_00291288(*(u32*)(&D_0035f018));
                    return;
                }
            } else {
                func_00287c10();
                func_00287c30();
                func_0028f7e8(2);
                func_0026b008();
                func_00188ac8(*(u32*)((func_00281180(*(u32*)(&D_0035f010), func_00257070(1)) + 0x244)));
                func_002678a8();
                return;
            }
        } else {
            if ((s1 == 0xffffffff)) {
                if (((s32)(func_00289310(*(u32*)(&D_0035f01c))) != 0)) {
                    func_00287f90(0);
                    func_00256c40();
                    func_00269ef8();
                    func_00291288(*(u32*)(&D_0035f018));
                    return;
                } else {
                    return;
                }
            } else {
                func_00287f90(0);
                func_00256c40();
                func_00269ef8();
                func_00291288(*(u32*)(&D_0035f018));
                return;
            }
        }
    } else {
        if ((s1 == 0xffffffff)) {
            s3_3 = func_00287bc0();
            if (((s32)(func_00289310(*(u32*)(&D_0035f01c))) != 0)) {
                if (((s32)(func_00269fc0()) == 0)) {
                    func_0026a060();
                    func_0028fa98(0xffffffff);
                }
            }
            s3_5 = s3_3;
        } else {
            s3_4 = func_00287bc0();
            if (((s32)(func_00269fc0()) == 0)) {
                func_0026a060();
                func_0028fa98(0xffffffff);
            }
            s3_5 = s3_4;
        }
        if (((s32)(s0) == 0)) {
            if (((s32)(func_00269fc0()) != 0)) {
                func_00269a60();
                func_00287c90(1);
            }
        }
        s2 = func_0028afa8(*(u32*)(&D_0035f01c));
        if (((s32)(func_00242848(func_00287df0(s1, func_00289310(*(u32*)(&D_0035f01c)), 1, (u32)&D_0026b8f0, 1))) == 0)) {
            if ((s1 != 0xfffffffc)) {
                if (((s32)(((s32)(s1) < (s32)(-3))) != 0)) {
                    if ((s1 != 0xfffffff9)) {
                        if (((s32)(s1) >= 0)) {
                            if (((s32)(((s32)(s1) < (s32)(s2))) != 0)) {
                                s0_6 = func_00281f20(*(u32*)(&D_0035f0ec));
                                if (((s32)(func_0026b2c0()) != 0)) {
                                    func_00269378();
                                    func_00287bd0(4, 0);
                                } else {
                                    t7 = (s3_5 + -5);
                                    if (((s32)((s1 - (((u32)(t7) < (u32)(2)) ^ 1))) >= 0)) {
                                        t7_7 = ((s1 - (((u32)(t7) < (u32)(2)) ^ 1)) * 6);
                                    }
                                    func_0026ab18(*(u16*)((t7_7 + s0_6)));
                                    func_0028f6f0(2);
                                    func_00256e80();
                                    func_00263c60();
                                    func_00269e20();
                                    func_00281b30();
                                    func_00287c90(1);
                                }
                                func_00287c00(s3_5);
                            }
                        }
                    } else {
                        func_00287bd0(0x25, 0);
                        if ((s3_5 == 9)) {
                            func_002831e0(0, 9);
                        } else {
                            if ((s3_5 == 6)) {
                                func_002831e0(3, 6);
                            }
                        }
                    }
                } else {
                    if ((s1 != 0xfffffffe)) {
                        if ((s1 != 0xffffffff)) {
                            if (((s32)(s1) >= 0)) {
                                if (((s32)(((s32)(s1) < (s32)(s2))) != 0)) {
                                    s0_8 = func_00281f20(*(u32*)(&D_0035f0ec));
                                    if (((s32)(func_0026b2c0()) != 0)) {
                                        func_00269378();
                                        func_00287bd0(4, 0);
                                    } else {
                                        t7_9 = (s3_5 + -5);
                                        if (((s32)((s1 - (((u32)(t7_9) < (u32)(2)) ^ 1))) >= 0)) {
                                            t7_10 = ((s1 - (((u32)(t7_9) < (u32)(2)) ^ 1)) * 6);
                                        }
                                        func_0026ab18(*(u16*)((t7_10 + s0_8)));
                                        func_0028f6f0(2);
                                        func_00256e80();
                                        func_00263c60();
                                        func_00269e20();
                                        func_00281b30();
                                        func_00287c90(1);
                                    }
                                    func_00287c00(s3_5);
                                }
                            }
                        }
                    } else {
                        func_00263c60();
                        func_0028f6f0(2);
                        func_00256e80();
                        func_00269e20();
                        func_00281b30();
                        func_00287cc0(2);
                        func_00287c00(2);
                    }
                }
            } else {
                func_0026b448();
                func_00291288(*(u32*)(&D_0035f018));
                func_0026b008();
                func_00188ac8(*(u32*)((func_00281180(*(u32*)(&D_0035f010), func_00257070(1)) + 0x244)));
                func_00287da0();
            }
        }
        if ((func_00287cd0() == 1)) {
            func_00281d48();
            func_00281e20();
        }
        if (((s32)(func_00288040()) != 0)) {
            func_00288018();
            return;
        } else {
            return;
        }
    }
}
