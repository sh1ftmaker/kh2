// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f3580 asm("D_004f3580");
extern "C" u32 D_004f3584 asm("D_004f3584");

// 0x0014ec40 wtarget_0014ec40(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036b200   (float literals live here in the original)
void lift_0014ec40(u32 a0, u32 a1) asm("_Z16wtarget_0014ec40jjjj");
void lift_0014ec40(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_004f3580) = -0.5235987305641174f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(f32*)(&D_004f3584) = 1.221730351448059f;
            }
        }
    }
    return;
}
