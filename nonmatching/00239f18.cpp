// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00239f18 YI::SEQUENCE::SetScaleX(float)
// minilink-rodata 0x003714c4   (float literals live here in the original)
void lift_00239f18(u32 a0, f32 fa0) asm("_ZN2YI8SEQUENCE9SetScaleXEf");
void lift_00239f18(u32 a0, f32 fa0) {
    u32 t5;
    u32 t5_0;
    u32 t5_1;
    *(f32*)((a0 + 0x138)) = fa0;
    if ((*(f32*)((a0 + 0x134)) == 1.0f)) {
        if ((fa0 == 1.0f)) {
            if (!((*(f32*)((a0 + 0x13c)) == 1.0f))) {
                t5 = 1;
            } else {
                t5 = 0;
            }
            t5_0 = t5;
        } else {
            t5_0 = 1;
        }
        t5_1 = t5_0;
    } else {
        t5_1 = 1;
    }
    *(u32*)((a0 + 0xb8)) = ((*(u32*)((a0 + 0xb8)) & 0xfffffffd) | (t5_1 << 1));
    return;
}
