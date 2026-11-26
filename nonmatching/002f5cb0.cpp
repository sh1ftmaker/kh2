// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00363d28 asm("D_00363d28");
extern "C" u32 D_01e2fe48 asm("D_01e2fe48");
extern "C" u32 func_002f5e20(u32) asm("func_002f5e20");

// 0x002f5cb0 func_002f5cb0
u32 func_002f5cb0() asm("func_002f5cb0");
u32 func_002f5cb0() {
    u32 s0;
    u32 s1;
    u32 v0;
    *(u32*)(&D_00363d28) = 0;
    s0 = 0;
    s1 = (u32)&D_01e2fe48;
    do {
        if ((*(u32*)(s1) != 0)) {
            v0 = func_002f5e20(s0);
            s0 = (s0 + 1);
            if (((s32)(v0) < 0)) {
                return v0;
            }
        } else {
            s0 = (s0 + 1);
        }
        s1 = (s1 + 0x334);
    } while (((s32)(((s32)(s0) < (s32)(0x10))) != 0));
    return 1;
}
