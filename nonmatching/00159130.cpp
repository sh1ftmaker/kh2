// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034a9f0 asm("D_0034a9f0");
extern "C" u32 func_00140df0() asm("func_00140df0");
extern "C" void func_00141010(u32, f32) asm("func_00141010");

// 0x00159130 dk::ReactionCamera::create(YS::TARGET const*)
// minilink-rodata 0x0036b328   (float literals live here in the original)
u32 lift_00159130(u32 a0) asm("_ZN2dk14ReactionCamera6createEPKN2YS6TARGETE");
u32 lift_00159130(u32 a0) {
    u32 v0;
    func_00141010(a0, 30.0f);
    v0 = func_00140df0();
    *(u32*)((v0 + 0x40)) = 3;
    *(u32*)(&D_0034a9f0) = *(u32*)(a0);
    *(u32*)(((u32)&D_0034a9f0 + 4)) = *(u32*)((a0 + 4));
    *(u32*)(((u32)&D_0034a9f0 + 8)) = *(u32*)((a0 + 8));
    *(u32*)(((u32)&D_0034a9f0 + 0xc)) = *(u32*)((a0 + 0xc));
    *(u32*)(((u32)&D_0034a9f0 + 0x10)) = *(u32*)((a0 + 0x10));
    return v0;
}
