// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" void func_00139510(u32) asm("func_00139510");

// 0x001515b0 func_001515b0
void func_001515b0(u32 a0) asm("func_001515b0");
void func_001515b0(u32 a0) {
    u32 s1;
    u32 s2;
    u32 s2_0;
    if (((s32)(func_00139d78(a0)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
    }
    if (((s32)(func_00139d78(a0 + 0x30)) != 0)) {
        func_00139510(a0 + 0x30);
    }
    s1 = a0;
    s2 = 9;
    do {
        if (((s32)(func_00139d78(s1 + 0x1f0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s1 + 0x1f0)) + 0x14))))(s1 + 0x1f0);
        }
        s1 = (s1 + 0x198);
        s2 = (s2 + -1);
    } while (((s32)(s2) >= 0));
    s2_0 = 3;
    do {
        if (((s32)(func_00139d78(a0 + 0x11e0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((a0 + 0x11e0)) + 0x14))))(a0 + 0x11e0);
        }
        a0 = (a0 + 0x198);
        s2_0 = (s2_0 + -1);
    } while (((s32)(s2_0) >= 0));
    return;
}
