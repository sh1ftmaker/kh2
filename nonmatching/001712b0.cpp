// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001ad990(u32, f32, f32, f32) asm("func_001ad990");

// 0x001712b0 func_001712b0
// minilink-rodata 0x0036c49c   (float literals live here in the original)
void func_001712b0(u32 a0) asm("_ZN2YS18trap_sysobj_fadeinEP8BD_VALUE");
void func_001712b0(u32 a0) {
    if (((s32)((*(u32*)((*(u32*)(a0) + 0x7f8)) & 0x10)) == 0)) {
        func_001ad990(*(u32*)(a0) + 0x82c, 0.0f, 1.0f, *(f32*)((a0 + 4)));
        return;
    } else {
        return;
    }
}
