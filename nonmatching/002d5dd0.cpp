// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00362428 asm("D_00362428");
extern "C" u32 func_002cff98(u32) asm("func_002cff98");
extern "C" void func_002e7328(u32) asm("func_002e7328");

// 0x002d5dd0 func_002d5dd0
u32 func_002d5dd0(u32 a0) asm("_ZN2Ti11MGOarashiPoC1EPKN2YS8OBJENTRYERKN2kn7FVectorEf");
u32 func_002d5dd0(u32 a0) {
    *(u32*)(a0) = (u32)&D_00362428;
    func_002e7328(a0 + 0xb38);
    return func_002cff98(a0);
}
