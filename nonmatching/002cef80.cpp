// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" f32 func_002cec08(u32, u32) asm("func_002cec08");
extern "C" void func_0011b6a8(u32) asm("func_0011b6a8");
extern "C" void func_001444c8(u32, u32, u32) asm("func_001444c8");
extern "C" void func_001449a8(u32, u32) asm("func_001449a8");

// 0x002cef80 func_002cef80
// minilink-rodata 0x00375968   (float literals live here in the original)
f32 func_002cef80(u32 a0, u32 a1) asm("_ZN2Ti8MiniGame16prize_is_visibleEPN2YS14PRIZEEFFECT_POE");
f32 func_002cef80(u32 a0, u32 a1) {
    u8 frame[128];
    *(f32*)(((u32)frame + 0x1c)) = 0.0f;
    *(f32*)((u32)frame) = -100.0f;
    *(f32*)(((u32)frame + 8)) = -100.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    *(f32*)(((u32)frame + 4)) = -100.0f;
    *(f32*)(((u32)frame + 0x10)) = 100.0f;
    *(f32*)(((u32)frame + 0x14)) = 100.0f;
    *(f32*)(((u32)frame + 0x18)) = 100.0f;
    func_001444c8((u32)frame + 0x20, (u32)frame, (u32)frame + 0x10);
    func_0011b6a8((u32)frame + 0x40);
    if ((((u32)frame + 0x70) != a1)) {
        *(Q16*)(((u32)frame + 0x70)) = *(Q16*)(a1);
    }
    *(f32*)(((u32)frame + 0x7c)) = 1.0f;
    func_001449a8((u32)frame + 0x20, (u32)frame + 0x40);
    return func_002cec08(*(u32*)(&D_00361f60), (u32)frame + 0x20);
}
