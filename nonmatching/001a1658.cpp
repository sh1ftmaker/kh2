// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a1540(u32) asm("func_001a1540");
extern "C" u32 func_001a15d0(u32) asm("func_001a15d0");

// 0x001a1658 func_001a1658
u32 func_001a1658(u32 a0) asm("_ZN2YS5SHEET9AllocPartEii");
u32 func_001a1658(u32 a0) {
    if ((a0 != 1)) {
        if (((s32)(((s32)(a0) < (s32)(2))) != 0)) {
            if (((s32)(a0) != 0)) {
                return func_001a1540(a0);
            } else {
                return 0;
            }
        } else {
            if ((a0 == 0xe)) {
                return func_001a15d0(a0);
            } else {
                return func_001a1540(a0);
            }
        }
    } else {
        return func_001a15d0(a0);
    }
}
