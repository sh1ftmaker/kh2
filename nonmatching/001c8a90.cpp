// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d49960 asm("D_01d49960");
extern "C" u32 D_01d49968 asm("D_01d49968");

// 0x001c8a90 func_001c8a90
void func_001c8a90() asm("_ZN2YS6SUMMON4InitEv");
void func_001c8a90() {
    *(u32*)(&D_01d49960) = 0;
    *(u32*)(((u32)&D_01d49960 + 4)) = 0;
    *(u32*)(&D_01d49968) = 0;
}
