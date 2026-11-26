// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00366188 asm("D_00366188");
extern "C" void func_0030ee88(u32, u32, u32) asm("func_0030ee88");

// 0x0030ef20 func_0030ef20
u32 func_0030ef20(u32 a0) asm("func_0030ef20");
u32 func_0030ef20(u32 a0) {
    u32 loc_0;
    func_0030ee88((u32)&loc_0, *(u32*)(&D_00366188) + (a0 << 2), 4);
    return loc_0;
}
