// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036d0c8 asm("D_0036d0c8");
extern "C" u32 func_0013d6b0(u32, u32) asm("func_0013d6b0");
extern "C" u32 func_00168b88(u32, u32, u32, u32) asm("func_00168b88");

// 0x001989d8 YS::STDOBJ::hook_command_image()
u32 lift_001989d8(u32 a0) asm("_ZN2YS6STDOBJ18hook_command_imageEv");
u32 lift_001989d8(u32 a0) {
    u32 s0;
    s0 = *(u32*)((func_00168b88(*(u32*)(((a0 + 0x7a0) + 0x10)), 0x18, (*(s8*)(&D_0036d0c8) | (*(s8*)(((u32)&D_0036d0c8 + 3)) << 0x18)) | ((*(s8*)(((u32)&D_0036d0c8 + 2)) << 0x10) | (*(s8*)(((u32)&D_0036d0c8 + 1)) << 8)), 0) + 8));
    return func_0013d6b0(s0, *(u32*)((func_00168b88(*(u32*)(((a0 + 0x7a0) + 0x10)), 0x19, (*(s8*)(&D_0036d0c8) | (*(s8*)(((u32)&D_0036d0c8 + 3)) << 0x18)) | ((*(s8*)(((u32)&D_0036d0c8 + 2)) << 0x10) | (*(s8*)(((u32)&D_0036d0c8 + 1)) << 8)), 0) + 8)));
}
