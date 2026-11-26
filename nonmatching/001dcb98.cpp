// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001dc670(u32) asm("func_001dc670");

// 0x001dcb98 func_001dcb98
// minilink-rodata 0x0036e7e8   (float literals live here in the original)
void func_001dcb98(u32 a0, u32 a1) asm("_ZN3ryj6EFFECT9set_colorERKN2YS5COLORE");
void func_001dcb98(u32 a0, u32 a1) {
    u8 frame[16];
    f32 f1;
    u32 t5;
    u32 t4;
    u32 v0;
    f1 = 0.0078125f;
    t5 = 0;
    t4 = (u32)frame;
    do {
        *(f32*)((t4 + (t5 * 4))) = ((f32)((s32)(*(u8*)((a1 + t5)))) * f1);
        t5 = (t5 + 1);
    } while (((s32)(((s32)(t5) < (s32)(4))) != 0));
    v0 = func_001dc670(a0);
    if ((v0 != (u32)frame)) {
        *(Q16*)(v0) = *(Q16*)((u32)frame);
    }
    return;
}
