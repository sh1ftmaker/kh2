// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_0016aef0(u32, u32) asm("func_0016aef0");

// 0x002d4a30 func_002d4a30
// minilink-rodata 0x00375af4   (float literals live here in the original)
void func_002d4a30(u32 a0, u32 a1) asm("func_002d4a30");
void func_002d4a30(u32 a0, u32 a1) {
    u8 frame[16];
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    *(f32*)((u32)frame) = 1.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    func_0016aef0(a0, (u32)frame);
    if (((a0 + 0x540) != a1)) {
        *(Q16*)((a0 + 0x540)) = *(Q16*)(a1);
    }
    *(f32*)((a0 + 0x548)) = *(f32*)((a0 + 0xbf0));
    return;
}
