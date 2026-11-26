// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01d498d0 asm("D_01d498d0");
extern "C" f32 func_00143928(u32) asm("func_00143928");

// 0x001c7148 func_001c7148
// minilink-rodata 0x0036df90   (float literals live here in the original)
void func_001c7148(u32 a0) asm("func_001c7148");
void func_001c7148(u32 a0) {
    u32 a0_0;
    u32 t5;
    if ((a0 != (u32)&D_01d498d0)) {
        *(Q16*)((u32)&D_01d498d0) = *(Q16*)(a0);
    }
    *(f32*)(((u32)&D_01d498d0 + 4)) = (*(f32*)(((u32)&D_01d498d0 + 4)) + *(f32*)((*(u32*)((a0 + 0x4c)) + 4)));
    *(f32*)(((u32)&D_01d498d0 + 0xc)) = 1.0f;
    a0_0 = (a0 + 0x30);
    t5 = ((u32)&D_01d498d0 + 0x10);
    if ((a0_0 != t5)) {
        *(Q16*)(t5) = *(Q16*)(a0_0);
    }
    *(f32*)(((u32)&D_01d498d0 + 0x1c)) = 1.0f;
    func_00143928((u32)&D_01d498d0);
    return;
}
