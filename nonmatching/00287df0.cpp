// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00242618(u32, u8) asm("func_00242618");

// 0x00287df0 func_00287df0
u32 func_00287df0(u32 a0, u8 a1, u8 a2, u32 a3, u8 a4) asm("_ZN2Tz8MenuBase5PadSEEibbPFbiEb");
u32 func_00287df0(u32 a0, u8 a1, u8 a2, u32 a3, u8 a4) {
    u32 t5;
    u32 t5_0;
    u32 t5_1;
    u32 t5_2;
    if (((s32)(a1) == 0)) {
        if ((a0 != 0xfffffffe)) {
            if (((s32)(((u32)((a0 + 0xd)) < (u32)(2))) == 0)) {
                if ((a0 == 0xfffffffc)) {
                    return func_00242618(a2 ? 5 : 4, a4);
                } else {
                    if (((s32)(((u32)((a0 + 7)) < (u32)(3))) == 0)) {
                        if (((s32)(((u32)((a0 + 9)) < (u32)(2))) == 0)) {
                            if (((s32)(((u32)((a0 + 0xb)) < (u32)(2))) == 0)) {
                                if (((s32)(a0) >= 0)) {
                                    if (((s32)(a3) != 0)) {
                                        t5 = (((u32(*)(u32, u32, u32, u32, u32))(a3))(a0, a1, a2, a3, a4) ? 2 : 4);
                                    } else {
                                        t5 = 2;
                                    }
                                    return func_00242618(t5, a4);
                                } else {
                                    return 0;
                                }
                            } else {
                                if (((s32)(a3) != 0)) {
                                    t5_0 = (((u32(*)(u32, u32, u32, u32, u32))(a3))(a0, a1, a2, a3, a4) ? 2 : 4);
                                } else {
                                    t5_0 = 2;
                                }
                                return func_00242618(t5_0, a4);
                            }
                        } else {
                            if (((s32)(a3) != 0)) {
                                t5_1 = (((u32(*)(u32, u32, u32, u32, u32))(a3))(a0, a1, a2, a3, a4) ? 2 : 4);
                            } else {
                                t5_1 = 2;
                            }
                            return func_00242618(t5_1, a4);
                        }
                    } else {
                        if (((s32)(a3) != 0)) {
                            t5_2 = (((u32(*)(u32, u32, u32, u32, u32))(a3))(a0, a1, a2, a3, a4) ? 2 : 4);
                        } else {
                            t5_2 = 2;
                        }
                        return func_00242618(t5_2, a4);
                    }
                }
            } else {
                return func_00242618(1, a4);
            }
        } else {
            return func_00242618(3, a4);
        }
    } else {
        return func_00242618(1, a4);
    }
}
