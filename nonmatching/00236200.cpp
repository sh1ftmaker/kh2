// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035e3c0 asm("D_0035e3c0");
extern "C" u32 D_0035e3f0 asm("D_0035e3f0");
extern "C" u32 D_70000002 asm("D_70000002");
extern "C" u32 D_70000004 asm("D_70000004");
extern "C" u32 func_003058a0(u32) asm("func_003058a0");

// 0x00236200 u_call0_00236200()
u32 lift_00236200() asm("_Z16u_call0_00236200v");
u32 lift_00236200() {
    *(u64*)(&D_0035e3c0) = (u32)&D_70000002;
    *(u64*)(((u32)&D_0035e3c0 + 0x28)) = 0x47;
    *(u64*)(&D_0035e3f0) = (u32)&D_70000004;
    *(u64*)(((u32)&D_0035e3f0 + 0x48)) = 0x42;
    *(u64*)(((u32)&D_0035e3c0 + 0x18)) = 0xe;
    *(u64*)(((u32)&D_0035e3c0 + 0x10)) = (((u64)(1) << 0x3c) | 0x8001);
    *(u64*)(((u32)&D_0035e3c0 + 0x20)) = 0x30000;
    *(u64*)(((u32)&D_0035e3f0 + 0x10)) = (((u64)(3) << 0x3c) | 0x8001);
    *(u64*)(((u32)&D_0035e3f0 + 0x18)) = 0xeee;
    *(u64*)(((u32)&D_0035e3f0 + 0x20)) = 5;
    *(u64*)(((u32)&D_0035e3f0 + 0x28)) = 8;
    *(u64*)(((u32)&D_0035e3f0 + 0x30)) = 0x60;
    *(u64*)(((u32)&D_0035e3f0 + 0x38)) = 0x14;
    *(u64*)(((u32)&D_0035e3f0 + 0x40)) = 0x44;
    return func_003058a0(0);
}
