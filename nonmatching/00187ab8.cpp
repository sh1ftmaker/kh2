// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002ff1a4(u32, u32) asm("func_002ff1a4");

// 0x00187ab8 ctarget_00187ab8(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00187ab8(u32 a0, u32 a1) asm("_Z16ctarget_00187ab8jjjj");
u32 lift_00187ab8(u32 a0, u32 a1) {
    u32 s1;
    if (((s32)(a0) != 0)) {
        s1 = 0;
        do {
            if (((s32)(*(u32*)(a0)) != 0)) {
                if (((s32)(func_002ff1a4(a1, *(u32*)(a0))) == 0)) {
                    return a0;
                }
            }
            a0 = (a0 + 0x20);
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(0x80))) != 0));
    }
    return 0;
}
