// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002249b8() asm("func_002249b8");
extern "C" void func_002247e8(u32) asm("func_002247e8");
extern "C" void func_002248f8(u32) asm("func_002248f8");

// 0x0022b028 func_0022b028
u32 func_0022b028(u32 a0) asm("_ZN2sa13MUSICAL_INPUT8BadScoreEi");
u32 func_0022b028(u32 a0) {
    func_002247e8(a0);
    if ((func_002249b8() == 3)) {
        func_002248f8(-(a0));
        a0 = -(a0);
    } else {
        if ((func_002249b8() == 5)) {
            if (((s32)(-(a0)) > 0)) {
                func_002248f8(-(a0));
            }
            a0 = -(a0);
        } else {
            a0 = 0;
        }
    }
    return a0;
}
