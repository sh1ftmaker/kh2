// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c720 asm("D_0034c720");
extern "C" u32 D_0034c738 asm("D_0034c738");
extern "C" void func_00160268(u32) asm("func_00160268");

// 0x0031e110 func_0031e110
u32 func_0031e110(u32 a0) asm("func_0031e110");
u32 func_0031e110(u32 a0) {
    *(u32*)(a0) = (u32)&D_0034c720;
    func_00160268(a0);
    return ((u32(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034c738)) + 4))))(*(u32*)(&D_0034c738), a0);
}
