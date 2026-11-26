// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" void func_001d2180(u32) asm("func_001d2180");

// 0x001d21c0 func_001d21c0
void func_001d21c0(u32 a0) asm("func_001d21c0");
void func_001d21c0(u32 a0) {
    f32 f1;
    f32 f0;
    f1 = *(f32*)((a0 + 0x3c));
    if ((0.0f < f1)) {
        f0 = *(f32*)(&D_00349e10);
        *(f32*)((a0 + 0x3c)) = (f1 - f0);
        if (((f1 - f0) <= 0.0f)) {
            func_001d2180(a0);
        }
    }
    return;
}
