// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_003734f8 asm("D_003734f8");
extern "C" u32 D_003734fc asm("D_003734fc");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_002670a0(u32) asm("func_002670a0");
extern "C" u32 func_002671e8(u32) asm("func_002671e8");
extern "C" u32 func_00267248() asm("func_00267248");
extern "C" u32 func_00286418(u32) asm("func_00286418");
extern "C" u32 func_002864f8(u32) asm("func_002864f8");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_002865d0(u32) asm("func_002865d0");

// 0x00266988 Tz::CmStat::UpdateNew()
void lift_00266988() asm("_ZN2Tz6CmStat9UpdateNewEv");
void lift_00266988() {
    u32 s4;
    u32 s2;
    u32 v0;
    u32 s3;
    u32 v0_0;
    u32 s0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 s0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 s0_10;
    u32 v0_11;
    u32 v0_12;
    u32 v0_13;
    u32 v0_14;
    u32 s0_15;
    u32 v0_16;
    u32 v0_17;
    u32 v0_18;
    u32 v0_19;
    u32 s0_20;
    u32 v0_21;
    u32 v0_22;
    u32 v0_23;
    u32 v0_24;
    u32 v0_25;
    u32 v0_26;
    u32 v0_27;
    u32 t7;
    u32 s0_28;
    u32 s0_29;
    u32 v0_30;
    u32 v0_31;
    u32 v0_32;
    u32 v0_33;
    s4 = func_00257770();
    s2 = func_00287bc0();
    v0 = func_0028b040(*(u32*)(&D_0035f01c));
    if ((s2 == 0x17)) {
        s3 = *(u32*)(&D_0035f01c);
        v0_0 = func_002670a0(v0);
        switch (v0_0) {
        case 1:
            if ((func_00286418(0) != 0)) {
                func_002865d0(0);
                s0 = ((s32)(func_002864f8(0)) == 0) ? *(u32*)(&D_003734f8) : *(u32*)(&D_003734fc);
                if ((s2 != 0x17)) {
                    if ((v0 == 6)) {
                        v0_1 = func_0028b040(s3);
                        if ((s2 != 0x17)) {
                            v0_2 = func_002671e8(v0_1);
                            v0_1 = v0_2;
                        }
                        func_00138c10((s4 + (v0_1 * 0x198)) + 0x87d0, s0);
                        return;
                    } else {
                        return;
                    }
                } else {
                    v0_3 = func_0028b040(s3);
                    if ((s2 != 0x17)) {
                        v0_4 = func_002671e8(v0_3);
                        v0_3 = v0_4;
                    }
                    func_00138c10((s4 + (v0_3 * 0x198)) + 0x87d0, s0);
                    return;
                }
            } else {
                return;
            }
            break;
        case 2:
            if ((func_00286418(1) != 0)) {
                func_002865d0(1);
                s0_5 = ((s32)(func_002864f8(1)) == 0) ? *(u32*)(&D_003734f8) : *(u32*)(&D_003734fc);
                if ((s2 != 0x17)) {
                    if ((v0 == 6)) {
                        v0_6 = func_0028b040(s3);
                        if ((s2 != 0x17)) {
                            v0_7 = func_002671e8(v0_6);
                            v0_6 = v0_7;
                        }
                        func_00138c10((s4 + (v0_6 * 0x198)) + 0x87d0, s0_5);
                        return;
                    } else {
                        return;
                    }
                } else {
                    v0_8 = func_0028b040(s3);
                    if ((s2 != 0x17)) {
                        v0_9 = func_002671e8(v0_8);
                        v0_8 = v0_9;
                    }
                    func_00138c10((s4 + (v0_8 * 0x198)) + 0x87d0, s0_5);
                    return;
                }
            } else {
                return;
            }
            break;
        case 3:
            if ((func_00286418(2) != 0)) {
                func_002865d0(2);
                s0_10 = ((s32)(func_002864f8(2)) == 0) ? *(u32*)(&D_003734f8) : *(u32*)(&D_003734fc);
                if ((s2 != 0x17)) {
                    if ((v0 == 6)) {
                        v0_11 = func_0028b040(s3);
                        if ((s2 != 0x17)) {
                            v0_12 = func_002671e8(v0_11);
                            v0_11 = v0_12;
                        }
                        func_00138c10((s4 + (v0_11 * 0x198)) + 0x87d0, s0_10);
                        return;
                    } else {
                        return;
                    }
                } else {
                    v0_13 = func_0028b040(s3);
                    if ((s2 != 0x17)) {
                        v0_14 = func_002671e8(v0_13);
                        v0_13 = v0_14;
                    }
                    func_00138c10((s4 + (v0_13 * 0x198)) + 0x87d0, s0_10);
                    return;
                }
            } else {
                return;
            }
            break;
        case 4:
            if ((func_00286418(3) != 0)) {
                func_002865d0(3);
                s0_15 = ((s32)(func_002864f8(3)) == 0) ? *(u32*)(&D_003734f8) : *(u32*)(&D_003734fc);
                if ((s2 != 0x17)) {
                    if ((v0 == 6)) {
                        v0_16 = func_0028b040(s3);
                        if ((s2 != 0x17)) {
                            v0_17 = func_002671e8(v0_16);
                            v0_16 = v0_17;
                        }
                        func_00138c10((s4 + (v0_16 * 0x198)) + 0x87d0, s0_15);
                        return;
                    } else {
                        return;
                    }
                } else {
                    v0_18 = func_0028b040(s3);
                    if ((s2 != 0x17)) {
                        v0_19 = func_002671e8(v0_18);
                        v0_18 = v0_19;
                    }
                    func_00138c10((s4 + (v0_18 * 0x198)) + 0x87d0, s0_15);
                    return;
                }
            } else {
                return;
            }
            break;
        case 5:
            if ((func_00286418(4) != 0)) {
                func_002865d0(4);
                s0_20 = ((s32)(func_002864f8(4)) == 0) ? *(u32*)(&D_003734f8) : *(u32*)(&D_003734fc);
                if ((s2 != 0x17)) {
                    if ((v0 == 6)) {
                        v0_21 = func_0028b040(s3);
                        if ((s2 != 0x17)) {
                            v0_22 = func_002671e8(v0_21);
                            v0_21 = v0_22;
                        }
                        func_00138c10((s4 + (v0_21 * 0x198)) + 0x87d0, s0_20);
                        return;
                    } else {
                        return;
                    }
                } else {
                    v0_23 = func_0028b040(s3);
                    if ((s2 != 0x17)) {
                        v0_24 = func_002671e8(v0_23);
                        v0_23 = v0_24;
                    }
                    func_00138c10((s4 + (v0_23 * 0x198)) + 0x87d0, s0_20);
                    return;
                }
            } else {
                return;
            }
            break;
        case 0:
        default:
            return;
        }
    } else {
        v0_25 = func_00257070(0x17);
        if ((v0_25 == 6)) {
            v0_26 = func_00267248();
            if ((v0_26 != *(u32*)(&D_0035f01c))) {
                v0_27 = func_002671e8(func_0028b040(v0_26));
                if ((v0_27 != 0xb)) {
                    if (((s32)(((s32)(v0_27) < (s32)(0xc))) != 0)) {
                        t7 = 0xa;
                    } else {
                        t7 = 0xc;
                    }
                    if ((v0_27 == t7)) {
                        s0_28 = 5;
                    } else {
                        s0_28 = 8;
                    }
                    s0_29 = s0_28;
                } else {
                    s0_29 = 6;
                }
                if ((func_00286418(s0_29) != 0)) {
                    func_002865d0(s0_29);
                    s0_29 = ((s32)(func_002864f8(s0_29)) == 0) ? *(u32*)(&D_003734f8) : *(u32*)(&D_003734fc);
                    if ((s2 != 0x17)) {
                        if ((v0_25 == 6)) {
                            v0_30 = func_0028b040(v0_26);
                            if ((s2 != 0x17)) {
                                v0_31 = func_002671e8(v0_30);
                                v0_30 = v0_31;
                            }
                            func_00138c10((s4 + (v0_30 * 0x198)) + 0x87d0, s0_29);
                            return;
                        } else {
                            return;
                        }
                    } else {
                        v0_32 = func_0028b040(v0_26);
                        if ((s2 != 0x17)) {
                            v0_33 = func_002671e8(v0_32);
                            v0_32 = v0_33;
                        }
                        func_00138c10((s4 + (v0_32 * 0x198)) + 0x87d0, s0_29);
                        return;
                    }
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            return;
        }
    }
}
