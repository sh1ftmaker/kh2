// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a3570(u32) asm("func_001a3570");
extern "C" u32 func_001d6cc8(u32) asm("func_001d6cc8");

// 0x001d6da8 func_001d6da8
u32 func_001d6da8(u32 a0) asm("func_001d6da8");
u32 func_001d6da8(u32 a0) {
    u32 s0;
    u32 v0_0;
    s0 = 0;
    while ((v0_0 = func_001d6cc8(s0)), (s0 = v0_0), ((s32)(v0_0) != 0)) {
        if (((s32)(func_001a3570(*(u16*)((s0 + 2)))) <= 0)) {
            continue;
        }
        *(u16*)(a0) = *(u16*)(s0);
        a0 = (a0 + 2);
    }
    *(u16*)(a0) = 0;
    return v0_0;
}
