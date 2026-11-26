// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002aa098(u32) asm("func_002aa098");
extern "C" u32 func_002aa2f8(u32) asm("func_002aa2f8");
extern "C" u32 func_002aa668(u32, u32) asm("func_002aa668");
extern "C" u32 func_002aaa38(u32) asm("func_002aaa38");
extern "C" u32 func_002aae88(u32) asm("func_002aae88");
extern "C" u32 func_002ab2b0(u32) asm("func_002ab2b0");
extern "C" u32 func_002ab540(u32) asm("func_002ab540");
extern "C" u32 func_002ab8e8(u32) asm("func_002ab8e8");
extern "C" u32 func_002abc60(u32) asm("func_002abc60");
extern "C" u32 func_002abff0(u32, u32) asm("func_002abff0");
extern "C" u32 func_002ac420(u32) asm("func_002ac420");
extern "C" u32 func_002ac748(u32) asm("func_002ac748");
extern "C" void func_002a9d88() asm("func_002a9d88");

// 0x002acc98 func_002acc98
u32 func_002acc98() asm("_ZN2Tz9JmNewInfo8isAnyNewEv");
u32 func_002acc98() {
    u32 s0;
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    u32 t7_2;
    u32 t7_3;
    u32 t7_4;
    u32 t7_5;
    u32 t7_6;
    u32 t7_7;
    u32 t7_8;
    func_002a9d88();
    if (((s32)(func_002aa098(0xffffffff)) == 0)) {
        if (((s32)(func_002aa2f8(0xffffffff)) == 0)) {
            if (((s32)(func_002aaa38(0xffffffff)) == 0)) {
                if (((s32)(func_002aae88(0xffffffff)) == 0)) {
                    if (((s32)(func_002ab2b0(0xffffffff)) == 0)) {
                        if (((s32)(func_002ab540(0xffffffff)) == 0)) {
                            if (((s32)(func_002ab8e8(0xffffffff)) == 0)) {
                                if (((s32)(func_002abc60(0xffffffff)) == 0)) {
                                    if (((s32)(func_002ac420(0xffffffff)) == 0)) {
                                        if (((s32)(func_002ac748(0xffffffff)) == 0)) {
                                            s0 = 0;
                                            do {
                                                if (((s32)(func_002aa668(0, 0xffffffff)) != 0)) {
                                                    return 1;
                                                }
                                                if (((s32)(func_002abff0(s0, 0xffffffff)) != 0)) {
                                                    return 1;
                                                }
                                                s0 = (s0 + 1);
                                            } while (((s32)(((s32)(s0) < (s32)(0xf))) != 0));
                                            t7 = 0;
                                        } else {
                                            t7 = 1;
                                        }
                                        t7_0 = t7;
                                    } else {
                                        t7_0 = 1;
                                    }
                                    t7_1 = t7_0;
                                } else {
                                    t7_1 = 1;
                                }
                                t7_2 = t7_1;
                            } else {
                                t7_2 = 1;
                            }
                            t7_3 = t7_2;
                        } else {
                            t7_3 = 1;
                        }
                        t7_4 = t7_3;
                    } else {
                        t7_4 = 1;
                    }
                    t7_5 = t7_4;
                } else {
                    t7_5 = 1;
                }
                t7_6 = t7_5;
            } else {
                t7_6 = 1;
            }
            t7_7 = t7_6;
        } else {
            t7_7 = 1;
        }
        t7_8 = t7_7;
    } else {
        t7_8 = 1;
    }
    return t7_8;
}
