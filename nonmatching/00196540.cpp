// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001963c8(u32) asm("func_001963c8");

// 0x00196540 func_00196540
void func_00196540(u32 a0) asm("_ZN2YS10WORLDPOINT16ProgressCallbackEi");
void func_00196540(u32 a0) {
    if ((a0 != 0x1877)) {
        if (((s32)(((s32)(a0) < (s32)(0x1878))) != 0)) {
            if ((a0 != 0x1061)) {
                if (((s32)(((s32)(a0) < (s32)(0x1062))) != 0)) {
                    if ((a0 != 0x8b8)) {
                        return;
                    } else {
                        func_001963c8(0x2f);
                        return;
                    }
                } else {
                    if ((a0 != 0x141f)) {
                        if ((a0 == 0x1822)) {
                            func_001963c8(0x1f);
                            return;
                        } else {
                            return;
                        }
                    } else {
                        func_001963c8(9);
                        return;
                    }
                }
            } else {
                func_001963c8(0x1e);
                return;
            }
        } else {
            if ((a0 != 0x2822)) {
                if (((s32)(((s32)(a0) < (s32)(0x2823))) != 0)) {
                    if ((a0 == 0x2023)) {
                        func_001963c8(0x29);
                        return;
                    } else {
                        return;
                    }
                } else {
                    if ((a0 != 0x3012)) {
                        if ((a0 == 0x401e)) {
                            func_001963c8(0x10);
                            return;
                        } else {
                            return;
                        }
                    } else {
                        func_001963c8(0x13);
                        return;
                    }
                }
            } else {
                func_001963c8(0x26);
                return;
            }
        }
    } else {
        func_001963c8(0x1f);
        return;
    }
}
