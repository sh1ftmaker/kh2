// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" u32 func_0013a9d0() asm("func_0013a9d0");
extern "C" void func_002362b0(u32, u32, u32, u32, u32, u32) asm("func_002362b0");
extern "C" void func_002367c8(u32) asm("func_002367c8");
extern "C" void func_002368e8(u32, f32) asm("func_002368e8");

// 0x00154048 dk::FACE::createSummon(int, void*, void*, int, int, int)
// minilink-rodata 0x0036b270   (float literals live here in the original)
u32 lift_00154048(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("_ZN2dk4FACE12createSummonEiPvS1_iii");
u32 lift_00154048(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u32 v0;
    *(u32*)((a0 + 0x340)) = 0;
    func_002362b0(a0 + 0x1a0, a3, a2, a3, a4, a5);
    if (((s32)(func_0013a9d0()) != 0)) {
        func_002368e8(a0 + 0x1a0, 1.0f);
    }
    func_002367c8(a0 + 0x1a0);
    v0 = func_001386e0(a0, a1, a2, a0 + 0x1a0, a4, a5);
    *(u8*)((a0 + 0x344)) = 1;
    return v0;
}
