// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00177498(u32, u32) asm("func_00177498");

// 0x00177460 YS::PARTY::hook(YS::VM*)
u32 lift_00177460(u32 a0, u32 a1) asm("_ZN2YS5PARTY4hookEPNS_2VME");
u32 lift_00177460(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_00177498(a0, a1);
    *(u32*)((a0 + 0xaec)) = a1;
    return v0;
}
