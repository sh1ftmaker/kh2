// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001e0e40(u32) asm("func_001e0e40");

// 0x001e1d20 func_001e1d20
// minilink-rodata 0x0036e91c   (float literals live here in the original)
f32 func_001e1d20(u32 a0) asm("func_001e1d20");
f32 func_001e1d20(u32 a0) {
    f32 f0;
    f32 f0_0;
    if ((*(f32*)((a0 + 0xde8)) < 140.0f)) {
        *(f32*)((a0 + 0xde4)) = 25.0f;
        f0_0 = 25.0f;
    } else {
        f0 = *(f32*)((a0 + 0xde4));
        if ((0.25f <= *(f32*)((a0 + 0xde4)))) {
            do {
                if (((s32)(*(u32*)((a0 + 0xdec))) <= 0)) {
                    *(u32*)((a0 + 0xdc0)) = 2;
                    *(u32*)((a0 + 0xde4)) = 0;
                    *(u32*)((a0 + 0xde8)) = 0;
                    return f0;
                }
                *(u32*)((a0 + 0xdec)) = (*(u32*)((a0 + 0xdec)) + -1);
                func_001e0e40(*(u32*)((a0 + 0xdc8)) + ((*(u32*)((a0 + 0xdec)) + -1) * 0x30));
                *(f32*)((a0 + 0xde4)) = (*(f32*)((a0 + 0xde4)) - 0.25f);
                f0 = (*(f32*)((a0 + 0xde4)) - 0.25f);
            } while ((0.25f <= (*(f32*)((a0 + 0xde4)) - 0.25f)));
        }
        f0_0 = f0;
    }
    return f0_0;
}
