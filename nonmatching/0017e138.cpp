// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352130 asm("D_00352130");
extern "C" u32 func_00177860(u32) asm("func_00177860");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");

// 0x0017e138 func_0017e138
// minilink-rodata 0x0036c578   (float literals live here in the original)
f32 func_0017e138(u32 a0, u32 a1) asm("_ZN2YS6FRIEND10stun_recovEi");
f32 func_0017e138(u32 a0, u32 a1) {
    u32 s1;
    f32 f0;
    f32 f0_0;
    *(u32*)((a0 + 0x7f8)) = (*(u32*)((a0 + 0x7f8)) & 0xfffffffb);
    s1 = (a0 + 0x140);
    if ((*(u32*)((s1 + 0x14)) == 0x36)) {
        func_0017f488(s1, 0x37, 8.0f, 0.0f);
        func_0017f5e0(s1, 0, 0, 0.0f, 0.0f);
    }
    f0 = ((s32)((*(u32*)((func_00177860(a0) + 0x10)) & 8)) == 0) ? *(f32*)((*(u32*)(&D_00352130) + 0x54)) : 1.0f;
    f0_0 = ((f32)((s32)(a1)) * f0);
    return f0_0;
}
