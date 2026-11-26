// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" u32 func_001dc670(u32) asm("func_001dc670");
extern "C" void func_00143860(u32, u32) asm("func_00143860");

// 0x001dfe88 func_001dfe88
// minilink-rodata 0x0036e840   (float literals live here in the original)
void func_001dfe88(u32 a0, u32 a1) asm("_ZN3ryj3PAX7MANAGER12set_bg_colorEb");
void func_001dfe88(u32 a0, u32 a1) {
    u8 frame[64];
    u32 v0;
    Q16 loc_0;
    f32 loc_4;
    u32 v0_0;
    u8 loc_30;
    u8 loc_31;
    u8 loc_32;
    f32 f20;
    f32 f21;
    f32 f22;
    v0 = func_001dc5f8(*(u32*)((a0 + 0x40)));
    if (((u32)frame != v0)) {
        loc_0 = *(Q16*)(v0);
    }
    *(f32*)(((u32)&loc_0 + 4)) = (*(f32*)(((u32)&loc_0 + 4)) + 100000.0f);
    v0_0 = func_001dc5f8(*(u32*)((a0 + 0x40)));
    if ((((u32)&loc_4 + 0xc) != v0_0)) {
        *(Q16*)(((u32)&loc_4 + 0xc)) = *(Q16*)(v0_0);
    }
    if ((((u32)&loc_4 + 0x1c) != (u32)frame)) {
        *(Q16*)(((u32)&loc_4 + 0x1c)) = loc_0;
    }
    func_00143860((u32)&loc_30, (u32)&loc_4 + 0xc);
    if (((s32)((a1 & 0xff)) != 0)) {
        f20 = (((((f32)((s32)(loc_30)) * 0.0078125f) * 0.30000001192092896f) + (((f32)((s32)(loc_31)) * 0.0078125f) * 0.5899999737739563f)) + (((f32)((s32)(loc_32)) * 0.0078125f) * 0.10999999940395355f));
        f21 = (((((f32)((s32)(loc_30)) * 0.0078125f) * 0.30000001192092896f) + (((f32)((s32)(loc_31)) * 0.0078125f) * 0.5899999737739563f)) + (((f32)((s32)(loc_32)) * 0.0078125f) * 0.10999999940395355f));
        f22 = (((((f32)((s32)(loc_30)) * 0.0078125f) * 0.30000001192092896f) + (((f32)((s32)(loc_31)) * 0.0078125f) * 0.5899999737739563f)) + (((f32)((s32)(loc_32)) * 0.0078125f) * 0.10999999940395355f));
    } else {
        f20 = ((f32)((s32)(loc_30)) * 0.0078125f);
        f21 = ((f32)((s32)(loc_31)) * 0.0078125f);
        f22 = ((f32)((s32)(loc_32)) * 0.0078125f);
    }
    *(f32*)(func_001dc670(*(u32*)((a0 + 0x40)))) = f20;
    *(f32*)((func_001dc670(*(u32*)((a0 + 0x40))) + 4)) = f21;
    *(f32*)((func_001dc670(*(u32*)((a0 + 0x40))) + 8)) = f22;
    return;
}
