// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036a940 asm("D_0036a940");

// 0x0011f1a8 func_0011f1a8
void func_0011f1a8(u32 a0, u32 a1) asm("func_0011f1a8");
void func_0011f1a8(u32 a0, u32 a1) {
    u8 frame[16];
    u32 v0;
    u32 t5;
    u32 t6;
    u32 v0_0;
    u32 sp;
    v0 = ((u32(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 0x30))))(a0, a1);
    t5 = (v0 & 7);
    if (((s32)(((s32)(v0) >> 3)) > 0)) {
        t6 = *(u64*)(&D_0036a940);
        v0_0 = ((s32)(v0) >> 3);
        do {
            *(u64*)(a1) = ((*(u64*)(a1) & t6) >> 4);
            a1 = (a1 + 8);
            v0_0 = (v0_0 + -1);
        } while (((s32)(v0_0) != 0));
    } else {
        sp = (u32)frame;
    }
    if (((s32)(t5) != 0)) {
        do {
            *(u8*)(a1) = ((s32)((*(s8*)(a1) & 0xf0)) >> 4);
            a1 = (a1 + 1);
            t5 = (t5 + -1);
        } while (((s32)(t5) != 0));
    }
    return;
}
