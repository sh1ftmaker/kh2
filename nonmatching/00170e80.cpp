// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dc9c asm("D_0034dc9c");
extern "C" u32 D_0034dca0 asm("D_0034dca0");
extern "C" u32 D_004fa440 asm("D_004fa440");

// 0x00170e80 func_00170e80
u32 func_00170e80() asm("_ZN2YS10CACHE_BUFF11GetFreeSizeEv");
u32 func_00170e80() {
    u32 t2;
    u32 t4;
    u32 v0;
    u32 t5;
    t2 = (u32)&D_004fa440;
    t4 = 0;
    v0 = *(u32*)(&D_0034dc9c);
    while ((t5 = ((s32)(t4) != 0) ? *(u32*)((t4 + 0x3c)) : *(u32*)(&D_0034dca0)), (t4 = t5), ((s32)(t5) != 0)) {
        if (((s32)((((s32)(*(u32*)((t5 + 0x28))) < (s32)(0x2710)) ^ 1)) != 0)) {
            continue;
        }
        if (((s32)(*(u32*)((t5 + 0x28))) < 0)) {
            continue;
        }
        t2 = (*(u32*)((t5 + 0x30)) + *(u32*)((t5 + 0x2c)));
    }
    return (v0 - t2);
}
