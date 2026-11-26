// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a9528(u32, u32, u32, u32) asm("func_001a9528");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");
extern "C" void func_001dddd0(u32, u32) asm("func_001dddd0");

// 0x001a9560 YS::OBJDATA::start_model_effect(void*, ryj::PAX&, ryj::EFFECT**)
void lift_001a9560(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2YS7OBJDATA18start_model_effectEPvRN3ryj3PAXEPPNS2_6EFFECTE");
void lift_001a9560(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[16];
    u32 v0;
    u32 s1;
    u32 sp;
    u32 sp_0;
    u32 sp_1;
    u32 sp_2;
    u32 sp_3;
    u32 sp_4;
    u32 s1_5;
    u32 s1_6;
    u32 sp_7;
    u32 sp_8;
    u32 sp_9;
    u32 sp_10;
    u32 sp_11;
    u32 s1_12;
    u32 sp_13;
    u32 sp_14;
    u32 s1_15;
    u32 sp_16;
    u32 sp_17;
    v0 = func_001a9528(a0, a1, a2, a3);
    if (((s32)(v0) != 0)) {
        func_001dddd0(a2, v0);
        if ((*(u16*)((*(u32*)((a0 + 8)) + 0x4c)) != 0x1395)) {
            if (((s32)(((s32)(*(u16*)((*(u32*)((a0 + 8)) + 0x4c))) < (s32)(0x1396))) != 0)) {
                if ((*(u16*)((*(u32*)((a0 + 8)) + 0x4c)) != 0x3f8)) {
                    if ((*(u16*)((*(u32*)((a0 + 8)) + 0x4c)) != 0x138a)) {
                        if (((s32)(((u32)(*(u32*)(*(u32*)((a0 + 8)))) < (u32)(0x88d))) != 0)) {
                            if (((s32)(((u32)(*(u32*)(*(u32*)((a0 + 8)))) < (u32)(0x88a))) != 0)) {
                                if ((*(u32*)(*(u32*)((a0 + 8))) != 0x888)) {
                                    if ((*(u32*)(*(u32*)((a0 + 8))) != 0x889)) {
                                        sp = (u32)frame;
                                    } else {
                                        s1 = 0;
                                        do {
                                            *(u32*)(a3) = func_001de168(a2, s1, 0, 1, 0, a1);
                                            a3 = (a3 + 4);
                                            s1 = (s1 + 1);
                                        } while (((s32)(((s32)(s1) < (s32)(4))) != 0));
                                    }
                                    sp_0 = sp;
                                } else {
                                    *(u32*)(a3) = func_001de168(a2, 0, 0, 1, 0, a1);
                                    sp_0 = (u32)frame;
                                }
                                sp_1 = sp_0;
                            } else {
                                *(u32*)(a3) = func_001de168(a2, 0, 0, 1, 0, a1);
                                sp_1 = (u32)frame;
                            }
                            sp_2 = sp_1;
                        } else {
                            if ((*(u32*)(*(u32*)((a0 + 8))) == 0x97c)) {
                                *(u32*)(a3) = func_001de168(a2, 0, 0, 1, 0, a1);
                            }
                            sp_2 = (u32)frame;
                        }
                        sp_3 = sp_2;
                    } else {
                        *(u32*)(a3) = func_001de168(a2, 0, 0, 1, 0, a1);
                        sp_3 = (u32)frame;
                    }
                    sp_4 = sp_3;
                } else {
                    *(u32*)(a3) = func_001de168(a2, 0, 0, 1, 0, a1);
                    sp_4 = (u32)frame;
                }
                sp_14 = sp_4;
            } else {
                if ((*(u16*)((*(u32*)((a0 + 8)) + 0x4c)) != 0x13a2)) {
                    if ((*(u16*)((*(u32*)((a0 + 8)) + 0x4c)) == 0x13ca)) {
                        s1_5 = 0;
                        do {
                            *(u32*)(a3) = func_001de168(a2, s1_5, 0, 1, 0, a1);
                            a3 = (a3 + 4);
                            s1_5 = (s1_5 + 1);
                        } while (((s32)(((s32)(s1_5) < (s32)(0xe))) != 0));
                    } else {
                        if (((s32)(((u32)(*(u32*)(*(u32*)((a0 + 8)))) < (u32)(0x88d))) != 0)) {
                            if (((s32)(((u32)(*(u32*)(*(u32*)((a0 + 8)))) < (u32)(0x88a))) != 0)) {
                                if ((*(u32*)(*(u32*)((a0 + 8))) != 0x888)) {
                                    if ((*(u32*)(*(u32*)((a0 + 8))) != 0x889)) {
                                        sp_7 = (u32)frame;
                                    } else {
                                        s1_6 = 0;
                                        do {
                                            *(u32*)(a3) = func_001de168(a2, s1_6, 0, 1, 0, a1);
                                            a3 = (a3 + 4);
                                            s1_6 = (s1_6 + 1);
                                        } while (((s32)(((s32)(s1_6) < (s32)(4))) != 0));
                                    }
                                    sp_8 = sp_7;
                                } else {
                                    *(u32*)(a3) = func_001de168(a2, 0, 0, 1, 0, a1);
                                    sp_8 = (u32)frame;
                                }
                                sp_9 = sp_8;
                            } else {
                                *(u32*)(a3) = func_001de168(a2, 0, 0, 1, 0, a1);
                                sp_9 = (u32)frame;
                            }
                            sp_10 = sp_9;
                        } else {
                            if ((*(u32*)(*(u32*)((a0 + 8))) == 0x97c)) {
                                *(u32*)(a3) = func_001de168(a2, 0, 0, 1, 0, a1);
                            }
                            sp_10 = (u32)frame;
                        }
                        sp_11 = sp_10;
                    }
                    sp_13 = sp_11;
                } else {
                    s1_12 = 0;
                    do {
                        *(u32*)(a3) = func_001de168(a2, s1_12, 0, 1, 0, a1);
                        a3 = (a3 + 4);
                        s1_12 = (s1_12 + 1);
                    } while (((s32)(((s32)(s1_12) < (s32)(9))) != 0));
                }
                sp_14 = sp_13;
            }
            sp_16 = sp_14;
        } else {
            s1_15 = 0;
            do {
                *(u32*)(a3) = func_001de168(a2, s1_15, 0, 1, 0, a1);
                a3 = (a3 + 4);
                s1_15 = (s1_15 + 1);
            } while (((s32)(((s32)(s1_15) < (s32)(3))) != 0));
        }
        sp_17 = sp_16;
    } else {
        sp_17 = (u32)frame;
    }
    return;
}
