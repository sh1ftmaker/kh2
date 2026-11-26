// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00305a30(u32) asm("func_00305a30");
extern "C" void func_00305aa0() asm("func_00305aa0");
extern "C" void func_00310f38(u32, u32) asm("func_00310f38");

// 0x0030ec50 func_0030ec50
u32 func_0030ec50() asm("func_0030ec50");
u32 func_0030ec50() {
    u32 v0;
    if (((s32)((func_00305a30(4) & 0x40000)) != 0)) {
        func_00305aa0();
        func_00310f38(1, 1);
        func_00310f38(0, 1);
        v0 = 1;
    } else {
        v0 = 0;
    }
    return v0;
}
