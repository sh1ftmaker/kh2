// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f020 asm("D_0035f020");
extern "C" u32 _ZN2Tz6CmItem8SelCheckEi asm("_ZN2Tz6CmItem8SelCheckEi");
extern "C" u32 func_00242848(u32) asm("func_00242848");
extern "C" u32 func_0025ffd0() asm("func_0025ffd0");
extern "C" u32 func_00260808() asm("func_00260808");
extern "C" u32 func_00262cb8() asm("func_00262cb8");
extern "C" u32 func_00262e30() asm("func_00262e30");
extern "C" u32 func_002630d8() asm("func_002630d8");
extern "C" u32 func_00263160() asm("func_00263160");
extern "C" u32 func_00263720(u32) asm("func_00263720");
extern "C" u32 func_002638e0(u32) asm("func_002638e0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287c10() asm("func_00287c10");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00288018() asm("func_00288018");
extern "C" u32 func_00288040() asm("func_00288040");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" void func_00242618(u32, u32) asm("func_00242618");
extern "C" void func_00257728() asm("func_00257728");
extern "C" void func_002615b0() asm("func_002615b0");
extern "C" void func_00262c40() asm("func_00262c40");
extern "C" void func_00262fa0() asm("func_00262fa0");
extern "C" void func_00262ff8() asm("func_00262ff8");
extern "C" void func_00263188() asm("func_00263188");
extern "C" void func_00263778(u32) asm("func_00263778");
extern "C" void func_0027e6e0() asm("func_0027e6e0");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287c00(u32) asm("func_00287c00");
extern "C" void func_00287c30() asm("func_00287c30");
extern "C" void func_00287c90(u32) asm("func_00287c90");
extern "C" void func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_00287da0() asm("func_00287da0");
extern "C" void func_00287f90(u32) asm("func_00287f90");
extern "C" void func_0028af18(u32, u32) asm("func_0028af18");
extern "C" void func_0028b1e8(u32, u32) asm("func_0028b1e8");

// 0x002612c8 func_002612c8
void func_002612c8() asm("_ZN2Tz6CmItem16CtrlItemUsePartyEv");
void func_002612c8() {
    u32 s0;
    u32 v0;
    u32 s1;
    u32 v0_0;
    u32 v0_1;
    u32 s0_2;
    s0 = func_00289380(*(u32*)(&D_0035f020));
    v0 = func_00287cd0();
    if ((v0 == 2)) {
        s1 = func_00287c10();
        v0_0 = func_002630d8();
        if (((s32)(v0_0) == 0)) {
            if ((s1 == 0xa)) {
                v0_1 = func_00262e30();
                v0_0 = v0_1;
            }
            if (((s32)(v0_0) != 0)) {
                if ((s0 == 0xffffffff)) {
                    if (((s32)(func_00289310(*(u32*)(&D_0035f020))) != 0)) {
                        func_00287f90(0);
                        func_00262ff8();
                        if ((s1 == 0xa)) {
                            func_00262cb8();
                            return;
                        } else {
                            return;
                        }
                    } else {
                        return;
                    }
                } else {
                    func_00287f90(0);
                    func_00262ff8();
                    if ((s1 == 0xa)) {
                        func_00262cb8();
                        return;
                    } else {
                        return;
                    }
                }
            } else {
                func_00287c30();
                s0_2 = func_00287bc0();
                func_0028b1e8(*(u32*)(&D_0035f020), 0);
                func_0028af18(*(u32*)(&D_0035f020), 0x73);
                if ((s0_2 == 0xa)) {
                    func_0025ffd0();
                    return;
                } else {
                    if ((s0_2 == 0xb)) {
                        func_00260808();
                        return;
                    } else {
                        return;
                    }
                }
            }
        } else {
            if ((s0 == 0xffffffff)) {
                if (((s32)(func_00289310(*(u32*)(&D_0035f020))) != 0)) {
                    func_00287f90(0);
                    func_00262ff8();
                    if ((s1 == 0xa)) {
                        func_00262cb8();
                        return;
                    } else {
                        return;
                    }
                } else {
                    return;
                }
            } else {
                func_00287f90(0);
                func_00262ff8();
                if ((s1 == 0xa)) {
                    func_00262cb8();
                    return;
                } else {
                    return;
                }
            }
        }
    } else {
        if ((s0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035f020))) != 0)) {
            if (((s32)(func_00263160()) == 0)) {
                func_00263188();
            }
        }
        if (((s32)(v0) == 0)) {
            if (((s32)(func_00263160()) != 0)) {
                func_00287c90(1);
            }
        }
        if (((s32)(s0) >= 0)) {
            if (((s32)(func_002638e0(s0)) != 0) || ((s32)(func_00242848(func_00287df0(s0, func_00289310(*(u32*)(&D_0035f020)), 1, (u32)&_ZN2Tz6CmItem8SelCheckEi, 1))) == 0)) {
                if ((s0 != 0xfffffffe)) {
                    if (((s32)(((s32)(s0) < (s32)(-1))) != 0)) {
                        if ((s0 != 0xfffffffc)) {
                            if (((s32)(func_00263720(s0)) != 0)) {
                                func_00242618(0x11, 1);
                                func_00263778(s0);
                                func_00262fa0();
                                func_00262c40();
                                func_00287c90(1);
                                func_00257728();
                                func_00287c00(0xa);
                            } else {
                                func_00242618(8, 1);
                                func_00287bd0(0xd, 0);
                                func_002615b0();
                                func_00287cc0(1);
                            }
                        } else {
                            func_0027e6e0();
                            func_00287da0();
                        }
                    } else {
                        if ((s0 != 0xffffffff)) {
                            if (((s32)(func_00263720(s0)) != 0)) {
                                func_00242618(0x11, 1);
                                func_00263778(s0);
                                func_00262fa0();
                                func_00262c40();
                                func_00287c90(1);
                                func_00257728();
                                func_00287c00(0xa);
                            } else {
                                func_00242618(8, 1);
                                func_00287bd0(0xd, 0);
                                func_002615b0();
                                func_00287cc0(1);
                            }
                        }
                    }
                } else {
                    func_00262fa0();
                    func_00287c90(1);
                    func_00287c00(0xb);
                }
            }
        } else {
            if (((s32)(func_00242848(func_00287df0(s0, func_00289310(*(u32*)(&D_0035f020)), 1, (u32)&_ZN2Tz6CmItem8SelCheckEi, 1))) == 0)) {
                if ((s0 != 0xfffffffe)) {
                    if (((s32)(((s32)(s0) < (s32)(-1))) != 0)) {
                        if ((s0 != 0xfffffffc)) {
                            if (((s32)(func_00263720(s0)) != 0)) {
                                func_00242618(0x11, 1);
                                func_00263778(s0);
                                func_00262fa0();
                                func_00262c40();
                                func_00287c90(1);
                                func_00257728();
                                func_00287c00(0xa);
                            } else {
                                func_00242618(8, 1);
                                func_00287bd0(0xd, 0);
                                func_002615b0();
                                func_00287cc0(1);
                            }
                        } else {
                            func_0027e6e0();
                            func_00287da0();
                        }
                    } else {
                        if ((s0 != 0xffffffff)) {
                            if (((s32)(func_00263720(s0)) != 0)) {
                                func_00242618(0x11, 1);
                                func_00263778(s0);
                                func_00262fa0();
                                func_00262c40();
                                func_00287c90(1);
                                func_00257728();
                                func_00287c00(0xa);
                            } else {
                                func_00242618(8, 1);
                                func_00287bd0(0xd, 0);
                                func_002615b0();
                                func_00287cc0(1);
                            }
                        }
                    }
                } else {
                    func_00262fa0();
                    func_00287c90(1);
                    func_00287c00(0xb);
                }
            }
        }
        if (((s32)(func_00288040()) != 0)) {
            func_00288018();
            return;
        } else {
            return;
        }
    }
}
