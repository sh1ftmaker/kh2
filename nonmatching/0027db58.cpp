// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f238 asm("D_0035f238");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_00290740(u32) asm("func_00290740");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_00242618(u32, u32) asm("func_00242618");
extern "C" void func_00287da0() asm("func_00287da0");

// 0x0027db58 func_0027db58
u32 func_0027db58() asm("func_0027db58");
u32 func_0027db58() {
    u32 s0;
    u32 t7;
    u32 t7_0;
    s0 = func_00167f18(0);
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_00290740(*(u32*)(&D_0035f238))) == 0)) {
            func_001039f8();
            t7 = 1;
        } else {
            t7 = 0;
        }
        t7_0 = t7;
    } else {
        if (((s32)((*(u64*)((s0 + 8)) & 0xc)) != 0)) {
            func_00242618(9, 1);
            func_00287da0();
        }
        t7_0 = 0;
    }
    return t7_0;
}
