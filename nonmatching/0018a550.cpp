// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0018a250(u32, u32) asm("func_0018a250");
extern "C" u32 func_0018a318(u32, u32) asm("func_0018a318");
extern "C" u32 func_0018a420(u32, u32) asm("func_0018a420");
extern "C" u32 func_0018a4d8(u32, u32) asm("func_0018a4d8");

// 0x0018a550 func_0018a550
u32 func_0018a550(u32 a0, u32 a1) asm("func_0018a550");
u32 func_0018a550(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
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
    u32 v0_15;
    u32 v0_16;
    u32 v0_17;
    u32 v0_18;
    u32 v0_19;
    u32 v0_20;
    u32 v0_21;
    u32 v0_22;
    u32 v0_23;
    if ((*(u32*)(a0) != 1)) {
        if (((s32)(*(u32*)(a0)) < (s32)(2))) {
            if ((*(u32*)(a0) != 0)) {
                v0_6 = 0;
            } else {
                if ((*(u32*)(a1) != 1)) {
                    if (((s32)(((s32)(*(u32*)(a1)) < (s32)(2))) != 0)) {
                        if ((*(u32*)(a1) == 0)) {
                            v0 = func_0018a250(a0, a1);
                            v0_0 = v0;
                        } else {
                            v0_0 = 0;
                        }
                        v0_3 = v0_0;
                    } else {
                        if ((*(u32*)(a1) == 3)) {
                            v0_1 = func_0018a250(a0, a1);
                            v0_2 = v0_1;
                        } else {
                            v0_2 = 0;
                        }
                        v0_3 = v0_2;
                    }
                    v0_5 = v0_3;
                } else {
                    v0_4 = func_0018a318(a0, a1);
                    v0_5 = v0_4;
                }
                v0_6 = v0_5;
            }
            v0_15 = v0_6;
        } else {
            if ((*(u32*)(a0) == 3)) {
                if ((*(u32*)(a1) != 1)) {
                    if (((s32)(((s32)(*(u32*)(a1)) < (s32)(2))) != 0)) {
                        if (((s32)(*(u32*)(a1)) != 0)) {
                            v0_8 = 0;
                        } else {
                            v0_7 = func_0018a250(a0, a1);
                            v0_8 = v0_7;
                        }
                        v0_11 = v0_8;
                    } else {
                        if ((*(u32*)(a1) == *(u32*)(a0))) {
                            v0_9 = func_0018a4d8(a0, a1);
                            v0_10 = v0_9;
                        } else {
                            v0_10 = 0;
                        }
                        v0_11 = v0_10;
                    }
                    v0_13 = v0_11;
                } else {
                    v0_12 = func_0018a318(a0, a1);
                    v0_13 = v0_12;
                }
                v0_14 = v0_13;
            } else {
                v0_14 = 0;
            }
            v0_15 = v0_14;
        }
        v0_23 = v0_15;
    } else {
        if ((*(u32*)(a1) != *(u32*)(a0))) {
            if (((s32)(((s32)(*(u32*)(a1)) < (s32)(2))) != 0)) {
                if ((*(u32*)(a1) == 0)) {
                    v0_16 = func_0018a318(a1, a0);
                    v0_17 = v0_16;
                } else {
                    v0_17 = 0;
                }
                v0_20 = v0_17;
            } else {
                if ((*(u32*)(a1) == 3)) {
                    v0_18 = func_0018a318(a1, a0);
                    v0_19 = v0_18;
                } else {
                    v0_19 = 0;
                }
                v0_20 = v0_19;
            }
            v0_22 = v0_20;
        } else {
            v0_21 = func_0018a420(a0, a1);
            v0_22 = v0_21;
        }
        v0_23 = v0_22;
    }
    return v0_23;
}
