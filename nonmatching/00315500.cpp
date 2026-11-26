// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003154a8 asm("D_003154a8");
extern "C" u32 D_003677a8 asm("D_003677a8");
extern "C" u32 D_003677ac asm("D_003677ac");
extern "C" u32 D_003785f0 asm("D_003785f0");
extern "C" u32 func_00316af8() asm("func_00316af8");
extern "C" void func_00315440() asm("func_00315440");
extern "C" void func_003166f0(u32) asm("func_003166f0");
extern "C" void func_003189e0(u32) asm("func_003189e0");

// 0x00315500 func_00315500
void func_00315500(u32 a0, u32 a1, u32 a2) asm("func_00315500");
void func_00315500(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 s0;
    *(u32*)((a0 + -0x50)) = a1;
    *(u32*)(((a0 + -0x50) + 4)) = a2;
    *(u32*)(((a0 + -0x50) + 8)) = *(u32*)(&D_003677ac);
    *(u32*)(((a0 + -0x50) + 0xc)) = *(u32*)(&D_003677a8);
    *(u32*)(((a0 + -0x50) + 0x38)) = (u32)&D_003154a8;
    *(u64*)(((a0 + -0x50) + 0x30)) = *(u64*)(&D_003785f0);
    v0 = func_00316af8();
    *(u32*)((v0 + 4)) = (*(u32*)((v0 + 4)) + 1);
    func_003189e0(a0 + -0x20);
    func_003166f0(a0 + -0x20);
    func_00315440();
    if (((s32)(*(u32*)(func_00316af8())) != 0)) {
        *(u32*)((*(u32*)(func_00316af8()) + 0x14)) = -(*(u32*)((*(u32*)(func_00316af8()) + 0x14)));
        s0 = (*(u32*)(func_00316af8()) + 0x30);
        func_003189e0(*(u32*)(func_00316af8()) + 0x30);
        func_003166f0(s0);
    }
    func_00315440();
}
