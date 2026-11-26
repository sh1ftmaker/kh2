// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_002f87c0(f32) asm("func_002f87c0");
extern "C" f32 func_002f8960(u32, u32, f32) asm("func_002f8960");
extern "C" void func_00178330(u32, u32) asm("func_00178330");

// 0x001784a8 func_001784a8
// minilink-rodata 0x0036c4c8   (float literals live here in the original)
void func_001784a8(u32 a0) asm("_ZN2YS6PLAYER18_OVR_make_movementEv");
void func_001784a8(u32 a0) {
    u8 frame[16];
    Q16 loc_0;
    u32 s2;
    f32 f0;
    f32 f20;
    u32 s2_0;
    if ((0.0f < *(f32*)((*(u32*)((a0 + 0xb44)) + 0xa3c)))) {
        s2 = (a0 + 0x10);
        func_00178330((u32)&loc_0, *(u32*)((a0 + 0xb44)) + 0xa30);
        if ((s2 != (u32)frame)) {
            *(Q16*)(s2) = loc_0;
        }
        u32 cse0 = (a0 + 0x1c);
        f0 = (*(f32*)cse0 < 0.800000011920929f) ? *(f32*)((a0 + 0x110)) : *(f32*)((a0 + 0x114));
        *(f32*)cse0 = f0;
    } else {
        f20 = func_002f8960((u32)&loc_0, *(u32*)((a0 + 0xb44)) + 0xa30, *(f32*)((a0 + 0x66c)));
        func_002f87c0(*(f32*)((a0 + 0x66c)));
        *(f32*)((a0 + 0x10)) = f20;
        s2_0 = (a0 + 0x10);
        *(f32*)((s2_0 + 4)) = 0.0f;
        *(f32*)((s2_0 + 8)) = func_002f87c0(*(f32*)((a0 + 0x66c)));
        *(f32*)((s2_0 + 0xc)) = 0.0f;
    }
    return;
}
