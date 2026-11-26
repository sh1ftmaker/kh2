// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001466b0(u32, u32) asm("func_001466b0");
extern "C" void func_00144b38(u32, u32) asm("func_00144b38");

// 0x00146730 wtarget_00146730(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00146730(u32 a0, u32 a1) asm("_Z16wtarget_00146730jjjj");
u32 lift_00146730(u32 a0, u32 a1) {
    u8 frame[128];
    u32 v0;
    u32 t7;
    func_00144b38(a1, (u32)frame);
    v0 = func_001466b0(a0, (u32)frame);
    t7 = ((u32)frame + 0x80);
    do {
        t7 = (t7 + -0x10);
    } while (((u32)frame != t7));
    return v0;
}
