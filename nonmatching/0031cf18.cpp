// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0034a800 asm("D_0034a800");
extern "C" void func_002361d0(u32) asm("func_002361d0");
extern "C" void func_00239870(u32) asm("func_00239870");

// 0x0031cf18 func_0031cf18
u32 func_0031cf18(u32 a0) asm("func_0031cf18");
u32 func_0031cf18(u32 a0) {
    *(u32*)(a0) = (u32)&D_0034a800;
    func_002361d0(a0 + 0x1a0);
    *(u32*)(a0) = (u32)&D_00347e60;
    func_00239870(a0 + 0x18);
    *(u32*)(a0) = (u32)&D_00347f98;
    return ((u32(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a0);
}
