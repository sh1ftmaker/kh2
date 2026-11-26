// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001ab598(u32, u32, u32, u32, u32, u32) asm("func_001ab598");

// 0x001aa940 func_001aa940
u32 func_001aa940(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZNK2YS7MESSAGE12get_max_sizeEPKNS_4FONTENS0_5STYLEERNS0_4SIZEE");
u32 func_001aa940(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    return func_001ab598(*(u32*)(a0), a0 + 0x40, a1, a2, a3, a4);
}
