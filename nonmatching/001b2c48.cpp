// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001b2d10(u32, u32) asm("func_001b2d10");
extern "C" void func_0017c870(u32, u32, u32, f32, f32) asm("func_0017c870");

// 0x001b2c48 func_001b2c48
// minilink-rodata 0x0036d9e4   (float literals live here in the original)
void func_001b2c48(u32 a0, u32 a1, u32 a2) asm("func_001b2c48");
void func_001b2c48(u32 a0, u32 a1, u32 a2) {
    u8 frame[32];
    func_0017c870((u32)frame + 0x10, a1, a2, 0.8999999761581421f, 0.949999988079071f);
    if ((a0 != ((u32)frame + 0x10))) {
        *(Q16*)(a0) = *(Q16*)(((u32)frame + 0x10));
    }
    if ((0.0f < *(f32*)((a0 + 4)))) {
        if (((s32)(func_001b2d10(a2, a0)) != 0)) {
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(a1) + 0x14))))(a1, a2);
        }
    }
    return;
}
