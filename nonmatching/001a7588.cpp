// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001d35e0(u32, u32, u32) asm("func_001d35e0");

// 0x001a7588 func_001a7588
u32 func_001a7588(u32 a0, u32 a1, u32 a2) asm("_ZN2YS2BG11GetCrossPosERKN2kn7FVectorES4_RS2_i");
u32 func_001a7588(u32 a0, u32 a1, u32 a2) {
    u8 frame[32];
    if (((s32)(func_001d35e0((u32)frame, a0, a1)) != 0)) {
        if ((a2 != (u32)frame)) {
            *(Q16*)(a2) = *(Q16*)((u32)frame);
        }
    }
    return *(u32*)(((u32)frame + 0x14));
}
