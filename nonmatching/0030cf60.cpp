// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003660e0 asm("D_003660e0");
extern "C" u32 D_00366164 asm("D_00366164");
extern "C" u32 D_00366174 asm("D_00366174");
extern "C" u32 D_00378350 asm("D_00378350");
extern "C" u32 D_01e37280 asm("D_01e37280");
extern "C" u32 D_01e37ec0 asm("D_01e37ec0");
extern "C" u32 D_01e38780 asm("D_01e38780");
extern "C" u32 D_01e38980 asm("D_01e38980");
extern "C" u32 func_00305620(u32, u32) asm("func_00305620");
extern "C" u32 func_00309d60(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00309d60");
extern "C" u32 func_00309e50(u32, u32) asm("func_00309e50");
extern "C" void func_00305630(u32) asm("func_00305630");
extern "C" void func_00305640(u32) asm("func_00305640");
extern "C" void func_00305660(u32) asm("func_00305660");
extern "C" void func_0030a2d0(u32) asm("func_0030a2d0");
extern "C" void func_0030a300() asm("func_0030a300");

// 0x0030cf60 func_0030cf60
u32 func_0030cf60(u32 a0, u32 a1, u32 a2) asm("func_0030cf60");
u32 func_0030cf60(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    u32 s2;
    u32 loc_8;
    u32 loc_14;
    u32 loc_24;
    u32 loc_18;
    u32 s0_0;
    u32 s2_1;
    u64 loc_30;
    u32 s3;
    u32 a2_2;
    u32 a1_3;
    u32 loc_0;
    u32 s0_4;
    u32 v0;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 s0_8;
    u32 v0_9;
    u32 v0_10;
    u32 v0_11;
    u32 v0_12;
    u32 v0_13;
    u32 v0_14;
    s0 = func_00309e50(a0, a1);
    func_0030a2d0(0x16);
    if (((s32)(*(u32*)(&D_00366164)) != 0)) {
        if (((s32)(s0) != 0)) {
            if (((s32)(*(u32*)((s0 + 4))) == 0)) {
                s2 = *(u32*)((s0 + 4));
                func_0030a300();
                v0_12 = 0xfffffff7;
            } else {
                loc_14 = 1;
                loc_18 = 0;
                loc_24 = (u32)&D_00378350;
                *(u32*)(((u32)&D_01e37280 + 0xc)) = *(u32*)(s0);
                *(u64*)(((u32)&D_01e37280 + 0x10)) = a1;
                *(u32*)(((u32)&D_01e37280 + 0x18)) = a2;
                *(u32*)(((u32)&D_01e37280 + 0x1c)) = ((s32)((s0 - (u32)&D_01e38780)) >> 4);
                s0_0 = (*(u32*)((s0 + 4)) & 0x8000);
                s2_1 = *(u32*)((s0 + 4));
                *(u32*)(&D_01e37280) = func_00305620((u32)&loc_8 + 8, 1);
                *(u32*)(((u32)&D_01e37280 + 4)) = (u32)&loc_30;
                *(u32*)(((u32)&D_01e37280 + 8)) = 8;
                s3 = func_00305620((u32)&loc_8 + 8, 1);
                if (((s32)(s0_0) != 0)) {
                    func_00305660(*(u32*)(&D_00366174));
                    if ((*(u32*)(&D_003660e0) == 0xffffffff)) {
                        *(u32*)(&D_003660e0) = *(u32*)(&D_01e37280);
                        *(u32*)(&D_01e37280) = -(*(u32*)(&D_01e37280));
                    } else {
                        a2_2 = 1;
                        do {
                            if (((s32)(((s32)(a2_2) < (s32)(0x20))) == 0)) {
                                func_00305640(*(u32*)(&D_00366174));
                                loc_0 = 0;
                                loc_8 = s0_0;
                                if (((s32)(func_00309d60((u32)&D_01e38980, 0x16, 0, (u32)&D_01e37280, 0x20, (u32)&D_01e37ec0, 4, 0)) < 0)) {
                                    func_00305630(s3);
                                    func_0030a300();
                                    v0_6 = 0xfffffff5;
                                } else {
                                    s0_4 = *(u32*)(((u32)&D_01e37ec0 | 0x20000000));
                                    func_0030a300();
                                    if (((s32)(s0_4) == 0)) {
                                        func_00305630(s3);
                                        v0_5 = 0xfffffff5;
                                    } else {
                                        if (((s32)(s0_0) != 0)) {
                                            func_00305630(s3);
                                            v0 = 0;
                                        } else {
                                            func_00305660(s3);
                                            func_00305630(s3);
                                            v0 = loc_30;
                                        }
                                        v0_5 = v0;
                                    }
                                    v0_6 = v0_5;
                                }
                                return v0_6;
                            }
                            a1_3 = ((a2_2 << 2) + (u32)&D_003660e0);
                            v0_7 = *(u32*)(((a2_2 << 2) + (u32)&D_003660e0));
                            a2_2 = (a2_2 + 1);
                        } while ((v0_7 != 0xffffffff));
                        *(u32*)((u32)&D_01e37280) = -(*(u32*)((u32)&D_01e37280));
                        *(u32*)(a1_3) = *(u32*)((u32)&D_01e37280);
                    }
                    func_00305640(*(u32*)(&D_00366174));
                    s2_1 = s0_0;
                } else {
                    s2_1 = 0;
                }
                loc_0 = 0;
                loc_8 = s2_1;
                if (((s32)(func_00309d60((u32)&D_01e38980, 0x16, 0, (u32)&D_01e37280, 0x20, (u32)&D_01e37ec0, 4, 0)) < 0)) {
                    func_00305630(s3);
                    func_0030a300();
                    v0_11 = 0xfffffff5;
                } else {
                    s0_8 = *(u32*)(((u32)&D_01e37ec0 | 0x20000000));
                    func_0030a300();
                    if (((s32)(s0_8) == 0)) {
                        func_00305630(s3);
                        v0_10 = 0xfffffff5;
                    } else {
                        if (((s32)(s2_1) != 0)) {
                            func_00305630(s3);
                            v0_9 = 0;
                        } else {
                            func_00305660(s3);
                            func_00305630(s3);
                            v0_9 = loc_30;
                        }
                        v0_10 = v0_9;
                    }
                    v0_11 = v0_10;
                }
                v0_12 = v0_11;
            }
            v0_13 = v0_12;
        } else {
            func_0030a300();
            v0_13 = 0xfffffff7;
        }
        v0_14 = v0_13;
    } else {
        func_0030a300();
        v0_14 = 0xfffffff7;
    }
    return v0_14;
}
