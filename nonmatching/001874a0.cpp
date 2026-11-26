// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 func_00187300(u32, u32, f32) asm("func_00187300");
extern "C" u32 func_0019ba60(u32, f32) asm("func_0019ba60");
extern "C" void func_0019d358(u32) asm("func_0019d358");

// 0x001874a0 func_001874a0
u32 func_001874a0(u32 a0, f32 fa0) asm("_ZN2YS6BTLOBJ20turn_to_lockon_rangeEf");
u32 func_001874a0(u32 a0, f32 fa0) {
    u32 s0;
    u32 t6;
    u32 t6_0;
    s0 = *(u32*)(&D_0034e948);
    if (((s32)(func_0019ba60(*(u32*)(&D_0034e948), fa0)) != 0)) {
        if (((s32)(*(u32*)((s0 + 0xb40))) != 0)) {
            func_0019d358(*(u32*)((s0 + 0xb40)));
            t6 = func_00187300(a0, *(u32*)((s0 + 0xb40)) + 4, fa0);
        } else {
            t6 = 0;
        }
        t6_0 = t6;
    } else {
        t6_0 = 0;
    }
    return t6_0;
}
