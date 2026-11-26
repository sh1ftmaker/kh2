// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00341788 asm("D_00341788");
extern "C" u32 D_003417a8 asm("D_003417a8");
extern "C" u32 func_001128d0(u32, u32) asm("func_001128d0");

// 0x001129d8 func_001129d8
u32 func_001129d8(u32 a0) asm("func_001129d8");
u32 func_001129d8(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 t6;
    v0 = func_001128d0(a0, 1);
    if (((s32)(((s32)(*(u32*)(&D_003417a8)) < (s32)(8))) == 0)) {
        v0_0 = func_001128d0(*(u32*)(&D_00341788), 1);
        v0 = v0_0;
    }
    t6 = (*(u32*)(&D_003417a8) << 2);
    *(u32*)(&D_003417a8) = (*(u32*)(&D_003417a8) + 1);
    *(u32*)((t6 + (u32)&D_00341788)) = a0;
    return v0;
}
