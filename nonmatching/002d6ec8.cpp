// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_00184540(u32, u32, f32, f32) asm("func_00184540");

// 0x002d6ec8 func_002d6ec8
// minilink-rodata 0x00375b60   (float literals live here in the original)
u32 func_002d6ec8(u32 a0, u32 a1, u32 a2) asm("func_002d6ec8");
u32 func_002d6ec8(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    func_00184540((u32)frame, a2, 0.800000011920929f, 0.0f);
    if ((a0 != (u32)frame)) {
        *(Q16*)(a0) = *(Q16*)((u32)frame);
    }
    *(f32*)((a0 + 8)) = 0.0f;
    return a0;
}
