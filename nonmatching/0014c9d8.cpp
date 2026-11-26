// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349dec asm("D_00349dec");

// 0x0014c9d8 dk::Timer::pauseOn(unsigned int)
void lift_0014c9d8(u32 a0) asm("_ZN2dk5Timer7pauseOnEj");
void lift_0014c9d8(u32 a0) {
    *(u32*)(&D_00349dec) = (*(u32*)(&D_00349dec) | a0);
}
