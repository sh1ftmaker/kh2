// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01dae590 asm("D_01dae590");
extern "C" u32 D_01dae5f0 asm("D_01dae5f0");
extern "C" u32 D_70000002 asm("D_70000002");
extern "C" u32 func_003058a0(u32) asm("func_003058a0");

// 0x002398d0 u_call0_002398d0()
u32 lift_002398d0() asm("_Z16u_call0_002398d0v");
u32 lift_002398d0() {
    *(u64*)(((u32)&D_01dae5f0 + 0x10)) = (((u64)(1) << 0x3c) | 0x8001);
    *(u64*)(((u32)&D_01dae5f0 + 0x18)) = 0xe;
    *(u64*)(((u32)&D_01dae5f0 + 0x20)) = 0x44;
    *(u64*)(((u32)&D_01dae5f0 + 0x28)) = 0x42;
    *(u64*)(((u32)&D_01dae5f0 + 0x30)) = (u32)&D_70000002;
    *(u64*)(((u32)&D_01dae5f0 + 0x40)) = (((u64)(1) << 0x3c) | 0x8001);
    *(u64*)(((u32)&D_01dae5f0 + 0x48)) = 0xe;
    *(u64*)(((u32)&D_01dae5f0 + 0x50)) = 0x48;
    *(u64*)(((u32)&D_01dae5f0 + 0x58)) = 0x42;
    *(u64*)(((u32)&D_01dae5f0 + 0x60)) = (u32)&D_70000002;
    *(u64*)(((u32)&D_01dae5f0 + 0x70)) = (((u64)(1) << 0x3c) | 0x8001);
    *(u64*)(((u32)&D_01dae5f0 + 0x78)) = 0xe;
    *(u64*)(((u32)&D_01dae5f0 + 0x80)) = 0x42;
    *(u64*)(((u32)&D_01dae5f0 + 0x88)) = 0x42;
    *(u64*)(((u32)&D_01dae590 + 0x10)) = (((u64)(1) << 0x3c) | 0x8001);
    *(u64*)(((u32)&D_01dae590 + 0x18)) = 0xe;
    *(u64*)(((u32)&D_01dae590 + 0x20)) = 0x60;
    *(u64*)(((u32)&D_01dae590 + 0x28)) = 0x14;
    *(u64*)(((u32)&D_01dae590 + 0x30)) = (u32)&D_70000002;
    *(u64*)(((u32)&D_01dae590 + 0x40)) = (((u64)(1) << 0x3c) | 0x8001);
    *(u64*)(((u32)&D_01dae590 + 0x48)) = 0xe;
    *(u64*)(((u32)&D_01dae590 + 0x50)) = 0;
    *(u64*)(((u32)&D_01dae590 + 0x58)) = 0x14;
    *(u64*)(&D_01dae590) = (u32)&D_70000002;
    *(u64*)(&D_01dae5f0) = (u32)&D_70000002;
    return func_003058a0(0);
}
