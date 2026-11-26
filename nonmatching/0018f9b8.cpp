// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a4d40(u32, u32, u32, f32, f32) asm("func_001a4d40");

// 0x0018f9b8 func_0018f9b8
u32 func_0018f9b8(u32 a0) asm("_ZN2YS18trap_attack_set_rcEP8BD_VALUE");
u32 func_0018f9b8(u32 a0) {
    return func_001a4d40(*(u32*)(a0), *(u32*)((a0 + 4)), *(u32*)((a0 + 8)), *(f32*)((a0 + 0xc)), *(f32*)((a0 + 0x10)));
}
