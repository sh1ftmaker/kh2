// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034a970 asm("D_0034a970");
extern "C" u32 func_00242d58(u32) asm("func_00242d58");

// 0x001584a0 func_001584a0
u32 func_001584a0(u32 a0) asm("func_001584a0");
u32 func_001584a0(u32 a0) {
    return (s32)((u64)(((u32)(0) < (u32)((*(u64*)(a0) & *(u64*)(((((func_00242d58(a0) ^ 1) & 0xff) << 3) + (u32)&D_0034a970)))))));
}
