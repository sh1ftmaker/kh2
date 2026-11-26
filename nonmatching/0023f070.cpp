// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0023f0c8(u32, u32) asm("func_0023f0c8");
extern "C" void func_00139d78(u32, u32, u32) asm("func_00139d78");

// 0x0023f070 Tz::Layout::setNum(int, int)
u32 lift_0023f070(u32 a0, u32 a1, u32 a2) asm("_ZN2Tz6Layout6setNumEii");
u32 lift_0023f070(u32 a0, u32 a1, u32 a2) {
    func_00139d78(a0, a1, a2);
    *(u32*)((a0 + 0x8c)) = a1;
    *(u32*)((a0 + 0x98)) = a1;
    return func_0023f0c8(a0, a2);
}
