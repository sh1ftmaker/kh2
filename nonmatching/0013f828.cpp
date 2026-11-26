// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016c028(u32) asm("func_0016c028");

// 0x0013f828 func_0013f828
// minilink-rodata 0x0036adb8   (float literals live here in the original)
void func_0013f828(u32 a0) asm("func_0013f828");
void func_0013f828(u32 a0) {
    u32 v0;
    v0 = func_0016c028(*(u32*)((a0 + 0x44)));
    if (((a0 + 0x80) != v0)) {
        *(Q16*)((a0 + 0x80)) = *(Q16*)(v0);
    }
    *(f32*)((a0 + 0x84)) = (*(f32*)((a0 + 0x84)) - 170.0f);
    return;
}
