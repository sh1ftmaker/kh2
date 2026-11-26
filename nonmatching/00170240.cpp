// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dca0 asm("D_0034dca0");
extern "C" u32 func_002ff1a4(u32, u32) asm("func_002ff1a4");

// 0x00170240 ctarget_00170240(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00170240(u32 a0, u32 a1) asm("_Z16ctarget_00170240jjjj");
u32 lift_00170240(u32 a0, u32 a1) {
    u32 s1;
    u32 v0;
    u32 s0;
    u32 t7;
    s1 = 0;
    do {
        s0 = (s1 == 0) ? *(u32*)(&D_0034dca0) : *(u32*)((s1 + 0x3c));
        s1 = s0;
        if (((s32)(s0) == 0)) {
            return 0;
        }
        if (((s32)(func_002ff1a4(s0 + 4, a0)) != 0)) {
            continue;
        }
        if ((a1 == 0xffffffff)) {
            v0 = s0;
            return v0;
        }
        v0 = s0;
        t7 = *(u32*)((s0 + 0x28));
    } while ((a1 != t7));
    return v0;
}
