// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036da98 asm("D_0036da98");
extern "C" u32 func_00168b88(u32, u32, u32, u32) asm("func_00168b88");
extern "C" u32 func_001bdb70(u32, u32, u32, u32, u32) asm("func_001bdb70");

// 0x001b5708 YS::LIMIT::set_special_command(int)
u32 lift_001b5708(u32 a0, u32 a1) asm("_ZN2YS5LIMIT19set_special_commandEi");
u32 lift_001b5708(u32 a0, u32 a1) {
    u32 s0;
    u32 v0;
    s0 = *(u32*)((func_00168b88(*(u32*)((a0 + 4)), 0x18, (*(s8*)(&D_0036da98) | (*(s8*)(((u32)&D_0036da98 + 3)) << 0x18)) | ((*(s8*)(((u32)&D_0036da98 + 2)) << 0x10) | (*(s8*)(((u32)&D_0036da98 + 1)) << 8)), 0) + 8));
    v0 = func_001bdb70(*(u32*)((*(u32*)((a0 + 0xc)) + 0xb44)), a1, s0, *(u32*)((func_00168b88(*(u32*)((a0 + 4)), 0x19, (*(s8*)(&D_0036da98) | (*(s8*)(((u32)&D_0036da98 + 3)) << 0x18)) | ((*(s8*)(((u32)&D_0036da98 + 2)) << 0x10) | (*(s8*)(((u32)&D_0036da98 + 1)) << 8)), 0) + 8)), 0);
    *(u32*)((a0 + 0x40)) = (*(u32*)((a0 + 0x40)) | 8);
    *(u32*)((a0 + 0x3c)) = (*(u32*)((a0 + 0x3c)) + 1);
    return v0;
}
