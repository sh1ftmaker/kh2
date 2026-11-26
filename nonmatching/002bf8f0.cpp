// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001c3748(u32, u32) asm("func_001c3748");
extern "C" u32 func_001c3888(u32) asm("func_001c3888");
extern "C" u32 func_002f1900(u32, u32, u32) asm("func_002f1900");

// 0x002bf8f0 func_002bf8f0
void func_002bf8f0(u32 a0) asm("_ZN8worldmap6Symbol13appearEpisodeEv");
void func_002bf8f0(u32 a0) {
    u32 s0;
    u32 t7;
    u32 v0;
    u32 v0_0;
    if (((s32)(((u32)(*(u8*)((a0 + 0xae4))) < (u32)(2))) != 0)) {
        return;
    } else {
        s0 = 0;
        t7 = *(u32*)((a0 + 0xaf8));
        do {
            v0 = func_001c3748(*(u8*)((*(u32*)((a0 + 0xaf8)) + 4)), s0);
            if (((s32)(v0) == 0)) {
                return;
            }
            v0_0 = func_001c3888(v0);
            s0 = v0;
        } while ((v0_0 == 0));
        func_002f1900(a0 + 0xb04, 4, a0);
        return;
    }
}
