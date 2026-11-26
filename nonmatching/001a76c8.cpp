// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_00143a48(u32, u32) asm("func_00143a48");

// 0x001a76c8 func_001a76c8
// minilink-rodata 0x0036d5d0   (float literals live here in the original)
void func_001a76c8(u32 a0, u32 a1) asm("_ZN2YS2BG15GetFootPrintPosERKN2kn7FVectorERS2_i");
void func_001a76c8(u32 a0, u32 a1) {
    u8 frame[64];
    u32 t7;
    if (((u32)frame != a0)) {
        *(Q16*)((u32)frame) = *(Q16*)(a0);
    }
    *(f32*)(((u32)frame + 4)) = (*(f32*)(((u32)frame + 4)) - 50.0f);
    if ((((u32)frame + 0x10) != a0)) {
        *(Q16*)(((u32)frame + 0x10)) = *(Q16*)(a0);
    }
    *(f32*)(((u32)frame + 0x14)) = (*(f32*)(((u32)frame + 0x14)) + 100.0f);
    if ((((u32)frame + 0x20) != (u32)frame)) {
        *(Q16*)(((u32)frame + 0x20)) = *(Q16*)((u32)frame);
    }
    if ((((u32)frame + 0x30) != ((u32)frame + 0x10))) {
        *(Q16*)(((u32)frame + 0x30)) = *(Q16*)(((u32)frame + 0x10));
    }
    if (((s32)(func_00143a48((u32)frame + 0x20, a1)) == 0)) {
        if ((a1 != a0)) {
            *(Q16*)(a1) = *(Q16*)(a0);
        }
        t7 = 0;
    } else {
        t7 = 1;
    }
    return;
}
