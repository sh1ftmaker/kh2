// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d49350 asm("D_01d49350");
extern "C" void func_001c0490(u32) asm("func_001c0490");

// 0x001c0560 func_001c0560
void func_001c0560(u32 a0) asm("_ZN2YS12ATTACK_CHECK4ExecEv");
void func_001c0560(u32 a0) {
    u32 s0;
    s0 = 0;
    while ((a0 = (s0 == 0) ? *(u32*)(&D_01d49350) : *(u32*)((s0 + 0x50))), (s0 = a0), ((s32)(a0) != 0)) {
        func_001c0490(a0);
    }
    return;
}
