// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f018 asm("D_0035f018");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 _ZN2Tz6CmItem8SelCheckEi asm("_ZN2Tz6CmItem8SelCheckEi");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_00257718(u32) asm("func_00257718");
extern "C" u32 func_00262cb8() asm("func_00262cb8");
extern "C" u32 func_00262e30() asm("func_00262e30");
extern "C" u32 func_00262f18() asm("func_00262f18");
extern "C" u32 func_002631d8() asm("func_002631d8");
extern "C" u32 func_002631f8() asm("func_002631f8");
extern "C" u32 func_002637e8(u32) asm("func_002637e8");
extern "C" u32 func_00281c30() asm("func_00281c30");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287c10() asm("func_00287c10");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00288018() asm("func_00288018");
extern "C" u32 func_00288040() asm("func_00288040");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_002911f8(u32) asm("func_002911f8");
extern "C" void func_0025f7d8() asm("func_0025f7d8");
extern "C" void func_0025ffd0() asm("func_0025ffd0");
extern "C" void func_00261000() asm("func_00261000");
extern "C" void func_00261820() asm("func_00261820");
extern "C" void func_00262c40() asm("func_00262c40");
extern "C" void func_00262f58() asm("func_00262f58");
extern "C" void func_002631b0() asm("func_002631b0");
extern "C" void func_00263c60() asm("func_00263c60");
extern "C" void func_00281b30() asm("func_00281b30");
extern "C" void func_00281c50() asm("func_00281c50");
extern "C" void func_00281d48() asm("func_00281d48");
extern "C" void func_00281e20() asm("func_00281e20");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287c00(u32) asm("func_00287c00");
extern "C" void func_00287c30() asm("func_00287c30");
extern "C" void func_00287c90(u32) asm("func_00287c90");
extern "C" void func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_00287da0() asm("func_00287da0");
extern "C" void func_00287f90(u32) asm("func_00287f90");
extern "C" void func_0028af18(u32, u32) asm("func_0028af18");
extern "C" void func_00291288(u32) asm("func_00291288");

// 0x00260ce0 func_00260ce0
void func_00260ce0() asm("_ZN2Tz6CmItem11CtrlItemUseEv");
void func_00260ce0() {
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 s0;
    s1 = func_00289380(*(u32*)(&D_0035f01c));
    v0 = func_00287cd0();
    if ((v0 == 2)) {
        v0_0 = func_00287c10();
        if ((v0_0 == 0xa)) {
            v0_1 = func_00262e30();
            v0_0 = v0_1;
        } else {
            v0_2 = func_002631d8();
            v0_0 = v0_2;
        }
        if (((s32)(v0_0) == 0)) {
            if ((func_00281c30() != 0) || (func_002911f8(*(u32*)(&D_0035f018)) != 0)) {
                v0_0 = 1;
            }
            if (((s32)(v0_0) != 0)) {
                if ((s1 == 0xffffffff)) {
                    if (((s32)(func_00289310(*(u32*)(&D_0035f01c))) != 0)) {
                        func_00287f90(0);
                        func_00281c50();
                        func_00291288(*(u32*)(&D_0035f018));
                        if ((v0_0 == 0xa)) {
                            func_00262cb8();
                            return;
                        } else {
                            func_002631f8();
                            return;
                        }
                    } else {
                        return;
                    }
                } else {
                    func_00287f90(0);
                    func_00281c50();
                    func_00291288(*(u32*)(&D_0035f018));
                    if ((v0_0 == 0xa)) {
                        func_00262cb8();
                        return;
                    } else {
                        func_002631f8();
                        return;
                    }
                }
            } else {
                func_00287c30();
                s0 = func_00287bc0();
                func_0028af18(*(u32*)(&D_0035f01c), 0x73);
                if ((s0 == 0xa)) {
                    func_0025ffd0();
                } else {
                    func_00261000();
                }
                func_00257718(1);
                return;
            }
        } else {
            if ((s1 == 0xffffffff)) {
                if (((s32)(func_00289310(*(u32*)(&D_0035f01c))) != 0)) {
                    func_00287f90(0);
                    func_00281c50();
                    func_00291288(*(u32*)(&D_0035f018));
                    if ((v0_0 == 0xa)) {
                        func_00262cb8();
                        return;
                    } else {
                        func_002631f8();
                        return;
                    }
                } else {
                    return;
                }
            } else {
                func_00287f90(0);
                func_00281c50();
                func_00291288(*(u32*)(&D_0035f018));
                if ((v0_0 == 0xa)) {
                    func_00262cb8();
                    return;
                } else {
                    func_002631f8();
                    return;
                }
            }
        }
    } else {
        if ((s1 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035f01c))) != 0)) {
            if (((s32)(func_00262f18()) == 0)) {
                func_00262f58();
            }
        }
        if (((s32)(v0) == 0)) {
            if (((s32)(func_00262f18()) != 0)) {
                func_00287c90(1);
            }
        }
        if (((s32)(func_00242848(func_00287df0(s1, func_00289310(*(u32*)(&D_0035f01c)), 1, (u32)&_ZN2Tz6CmItem8SelCheckEi, 1))) == 0)) {
            if ((s1 != 0xfffffffe)) {
                if (((s32)(((s32)(s1) < (s32)(-1))) != 0)) {
                    if ((s1 != 0xfffffffc)) {
                        if (((s32)(func_002637e8(s1)) == 0)) {
                            func_00257718(0);
                            func_00281b30();
                            func_0025f7d8();
                            func_002631b0();
                            func_00287c00(0xc);
                            func_00287c90(1);
                        } else {
                            func_00287bd0(0xe, 0);
                            func_00261820();
                            func_00287cc0(1);
                        }
                    } else {
                        func_00287da0();
                    }
                } else {
                    if ((s1 != 0xffffffff)) {
                        if (((s32)(func_002637e8(s1)) == 0)) {
                            func_00257718(0);
                            func_00281b30();
                            func_0025f7d8();
                            func_002631b0();
                            func_00287c00(0xc);
                            func_00287c90(1);
                        } else {
                            func_00287bd0(0xe, 0);
                            func_00261820();
                            func_00287cc0(1);
                        }
                    }
                }
            } else {
                func_00263c60();
                func_00262c40();
                func_00281b30();
                func_00287c90(1);
                func_00287c00(0xa);
                func_0025f7d8();
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
