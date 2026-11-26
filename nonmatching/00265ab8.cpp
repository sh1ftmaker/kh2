// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f020 asm("D_0035f020");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0028abe0(u32) asm("func_0028abe0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_00139510(u32) asm("func_00139510");

// 0x00265ab8 func_00265ab8
u32 func_00265ab8() asm("func_00265ab8");
u32 func_00265ab8() {
    u32 v0;
    u32 s2;
    u32 v0_0;
    v0 = func_00257770();
    if (((s32)(func_00139d78(v0)) != 0)) {
        func_00139510(v0);
    }
    s2 = 0x13;
    do {
        if (((s32)(func_00139d78(v0 + 0x5ef0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((v0 + 0x5ef0)) + 0x14))))(v0 + 0x5ef0);
        }
        v0 = (v0 + 0x1b4);
        s2 = (s2 + -1);
    } while (((s32)(s2) >= 0));
    if ((func_0028acc8(*(u32*)(&D_0035f01c)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f01c));
    }
    v0_0 = func_0028acc8(*(u32*)(&D_0035f020));
    if ((v0_0 != 0)) {
        return func_0028abe0(*(u32*)(&D_0035f020));
    } else {
        return v0_0;
    }
}
