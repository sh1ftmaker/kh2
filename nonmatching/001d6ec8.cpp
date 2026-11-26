// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a3570(u32) asm("func_001a3570");
extern "C" u32 func_001d6cc8(u32) asm("func_001d6cc8");

// 0x001d6ec8 func_001d6ec8
u32 func_001d6ec8() asm("_ZN2YS12SUMMON_LEVEL6GetMaxEv");
u32 func_001d6ec8() {
    u32 s0;
    u32 s1;
    u32 v0;
    s0 = 0;
    s1 = 2;
    while ((v0 = func_001d6cc8(s0)), ((s32)(v0) != 0)) {
        s0 = v0;
        s1 = (s1 + ((s32)(0) < (s32)(func_001a3570(*(u16*)((v0 + 2))))));
    }
    return ((s1 ^ 6) ? s1 : (s1 + 1));
}
