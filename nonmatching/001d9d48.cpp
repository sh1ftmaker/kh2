// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032dfd0 asm("D_0032dfd0");

// 0x001d9d48 func_001d9d48
u32 func_001d9d48(u32 a0) asm("func_001d9d48");
u32 func_001d9d48(u32 a0) {
    u32 t3;
    u32 t5;
    u32 v0;
    t3 = *(u8*)((a0 + 1));
    t5 = *(u8*)(a0);
    v0 = *(u32*)((((t3 >> 5) << 2) + ((t5 << 3) + (u32)&D_0032dfd0)));
    return ((u32)(0) < (u32)((v0 & (1 << (t3 & 0x1f)))));
}
