// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139d78(u32, u32, f32, f32) asm("func_00139d78");

// 0x0028eb88 func_0028eb88
u32 func_0028eb88(u32 a0, u32 a1, f32 fa0, f32 fa1) asm("func_0028eb88");
u32 func_0028eb88(u32 a0, u32 a1, f32 fa0, f32 fa1) {
    u32 v0;
    v0 = func_00139d78(a0, a1, fa0, fa1);
    *(f32*)((((a1 * 0x17c) + *(u32*)((a0 + 0x38))) + 0x170)) = fa0;
    *(f32*)((((a1 * 0x17c) + *(u32*)((a0 + 0x38))) + 0x174)) = fa1;
    return v0;
}
