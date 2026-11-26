// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_003088f8(u32, u32, u32, u32, u32, u32) asm("func_003088f8");

// 0x00308f00 func_00308f00
u32 func_00308f00(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00308f00");
u32 func_00308f00(u32 a0, u32 a1, u32 a2, u32 a3) {
    return (func_003088f8(0x80000008, a3, 0x40, *(u32*)((a3 + 0x24)), *(u32*)((a3 + 0x28)), *(u32*)((a3 + 0x2c))) ? 0 : 0x800);
}
