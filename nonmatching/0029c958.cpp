// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5ac asm("D_0035f5ac");
extern "C" u32 func_00276c18(u32) asm("func_00276c18");
extern "C" u32 func_002954e0(u32) asm("func_002954e0");

// 0x0029c958 func_0029c958
void func_0029c958() asm("func_0029c958");
void func_0029c958() {
    u32 s0;
    u32 s1;
    s0 = 0;
    s1 = 0;
    do {
        if (((s32)(func_002954e0(s0)) != 0) || ((s32)(func_00276c18(s0 + 1)) != 0)) {
            s1 = (s1 | (1 << (s0 + 1)));
        }
        s0 = (s0 + 1);
    } while (((s32)(((s32)(s0) < (s32)(0xf))) != 0));
    *(u32*)(*(u32*)(&D_0035f5ac)) = (s1 | 1);
    return;
}
