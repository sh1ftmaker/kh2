// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00311aa0(u32, u32) asm("func_00311aa0");
extern "C" u32 func_003149e8(u32, u32) asm("func_003149e8");
extern "C" void func_00314b90(u32, u32, u32, u32) asm("func_00314b90");

// 0x00314dd8 func_00314dd8
u32 func_00314dd8(u32 a0, u32 a1) asm("func_00314dd8");
u32 func_00314dd8(u32 a0, u32 a1) {
    u32 loc_0;
    func_00314b90(*(u8*)((a0 + 0x14)), *(u32*)((a0 + 8)), *(u32*)((a0 + 0xc)) - (s32)((u64)(func_00311aa0(a1, (u32)(func_003149e8(*(u8*)((a0 + 0x14)), a1))))), (u32)&loc_0);
    return loc_0;
}
