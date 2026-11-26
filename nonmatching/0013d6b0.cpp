// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348050 asm("D_00348050");
extern "C" u32 D_003484a0 asm("D_003484a0");
extern "C" u32 D_00348578 asm("D_00348578");
extern "C" u32 func_0013b2d8(f32) asm("func_0013b2d8");
extern "C" u32 func_0013cb80() asm("func_0013cb80");
extern "C" void func_00138698(u32, u32) asm("func_00138698");
extern "C" void func_001387f8(u32, u32, u32, u32) asm("func_001387f8");
extern "C" void func_0013b348(u32, u32) asm("func_0013b348");
extern "C" void func_0013d4c8() asm("func_0013d4c8");

// 0x0013d6b0 dk::COMMAND_DRAW::setCommandImage(void*, void*)
u32 lift_0013d6b0(u32 a0, u32 a1) asm("_ZN2dk12COMMAND_DRAW15setCommandImageEPvS1_");
u32 lift_0013d6b0(u32 a0, u32 a1) {
    if (((s32)(*(u32*)(&D_003484a0)) == 0)) {
        func_0013b348(0, a1);
    }
    func_00138698(*(u32*)(&D_00348050), a0);
    *(u32*)((*(u32*)(&D_003484a0) + 0x2a4)) = a1;
    func_0013d4c8();
    func_001387f8(*(u32*)(&D_003484a0) + 0x104, a1, func_0013cb80() + 0x20, *(u32*)(&D_00348578));
    *(u32*)((*(u32*)(&D_003484a0) + 0x28c)) = *(u32*)(((u32)&D_00348578 + 4));
    return func_0013b2d8(0.0f);
}
