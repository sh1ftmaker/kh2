// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001acdc0(u32, u32, u32, u32, u32, u32) asm("func_001acdc0");

// 0x001acf38 YS::WINDOW_BASE::draw()
void lift_001acf38(u32 a0) asm("_ZN2YS11WINDOW_BASE4drawEv");
void lift_001acf38(u32 a0) {
    if ((*(u32*)((a0 + 0x64)) == 2)) {
        func_001acdc0(a0, *(u32*)((a0 + 4)), *(u32*)((a0 + 8)) + (*(u32*)((a0 + 0x60)) >> 1), *(u32*)((a0 + 4)) + (*(u32*)((a0 + 0x5c)) >> 1), *(u32*)((a0 + 8)) + *(u32*)((a0 + 0x60)), 0);
        return;
    } else {
        func_001acdc0(a0, *(u32*)((a0 + 4)), *(u32*)((a0 + 8)), *(u32*)((a0 + 4)) + (*(u32*)((a0 + 0x5c)) >> 1), *(u32*)((a0 + 8)) + (*(u32*)((a0 + 0x60)) >> 1), 0);
        return;
    }
}
