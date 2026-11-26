// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f020 asm("D_0035f020");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x00265b88 func_00265b88
void func_00265b88() asm("func_00265b88");
void func_00265b88() {
    u32 v0;
    u32 s0;
    u32 s1;
    u32 v0_0;
    v0 = func_00257770();
    if ((func_00139d78(v0) == 0)) {
        s0 = (v0 + 0x5ef0);
        s1 = 0;
        do {
            s0 = (s0 + 0x1b4);
            v0_0 = func_00139d78(v0 + 0x5ef0);
            s1 = (s1 + 1);
            if (((s32)(v0_0) != 0)) {
                return;
            }
        } while (((s32)(((s32)(s1) < (s32)(0x14))) != 0));
        if (((s32)(func_0028acc8(*(u32*)(&D_0035f01c))) == 0)) {
            func_0028acc8(*(u32*)(&D_0035f020));
        }
    }
    return;
}
