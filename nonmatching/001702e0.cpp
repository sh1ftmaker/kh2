// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dca0 asm("D_0034dca0");

// 0x001702e0 ctarget_001702e0(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001702e0(u32 a0) asm("_Z16ctarget_001702e0jjjj");
u32 lift_001702e0(u32 a0) {
    u32 t6;
    u32 v0;
    t6 = 0;
    for (;;) {
        v0 = (t6 == 0) ? *(u32*)(&D_0034dca0) : *(u32*)((t6 + 0x3c));
        t6 = v0;
        if (((s32)(v0) == 0)) break;
        if ((*(u32*)((v0 + 0x30)) == a0)) {
            return v0;
        }
    }
    return 0;
}
