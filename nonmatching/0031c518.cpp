// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0034a5d0 asm("D_0034a5d0");
extern "C" void func_002361d0(u32) asm("func_002361d0");
extern "C" void func_00239870(u32) asm("func_00239870");

// 0x0031c518 func_0031c518
void func_0031c518(u32 a0) asm("func_0031c518");
void func_0031c518(u32 a0) {
    u32 s0;
    *(u32*)(a0) = (u32)&D_0034a5d0;
    if ((a0 != 0xfffffcb8)) {
        s0 = (a0 + 0xb40);
        while (((a0 + 0x348) != (s0 + -0x198))) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s0 + -0x198)) + 0xc))))(s0 + -0x198);
            s0 = (s0 + -0x198);
        }
    }
    func_00239870(a0 + 0x1f0);
    *(u32*)((a0 + 0x30)) = (u32)&D_00347e80;
    func_002361d0(a0 + 0x50);
    *(u32*)(a0) = (u32)&D_00347f98;
    *(u32*)((a0 + 0x30)) = (u32)&D_00347f98;
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a0);
    return;
}
