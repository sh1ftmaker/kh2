// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2bf10 asm("D_01e2bf10");
extern "C" u32 D_01e2bf20 asm("D_01e2bf20");
extern "C" u32 D_01e2bf30 asm("D_01e2bf30");
extern "C" u32 D_01e2bf40 asm("D_01e2bf40");
extern "C" u32 D_01e2bf50 asm("D_01e2bf50");
extern "C" u32 D_01e2bf60 asm("D_01e2bf60");
extern "C" u32 D_01e2bf70 asm("D_01e2bf70");
extern "C" u32 D_01e2bf74 asm("D_01e2bf74");
extern "C" u32 D_01e2bf78 asm("D_01e2bf78");
extern "C" u32 D_01e2bf7c asm("D_01e2bf7c");

// 0x002e7870 wtarget_002e7870(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00376070   (float literals live here in the original)
void lift_002e7870(u32 a0, u32 a1) asm("_Z16wtarget_002e7870jjjj");
void lift_002e7870(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bf10) = 0.0f;
            *(f32*)(((u32)&D_01e2bf10 + 4)) = 1.0f;
            *(f32*)(((u32)&D_01e2bf10 + 8)) = 0.0f;
            *(f32*)(((u32)&D_01e2bf10 + 0xc)) = 0.0f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(f32*)(&D_01e2bf20) = 0.0f;
                *(f32*)(((u32)&D_01e2bf20 + 8)) = 0.0f;
                *(f32*)(((u32)&D_01e2bf20 + 0xc)) = 0.0f;
                *(f32*)(((u32)&D_01e2bf20 + 4)) = -1.0f;
            }
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bf30) = -1.0f;
            *(f32*)(((u32)&D_01e2bf30 + 4)) = 0.0f;
            *(f32*)(((u32)&D_01e2bf30 + 8)) = 0.0f;
            *(f32*)(((u32)&D_01e2bf30 + 0xc)) = 0.0f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bf40) = 1.0f;
            *(f32*)(((u32)&D_01e2bf40 + 4)) = 0.0f;
            *(f32*)(((u32)&D_01e2bf40 + 8)) = 0.0f;
            *(f32*)(((u32)&D_01e2bf40 + 0xc)) = 0.0f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bf50) = 0.0f;
            *(f32*)(((u32)&D_01e2bf50 + 4)) = 0.0f;
            *(f32*)(((u32)&D_01e2bf50 + 0xc)) = 0.0f;
            *(f32*)(((u32)&D_01e2bf50 + 8)) = 1.0f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bf60) = 0.0f;
            *(f32*)(((u32)&D_01e2bf60 + 4)) = 0.0f;
            *(f32*)(((u32)&D_01e2bf60 + 8)) = -1.0f;
            *(f32*)(((u32)&D_01e2bf60 + 0xc)) = 0.0f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bf70) = 1.570796251296997f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bf74) = -1.570796251296997f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bf78) = -1.570796251296997f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bf7c) = 1.570796251296997f;
        }
    }
    return;
}
