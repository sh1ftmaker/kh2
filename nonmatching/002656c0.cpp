// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" void func_0028acc8(u32) asm("func_0028acc8");

// 0x002656c0 func_002656c0
void func_002656c0() asm("func_002656c0");
void func_002656c0() {
    u32 v0;
    u32 s1;
    v0 = func_00257770();
    if ((func_00139d78(v0) == 0)) {
        s1 = 0;
        do {
            if (((s32)(func_00139d78(v0 + 0x3610)) != 0)) {
                return;
            }
            if (((s32)(func_00139d78(v0 + 0x5ef0)) != 0)) {
                return;
            }
            v0 = (v0 + 0x1b4);
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(0x14))) != 0));
        func_0028acc8(*(u32*)(&D_0035f01c));
    }
    return;
}
