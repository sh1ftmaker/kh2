// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00190140(u32) asm("func_00190140");
extern "C" void func_002c04c8(u32, u32, u32) asm("func_002c04c8");
extern "C" void func_002c6490(u32) asm("func_002c6490");

// 0x002c0470 func_002c0470
u32 func_002c0470(u32 a0) asm("_ZN8worldmap12LockOnCamera6updateEv");
u32 func_002c0470(u32 a0) {
    u32 t7;
    if (((s32)(func_00190140(a0 + 0x64)) != 0)) {
        func_002c04c8(a0, a0 + 0x30, a0 + 0x40);
        func_002c6490(a0);
        t7 = 1;
    } else {
        t7 = 0;
    }
    return t7;
}
