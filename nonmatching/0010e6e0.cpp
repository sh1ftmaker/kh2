// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00184780(u32, u32, f32, f32, f32) asm("func_00184780");

// 0x0010e6e0 func_0010e6e0
// minilink-rodata 0x0036a504   (float literals live here in the original)
u32 func_0010e6e0(u32 a0, u32 a1, f32 fa0, f32 fa1, f32 fa2) asm("func_0010e6e0");
u32 func_0010e6e0(u32 a0, u32 a1, f32 fa0, f32 fa1, f32 fa2) {
    u32 s0;
    if (((s32)(*(u32*)((a0 + 0x810))) == 0)) {
        s0 = func_00184780(a0, a1, *(f32*)((a0 + 0x5b0)) + fa0, fa1 * 0.10000000149011612f, fa2);
        if ((s0 != func_00184780(a0, a1, *(f32*)((a0 + 0x5b0)) + fa0, fa1 * 0.8999999761581421f, fa2))) {
            return func_00184780(a0, a1, *(f32*)((a0 + 0x5b0)) + fa0, fa1 * 0.5f, fa2);
        } else {
            return s0;
        }
    } else {
        return 0;
    }
}
