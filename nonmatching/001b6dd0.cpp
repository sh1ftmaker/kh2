// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0017c4c8(u32, u32) asm("func_0017c4c8");

// 0x001b6dd0 func_001b6dd0
u32 func_001b6dd0(u32 a0, u32 a1) asm("_ZN2YS3OBJ15prepare_flyjumpERKN2kn7FVectorE");
u32 func_001b6dd0(u32 a0, u32 a1) {
    Q16 loc_0;
    u32 v0;
    loc_0 = *(Q16*)(a1);
    v0 = func_0017c4c8(a0, (u32)&loc_0);
    *(u8*)((a0 + 0x514)) = 3;
    return v0;
}
