// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_003509a0 asm("D_003509a0");
extern "C" u32 D_003638d0 asm("D_003638d0");

// 0x001a7a48 func_001a7a48
// minilink-rodata 0x0036d5e0   (float literals live here in the original)
void func_001a7a48(u32 a0, u32 a1, u32 a2, f32 fa0, f32 fa1) asm("func_001a7a48");
void func_001a7a48(u32 a0, u32 a1, u32 a2, f32 fa0, f32 fa1) {
    u32 t6;
    f32 f3;
    u32 t6_0;
    u32 t5;
    f32 f1;
    u32 t7;
    *(Q16*)(a0) = *(Q16*)(a1);
    *(f32*)((a0 + 0x10)) = fa0;
    t6 = *(u32*)(&D_003638d0);
    *(u32*)(&D_003638d0) = (t6 * 0x10dcd);
    f3 = (f32)((t6 * 0x10dcd));
    *(u32*)((a0 + 0x20)) = a2;
    *(u32*)((a0 + 0x1c)) = 0;
    *(f32*)((a0 + 0x14)) = (fa0 + ((f3 * 2.3283064365386963e-10f) * (fa1 - fa0)));
    t6_0 = *(u32*)(&D_003509a0);
    t5 = *(u32*)(&D_003638d0);
    *(u32*)(&D_003638d0) = (t5 * 0x10dcd);
    f1 = (f32)((t5 * 0x10dcd));
    *(f32*)((a0 + 0x18)) = (((f32)((s32)((((s32)((t6_0 & 4)) >> 2) | (t6_0 << 1)))) * 0.7853981852531433f) + ((f1 * 2.3283064365386963e-10f) * 0.7853981852531433f));
    t7 = *(u32*)(&D_003509a0);
    *(u32*)(&D_003509a0) = ((t7 + 1) - (((s32)((((s32)((t7 + 1)) < (s32)(0)) ? (t7 + 8) : (t7 + 1))) >> 3) << 3));
    return;
}
