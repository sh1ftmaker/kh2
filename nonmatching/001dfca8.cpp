// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352b50 asm("D_00352b50");
extern "C" u32 func_001946f0(u32, u8) asm("func_001946f0");
extern "C" u32 func_001dc670(u32) asm("func_001dc670");

// 0x001dfca8 func_001dfca8
// minilink-rodata 0x0036e810   (float literals live here in the original)
void func_001dfca8(u32 a0, u8 a1) asm("_ZN3ryj3PAX7MANAGER13set_obj_colorEb");
void func_001dfca8(u32 a0, u8 a1) {
    u32 v0;
    f32 f20;
    f32 f21;
    f32 f22;
    f32 acc;
    f32 f22_0;
    if ((*(u32*)(&D_00352b50) == 1)) {
        v0 = func_001946f0(*(u32*)((a0 + 0x48)), a1);
        f20 = ((f32)((s32)(*(u8*)((v0 + 1)))) * 0.0078125f);
        f21 = ((f32)((s32)(*(u8*)(v0))) * 0.0078125f);
        f22 = ((f32)((s32)(*(u8*)((v0 + 2)))) * 0.0078125f);
    } else {
        f20 = 1.0f;
        f21 = 1.0f;
        f22 = 1.0f;
    }
    if (((s32)(a1) != 0)) {
        acc = (f21 * 0.30000001192092896f);
        f22_0 = ((acc + (f20 * 0.5899999737739563f)) + (f22 * 0.10999999940395355f));
        f20 = f22_0;
        f21 = f22_0;
        f22 = f22_0;
    }
    *(f32*)(func_001dc670(*(u32*)((a0 + 0x40)))) = f21;
    *(f32*)((func_001dc670(*(u32*)((a0 + 0x40))) + 4)) = f20;
    *(f32*)((func_001dc670(*(u32*)((a0 + 0x40))) + 8)) = f22;
    return;
}
