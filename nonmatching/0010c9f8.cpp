// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_002f87c0(f32) asm("func_002f87c0");
extern "C" f32 func_002f8960(u32, f32, f32, f32, f32, f32) asm("func_002f8960");
extern "C" u32 func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_001b2210(u32, u32, f32, f32) asm("func_001b2210");

// 0x0010c9f8 func_0010c9f8
// minilink-rodata 0x0036a458   (float literals live here in the original)
f32 func_0010c9f8(u32 a0, f32 fa0, f32 fa1, f32 fa2, f32 fa3, f32 fa4) asm("_ZN2YS11TEST_ACTION9ActionHopEi");
f32 func_0010c9f8(u32 a0, f32 fa0, f32 fa1, f32 fa2, f32 fa3, f32 fa4) {
    f32 f24;
    Q16 loc_0;
    f32 loc_c;
    u32 v0;
    f24 = (*(f32*)((a0 + 0x55c)) + (fa0 * 0.01745329238474369f));
    *(f32*)(&loc_0) = func_002f8960(a0, *(f32*)((a0 + 0x55c)) + (fa0 * 0.01745329238474369f), fa1, fa2, fa3, fa4);
    func_002f87c0(f24);
    *(f32*)(((u32)&loc_0 + 4)) = fa1;
    *(f32*)(((u32)&loc_0 + 8)) = func_002f87c0(f24);
    *(f32*)(((u32)&loc_0 + 0xc)) = fa2;
    *(Q16*)(((u32)&loc_c + 4)) = loc_0;
    func_001b2210(a0, (u32)&loc_c + 4, fa4, fa3);
    v0 = func_0017f488(a0 + 0x140, 3, 0.0f, 0.0f);
    *(u32*)((a0 + 0x100)) = 4;
    *(u32*)((a0 + 0x104)) = 5;
    return v0;
}
