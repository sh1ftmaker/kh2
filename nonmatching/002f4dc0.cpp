// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003768e0 asm("D_003768e0");
extern "C" u32 D_01e2d980 asm("D_01e2d980");
extern "C" u32 D_01e2da80 asm("D_01e2da80");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" void func_002f5c48(u32) asm("func_002f5c48");

// 0x002f4dc0 func_002f4dc0
u32 func_002f4dc0(u32 a0) asm("func_002f4dc0");
u32 func_002f4dc0(u32 a0) {
    u32 loc_0;
    u32 v0;
    loc_0 = 0;
    *(u32*)(((u32)&D_01e2da80 + 4)) = a0;
    if (((s32)(func_003094b8((u32)&D_01e2d980, 0x80001304, 0, (u32)&D_01e2da80, 0x90, (u32)&D_01e2da80, 0x90, 0)) < 0)) {
        func_002f5c48((u32)&D_003768e0);
        v0 = 0;
    } else {
        v0 = *(u32*)(&D_01e2da80);
    }
    return v0;
}
