// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2bdc0 asm("D_01e2bdc0");
extern "C" u32 D_01e2bdd0 asm("D_01e2bdd0");
extern "C" u32 D_01e2bde0 asm("D_01e2bde0");
extern "C" u32 D_01e2bdf0 asm("D_01e2bdf0");
extern "C" u32 D_01e2be00 asm("D_01e2be00");

// 0x002c6cd8 wtarget_002c6cd8(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00375798   (float literals live here in the original)
f32 lift_002c6cd8(u32 a0, u32 a1) asm("_Z16wtarget_002c6cd8jjjj");
f32 lift_002c6cd8(u32 a0, u32 a1) {
    f32 f0;
    f32 f0_0;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01e2bdc0) = 0.0f;
            *(f32*)(((u32)&D_01e2bdc0 + 8)) = 0.0f;
            *(f32*)(((u32)&D_01e2bdc0 + 0xc)) = 1.0f;
            *(f32*)(((u32)&D_01e2bdc0 + 4)) = -500.0f;
            f0 = 1.0f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(u32*)(&D_01e2bdd0) = 0;
                *(f32*)(((u32)&D_01e2bdd0 + 0xc)) = 1.0f;
                *(f32*)(((u32)&D_01e2bdd0 + 4)) = -2300.0f;
                *(f32*)(((u32)&D_01e2bdd0 + 8)) = -3000.0f;
                f0 = -3000.0f;
            }
        }
        f0_0 = f0;
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_01e2bde0) = 0;
            *(f32*)(((u32)&D_01e2bde0 + 0xc)) = 1.0f;
            *(f32*)(((u32)&D_01e2bde0 + 4)) = -1760.0f;
            *(f32*)(((u32)&D_01e2bde0 + 8)) = -3180.0f;
            f0_0 = -3180.0f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_01e2bdf0) = 0;
            *(f32*)(((u32)&D_01e2bdf0 + 0xc)) = 1.0f;
            *(f32*)(((u32)&D_01e2bdf0 + 4)) = -790.0f;
            *(f32*)(((u32)&D_01e2bdf0 + 8)) = -8580.0f;
            f0_0 = -8580.0f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_01e2be00) = 0;
            *(f32*)(((u32)&D_01e2be00 + 0xc)) = 1.0f;
            *(f32*)(((u32)&D_01e2be00 + 4)) = -2500.0f;
            *(f32*)(((u32)&D_01e2be00 + 8)) = -2000.0f;
            f0_0 = -2000.0f;
        }
    }
    return f0_0;
}
