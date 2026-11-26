// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2c040 asm("D_01e2c040");
extern "C" u32 D_01e2c044 asm("D_01e2c044");
extern "C" u32 D_01e2c048 asm("D_01e2c048");

// 0x002eccd0 wtarget_002eccd0(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00376180   (float literals live here in the original)
void lift_002eccd0(u32 a0, u32 a1) asm("_Z16wtarget_002eccd0jjjj");
void lift_002eccd0(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2c040) = 0.10471975058317184f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(f32*)(&D_01e2c044) = 0.13089968264102936f;
            }
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2c048) = 0.13089968264102936f;
        }
    }
    return;
}
