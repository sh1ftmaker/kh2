// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00317128(u32, u32) asm("func_00317128");
extern "C" u32 func_00317130(u32, u32) asm("func_00317130");
extern "C" u32 func_00317138(u32, u32) asm("func_00317138");
extern "C" void func_002fd160(u32, u32) asm("func_002fd160");

// 0x00314a50 func_00314a50
void func_00314a50(u32 a0, u32 a1) asm("func_00314a50");
void func_00314a50(u32 a0, u32 a1) {
    if (((a0 & 0xff) != 0xff)) {
        if ((((a0 & 0xff) & 0x70) != 0x20)) {
            if (((s32)(((s32)(((a0 & 0xff) & 0x70)) < (s32)(0x21))) != 0)) {
                if (((s32)(((a0 & 0xff) & 0x70)) != 0)) {
                    if ((((a0 & 0xff) & 0x70) == 0x10)) {
                        return;
                    } else {
                        func_002fd160((a0 & 0xff) & 0x70, a1);
                    }
                } else {
                    return;
                }
            } else {
                if ((((a0 & 0xff) & 0x70) != 0x40)) {
                    if (((s32)(((s32)(((a0 & 0xff) & 0x70)) < (s32)(0x41))) != 0)) {
                        if ((((a0 & 0xff) & 0x70) == 0x30)) {
                            func_00317130(a1, a1);
                            return;
                        } else {
                            func_002fd160((a0 & 0xff) & 0x70, a1);
                        }
                    } else {
                        if ((((a0 & 0xff) & 0x70) == 0x50)) {
                            return;
                        } else {
                            func_002fd160((a0 & 0xff) & 0x70, a1);
                        }
                    }
                } else {
                    func_00317128(a1, a1);
                    return;
                }
            }
        } else {
            func_00317138(a1, a1);
            return;
        }
    } else {
        return;
    }
}
