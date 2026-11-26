// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001e3650(u32) asm("func_001e3650");
extern "C" u32 func_001e3660(u32, u32) asm("func_001e3660");
extern "C" u32 func_001e38f8(u32, u32, u32, u32) asm("func_001e38f8");
extern "C" u32 func_001e3a88(u32, u32, u32, u32) asm("func_001e3a88");

// 0x001e3c18 func_001e3c18
u32 func_001e3c18(u32 a0) asm("func_001e3c18");
u32 func_001e3c18(u32 a0) {
    u32 s1;
    u32 s2;
    s1 = *(s16*)((a0 + 0x9e));
    s2 = *(s16*)((a0 + 0x9c));
    return func_001e3a88(func_001e38f8(func_001e3660(func_001e3650(*(u32*)((a0 + 0x88))), 2), *(u32*)((a0 + 0x8c)) + 0xc0, s2, s1), *(u32*)((a0 + 0x8c)) + 0xd0, s2, s1);
}
