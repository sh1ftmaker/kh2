// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002924d0(u32, u32) asm("func_002924d0");
extern "C" u32 func_00292520(u32, u32, u32) asm("func_00292520");

// 0x002920c0 func_002920c0
u32 func_002920c0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_002920c0");
u32 func_002920c0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 s2;
    u32 v0;
    s2 = func_002924d0(a0, a2);
    v0 = func_002924d0(a0, a3);
    *(u32*)(a1) = ((*(u16*)((a4 + 0x18e)) - *(u8*)((s2 + 7))) + *(u8*)((v0 + 7)));
    return func_00292520(a0, *(u8*)((s2 + 7)), *(u8*)((v0 + 7)));
}
