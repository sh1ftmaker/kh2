// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f208 asm("D_0035f208");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f218 asm("D_0035f218");
extern "C" u32 D_0035f220 asm("D_0035f220");
extern "C" u32 D_0035f221 asm("D_0035f221");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_002756f8(u32, u32, u32) asm("func_002756f8");
extern "C" u32 func_002759e8(u32) asm("func_002759e8");
extern "C" u32 func_00276fa8() asm("func_00276fa8");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_0028acb8(u32) asm("func_0028acb8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028d008(u32) asm("func_0028d008");
extern "C" u32 func_0028d5d0(u32) asm("func_0028d5d0");
extern "C" u32 func_0028d620(u32) asm("func_0028d620");
extern "C" u32 func_0028d6e8(u32) asm("func_0028d6e8");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" void func_002748a0() asm("func_002748a0");
extern "C" void func_00275980(u32, u32) asm("func_00275980");
extern "C" void func_00276438() asm("func_00276438");
extern "C" void func_00276e28() asm("func_00276e28");
extern "C" void func_00288018() asm("func_00288018");
extern "C" void func_0028aa40(u32) asm("func_0028aa40");
extern "C" void func_0028cdb8(u32) asm("func_0028cdb8");
extern "C" void func_0028ce38() asm("func_0028ce38");
extern "C" void func_0028f7a0() asm("func_0028f7a0");

// 0x00275438 func_00275438
u32 func_00275438() asm("_ZN2Tz6Jiminy4DrawEv");
u32 func_00275438() {
    u32 s2;
    u32 s0;
    u32 v0;
    u32 t7;
    u32 t7_0;
    u32 v0_1;
    u32 s0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 v0_10;
    u32 v0_11;
    u32 v0_12;
    u32 v0_13;
    u32 v0_14;
    u32 s0_15;
    u32 v0_16;
    u32 v0_17;
    u32 s0_18;
    u32 s0_19;
    u32 s0_20;
    u32 s0_21;
    u32 s0_22;
    s2 = func_00287bc0();
    s0 = func_00276fa8();
    if (((s32)(func_00287db0()) != 0)) {
        if ((func_00139d78(*(u32*)(&D_0035f210)) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035f210)) != *(s16*)((s0 + 2)))) {
                func_0023f070(*(u32*)(&D_0035f210), *(s16*)((s0 + 2)), 0xffffffff);
            }
        }
        if ((func_0028acc8(*(u32*)(&D_0035f200)) != 0)) {
            if ((func_0028acb8(*(u32*)(&D_0035f200)) == 0)) {
                v0 = func_002891b8(*(u32*)(&D_0035f200), 0);
                if (((s32)(*(u32*)((v0 + 0x190))) == 0)) {
                    if (((s32)(*(u32*)((v0 + 0x18c))) != 0)) {
                        t7 = 1;
                    } else {
                        t7 = 0;
                    }
                    t7_0 = t7;
                } else {
                    t7_0 = 1;
                }
                if (((s32)(t7_0) == 0)) {
                    func_0028aa40(*(u32*)(&D_0035f200));
                }
            }
        }
        if (((s32)(func_00139d78(*(u32*)(&D_0035f208))) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f208)) + 0x14))))(*(u32*)(&D_0035f208));
        }
        func_0028f7a0();
        func_0028d5d0(*(u32*)(&D_0035f218));
        func_002748a0();
        func_00276e28();
        func_0028ce38();
    }
    func_00288018();
    func_00276438();
    v0_1 = func_00287db0();
    if (((s32)(v0_1) == 0)) {
        if ((s2 != 7)) {
            if ((s2 != 9)) {
                if ((s2 != 0x1a)) {
                    if ((s2 != 0x22)) {
                        if (((s32)(*(u8*)(&D_0035f220)) == 0)) {
                            s0_2 = *(u32*)(&D_0035f200);
                            if (((s32)(func_0028acc8(*(u32*)(&D_0035f200))) != 0)) {
                                if ((func_00287cd0() == 1)) {
                                    v0_3 = func_0028d008(0);
                                    if (((s32)(v0_3) == 0)) {
                                        func_00275980(0, func_002891d0(s0_2));
                                        if (((s32)(*(u8*)(&D_0035f221)) == 0)) {
                                            v0_4 = func_002759e8(func_002891d0(s0_2));
                                            v0_6 = v0_4;
                                        } else {
                                            v0_5 = func_0028d620(*(u32*)(&D_0035f218));
                                            v0_6 = v0_5;
                                        }
                                        v0_3 = v0_6;
                                    }
                                    v0_10 = v0_3;
                                } else {
                                    v0_7 = func_00287cd0();
                                    if ((v0_7 == 2)) {
                                        if (((s32)(func_0028d008(0)) != 0)) {
                                            func_0028cdb8(0);
                                        }
                                        v0_8 = func_0028d6e8(*(u32*)(&D_0035f218));
                                        if ((v0_8 != 0)) {
                                            v0_9 = func_0028d5d0(*(u32*)(&D_0035f218));
                                            v0_8 = v0_9;
                                        }
                                        v0_7 = v0_8;
                                    }
                                    v0_10 = v0_7;
                                }
                                v0_14 = v0_10;
                            } else {
                                v0_11 = func_00287cd0();
                                if ((v0_11 == 2)) {
                                    if (((s32)(func_0028d008(0)) != 0)) {
                                        func_0028cdb8(0);
                                    }
                                    v0_12 = func_0028d6e8(*(u32*)(&D_0035f218));
                                    if ((v0_12 != 0)) {
                                        v0_13 = func_0028d5d0(*(u32*)(&D_0035f218));
                                        v0_12 = v0_13;
                                    }
                                    v0_11 = v0_12;
                                }
                                v0_14 = v0_11;
                            }
                            s0_18 = s0_2;
                            v0_1 = v0_14;
                        } else {
                            s0_15 = *(u32*)(&D_0035f200);
                            if ((func_0028d008(0) != 0)) {
                                func_0028cdb8(0);
                            }
                            v0_16 = func_0028d6e8(*(u32*)(&D_0035f218));
                            if ((v0_16 != 0)) {
                                v0_17 = func_0028d5d0(*(u32*)(&D_0035f218));
                                v0_16 = v0_17;
                            }
                            s0_18 = s0_15;
                            v0_1 = v0_16;
                        }
                        s0_19 = s0_18;
                    } else {
                        s0_19 = *(u32*)(&D_0035f200);
                    }
                    s0_20 = s0_19;
                } else {
                    s0_20 = *(u32*)(&D_0035f200);
                }
                s0_21 = s0_20;
            } else {
                s0_21 = *(u32*)(&D_0035f200);
            }
            s0_22 = s0_21;
        } else {
            s0_22 = *(u32*)(&D_0035f200);
        }
        switch (s2) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 27:
        case 28:
        case 29:
        case 35:
        case 36:
        case 37:
        case 38:
        case 40:
            return func_002756f8(s0_22, s2, 0);
        case 7:
        case 8:
        case 9:
        case 26:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 39:
        default:
            return v0_1;
        }
    } else {
        return v0_1;
    }
}
