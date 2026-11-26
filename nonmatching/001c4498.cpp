// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00351618 asm("D_00351618");
extern "C" u32 D_01d49590 asm("D_01d49590");
extern "C" void func_001db8f8(u32) asm("func_001db8f8");

// 0x001c4498 func_001c4498
// minilink-rodata 0x0036de34   (float literals live here in the original)
f32 func_001c4498(u32 a0) asm("func_001c4498");
f32 func_001c4498(u32 a0) {
    u32 t5;
    f32 f2;
    f32 f1;
    f32 f0;
    u32 t6;
    func_001db8f8(a0);
    *(u32*)(a0) = (u32)&D_00351618;
    t5 = 0;
    f2 = 0.125f;
    f1 = 6.2831854820251465f;
    t6 = (u32)&D_01d49590;
    do {
        *(f32*)(((t6 + (t5 * 0x10)) + 0xc)) = (((f32)((s32)(t5)) * f2) * f1);
        f0 = (((f32)((s32)(t5)) * f2) * f1);
        t5 = (t5 + 1);
    } while (((s32)(((s32)(t5) < (s32)(8))) != 0));
    return f0;
}
