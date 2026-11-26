// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002f3cd8(u32, u32, u32, u32) asm("func_002f3cd8");

// 0x0013ea50 func_0013ea50
// minilink-rodata 0x0036adb0   (float literals live here in the original)
f32 func_0013ea50(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2dk7Ft4Base7calcRotERKN2kn7FMatrixERKNS1_7FVectorERiS8_");
f32 func_0013ea50(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    v0 = func_002f3cd8(a2, a1, a2, a3);
    *(u32*)(a3) = (s32)((*(f32*)(a2) * 16.0f));
    *(u32*)(a4) = (s32)((*(f32*)((a2 + 4)) * 16.0f));
    *(u32*)(a3) = (((*(s16*)((a0 + 8)) << 4) + *(u32*)(a3)) + 0x7000);
    *(u32*)(a4) = (((*(s16*)((a0 + 0xa)) << 4) + *(u32*)(a4)) + 0x7300);
    return v0;
}
