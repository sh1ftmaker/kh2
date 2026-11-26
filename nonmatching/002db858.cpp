// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00362908 asm("D_00362908");
extern "C" u32 func_002e7308(u32) asm("func_002e7308");
extern "C" void func_002cfeb0(u32, u32, u32, u32) asm("func_002cfeb0");

// 0x002db858 func_002db858
u32 func_002db858(u32 a0, u32 a1, u32 a2) asm("_ZN2Ti14MGHachimitsuPoC1EPKN2YS8OBJENTRYERKN2kn7FVectorEf");
u32 func_002db858(u32 a0, u32 a1, u32 a2) {
    func_002cfeb0(a0, a1, 3, a2);
    *(u32*)(a0) = (u32)&D_00362908;
    *(u32*)((a0 + 0xb14)) = 0xffffffff;
    return func_002e7308(a0 + 0xba0);
}
