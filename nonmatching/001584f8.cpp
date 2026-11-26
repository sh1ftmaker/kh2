// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct A10_u64 { u8 _p[0x10]; u64 m[1]; };
extern "C" u32 D_0034a970 asm("D_0034a970");
extern "C" u32 func_00242ce8(u32) asm("func_00242ce8");

// 0x001584f8 func_001584f8
u32 func_001584f8(u32 a0) asm("func_001584f8");
u32 func_001584f8(u32 a0) {
    return (s32)((u64)(((u32)(0) < (u32)((*(u64*)(a0) & ((A10_u64*)&D_0034a970)->m[func_00242ce8(a0)])))));
}
