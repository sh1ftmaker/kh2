// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c7a4 asm("D_0034c7a4");
extern "C" u32 D_004f41c0 asm("D_004f41c0");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_001415e8(u32, u32, u32) asm("func_001415e8");
extern "C" void func_001656c0(u32, u32, u32) asm("func_001656c0");

// 0x001656d0 func_001656d0
u32 func_001656d0(u32 a0, u32 a1, u32 a2) asm("_ZN2dk6ObjOcc5setupEPvi");
u32 func_001656d0(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 v0_0;
    func_001656c0(a0, a1, a2);
    *(u32*)(a0) = a2;
    v0 = func_001063c0(0xe0, *(u32*)(&D_0034c7a4));
    v0_0 = func_001415e8(v0, a1, 0xffffffff);
    *(u32*)((a0 + 4)) = v0;
    if ((*(u32*)(((u32)&D_004f41c0 + 4)) == 0)) {
        *(u32*)(((u32)&D_004f41c0 + 4)) = a0;
        *(u32*)(&D_004f41c0) = a0;
        *(u32*)((a0 + 0xc)) = 0;
    } else {
        *(u32*)((*(u32*)(((u32)&D_004f41c0 + 4)) + 0xc)) = a0;
        *(u32*)((a0 + 0xc)) = 0;
        *(u32*)(((u32)&D_004f41c0 + 4)) = a0;
    }
    return v0_0;
}
