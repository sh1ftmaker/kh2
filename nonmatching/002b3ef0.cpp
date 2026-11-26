// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");

// 0x002b3ef0 func_002b3ef0
void func_002b3ef0(u32 a0) asm("func_002b3ef0");
void func_002b3ef0(u32 a0) {
    u32 a1_0;
    u32 s0;
    if ((*(u32*)(a0) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(a0)) + 0x10))))(*(u32*)(a0));
        *(u32*)(a0) = 0;
    }
    if (((s32)(*(u32*)((a0 + 4))) != 0)) {
        a1_0 = *(u32*)((a0 + 4));
        s0 = (*(u32*)((a0 + 4)) + (*(u32*)((*(u32*)((a0 + 4)) + -4)) * 0x4c));
        for (;;) {
            s0 = (s0 + -0x4c);
            if ((a1_0 == s0)) break;
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(s0) + 0xc))))(s0, a1_0);
            a1_0 = *(u32*)((a0 + 4));
        }
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a1_0 + -4);
        *(u32*)((a0 + 4)) = 0;
    }
    if (((s32)(*(u32*)((a0 + 8))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 8))) + 0x10))))(*(u32*)((a0 + 8)));
        *(u32*)((a0 + 8)) = 0;
    }
    return;
}
