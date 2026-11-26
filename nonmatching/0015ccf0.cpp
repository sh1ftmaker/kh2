// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f3694 asm("D_004f3694");
extern "C" u32 D_004f36ec asm("D_004f36ec");
extern "C" u32 D_004f3744 asm("D_004f3744");

// 0x0015ccf0 wtarget_0015ccf0(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x0036b3fc   (float literals live here in the original)
f32 lift_0015ccf0(u32 a0, u32 a1) asm("_Z16wtarget_0015ccf0jjjj");
f32 lift_0015ccf0(u32 a0, u32 a1) {
    f32 f0;
    f32 f0_0;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(((u32)&D_004f3694 + 0xc)) = 0;
            *(f32*)(((u32)&D_004f3694 + 0x10)) = 255.0f;
            f0 = 255.0f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(u32*)(((u32)&D_004f36ec + 0xc)) = 0;
                *(f32*)(((u32)&D_004f36ec + 0x10)) = 255.0f;
                f0 = 255.0f;
            }
        }
        f0_0 = f0;
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(((u32)&D_004f3744 + 0xc)) = 0;
            *(f32*)(((u32)&D_004f3744 + 0x10)) = 255.0f;
            f0_0 = 255.0f;
        }
    }
    return f0_0;
}
