// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00367920 asm("D_00367920");
extern "C" u32 D_01e4c798 asm("D_01e4c798");
extern "C" u32 D_01e4c7a0 asm("D_01e4c7a0");
extern "C" u32 func_002fd3e8(u32) asm("func_002fd3e8");
extern "C" u32 func_00305510() asm("func_00305510");
extern "C" u32 func_003060f0() asm("func_003060f0");
extern "C" u32 func_00316e00() asm("func_00316e00");
extern "C" u32 func_00316e10() asm("func_00316e10");
extern "C" void func_00315440() asm("func_00315440");
extern "C" void func_003169d0() asm("func_003169d0");

// 0x00316af8 func_00316af8
u32 func_00316af8() asm("func_00316af8");
u32 func_00316af8() {
    u32 s0;
    u32 s1;
    u32 v0;
    u32 t6;
    u32 v0_0;
    u32 s1_1;
    u32 s2;
    u32 v0_2;
    u32 t6_3;
    u32 t6_4;
    u32 t6_5;
    u32 v0_6;
    u32 s0_7;
    u32 s1_8;
    u32 v0_9;
    u32 t6_10;
    u32 v0_11;
    u32 s1_12;
    u32 s2_13;
    u32 v0_14;
    u32 t6_15;
    u32 t6_16;
    u32 t6_17;
    u32 v0_18;
    u32 v0_19;
    if ((*(u32*)(&D_00367920) != 0)) {
        if (((s32)(*(u32*)(&D_00367920)) < 0)) {
            func_003169d0();
            if (((s32)(*(u32*)(&D_00367920)) == 0)) {
                v0_6 = (u32)&D_01e4c798;
            } else {
                s0 = *(u32*)(&D_01e4c7a0);
                s1 = func_00316e00();
                v0 = func_00316e10();
                if (((s32)(((s32)(s0) < (s32)(9))) != 0)) {
                    if (((s32)(*(u32*)(((s0 << 2) + v0))) == 0)) {
                        v0 = 0;
                    } else {
                        if ((func_003060f0() != 1)) {
                            t6 = func_00305510();
                        } else {
                            t6 = 0;
                        }
                        v0 = *(u32*)(((((t6 << 3) + s0) << 2) + s1));
                    }
                } else {
                    v0 = 0;
                }
                if (((s32)(v0) == 0)) {
                    v0_0 = func_002fd3e8(8);
                    if (((s32)(v0_0) != 0)) {
                        s1_1 = *(u32*)(&D_01e4c7a0);
                        s2 = func_00316e00();
                        v0_2 = func_00316e10();
                        if (((s32)(((s32)(s1_1) < (s32)(9))) != 0)) {
                            if (((s32)(*(u32*)(((s1_1 << 2) + v0_2))) == 0)) {
                                t6_4 = 0xffffffff;
                            } else {
                                if ((func_003060f0() != 1)) {
                                    t6_3 = func_00305510();
                                } else {
                                    t6_3 = 0;
                                }
                                *(u32*)(((((t6_3 << 3) + s1_1) << 2) + s2)) = v0_0;
                                t6_4 = 0;
                            }
                            t6_5 = t6_4;
                        } else {
                            t6_5 = 0xffffffff;
                        }
                        if ((t6_5 != 0)) {
                            func_00315440();
                        } else {
                            *(u32*)(v0_0) = 0;
                        }
                    } else {
                        func_00315440();
                    }
                    *(u32*)((v0_0 + 4)) = 0;
                    v0 = v0_0;
                }
                v0_6 = v0;
            }
            v0_18 = v0_6;
        } else {
            s0_7 = *(u32*)(&D_01e4c7a0);
            s1_8 = func_00316e00();
            v0_9 = func_00316e10();
            if (((s32)(((s32)(s0_7) < (s32)(9))) != 0)) {
                if (((s32)(*(u32*)(((s0_7 << 2) + v0_9))) == 0)) {
                    v0_9 = 0;
                } else {
                    if ((func_003060f0() != 1)) {
                        t6_10 = func_00305510();
                    } else {
                        t6_10 = 0;
                    }
                    v0_9 = *(u32*)(((((t6_10 << 3) + s0_7) << 2) + s1_8));
                }
            } else {
                v0_9 = 0;
            }
            if (((s32)(v0_9) == 0)) {
                v0_11 = func_002fd3e8(8);
                if (((s32)(v0_11) != 0)) {
                    s1_12 = *(u32*)(&D_01e4c7a0);
                    s2_13 = func_00316e00();
                    v0_14 = func_00316e10();
                    if (((s32)(((s32)(s1_12) < (s32)(9))) != 0)) {
                        if (((s32)(*(u32*)(((s1_12 << 2) + v0_14))) == 0)) {
                            t6_16 = 0xffffffff;
                        } else {
                            if ((func_003060f0() != 1)) {
                                t6_15 = func_00305510();
                            } else {
                                t6_15 = 0;
                            }
                            *(u32*)(((((t6_15 << 3) + s1_12) << 2) + s2_13)) = v0_11;
                            t6_16 = 0;
                        }
                        t6_17 = t6_16;
                    } else {
                        t6_17 = 0xffffffff;
                    }
                    if ((t6_17 != 0)) {
                        func_00315440();
                    } else {
                        *(u32*)(v0_11) = 0;
                    }
                } else {
                    func_00315440();
                }
                *(u32*)((v0_11 + 4)) = 0;
                v0_9 = v0_11;
            }
            v0_18 = v0_9;
        }
        v0_19 = v0_18;
    } else {
        v0_19 = (u32)&D_01e4c798;
    }
    return v0_19;
}
