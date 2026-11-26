// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00257770() asm("func_00257770");
extern "C" void func_00139d78(u32) asm("func_00139d78");

// 0x00265740 func_00265740
u32 func_00265740() asm("func_00265740");
u32 func_00265740() {
    u32 v0;
    v0 = func_00257770();
    func_00139d78(v0);
    return ((u32)((*(u32*)((v0 + 0x184)) ^ 0x8d)) < (u32)(1));
}
