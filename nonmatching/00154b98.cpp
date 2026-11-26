// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x00154b98 func_00154b98
void func_00154b98(u32 a0, u32 a1) asm("_ZN2dk11GAUGE_ENEMY4cureEi");
void func_00154b98(u32 a0, u32 a1) {
    u8 frame[16];
    u32 s1;
    u32 s0;
    u32 sp;
    *(u32*)((a0 + 0x3cc0)) = (((s32)(*(u32*)((a0 + 0x3cc4))) < (s32)(a1)) ? *(u32*)((a0 + 0x3cc4)) : a1);
    *(u32*)((a0 + 0x3ccc)) = (((s32)(*(u32*)((a0 + 0x3cc4))) < (s32)(a1)) ? *(u32*)((a0 + 0x3cc4)) : a1);
    *(u32*)((a0 + 0x3cc8)) = (((s32)(*(u32*)((a0 + 0x3cc4))) < (s32)(a1)) ? *(u32*)((a0 + 0x3cc4)) : a1);
    if (((s32)(((s32)(((((s32)(*(u32*)((a0 + 0x3cc4))) < (s32)(a1)) ? *(u32*)((a0 + 0x3cc4)) : a1) + -1)) / 0xc8)) > 0)) {
        s1 = (a0 + 0xb58);
        s0 = ((s32)(((((s32)(*(u32*)((a0 + 0x3cc4))) < (s32)(a1)) ? *(u32*)((a0 + 0x3cc4)) : a1) + -1)) / 0xc8);
        do {
            func_00138c10(s1, 0x2c);
            s0 = (s0 + -1);
            s1 = (s1 + 0x330);
        } while (((s32)(s0) != 0));
    } else {
        sp = (u32)frame;
    }
    return;
}
