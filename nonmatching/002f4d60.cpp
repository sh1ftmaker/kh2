// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2d980 asm("D_01e2d980");
extern "C" u32 D_01e2da80 asm("D_01e2da80");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");

// 0x002f4d60 func_002f4d60
u32 func_002f4d60() asm("func_002f4d60");
u32 func_002f4d60() {
    u32 loc_0;
    u32 v0;
    loc_0 = 0;
    v0 = func_003094b8((u32)&D_01e2d980, 0x80001305, 0, (u32)&D_01e2da80, 0x90, (u32)&D_01e2da80, 0x90, 0);
    v0 = ((s32)(v0) < 0) ? 0 : *(u32*)(((u32)&D_01e2da80 + 4));
    return v0;
}
