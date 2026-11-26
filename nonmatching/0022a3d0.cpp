// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0017ce10(u32, u32, u32, u32, u32, u32, u32, u32, f32) asm("func_0017ce10");

// 0x0022a3d0 func_0022a3d0
// minilink-rodata 0x003710d4   (float literals live here in the original)
f32 func_0022a3d0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7, f32 fa0) asm("_ZN2sa13MUSICAL_INPUT16createCircleSizeEifRiS1_S1_S1_S1_S1_S1_S1_Rf");
f32 func_0022a3d0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7, f32 fa0) {
    u32 loc_60;
    u32 s0;
    u32 fp;
    f32 f0;
    f32 f0_0;
    *(f32*)(s0) = ((fa0 + ((f32)((s32)(a0)) * 0.25f)) * ((90.0f / ((f32)((s32)(a0)) * 0.25f)) * 0.01745329238474369f));
    fp = *(u32*)((u32)&loc_60);
    *(f32*)(s0) = func_0017ce10(a0, a1, a2, a3, a4, a5, a6, a7, (fa0 + ((f32)((s32)(a0)) * 0.25f)) * ((90.0f / ((f32)((s32)(a0)) * 0.25f)) * 0.01745329238474369f));
    if ((fa0 < ((f32)((s32)(a0)) * 0.25f))) {
        *(u32*)(a1) = 0;
        *(u32*)(a2) = 0;
        *(u32*)(a3) = 0x40;
        *(u32*)(a4) = 0x32;
        *(u32*)(a5) = 0xffffffc0;
        *(u32*)(a6) = 0xffffffce;
        *(u32*)(a7) = 0x40;
        *(u32*)(fp) = 0x64;
        f0_0 = func_0017ce10(a0, a1, a2, a3, a4, a5, a6, a7, (fa0 + ((f32)((s32)(a0)) * 0.25f)) * ((90.0f / ((f32)((s32)(a0)) * 0.25f)) * 0.01745329238474369f));
    } else {
        if ((fa0 < (((f32)((s32)(a0)) * 0.25f) + ((f32)((s32)(a0)) * 0.25f)))) {
            *(u32*)(a1) = 0;
            *(u32*)(a2) = 0xffffffce;
            *(u32*)(a3) = 0;
            *(u32*)(a4) = 0;
            *(u32*)(a5) = 0xffffffc0;
            *(u32*)(a6) = 0xffffffce;
            *(u32*)(a7) = 0x40;
            *(u32*)(fp) = 0x64;
            f0 = (((f32)((s32)(a0)) * 0.25f) + ((f32)((s32)(a0)) * 0.25f));
        } else {
            if ((fa0 < (((f32)((s32)(a0)) * 0.25f) * 3.0f))) {
                *(u32*)(a1) = 0;
                *(u32*)(a2) = 0x32;
                *(u32*)(a3) = 0;
                *(u32*)(a4) = 0;
                *(u32*)(a5) = 0xffffffc0;
            } else {
                *(u32*)(a1) = 0;
                *(u32*)(a2) = 0xffffffce;
                *(u32*)(a3) = 0;
                *(u32*)(a4) = 0;
                *(u32*)(a5) = 0;
            }
            *(u32*)(a6) = 0xffffffce;
            *(u32*)(a7) = 0x40;
            *(u32*)(fp) = 0x32;
            f0 = (((f32)((s32)(a0)) * 0.25f) * 3.0f);
        }
        f0_0 = f0;
    }
    return f0_0;
}
