// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036ef58 asm("D_0036ef58");
extern "C" u32 D_0036ef88 asm("D_0036ef88");
extern "C" u32 D_0036ef98 asm("D_0036ef98");
extern "C" u32 D_0036efc8 asm("D_0036efc8");
extern "C" u32 func_001e8330(u32) asm("func_001e8330");
extern "C" void func_001e7878(u32) asm("func_001e7878");
extern "C" void func_001e8ac8(u32) asm("func_001e8ac8");
extern "C" void func_002fdfc8(u32, u32, u32) asm("func_002fdfc8");

// 0x001e8bb8 func_001e8bb8
u32 func_001e8bb8(u32 a0, u32 a1, u32 a2) asm("func_001e8bb8");
u32 func_001e8bb8(u32 a0, u32 a1, u32 a2) {
    if (((s32)(a0) == 0)) {
        func_002fdfc8((u32)&D_0036ef58, (u32)&D_0036efc8, a2);
        func_002fdfc8((u32)&D_0036ef98, (u32)&D_0036ef88, 0x3d6);
    }
    func_001e7878(a0);
    func_001e8ac8(a0);
    return func_001e8330(a0);
}
