// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003a99d0 asm("D_003a99d0");
extern "C" u32 D_003a99e0 asm("D_003a99e0");

// 0x00119b10 wtarget_00119b10(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036a878   (float literals live here in the original)
f32 lift_00119b10(u32 a0, u32 a1) asm("_Z16wtarget_00119b10jjjj");
f32 lift_00119b10(u32 a0, u32 a1) {
    f32 f0;
    f32 f0_0;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_003a99d0) = -218.0f;
            *(u32*)(((u32)&D_003a99d0 + 0xc)) = 0;
            *(f32*)(((u32)&D_003a99d0 + 4)) = 55.0f;
            *(f32*)(((u32)&D_003a99d0 + 8)) = 1024.0f;
            f0 = 1024.0f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(f32*)(&D_003a99e0) = 185.0f;
                *(u32*)(((u32)&D_003a99e0 + 0xc)) = 0;
                *(f32*)(((u32)&D_003a99e0 + 4)) = 125.0f;
                *(f32*)(((u32)&D_003a99e0 + 8)) = 1024.0f;
                f0 = 1024.0f;
            }
        }
        f0_0 = f0;
    }
    return f0_0;
}
