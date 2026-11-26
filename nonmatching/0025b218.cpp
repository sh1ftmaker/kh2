// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f0b0 asm("D_0035f0b0");
extern "C" u32 func_00233e70(u32) asm("func_00233e70");
extern "C" u32 func_00234758() asm("func_00234758");
extern "C" u32 func_00234798() asm("func_00234798");
extern "C" u32 func_002347d8() asm("func_002347d8");
extern "C" u32 func_00240a08(u32) asm("func_00240a08");
extern "C" u32 func_00240ba0() asm("func_00240ba0");
extern "C" u32 func_00240bd0(u32, u32) asm("func_00240bd0");
extern "C" u32 func_00240e50() asm("func_00240e50");
extern "C" u32 func_002413f0() asm("func_002413f0");
extern "C" u32 func_00241c40(u32) asm("func_00241c40");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287d30() asm("func_00287d30");
extern "C" u32 func_00288018() asm("func_00288018");
extern "C" u32 func_00288040() asm("func_00288040");
extern "C" u32 func_002b4ff8() asm("func_002b4ff8");
extern "C" void func_002349c8(u32, u32) asm("func_002349c8");
extern "C" void func_00240360(u32) asm("func_00240360");
extern "C" void func_00240bc0(u32) asm("func_00240bc0");
extern "C" void func_00240c08(u32, u32, u32) asm("func_00240c08");
extern "C" void func_00240e10(u32, u32) asm("func_00240e10");
extern "C" void func_00240fd8(u32, u32) asm("func_00240fd8");
extern "C" void func_00241450(u32) asm("func_00241450");
extern "C" void func_002415a0(u32, u32, u32) asm("func_002415a0");
extern "C" void func_00241850(u32, u32) asm("func_00241850");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_00287d20(u32, u32) asm("func_00287d20");
extern "C" void func_002b4c88(u32) asm("func_002b4c88");
extern "C" void func_002b5108(u32, u32) asm("func_002b5108");

// 0x0025b218 func_0025b218
u32 func_0025b218() asm("_ZN2Tz6CmSave12CtrlLoadListEv");
u32 func_0025b218() {
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 a1_1;
    u32 a1_2;
    u32 a1_3;
    u32 v0_4;
    u32 a1_5;
    u32 v0_6;
    u32 a1_7;
    u32 a1_8;
    u32 a0_9;
    u32 a1_10;
    u32 a1_11;
    u32 v0_12;
    u32 v0_13;
    u32 a0_14;
    u32 a1_15;
    u32 a1_16;
    u32 a0_17;
    u32 a1_18;
    u32 a1_19;
    u32 v0_20;
    u32 a1_21;
    u32 a1_22;
    u32 a1_23;
    u32 a1_24;
    u32 v0_25;
    u32 a1_26;
    u32 a1_27;
    u32 a1_28;
    u32 a1_29;
    u32 a1_30;
    u32 a0_31;
    u32 a1_32;
    u32 a1_33;
    u32 v0_34;
    u32 a0_35;
    u32 a1_36;
    u32 s0;
    u32 a1_37;
    u32 a0_38;
    u32 a1_39;
    u32 v0_40;
    s1 = func_00240ba0();
    v0 = func_00287cd0();
    if ((v0 != 2)) {
        v0_0 = func_002b4ff8();
        if ((v0_0 != 0)) {
            if (((s32)(v0) == 0)) {
                func_00287cc0(1);
            }
            switch (func_00287d30()) {
            case 10:
                if (((s32)(func_00233e70(0)) == 0)) {
                    if (((s32)(func_00234798()) == 0)) {
                        func_00240e10(0xffffffff, s1);
                        func_00287d20(0xb, a1_1);
                    } else {
                        func_002b5108(0x8a8c, s1);
                        func_00287bd0(7, 0);
                        func_002b4c88(0);
                        *(u8*)(&D_0035f0b0) = 0;
                    }
                }
                break;
            case 11:
                if (((s32)(func_00233e70(0)) == 0)) {
                    if (((s32)(func_00234758()) == 0)) {
                        if (((s32)(func_00240e50()) <= 0)) {
                            func_00287bd0(3, 0);
                        }
                        func_00287d20(0xc, a1_2);
                    } else {
                        func_002b5108(0x8a8c, s1);
                        func_00287bd0(7, 0);
                        func_002b4c88(0);
                        *(u8*)(&D_0035f0b0) = 0;
                    }
                }
                break;
            case 12:
                func_00241450(1);
                func_00287d20(0xd, a1_3);
                break;
            case 13:
                if (((s32)(func_00233e70(0)) == 0)) {
                    if (((s32)(func_00234798()) == 0)) {
                        func_00287d20(0xe, s1);
                    } else {
                        func_002b5108(0x8a8c, s1);
                        func_00287bd0(7, 0);
                        func_002b4c88(0);
                        *(u8*)(&D_0035f0b0) = 0;
                    }
                }
                break;
            case 14:
                v0_4 = func_002413f0();
                if (((s32)(v0_4) >= 0)) {
                    func_00240bc0(v0_4);
                    func_00240360(v0_4);
                    func_00241450(0);
                } else {
                    func_00287bd0(3, 0);
                }
                func_00287d20(0xf, a1_5);
                break;
            case 15:
                if (((s32)(func_00233e70(0)) == 0)) {
                    v0_6 = func_00234798();
                    if (((s32)(v0_6) == 0)) {
                        func_00240e10(0xfffffffb, a1_7);
                        func_00287d20(0x10, a1_8);
                    } else {
                        if ((v0_6 != 2)) {
                            func_00240fd8(0xffffffff, 2);
                            func_00240c08(func_00240bd0(a0_9, a1_10), 0, 0x20);
                            func_00287d20(0xc, a1_11);
                        } else {
                            func_002b5108(0x8a8c, s1);
                            func_00287bd0(7, 0);
                            func_002b4c88(0);
                            *(u8*)(&D_0035f0b0) = 0;
                        }
                    }
                }
                break;
            case 16:
                if (((s32)(func_00233e70(0)) == 0)) {
                    v0_12 = func_00234758();
                    if (((s32)(v0_12) == 0)) {
                        v0_13 = func_002413f0();
                        func_00240bc0(v0_13);
                        func_00240360(v0_13);
                        func_00241850(func_00240bd0(a0_14, a1_15), 0);
                        func_002415a0(2, 0, 0);
                        func_00287d20(0x11, a1_16);
                    } else {
                        if ((v0_12 == 1)) {
                            func_00240c08(func_00240bd0(a0_17, a1_18), 0, 0x20);
                            func_00287d20(0xc, a1_19);
                        } else {
                            func_002b5108(0x8a8c, s1);
                            func_00287bd0(7, 0);
                            func_002b4c88(0);
                            *(u8*)(&D_0035f0b0) = 0;
                        }
                    }
                }
                if (((s32)(func_00233e70(0)) == 0)) {
                    func_00240fd8(0xffffffff, 2);
                    v0_20 = func_002347d8();
                    if (((s32)(v0_20) != 0)) {
                        if ((v0_20 != 1)) {
                            if ((v0_20 == 3)) {
                                func_00240c08(func_00240bd0(0x12, s1), 0, 0x20);
                                func_00287d20(0xe, a1_21);
                            } else {
                                func_002b5108(0x8a8c, s1);
                                func_00287bd0(7, 0);
                                func_002b4c88(0);
                                *(u8*)(&D_0035f0b0) = 0;
                            }
                        } else {
                            func_00240c08(func_00240bd0(0x12, a1_22), 0, 0x20);
                            func_00287d20(0xc, a1_23);
                        }
                    } else {
                        func_00287d20(0x12, a1_24);
                    }
                }
                break;
            case 17:
                if (((s32)(func_00233e70(0)) == 0)) {
                    func_00240fd8(0xffffffff, 2);
                    v0_25 = func_002347d8();
                    if (((s32)(v0_25) != 0)) {
                        if ((v0_25 != 1)) {
                            if ((v0_25 == 3)) {
                                func_00240c08(func_00240bd0(0x12, s1), 0, 0x20);
                                func_00287d20(0xe, a1_26);
                            } else {
                                func_002b5108(0x8a8c, s1);
                                func_00287bd0(7, 0);
                                func_002b4c88(0);
                                *(u8*)(&D_0035f0b0) = 0;
                            }
                        } else {
                            func_00240c08(func_00240bd0(0x12, a1_27), 0, 0x20);
                            func_00287d20(0xc, a1_28);
                        }
                    } else {
                        func_00287d20(0x12, a1_29);
                    }
                }
                break;
            case 18:
                if (((s32)(func_00240a08(0)) != 0)) {
                    func_00240e10(0xfffffffc, a1_30);
                } else {
                    func_00240c08(func_00240bd0(a0_31, a1_32), 0, 0x20);
                }
                func_00287d20(0x13, a1_33);
                break;
            case 19:
                if (((s32)(func_00233e70(0)) == 0)) {
                    v0_34 = func_00234758();
                    if (((s32)(v0_34) == 0)) {
                        func_002349c8(s1, 0);
                        s0 = (func_00241c40(1) ? 0x10 : 0x20);
                        func_00240c08(func_00240bd0(a0_35, a1_36), 0, s0);
                        func_00287d20(0xe, a1_37);
                    } else {
                        if ((v0_34 == 1)) {
                            func_00240c08(func_00240bd0(a0_38, s1), 0, 0x20);
                            func_00287d20(0xc, a1_39);
                        } else {
                            func_002b5108(0x8a8c, s1);
                            func_00287bd0(7, 0);
                            func_002b4c88(0);
                            *(u8*)(&D_0035f0b0) = 0;
                        }
                    }
                }
                break;
            default:
                break;
            }
            v0_40 = func_00288040();
            if (((s32)(v0_40) != 0)) {
                return func_00288018();
            } else {
                return v0_40;
            }
        } else {
            return v0_0;
        }
    } else {
        return v0;
    }
}
