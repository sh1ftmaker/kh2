// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_001849d8(u32) asm("func_001849d8");
extern "C" u32 func_0016c028(u32, u32) asm("func_0016c028");

// 0x001b2d10 func_001b2d10
// minilink-rodata 0x0036d9ec   (float literals live here in the original)
void func_001b2d10(u32 a0, u32 a1) asm("func_001b2d10");
void func_001b2d10(u32 a0, u32 a1) {
    Q16 loc_0;
    f32 f20;
    loc_0 = *(Q16*)(func_0016c028(a0, a1));
    f20 = (*(f32*)(((u32)&loc_0 + 4)) + *(f32*)((a1 + 4)));
    if (((func_001849d8(a0) - 100.0f) <= f20)) {
        *(u32*)((a1 + 4)) = 0;
    } else {
        if ((*(f32*)((a0 + 0xe0)) <= f20)) {
            *(f32*)((a1 + 4)) = (*(f32*)((a0 + 0xe0)) - *(f32*)(((u32)&loc_0 + 4)));
        }
    }
    return;
}
