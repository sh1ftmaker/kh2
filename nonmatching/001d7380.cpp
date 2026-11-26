// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 func_00188c10(u32, u32) asm("func_00188c10");
extern "C" u32 func_00188fe0(u32, u32) asm("func_00188fe0");
extern "C" u32 func_002beb28(u32) asm("func_002beb28");

// 0x001d7380 func_001d7380
void func_001d7380(u32 a0) asm("_ZN2YS7MISSION9OptionEndEi");
void func_001d7380(u32 a0) {
    if (((s32)(((s32)(a0) < (s32)(0xbb))) != 0)) {
        if (((s32)(((s32)(a0) < (s32)(0xb9))) != 0)) {
            if ((a0 != 0xb0)) {
                if (((s32)(((s32)(a0) < (s32)(0xb1))) != 0)) {
                    if ((a0 != 0xc)) {
                        return;
                    } else {
                        func_002beb28(a0);
                        return;
                    }
                } else {
                    if (((s32)(((u32)((a0 + -0xb5)) < (u32)(3))) != 0)) {
                        func_00188c10(func_00188fe0((u32)&D_0032e020, 1), 2);
                        return;
                    } else {
                        return;
                    }
                }
            } else {
                func_00188c10(func_00188fe0((u32)&D_0032e020, 1), 2);
                return;
            }
        } else {
            func_00188c10(func_00188fe0((u32)&D_0032e020, 1), 2);
            return;
        }
    } else {
        if ((a0 != 0xbd)) {
            if (((s32)(((s32)(a0) < (s32)(0xbd))) == 0)) {
                if (((s32)(((u32)((a0 + -0x128)) < (u32)(3))) != 0)) {
                    func_00188c10(func_00188fe0((u32)&D_0032e020, 1), 2);
                    return;
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            func_00188c10(func_00188fe0((u32)&D_0032e020, 1), 2);
            return;
        }
    }
}
