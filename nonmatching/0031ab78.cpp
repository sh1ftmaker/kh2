// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" void func_002361d0(u32) asm("func_002361d0");

// 0x0031ab78 func_0031ab78
u32 func_0031ab78(u32 a0) asm("_ZN2dk11SpriteImageD0Ev");
u32 func_0031ab78(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347e80;
    func_002361d0(a0 + 0x20);
    *(u32*)(a0) = (u32)&D_00347f98;
    return ((u32(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a0);
}
