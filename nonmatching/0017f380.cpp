// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_0017f380(u32) asm("_ZN2YS6MOTION11clear_queueEv");

// 0x0017f380 YS::MOTION::clear_queue()
void lift_0017f380(u32 a0) asm("_ZN2YS6MOTION11clear_queueEv");
void lift_0017f380(u32 a0) {
    u32 s0;
    *(u32*)((a0 + 0x3c)) = 0;
    *(u32*)((a0 + 0x40)) = 0;
    s0 = 0;
    while ((a0 = (s0 == 0) ? *(u32*)((a0 + 0x94)) : *(u32*)((s0 + 0x9c))), (s0 = a0), ((s32)(a0) != 0)) {
        func_0017f380(a0);
    }
    return;
}
