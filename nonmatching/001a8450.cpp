// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032dedc asm("D_0032dedc");

// 0x001a8450 u_call4_001a8450(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001a8450(u32 a0) asm("_Z16u_call4_001a8450jjjj");
u32 lift_001a8450(u32 a0) {
    u32 t7;
    u32 t5;
    u32 v0;
    u32 v0_0;
    if (((s32)(a0) != 0)) {
        t7 = *(u16*)((a0 + 0xa));
        if (((s32)(t7) != 0)) {
            t5 = *(u32*)((((t7 >> 5) << 2) + (u32)&D_0032dedc));
            v0 = ((u32)(0) < (u32)((t5 & (1 << (t7 & 0x1f)))));
        } else {
            v0 = 0;
        }
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
