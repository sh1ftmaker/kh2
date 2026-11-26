// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00186740(u32, u32, u32, u32, f32, f32) asm("func_00186740");

// 0x0018f248 func_0018f248
u32 func_0018f248(u32 a0) asm("_ZN2YS27trap_enemy_exec_damage_blowEP8BD_VALUE");
u32 func_0018f248(u32 a0) {
    return func_00186740(*(u32*)((*(u32*)(a0) + 4)), *(u32*)((a0 + 4)), *(u32*)((a0 + 8)), *(u32*)((a0 + 0xc)), *(f32*)((a0 + 0x10)), *(f32*)((a0 + 0x14)));
}
