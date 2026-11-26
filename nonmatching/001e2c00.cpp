// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036e978 asm("D_0036e978");
extern "C" u32 D_0036e998 asm("D_0036e998");
extern "C" u32 D_0036e9c0 asm("D_0036e9c0");
extern "C" u32 D_0036e9d0 asm("D_0036e9d0");
extern "C" u32 func_001e7cc0(u32) asm("func_001e7cc0");
extern "C" void func_002fdfc8(u32, u32, u32) asm("func_002fdfc8");

// 0x001e2c00 func_001e2c00
u32 func_001e2c00(u32 a0, u32 a1, u32 a2) asm("func_001e2c00");
u32 func_001e2c00(u32 a0, u32 a1, u32 a2) {
    if (((s32)(a0) == 0)) {
        func_002fdfc8((u32)&D_0036e978, (u32)&D_0036e9c0, a2);
        func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x165);
    }
    return func_001e7cc0(a0);
}
