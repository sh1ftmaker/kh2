// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00372600 asm("D_00372600");
extern "C" u32 func_001a6d08(u32) asm("func_001a6d08");
extern "C" u32 func_00252110() asm("func_00252110");

// 0x00252710 func_00252710
void func_00252710() asm("func_00252710");
void func_00252710() {
    u32 s0;
    s0 = ((s32)(*(u8*)((func_00252110() + (u32)&D_00372600))) != 0) ? ((u32)(0) < (u32)(func_001a6d08(*(u8*)((func_00252110() + (u32)&D_00372600))))) : 0;
    return;
}
