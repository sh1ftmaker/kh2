// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00138c10(u32, u32, u8, u8, u32, u8, u32) asm("func_00138c10");

// 0x00289038 func_00289038
void func_00289038(u32 a0, u32 a1, u8 a2, u8 a3, u32 a4, u8 a5, u32 a6) asm("_ZN2Tz6Select9SetSeqNumEibbibi");
void func_00289038(u32 a0, u32 a1, u8 a2, u8 a3, u32 a4, u8 a5, u32 a6) {
    u32 s0;
    u32 t6;
    u32 t2;
    s0 = *(u32*)(((a1 << 2) + *(u32*)((a0 + 0x28))));
    if (((s32)(s0) != 0)) {
        t6 = (a2 != 0) ? *(u32*)((a0 + 0x30)) : *(u32*)((a0 + 0x2c));
        func_00138c10(s0, *(s16*)(((a4 << 1) + (t6 + (a1 << 3)))), a2, a3, a4, a5, a6);
        t2 = ((s32)(a5) != 0) ? *(s16*)(((a6 << 1) + (t6 + (a1 << 3)))) : a6;
        *(u32*)((s0 + 0x188)) = t2;
    }
    return;
}
