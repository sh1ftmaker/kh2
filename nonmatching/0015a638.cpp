// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034aa84 asm("D_0034aa84");
extern "C" u32 func_00140dc0() asm("func_00140dc0");
extern "C" u32 func_00140df0() asm("func_00140df0");
extern "C" u32 func_0015a6c8(u32) asm("func_0015a6c8");
extern "C" void func_00141010(u32, f32) asm("func_00141010");

// 0x0015a638 dk::TargetCamera::create(YS::TARGET*)
// minilink-rodata 0x0036b3a4   (float literals live here in the original)
void lift_0015a638(u32 a0) asm("_ZN2dk12TargetCamera6createEPN2YS6TARGETE");
void lift_0015a638(u32 a0) {
    u32 v0;
    u32 v0_0;
    func_00141010(a0, 30.0f);
    v0 = func_00140df0();
    *(u8*)((v0 + 0x3b)) = 1;
    v0_0 = func_00140dc0();
    if ((v0_0 != 6)) {
        if ((v0_0 != 8)) {
            *(f32*)(&D_0034aa84) = *(f32*)((v0 + 0x48));
            *(u32*)((v0 + 0x40)) = 2;
            func_0015a6c8(a0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
