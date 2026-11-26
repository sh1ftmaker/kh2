// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003511b8 asm("D_003511b8");
extern "C" u32 D_003511bc asm("D_003511bc");
extern "C" u32 D_003511c2 asm("D_003511c2");
extern "C" u32 D_003a99f0 asm("D_003a99f0");
extern "C" u32 D_01d48cb8 asm("D_01d48cb8");

// 0x001b8228 func_001b8228
void func_001b8228() asm("func_001b8228");
void func_001b8228() {
    *(u32*)(&D_01d48cb8) = (u32)&D_003a99f0;
    *(u32*)(&D_003511b8) = (u32)&D_003a99f0;
    *(u32*)(&D_003511bc) = ((u32)&D_003a99f0 + 0x4000);
    *(u8*)(&D_003511c2) = 0;
}
