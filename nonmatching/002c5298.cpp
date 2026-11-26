// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2bd20 asm("D_01e2bd20");
extern "C" u32 D_01e2bd30 asm("D_01e2bd30");
extern "C" u32 D_01e2bd40 asm("D_01e2bd40");

// 0x002c5298 wtarget_002c5298(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00375574   (float literals live here in the original)
void lift_002c5298(u32 a0, u32 a1) asm("_Z16wtarget_002c5298jjjj");
void lift_002c5298(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bd20) = 0.0f;
            *(f32*)(((u32)&D_01e2bd20 + 4)) = 0.0f;
            *(f32*)(((u32)&D_01e2bd20 + 8)) = 1.0f;
            *(f32*)(((u32)&D_01e2bd20 + 0xc)) = 0.0f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(f32*)(&D_01e2bd30) = -120.0f;
                *(u32*)(((u32)&D_01e2bd30 + 0xc)) = 0;
                *(f32*)(((u32)&D_01e2bd30 + 4)) = 40.0f;
                *(f32*)(((u32)&D_01e2bd30 + 8)) = 1.2999999523162842f;
            }
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bd40) = 200.0f;
            *(f32*)(((u32)&D_01e2bd40 + 4)) = 0.0f;
            *(f32*)(((u32)&D_01e2bd40 + 0xc)) = 0.0f;
            *(f32*)(((u32)&D_01e2bd40 + 8)) = 1.2000000476837158f;
        }
    }
    return;
}
