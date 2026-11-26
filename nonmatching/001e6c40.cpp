// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036e978 asm("D_0036e978");
extern "C" u32 D_0036e998 asm("D_0036e998");
extern "C" u32 D_0036e9d0 asm("D_0036e9d0");
extern "C" u32 D_0036ef28 asm("D_0036ef28");
extern "C" u32 func_001e3690(u32, u32, u32, u32, f32) asm("func_001e3690");
extern "C" void func_001e8048(u32, u32, u32) asm("func_001e8048");
extern "C" void func_002fdfc8(u32, u32, u32) asm("func_002fdfc8");

// 0x001e6c40 func_001e6c40
u32 func_001e6c40(u32 a0, u32 a1, u32 a2, u32 a3, f32 fa0) asm("_Z15pppStartPartMngPvS_jif");
u32 func_001e6c40(u32 a0, u32 a1, u32 a2, u32 a3, f32 fa0) {
    u32 v0;
    *(u32*)((a0 + 0x88)) = a1;
    *(u8*)((a0 + 0x93)) = a2;
    *(u32*)((a0 + 0x94)) = a3;
    *(u32*)((a0 + 0xa0)) = 0;
    *(f32*)((a0 + 0xa4)) = fa0;
    v0 = func_001e3690(a0, a1, a2, a3, fa0);
    if (((s32)(v0) == 0)) {
        func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ef28, 1);
        func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0xa03);
        v0 = 0;
    } else {
        func_001e8048(a0, v0, 1);
        v0 = 1;
    }
    return v0;
}
