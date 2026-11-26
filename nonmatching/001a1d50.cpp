// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a1db8(u32, f32) asm("func_001a1db8");

// 0x001a1d50 func_001a1d50
void func_001a1d50(u32 a0, f32 fa0) asm("func_001a1d50");
void func_001a1d50(u32 a0, f32 fa0) {
    f32 f1;
    f32 f0;
    f32 f2;
    f1 = *(f32*)((a0 + 0x1c0));
    if ((0.0f < f1)) {
        f0 = *(f32*)((a0 + 0x1bc));
        if (!(((f0 + fa0) < 0.0f))) {
            if (!((f1 < (f0 + fa0)))) {
                f1 = (f0 + fa0);
            }
            f2 = f1;
        } else {
            f2 = 0.0f;
        }
        *(f32*)((a0 + 0x1bc)) = f2;
        if ((f2 == 0.0f)) {
            func_001a1db8(a0, fa0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
