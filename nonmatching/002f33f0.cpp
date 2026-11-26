// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002f1fa8(u32) asm("func_002f1fa8");
extern "C" u32 func_00305300(u32, u32, u32) asm("func_00305300");
extern "C" void func_00305320(u32, u32) asm("func_00305320");
extern "C" void func_00306100(u32) asm("func_00306100");
extern "C" void func_00306168(u32) asm("func_00306168");

// 0x002f33f0 func_002f33f0
u32 func_002f33f0(u32 a0) asm("func_002f33f0");
u32 func_002f33f0(u32 a0) {
    u32 s0;
    u32 s2;
    u32 s2_0;
    u32 s0_1;
    u32 s2_2;
    if (((s32)(a0) == 0)) {
        s0 = func_002f1fa8(a0);
        s2 = *(u32*)((func_002f1fa8(a0) + 8));
        func_00306100(2);
        func_00305320(2, *(u32*)((s0 + 0xc)));
        *(u32*)((s0 + 8)) = 0;
        *(u32*)((s0 + 0xc)) = 0;
        s2_2 = s2;
    } else {
        s2_0 = *(u32*)((func_002f1fa8(a0) + 8));
        s0_1 = func_002f1fa8(a0);
        if ((s2_0 != 0)) {
            func_00306100(2);
            func_00305320(2, *(u32*)((s0_1 + 0xc)));
            *(u32*)((s0_1 + 8)) = a0;
        } else {
            *(u32*)((func_002f1fa8(a0) + 8)) = a0;
        }
        *(u32*)((s0_1 + 0xc)) = func_00305300(2, a0, 0xffffffff);
        func_00306168(2);
        s2_2 = s2_0;
    }
    return s2_2;
}
