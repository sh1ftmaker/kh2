// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a1658(u32, u32) asm("func_001a1658");
extern "C" u32 func_001a1de0(u32) asm("func_001a1de0");
extern "C" u32 func_001a2758(u32) asm("func_001a2758");
extern "C" u32 func_001a2778(u32) asm("func_001a2778");
extern "C" u32 func_001a2798(u32) asm("func_001a2798");
extern "C" u32 func_001a27b8(u32) asm("func_001a27b8");
extern "C" void func_001a17c8(u32) asm("func_001a17c8");

// 0x001a2e50 YS::ITEM::CanUseSub(YS::ITEM_TABLE const*, int)
u32 lift_001a2e50(u32 a0, u32 a1) asm("_ZN2YS4ITEM9CanUseSubEPKNS_10ITEM_TABLEEi");
u32 lift_001a2e50(u32 a0, u32 a1) {
    u32 a0_0;
    u32 t7;
    u32 s2;
    u32 t7_1;
    u32 s1;
    u32 t7_2;
    u32 t7_3;
    u32 s2_4;
    u32 s2_5;
    u32 s1_6;
    u32 t7_7;
    u32 s2_8;
    u32 s1_9;
    u32 s2_10;
    u32 t7_11;
    u32 s1_12;
    u32 s2_13;
    u32 s1_14;
    u32 s2_15;
    u32 s1_16;
    u32 t7_17;
    u32 s2_18;
    u32 s1_19;
    u32 s2_20;
    u32 t7_21;
    u32 s2_22;
    u32 s2_23;
    u32 t7_24;
    u32 s1_25;
    u32 t7_26;
    u32 t7_27;
    u32 s2_28;
    u32 s2_29;
    u32 s1_30;
    u32 s2_31;
    u32 s1_32;
    u32 s2_33;
    u32 s1_34;
    u32 s1_35;
    u32 s2_36;
    u32 s1_37;
    u32 s1_38;
    u32 s2_39;
    u32 s1_40;
    u32 s2_41;
    u32 s1_42;
    u32 s1_43;
    u32 s2_44;
    u32 s1_45;
    u32 s2_46;
    u32 t7_47;
    u32 s1_48;
    u32 t7_49;
    u32 t7_50;
    u32 s2_51;
    u32 s2_52;
    u32 s1_53;
    u32 s2_54;
    u32 v0;
    if (((s32)(func_001a1658(a1, 0xffffffff)) != 0)) {
        a0_0 = *(u16*)(a0);
        if ((a0_0 != 7)) {
            if (((s32)(((s32)(a0_0) < (s32)(8))) != 0)) {
                if ((a0_0 != 3)) {
                    if (((s32)(((s32)(a0_0) < (s32)(4))) != 0)) {
                        if (((s32)(a0_0) != 0)) {
                            t7 = *(u32*)(func_001a1658(a1, 0xffffffff));
                            s2 = (((s32)(t7) < (s32)(*(u32*)((func_001a1658(a1, 0xffffffff) + 4)))) & 0xff);
                        } else {
                            s2 = 0;
                        }
                        s1_14 = func_001a1658(a1, 0xffffffff);
                        s2_15 = s2;
                    } else {
                        if ((a0_0 != 5)) {
                            if (((s32)(((s32)(a0_0) < (s32)(6))) != 0)) {
                                t7_1 = *(u32*)(func_001a1658(a1, 0xffffffff));
                                s1 = func_001a1658(a1, 0xffffffff);
                                if (((s32)((((s32)(t7_1) < (s32)(*(u32*)((func_001a1658(a1, 0xffffffff) + 4)))) ^ 1)) != 0)) {
                                    if (((s32)(func_001a1de0(func_001a1658(a1, 0xffffffff))) == 0)) {
                                        t7_2 = *(u32*)((s1 + 0x180));
                                        t7_3 = (((u32)(((s32)(t7_2) < (s32)(*(u32*)((s1 + 0x184))))) < (u32)(1)) & 0xff);
                                    } else {
                                        t7_3 = 0;
                                    }
                                    if ((t7_3 == 0)) {
                                        s2_4 = 1;
                                    } else {
                                        s2_4 = 0;
                                    }
                                    s2_5 = s2_4;
                                } else {
                                    s2_5 = 1;
                                }
                                s1_9 = s1;
                                s2_10 = s2_5;
                            } else {
                                s1_6 = func_001a1658(a1, 0xffffffff);
                                if ((func_001a1de0(func_001a1658(a1, 0xffffffff)) == 0)) {
                                    t7_7 = *(u32*)((s1_6 + 0x180));
                                    s2_8 = (((u32)(((s32)(t7_7) < (s32)(*(u32*)((s1_6 + 0x184))))) < (u32)(1)) ^ 1);
                                } else {
                                    s2_8 = 1;
                                }
                                s1_9 = s1_6;
                                s2_10 = s2_8;
                            }
                            s1_12 = s1_9;
                            s2_13 = s2_10;
                        } else {
                            t7_11 = *(u32*)(func_001a1658(a1, 0xffffffff));
                            s1_12 = func_001a1658(a1, 0xffffffff);
                            s2_13 = (((s32)(t7_11) < (s32)(*(u32*)((func_001a1658(a1, 0xffffffff) + 4)))) & 0xff);
                        }
                        s1_14 = s1_12;
                        s2_15 = s2_13;
                    }
                    s1_19 = s1_14;
                    s2_20 = s2_15;
                } else {
                    s1_16 = func_001a1658(a1, 0xffffffff);
                    if ((func_001a1de0(func_001a1658(a1, 0xffffffff)) == 0)) {
                        t7_17 = *(u32*)((s1_16 + 0x180));
                        s2_18 = (((u32)(((s32)(t7_17) < (s32)(*(u32*)((s1_16 + 0x184))))) < (u32)(1)) ^ 1);
                    } else {
                        s2_18 = 1;
                    }
                    s1_19 = s1_16;
                    s2_20 = s2_18;
                }
                s1_45 = s1_19;
                s2_46 = s2_20;
            } else {
                if ((a0_0 != 0x114)) {
                    if (((s32)(((s32)(a0_0) < (s32)(0x115))) != 0)) {
                        if ((a0_0 != 0x83)) {
                            if (((s32)(((s32)(a0_0) < (s32)(0x83))) == 0)) {
                                if (((s32)(((s32)(a0_0) < (s32)(0x112))) == 0)) {
                                    t7_21 = *(u8*)((func_001a1658(a1, 0xffffffff) + 0x1b1));
                                    s2_22 = (((u32)(t7_21) < (u32)(*(u8*)((func_001a1658(a1, 0xffffffff) + 0x1b2)))) & 0xff);
                                } else {
                                    s2_22 = 0;
                                }
                                s2_23 = s2_22;
                            } else {
                                s2_23 = 0;
                            }
                            s1_30 = func_001a1658(a1, 0xffffffff);
                            s2_31 = s2_23;
                        } else {
                            t7_24 = *(u32*)(func_001a1658(a1, 0xffffffff));
                            s1_25 = func_001a1658(a1, 0xffffffff);
                            if (((s32)((((s32)(t7_24) < (s32)(*(u32*)((func_001a1658(a1, 0xffffffff) + 4)))) ^ 1)) != 0)) {
                                if (((s32)(func_001a1de0(func_001a1658(a1, 0xffffffff))) == 0)) {
                                    t7_26 = *(u32*)((s1_25 + 0x180));
                                    t7_27 = (((u32)(((s32)(t7_26) < (s32)(*(u32*)((s1_25 + 0x184))))) < (u32)(1)) & 0xff);
                                } else {
                                    t7_27 = 0;
                                }
                                if ((t7_27 == 0)) {
                                    s2_28 = 1;
                                } else {
                                    s2_28 = 0;
                                }
                                s2_29 = s2_28;
                            } else {
                                s2_29 = 1;
                            }
                            s1_30 = s1_25;
                            s2_31 = s2_29;
                        }
                        s1_40 = s1_30;
                        s2_41 = s2_31;
                    } else {
                        if ((a0_0 != 0x116)) {
                            if (((s32)(((s32)(a0_0) < (s32)(0x116))) == 0)) {
                                s1_32 = func_001a1658(a1, 0xffffffff);
                                if ((a0_0 == 0x117)) {
                                    s2_33 = ((func_001a27b8(func_001a1658(a1, 0xffffffff)) ^ 1) & 0xff);
                                } else {
                                    s2_33 = 0;
                                }
                                s1_35 = s1_32;
                                s2_36 = s2_33;
                            } else {
                                s1_34 = func_001a1658(a1, 0xffffffff);
                                s1_35 = s1_34;
                                s2_36 = ((func_001a2778(func_001a1658(a1, 0xffffffff)) ^ 1) & 0xff);
                            }
                            s1_38 = s1_35;
                            s2_39 = s2_36;
                        } else {
                            s1_37 = func_001a1658(a1, 0xffffffff);
                            s1_38 = s1_37;
                            s2_39 = ((func_001a2798(func_001a1658(a1, 0xffffffff)) ^ 1) & 0xff);
                        }
                        s1_40 = s1_38;
                        s2_41 = s2_39;
                    }
                    s1_43 = s1_40;
                    s2_44 = s2_41;
                } else {
                    s1_42 = func_001a1658(a1, 0xffffffff);
                    s1_43 = s1_42;
                    s2_44 = ((func_001a2758(func_001a1658(a1, 0xffffffff)) ^ 1) & 0xff);
                }
                s1_45 = s1_43;
                s2_46 = s2_44;
            }
            s1_53 = s1_45;
            s2_54 = s2_46;
        } else {
            t7_47 = *(u32*)(func_001a1658(a1, 0xffffffff));
            s1_48 = func_001a1658(a1, 0xffffffff);
            if (((s32)((((s32)(t7_47) < (s32)(*(u32*)((func_001a1658(a1, 0xffffffff) + 4)))) ^ 1)) != 0)) {
                if (((s32)(func_001a1de0(func_001a1658(a1, 0xffffffff))) == 0)) {
                    t7_49 = *(u32*)((s1_48 + 0x180));
                    t7_50 = (((u32)(((s32)(t7_49) < (s32)(*(u32*)((s1_48 + 0x184))))) < (u32)(1)) & 0xff);
                } else {
                    t7_50 = 0;
                }
                if ((t7_50 == 0)) {
                    s2_51 = 1;
                } else {
                    s2_51 = 0;
                }
                s2_52 = s2_51;
            } else {
                s2_52 = 1;
            }
            s1_53 = s1_48;
            s2_54 = s2_52;
        }
        func_001a17c8(s1_53);
        v0 = s2_54;
    } else {
        v0 = 0;
    }
    return v0;
}
