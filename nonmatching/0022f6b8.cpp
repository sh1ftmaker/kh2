// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0016aeb8(u32, u32, f32) asm("func_0016aeb8");
extern "C" f32 func_0016b070(u32, u32) asm("func_0016b070");
extern "C" u32 func_002283b0(u32, u32) asm("func_002283b0");

// 0x0022f6b8 func_0022f6b8
// minilink-rodata 0x00371218   (float literals live here in the original)
void func_0022f6b8(u32 a0, u32 a1) asm("_ZN2sa5EVENT7set_rotEPN2YS3OBJERN2kn7FVectorE");
void func_0022f6b8(u32 a0, u32 a1) {
    if (((s32)((*(u32*)((a0 + 0x588)) & 0x800000)) != 0)) {
        *(f32*)(a1) = (*(f32*)(a1) * 0.01745329238474369f);
        *(f32*)((a1 + 8)) = -((*(f32*)((a1 + 8)) * 0.01745329238474369f));
        *(f32*)((a1 + 4)) = ((*(f32*)((a1 + 4)) + 180.0f) * 0.01745329238474369f);
        func_0016b070(a0, a1);
        return;
    } else {
        if ((*(f32*)(a1) == 0.0f)) {
            if (!((*(f32*)((a1 + 8)) == 0.0f))) {
                if (((s32)(func_002283b0(a0, a1)) == 0)) {
                    func_0016aeb8(a0, a1, *(f32*)((a1 + 4)) * 0.01745329238474369f);
                    return;
                } else {
                    *(f32*)(a1) = (*(f32*)(a1) * 0.01745329238474369f);
                    *(f32*)((a1 + 8)) = -((*(f32*)((a1 + 8)) * 0.01745329238474369f));
                    *(f32*)((a1 + 4)) = ((*(f32*)((a1 + 4)) + 180.0f) * 0.01745329238474369f);
                    func_0016b070(a0, a1);
                    return;
                }
            } else {
                func_0016aeb8(a0, a1, *(f32*)((a1 + 4)) * 0.01745329238474369f);
                return;
            }
        } else {
            if (((s32)(func_002283b0(a0, a1)) == 0)) {
                func_0016aeb8(a0, a1, *(f32*)((a1 + 4)) * 0.01745329238474369f);
                return;
            } else {
                *(f32*)(a1) = (*(f32*)(a1) * 0.01745329238474369f);
                *(f32*)((a1 + 8)) = -((*(f32*)((a1 + 8)) * 0.01745329238474369f));
                *(f32*)((a1 + 4)) = ((*(f32*)((a1 + 4)) + 180.0f) * 0.01745329238474369f);
                func_0016b070(a0, a1);
                return;
            }
        }
    }
}
