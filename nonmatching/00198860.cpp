// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_0036d0c8 asm("D_0036d0c8");
extern "C" u32 func_00168b88(u32, u32, u32, u32) asm("func_00168b88");
extern "C" u32 func_0019d720(u32) asm("func_0019d720");
extern "C" void func_00198970(u32, u32) asm("func_00198970");
extern "C" void func_001bdb70(u32, u32, u32, u32, u32) asm("func_001bdb70");

// 0x00198860 YS::STDOBJ::set_special_command(int)
u32 lift_00198860(u32 a0, u32 a1) asm("_ZN2YS6STDOBJ19set_special_commandEi");
u32 lift_00198860(u32 a0, u32 a1) {
    u32 s0;
    u32 s0_0;
    u32 v0;
    func_00198970(a0, a1);
    s0 = *(u32*)((func_00168b88(*(u32*)(((a0 + 0x7a0) + 0x10)), 0x18, (*(s8*)(&D_0036d0c8) | (*(s8*)(((u32)&D_0036d0c8 + 3)) << 0x18)) | ((*(s8*)(((u32)&D_0036d0c8 + 2)) << 0x10) | (*(s8*)(((u32)&D_0036d0c8 + 1)) << 8)), 0) + 8));
    s0_0 = *(u32*)((*(u32*)(&D_0034e948) + 0xb44));
    func_001bdb70(*(u32*)((*(u32*)(&D_0034e948) + 0xb44)), a1, s0, *(u32*)((func_00168b88(*(u32*)(((a0 + 0x7a0) + 0x10)), 0x19, (*(s8*)(&D_0036d0c8) | (*(s8*)(((u32)&D_0036d0c8 + 3)) << 0x18)) | ((*(s8*)(((u32)&D_0036d0c8 + 2)) << 0x10) | (*(s8*)(((u32)&D_0036d0c8 + 1)) << 8)), 0) + 8)), a0);
    v0 = func_0019d720(s0_0 + 0x9f8);
    *(u32*)((a0 + 0x10c)) = (*(u32*)((a0 + 0x10c)) | 0x800);
    *(u32*)((a0 + 0x488)) = (*(u32*)((a0 + 0x488)) + 1);
    return v0;
}
