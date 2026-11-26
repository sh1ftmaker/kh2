// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0014b620(u32, u32) asm("func_0014b620");
extern "C" void func_0014b220(u32, u32, u32, u32, u32) asm("func_0014b220");

// 0x0014a9a0 dk::Fade::fadeSetup(unsigned int)
// minilink-rodata 0x0036b0b0   (float literals live here in the original)
void lift_0014a9a0(u32 a0, u32 a1) asm("_ZN2dk4Fade9fadeSetupEj");
void lift_0014a9a0(u32 a0, u32 a1) {
    f32 f1;
    if (((s32)(((a1 ? a1 : 1) << 1)) >= 0)) {
        f1 = (f32)((s32)(((a1 ? a1 : 1) << 1)));
    } else {
        f1 = ((f32)((s32)((((a1 ? a1 : 1) << 1) >> 1))) + (f32)((s32)((((a1 ? a1 : 1) << 1) >> 1))));
    }
    *(f32*)((a0 + 0x100)) = f1;
    *(f32*)((a0 + 0x104)) = (128.0f / f1);
    if (((s32)(*(u8*)((a0 + 0xf4))) == 0)) {
        func_0014b220(a0, 0, 0, 0, 0);
    } else {
        func_0014b220(a0, 0xff, 0xff, 0xff, 0);
    }
    func_0014b620(a0, 0x44);
    return;
}
