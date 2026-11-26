// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00288ce0(u32, u32, u32, u32, u32) asm("func_00288ce0");
extern "C" u32 func_0028c198(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028c198");

// 0x00288d80 Tz::Select::SetItem(int, int, int, Tz::Layout*, int, short const*, short const*)
u32 lift_00288d80(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("_ZN2Tz6Select7SetItemEiiiPNS_6LayoutEiPKsS4_");
u32 lift_00288d80(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 v0;
    v0 = func_0028c198(*(s16*)(a6), a2, a3, a4, a5, 0, a6, a7);
    *(u32*)((v0 + 0x188)) = *(s16*)((a6 + 4));
    *(u32*)((v0 + 0x1ac)) = 1;
    return func_00288ce0(a0, v0, a1, a6, a7);
}
