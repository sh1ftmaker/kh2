// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e40 asm("D_00347e40");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" void func_0031cd50(u32) asm("func_0031cd50");

// 0x0031ca20 func_0031ca20
u32 func_0031ca20(u32 a0) asm("func_0031ca20");
u32 func_0031ca20(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347e40;
    func_0031cd50(a0);
    return ((u32(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a0);
}
