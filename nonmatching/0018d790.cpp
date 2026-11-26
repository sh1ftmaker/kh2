// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c60cd8 asm("D_01c60cd8");
extern "C" u32 D_01c60ce0 asm("D_01c60ce0");

// 0x0018d790 u_call0_0018d790()
void lift_0018d790() asm("_Z16u_call0_0018d790v");
void lift_0018d790() {
    u32 a0_0;
    u32 s1;
    u32 s0;
    if (((s32)(*(u32*)(&D_01c60cd8)) != 0)) {
        a0_0 = *(u32*)(&D_01c60cd8);
        s1 = *(u32*)(&D_01c60cd8);
        do {
            s0 = (s1 == 0) ? *(u32*)(&D_01c60cd8) : *(u32*)((s1 + 0xc0));
            s1 = s0;
            if (((s32)(a0_0) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(a0_0) + 4))))(a0_0);
            }
            a0_0 = s0;
        } while (((s32)(s0) != 0));
    }
    *(u8*)(&D_01c60ce0) = 0;
    return;
}
