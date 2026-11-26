// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016c028(u32, u32) asm("func_0016c028");

// 0x00159ce0 func_00159ce0
// minilink-rodata 0x0036b378   (float literals live here in the original)
void func_00159ce0(u32 a0, u32 a1) asm("func_00159ce0");
void func_00159ce0(u32 a0, u32 a1) {
    u32 v0;
    v0 = func_0016c028(*(u32*)((a0 + 0x44)), a1);
    if ((a1 != v0)) {
        *(Q16*)(a1) = *(Q16*)(v0);
    }
    *(f32*)((a1 + 4)) = (*(f32*)((a1 + 4)) - 170.0f);
    return;
}
