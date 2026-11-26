// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001050d8(u32, u32, f32) asm("func_001050d8");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" void func_00177f50(u32, u32, u32, u32, u32, f32) asm("func_00177f50");
extern "C" void func_002cff00(u32, u32, u32, u32, f32) asm("func_002cff00");
extern "C" void func_002d29a8(u32, u32, u32, u32, f32) asm("func_002d29a8");
extern "C" void func_002d4200(u32, u32, u32, f32) asm("func_002d4200");
extern "C" void func_002d49c0(u32, u32, u32, u32, f32) asm("func_002d49c0");
extern "C" void func_002d5d50(u32, u32, u32, f32) asm("func_002d5d50");
extern "C" void func_002d69c8(u32, u32, u32, f32) asm("func_002d69c8");
extern "C" void func_002d9730(u32, u32, u32, u32, f32) asm("func_002d9730");
extern "C" void func_002daa98(u32, u32, u32, f32) asm("func_002daa98");
extern "C" void func_002daca0(u32, u32, u32, f32) asm("func_002daca0");
extern "C" void func_002db4f0(u32, u32, u32, f32) asm("func_002db4f0");
extern "C" void func_002db6b0(u32, u32, u32, f32) asm("func_002db6b0");
extern "C" void func_002db858(u32, u32, u32, f32) asm("func_002db858");
extern "C" void func_002dd700(u32, u32, u32, u32, f32) asm("func_002dd700");
extern "C" void func_002dda88(u32, u32, u32, f32) asm("func_002dda88");
extern "C" void func_002de788(u32, u32, u32, f32) asm("func_002de788");

// 0x002d0290 func_002d0290
// minilink-rodata 0x00375988   (float literals live here in the original)
void func_002d0290(u32 a0, u32 a1, f32 fa0) asm("_ZN2Ti5MGObj6createEPKN2YS8OBJENTRYERKN2kn7FVectorEf");
void func_002d0290(u32 a0, u32 a1, f32 fa0) {
    u8 frame[16];
    u32 t6;
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    u32 v0;
    u32 t6_2;
    u32 v0_3;
    u32 v0_4;
    u32 s0_5;
    u32 t6_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 v0_10;
    u32 s0_11;
    u32 s0_12;
    u32 s0_13;
    u32 s0_14;
    u32 v0_15;
    u32 v0_16;
    u32 t6_17;
    u32 v0_18;
    u32 v0_19;
    u32 t7;
    u32 v0_20;
    u32 s0_21;
    u32 v0_22;
    u32 t6_23;
    u32 v0_24;
    u32 v0_25;
    u32 s0_26;
    t6 = *(u8*)((a0 + 5));
    if ((t6 != 0x11)) {
        if (((s32)(((s32)(t6) < (s32)(0x12))) != 0)) {
            if ((t6 != 5)) {
                if (((s32)(((s32)(t6) < (s32)(6))) != 0)) {
                    if ((t6 != 1)) {
                        if (((s32)(t6) < (s32)(2))) {
                            if (((s32)(t6) == 0)) {
                                s0 = func_001050d8(0xc40, a1, fa0);
                                func_002d49c0(s0, a0, func_00167f18(0), a1, fa0);
                            }
                        } else {
                            if ((t6 == 2)) {
                                s0_0 = func_001050d8(0xc10, a1, fa0);
                                func_002dd700(s0_0, a0, func_00167f18(0), a1, fa0);
                            }
                        }
                    } else {
                        s0_1 = func_001050d8(0xd20, a1, fa0);
                        func_002d9730(s0_1, a0, func_00167f18(0), a1, fa0);
                    }
                } else {
                    if ((t6 != 0xf)) {
                        if (((s32)(((s32)(t6) < (s32)(0x10))) != 0)) {
                            if ((t6 == 6)) {
                                v0 = func_001050d8(0xb20, a1, fa0);
                                func_002cff00(v0, a0, 1, a1, fa0);
                            }
                        } else {
                            t6_2 = *(u32*)(a0);
                            if ((t6_2 == 0x65e)) {
                                v0_3 = func_001050d8(0xc00, a1, fa0);
                                func_002db858(v0_3, a0, a1, fa0);
                                s0_5 = v0_3;
                            } else {
                                v0_4 = func_001050d8(0xb20, a1, fa0);
                                func_002db4f0(v0_4, a0, a1, fa0);
                                s0_5 = v0_4;
                            }
                            *(u32*)((s0_5 + 0x3b0)) = 1;
                        }
                    } else {
                        t6_6 = *(u32*)(a0);
                        if ((t6_6 == 0x61d)) {
                            v0_7 = func_001050d8(0xb60, a1, fa0);
                            func_002d5d50(v0_7, a0, a1, fa0);
                            s0_13 = v0_7;
                        } else {
                            if ((t6_6 == 0x65c)) {
                                v0_8 = func_001050d8(0xb20, a1, fa0);
                                func_002d69c8(v0_8, a0, a1, fa0);
                                s0_12 = v0_8;
                            } else {
                                if ((t6_6 == 0x61e)) {
                                    v0_9 = func_001050d8(0xcb0, a1, fa0);
                                    func_002d4200(v0_9, a0, a1, fa0);
                                    s0_11 = v0_9;
                                } else {
                                    v0_10 = func_001050d8(0xb20, a1, fa0);
                                    func_002cff00(v0_10, a0, 0, a1, fa0);
                                    s0_11 = v0_10;
                                }
                                s0_12 = s0_11;
                            }
                            s0_13 = s0_12;
                        }
                        *(u32*)((s0_13 + 0x3b0)) = 1;
                    }
                }
            } else {
                s0_14 = func_001050d8(0xb70, a1, fa0);
                func_00177f50(s0_14, a0, 0xb, func_00167f18(0), a1, fa0);
            }
        } else {
            if ((t6 != 0x1a)) {
                if (((s32)(((s32)(t6) < (s32)(0x1b))) != 0)) {
                    if ((t6 != 0x15)) {
                        if (((s32)(((s32)(t6) < (s32)(0x16))) != 0)) {
                            if ((t6 == 0x14)) {
                                v0_15 = func_001050d8(0xc90, a1, fa0);
                                func_002d29a8(v0_15, a0, 3, a1, fa0);
                            }
                        } else {
                            if ((t6 == 0x16)) {
                                v0_16 = func_001050d8(0xc00, a1, fa0);
                                func_002dda88(v0_16, a0, a1, fa0);
                            }
                        }
                    } else {
                        t6_17 = *(u32*)(a0);
                        if ((t6_17 == 0x65f)) {
                            v0_18 = func_001050d8(0xb60, a1, fa0);
                            func_002daca0(v0_18, a0, a1, fa0);
                        } else {
                            v0_19 = func_001050d8(0xb20, a1, fa0);
                            func_002daa98(v0_19, a0, a1, fa0);
                        }
                    }
                } else {
                    if ((t6 != 0xc8)) {
                        if (((s32)(t6) < (s32)(0xc9))) {
                            t7 = 0x64;
                        } else {
                            t7 = 0xc9;
                        }
                        if ((t6 == t7)) {
                            v0_20 = func_001050d8(0xb20, a1, fa0);
                            func_002cff00(v0_20, a0, 1, a1, fa0);
                        }
                    } else {
                        s0_21 = func_001050d8(0xb70, a1, fa0);
                        func_00177f50(s0_21, a0, 0xb, func_00167f18(0), a1, fa0);
                    }
                }
            } else {
                v0_22 = func_001050d8(0xb20, a1, fa0);
                func_002db6b0(v0_22, a0, a1, fa0);
            }
        }
    } else {
        t6_23 = *(u32*)(a0);
        if ((t6_23 == 0x663)) {
            v0_24 = func_001050d8(0xb20, a1, fa0);
            *(f32*)((u32)frame) = 0.0f;
            *(f32*)(((u32)frame + 4)) = -300.0f;
            *(f32*)(((u32)frame + 8)) = 0.0f;
            *(f32*)(((u32)frame + 0xc)) = 0.0f;
            func_002de788(v0_24, a0, (u32)frame, 0.0f);
            s0_26 = v0_24;
        } else {
            v0_25 = func_001050d8(0xb20, a1, fa0);
            func_002cff00(v0_25, a0, 1, a1, fa0);
            s0_26 = v0_25;
        }
        *(u32*)((s0_26 + 0x3b0)) = 1;
    }
    return;
}
