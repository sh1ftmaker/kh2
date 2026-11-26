// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f35a4 asm("D_004f35a4");
extern "C" u32 D_004f35a8 asm("D_004f35a8");

// 0x00158fd8 wtarget_00158fd8(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036b31c   (float literals live here in the original)
void lift_00158fd8(u32 a0, u32 a1) asm("_Z16wtarget_00158fd8jjjj");
void lift_00158fd8(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_004f35a4) = 0.05235987529158592f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(f32*)(&D_004f35a8) = 0.1745329201221466f;
            }
        }
    }
    return;
}
