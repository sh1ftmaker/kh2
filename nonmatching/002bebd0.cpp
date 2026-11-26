// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0017f540(u32, u32, f32, f32) asm("func_0017f540");

// 0x002bebd0 func_002bebd0
// minilink-rodata 0x00375418   (float literals live here in the original)
void func_002bebd0(u32 a0, u32 a1) asm("_ZN8worldmap10ActionShip7controlEPN2YS3OBJE");
void func_002bebd0(u32 a0, u32 a1) {
    u32 t7;
    u32 t7_0;
    if ((0.0f < *(f32*)((a1 + 0x1c)))) {
        if ((*(f32*)((a1 + 0x1c)) < ((*(f32*)((a1 + 0x110)) + *(f32*)((a1 + 0x114))) * 0.5f))) {
            t7 = 0;
        } else {
            t7 = 0x99;
        }
        t7_0 = t7;
    } else {
        t7_0 = 0;
    }
    func_0017f540(a1 + 0x140, t7_0, 8.0f, 0.0f);
    return;
}
