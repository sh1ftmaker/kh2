// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 func_00104d30(u32, u32) asm("func_00104d30");

// 0x001052a8 func_001052a8
u32 func_001052a8(u32 a0) asm("func_001052a8");
u32 func_001052a8(u32 a0) {
    u32 v0;
    v0 = func_00104d30((u32)&D_0032bae0, a0);
    *(u8*)(((u32)&D_0032bb30 + 0xc)) = *(u8*)(&D_0032bae0);
    *(u8*)(((u32)&D_0032bb30 + 0xd)) = *(u8*)(((u32)&D_0032bae0 + 1));
    *(u8*)(((u32)&D_0032bb30 + 0xe)) = *(u8*)(((u32)&D_0032bae0 + 2));
    return v0;
}
