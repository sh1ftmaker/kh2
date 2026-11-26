// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001da420 wtarget_001da420(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001da420(u32 a0, u32 a1) asm("_Z16wtarget_001da420jjjj");
u32 lift_001da420(u32 a0, u32 a1) {
    u32 t6;
    u32 v0;
    u32 t6_0;
    t6 = (*(u32*)(a0) + 0x1c);
    v0 = *(u32*)((t6 + 4));
    while (((s32)(v0) != 0)) {
        if ((*(u32*)(t6) == a1)) {
            return v0;
        }
        t6_0 = (t6 + 8);
        t6 = t6_0;
        v0 = *(u32*)((t6_0 + 4));
    }
    return 0;
}
