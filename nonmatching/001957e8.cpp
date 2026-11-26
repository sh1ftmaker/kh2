// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352130 asm("D_00352130");

// 0x001957e8 func_001957e8
// minilink-rodata 0x0036d034   (float literals live here in the original)
f32 func_001957e8(u32 a0) asm("func_001957e8");
f32 func_001957e8(u32 a0) {
    *(f32*)(a0) = 2.0f;
    *(f32*)((a0 + 4)) = 8.0f;
    *(f32*)((a0 + 8)) = 160.0f;
    *(f32*)((a0 + 0xc)) = 0.19634954631328583f;
    *(f32*)((a0 + 0x10)) = *(f32*)((*(u32*)(&D_00352130) + 0x14));
    *(u32*)((a0 + 0x14)) = 0;
    *(f32*)((a0 + 0x18)) = 0.949999988079071f;
    *(u32*)((a0 + 0x1c)) = 0;
    *(u32*)((a0 + 0x20)) = 0;
    return 0.949999988079071f;
}
