// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d49328 asm("D_01d49328");
extern "C" u32 D_01d49348 asm("D_01d49348");
extern "C" u32 D_01d4934c asm("D_01d4934c");
extern "C" u32 D_01d49350 asm("D_01d49350");

// 0x001bff88 func_001bff88
void func_001bff88() asm("_ZN2YS12ATTACK_CHECK4InitEv");
void func_001bff88() {
    u32 t6;
    u32 t7;
    t6 = 7;
    t7 = (u32)&D_01d49328;
    do {
        *(u32*)((t7 + ((t6 - 7) * -4))) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    *(u32*)(&D_01d49348) = 0;
    *(u32*)(&D_01d4934c) = 0x100;
    *(u32*)(&D_01d49350) = 0;
    *(u32*)(((u32)&D_01d49350 + 4)) = 0;
    return;
}
