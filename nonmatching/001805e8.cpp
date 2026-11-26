// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001805e8 YS::MOTION::reset_anmatr_flag()
void lift_001805e8(u32 a0) asm("_ZN2YS6MOTION17reset_anmatr_flagEv");
void lift_001805e8(u32 a0) {
    u32 t6;
    u32 t5;
    t6 = *(u32*)((a0 + 0x24));
    *(u32*)((a0 + 0x28)) = 0;
    t5 = *(u32*)((a0 + 0x20));
    *(u32*)((a0 + 0x20)) = (t5 & 0x7183);
    *(u32*)((a0 + 0x24)) = ((t6 & 0xfffffffe) & 0xfffffffd);
}
