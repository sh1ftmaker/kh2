// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0014b1e0(u32, u32, u32) asm("func_0014b1e0");
extern "C" f32 func_0017ce10(u32, u32, u32, f32) asm("func_0017ce10");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0013edd0(u32, f32) asm("func_0013edd0");

// 0x00155cb0 dk::GAUGE_PLAYER::createDriveTimeCircle(int, int)
// minilink-rodata 0x0036b2a8   (float literals live here in the original)
f32 lift_00155cb0(u32 a0, u32 a1, u32 a2) asm("_ZN2dk12GAUGE_PLAYER21createDriveTimeCircleEii");
f32 lift_00155cb0(u32 a0, u32 a1, u32 a2) {
    f32 f20;
    f20 = func_0017ce10(a0, a1, a2, (f32)((s32)(a1)) * ((23.0f / (f32)((s32)(a2))) * 0.01745329238474369f));
    func_00139d78(a0 + 0x3260);
    func_0013edd0(a0 + 0x3280, f20);
    func_00139d78(a0 + 0x3260);
    return func_0014b1e0(a0 + 0x3280, 0x32, 0x64);
}
