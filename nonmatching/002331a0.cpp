// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002330b0 asm("D_002330b0");
extern "C" u32 func_001684c0(u32, u32, u32, u32) asm("func_001684c0");
extern "C" u32 func_00227870(u32, u32, u32) asm("func_00227870");
extern "C" u32 func_00227a28(u32, u32, u32, u32, u32) asm("func_00227a28");
extern "C" u32 func_0022f4f0(u32) asm("func_0022f4f0");
extern "C" u32 func_002330c8(u32, u32) asm("func_002330c8");
extern "C" void func_002ff2e8(u32, u32) asm("func_002ff2e8");

// 0x002331a0 func_002331a0
u32 func_002331a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2sa5EVENT15motion_read_setEPcNS_11EVENT_ALLOC10ALLOC_TYPEEiii");
u32 func_002331a0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    v0 = func_00227a28(a0, a1, a2, a3, a4);
    *(u32*)((v0 + 0xc)) = a3;
    *(u32*)(v0) = 1;
    *(u32*)((v0 + 4)) = 1;
    *(u8*)((v0 + 8)) = ((u32)(0) < (u32)(a4));
    *(u32*)((v0 + 0x10)) = a2;
    func_002ff2e8(v0 + 0x20, func_0022f4f0(a2));
    func_002ff2e8(v0 + 0x30, a0);
    v0_0 = func_002330c8(a0, func_0022f4f0(a2));
    v0_1 = func_00227870(v0_0, v0, a1);
    *(u32*)((v0 + 0x14)) = v0_1;
    return func_001684c0(v0_0, v0_1, (u32)&D_002330b0, v0);
}
