// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352288 asm("D_00352288");
extern "C" f32 func_00158a90(u32) asm("func_00158a90");
extern "C" void func_00177dc8(u32, u32, u32, u32, u32) asm("func_00177dc8");

// 0x001cf5b0 func_001cf5b0
// minilink-rodata 0x0036e320   (float literals live here in the original)
f32 func_001cf5b0(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001cf5b0");
f32 func_001cf5b0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 t6;
    u32 t7;
    func_00177dc8(a0, a1, 0xb, a2, a3);
    *(u32*)(a0) = (u32)&D_00352288;
    *(f32*)((a0 + 0xb70)) = 0.0f;
    *(f32*)((a0 + 0xb80)) = 0.0f;
    t6 = (a0 + 0xb70);
    *(f32*)((t6 + 4)) = -200.0f;
    *(f32*)((t6 + 0xc)) = 1.0f;
    t7 = (a0 + 0xb80);
    *(f32*)((t7 + 0xc)) = 1.0f;
    *(f32*)((t6 + 8)) = 200.0f;
    *(f32*)((t7 + 4)) = 0.0f;
    *(f32*)((t7 + 8)) = -100.0f;
    *(u32*)((a0 + 0xba0)) = 0;
    *(f32*)((a0 + 0xb90)) = 0.05235987529158592f;
    *(f32*)((a0 + 0xb94)) = 0.7853981256484985f;
    *(u32*)((a0 + 0xba4)) = 0;
    *(f32*)((a0 + 0xb98)) = 0.01745329238474369f;
    *(f32*)((a0 + 0xb9c)) = 0.2617993652820587f;
    return func_00158a90(a0);
}
