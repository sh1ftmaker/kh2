// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2bc70 asm("D_01e2bc70");
extern "C" u32 D_01e2bc80 asm("D_01e2bc80");
extern "C" u32 D_01e2bc90 asm("D_01e2bc90");

// 0x002c0738 wtarget_002c0738(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x003754d0   (float literals live here in the original)
void lift_002c0738(u32 a0, u32 a1) asm("_Z16wtarget_002c0738jjjj");
void lift_002c0738(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bc70) = 0.0f;
            *(f32*)(((u32)&D_01e2bc70 + 8)) = 0.0f;
            *(f32*)(((u32)&D_01e2bc70 + 0xc)) = 1.0f;
            *(f32*)(((u32)&D_01e2bc70 + 4)) = -500.0f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(f32*)(&D_01e2bc80) = 0.0f;
                *(f32*)(((u32)&D_01e2bc80 + 0xc)) = 0.0f;
                *(f32*)(((u32)&D_01e2bc80 + 4)) = -1840.0f;
                *(f32*)(((u32)&D_01e2bc80 + 8)) = -2400.0f;
            }
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bc90) = 0.0f;
            *(f32*)(((u32)&D_01e2bc90 + 0xc)) = 0.0f;
            *(f32*)(((u32)&D_01e2bc90 + 4)) = -3450.0f;
            *(f32*)(((u32)&D_01e2bc90 + 8)) = -3000.0f;
        }
    }
    return;
}
