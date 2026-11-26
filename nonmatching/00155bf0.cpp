// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f3590 asm("D_004f3590");
extern "C" u32 D_004f3598 asm("D_004f3598");
extern "C" f32 func_0014b1e0(u32, u32, u32) asm("func_0014b1e0");
extern "C" f32 func_0017ce10(u32, u32, f32) asm("func_0017ce10");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0013edd0(u32, f32) asm("func_0013edd0");

// 0x00155bf0 dk::GAUGE_PLAYER::createDriveCircle(int)
// minilink-rodata 0x0036b2a0   (float literals live here in the original)
void lift_00155bf0(u32 a0, u32 a1) asm("_ZN2dk12GAUGE_PLAYER17createDriveCircleEi");
void lift_00155bf0(u32 a0, u32 a1) {
    f32 f0;
    f32 f20;
    f32 f20_0;
    if (((s32)(*(s8*)(&D_004f3590)) == 0)) {
        *(u8*)(&D_004f3590) = 1;
        *(f32*)(&D_004f3598) = 0.004014256875962019f;
    }
    if ((a1 == 0x64)) {
        f0 = 200.0f;
    } else {
        f0 = (f32)((s32)(a1));
    }
    f20 = (f0 * *(f32*)(&D_004f3598));
    f20_0 = func_0017ce10(a0, a1, f0 * *(f32*)(&D_004f3598));
    func_00139d78(a0 + 0x3260);
    func_0013edd0(a0 + 0x3280, f20_0);
    func_00139d78(a0 + 0x3260);
    func_0014b1e0(a0 + 0x3280, 0x32, 0x64);
    return;
}
