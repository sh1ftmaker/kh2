// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002bc988(u32, u32, u32, u32) asm("func_002bc988");
extern "C" u32 func_002bc9a8(u32, u32, u32) asm("func_002bc9a8");

// 0x002bcbf0 func_002bcbf0
u32 func_002bcbf0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN7SE_BANK17getBackGroundBankEiRiS0_");
u32 func_002bcbf0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    *(u32*)(a4) = func_002bc988(a1, a1, a2, a3);
    *(u32*)(a3) = *(u32*)((a0 + 0x14c));
    v0 = func_002bc9a8(a0, *(u32*)((a0 + 0x14c)), *(u32*)(a4));
    *(u32*)((a0 + 0x14c)) = ((*(u32*)((a0 + 0x14c)) ^ 0x14) ? 0x14 : 0x15);
    return v0;
}
