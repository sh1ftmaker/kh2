// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_001a7610(u32, u32, u32, f32, f32) asm("func_001a7610");

// 0x001849d8 func_001849d8(unsigned int)
// minilink-rodata 0x0036c8b8   (float literals live here in the original)
f32 lift_001849d8(u32 a0) asm("_Z13func_001849d8j");
f32 lift_001849d8(u32 a0) {
    u8 frame[16];
    u8 t7;
    t7 = ((((u64)(*(u64*)((a0 + 0x600))) >> 0x21) ^ 1) & 1);
    if (((s32)(t7) == 0)) {
        if (((s32)(func_001a7610(func_0016c028(a0), (u32)frame, (s32)((*(u64*)((a0 + 0x600)) << 0x1d)) & 0xf, 100000.0f, 200.0f)) != 0)) {
            *(f32*)((a0 + 0x5f8)) = *(f32*)(((u32)frame + 4));
            *(u64*)((a0 + 0x600)) = (*(u64*)((a0 + 0x600)) & ~((0 | ((u64)(1) << 0x21))));
        } else {
            *(f32*)((a0 + 0x5f8)) = *(f32*)((func_0016c028(a0) + 4));
        }
    }
    return *(f32*)((a0 + 0x5f8));
}
