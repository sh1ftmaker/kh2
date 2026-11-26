// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2be10 asm("D_01e2be10");
extern "C" u32 D_01e2be14 asm("D_01e2be14");

// 0x002cb188 wtarget_002cb188(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00375870   (float literals live here in the original)
void lift_002cb188(u32 a0, u32 a1) asm("_Z16wtarget_002cb188jjjj");
void lift_002cb188(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2be10) = 1.134463906288147f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(f32*)(&D_01e2be14) = 1.8325955867767334f;
            }
        }
    }
    return;
}
