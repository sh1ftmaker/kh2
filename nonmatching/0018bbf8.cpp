// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_0018c490(u32, u32) asm("func_0018c490");
extern "C" void func_0018c480(u32, u32) asm("func_0018c480");

// 0x0018bbf8 ctarget_0018bbf8(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_0018bbf8(u32 a0) asm("_Z16ctarget_0018bbf8jjjj");
u32 lift_0018bbf8(u32 a0) {
    u32 s0;
    u32 v0;
    u32 v0_0;
    s0 = (a0 + 0xa40);
    if (((s32)(*(u8*)((s0 + 0x30))) == 0)) {
        v0 = func_0018c490(s0, func_0016c028(a0));
        if (((s32)(v0) != 0)) {
            func_0018c480(s0, 1);
        }
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
