// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 D_0034ece8 asm("D_0034ece8");
extern "C" u32 func_00188bf8(u32, u32) asm("func_00188bf8");
extern "C" u32 func_00188fe0(u32, u32) asm("func_00188fe0");
extern "C" u32 func_00189028(u32, u32, u32, u32) asm("func_00189028");
extern "C" u32 func_002bea20() asm("func_002bea20");
extern "C" void func_001ada38(u32) asm("func_001ada38");

// 0x001d7098 func_001d7098
void func_001d7098(u32 a0) asm("_ZN2YS7MISSION10OptionInitEi");
void func_001d7098(u32 a0) {
    if (((s32)(((s32)(a0) < (s32)(0xb8))) != 0)) {
        if (((s32)(((s32)(a0) < (s32)(0xb6))) != 0)) {
            if (((s32)(((s32)(a0) < (s32)(0x35))) != 0)) {
                if (((s32)(((s32)(a0) < (s32)(0x32))) != 0)) {
                    if ((a0 != 0xc)) {
                        return;
                    } else {
                        func_001ada38(1);
                        *(u32*)(&D_0034ece8) = 4;
                        func_002bea20();
                        return;
                    }
                } else {
                    *(u32*)(&D_0034ece8) = 3;
                    return;
                }
            } else {
                if ((a0 != 0xb0)) {
                    if ((a0 == 0xb3)) {
                        func_00188bf8(func_00188fe0((u32)&D_0032e020, 1), 0x29);
                        return;
                    } else {
                        return;
                    }
                } else {
                    func_00188bf8(func_00188fe0((u32)&D_0032e020, 1), 0x29);
                    return;
                }
            }
        } else {
            func_00188bf8(func_00188fe0((u32)&D_0032e020, 1), 0x180);
            return;
        }
    } else {
        if ((a0 != 0xbb)) {
            if (((s32)(((s32)(a0) < (s32)(0xbc))) != 0)) {
                if ((a0 != 0xb8)) {
                    if ((a0 != 0xba)) {
                        return;
                    } else {
                        func_00188bf8(func_00188fe0((u32)&D_0032e020, 1), 0x180);
                        return;
                    }
                } else {
                    func_00188bf8(func_00188fe0((u32)&D_0032e020, 1), 0x29);
                    return;
                }
            } else {
                if ((a0 != 0xbd)) {
                    if (((s32)(((s32)(a0) < (s32)(0xbd))) == 0)) {
                        if (((s32)(((u32)((a0 + -0x128)) < (u32)(3))) != 0)) {
                            func_00188bf8(func_00188fe0((u32)&D_0032e020, 1), 0x180);
                            return;
                        } else {
                            return;
                        }
                    } else {
                        return;
                    }
                } else {
                    func_00188bf8(func_00188fe0((u32)&D_0032e020, 1), 0x2b);
                    return;
                }
            }
        } else {
            func_00189028((u32)&D_0032e020, 1, 0x29, 0);
            return;
        }
    }
}
