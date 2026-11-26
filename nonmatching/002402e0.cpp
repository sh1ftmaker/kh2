// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ecac asm("D_0035ecac");
extern "C" u32 D_0035ecb0 asm("D_0035ecb0");
extern "C" u32 D_0035ecb4 asm("D_0035ecb4");
extern "C" u32 D_01dae6a0 asm("D_01dae6a0");
extern "C" u32 func_00105c30() asm("func_00105c30");

// 0x002402e0 func_002402e0
void func_002402e0() asm("func_002402e0");
void func_002402e0() {
    u32 v0;
    u32 t6;
    u32 t6_0;
    u32 t6_1;
    u32 t6_2;
    v0 = func_00105c30();
    if ((v0 != 2)) {
        if (((s32)(((s32)(v0) < (s32)(3))) != 0)) {
            t6 = (v0 == 1) ? *(u32*)(&D_0035ecac) : *(u32*)(&D_0035ecb4);
            t6_1 = t6;
        } else {
            t6_0 = (v0 != 8) ? *(u32*)(&D_0035ecb4) : *(u32*)(&D_0035ecac);
            t6_1 = t6_0;
        }
        t6_2 = t6_1;
    } else {
        t6_2 = *(u32*)(&D_0035ecb0);
    }
    *(u32*)(&D_01dae6a0) = t6_2;
    return;
}
