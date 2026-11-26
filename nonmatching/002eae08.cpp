// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_003634f4 asm("D_003634f4");
extern "C" u32 D_003634f8 asm("D_003634f8");
extern "C" u32 D_003634fc asm("D_003634fc");
extern "C" u32 D_00363500 asm("D_00363500");
extern "C" f32 func_002ede48(u32, u32, u32, f32, f32) asm("func_002ede48");
extern "C" void func_00184540(u32, u32, f32, f32) asm("func_00184540");

// 0x002eae08 func_002eae08
// minilink-rodata 0x003760d8   (float literals live here in the original)
f32 func_002eae08(u32 a0, u32 a1, u32 a2) asm("func_002eae08");
f32 func_002eae08(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    func_00184540((u32)frame, a2, *(f32*)(&D_003634f4), 1.0f - *(f32*)(&D_003634f8));
    if ((a0 != (u32)frame)) {
        *(Q16*)(a0) = *(Q16*)((u32)frame);
    }
    func_002ede48((u32)frame, a2, a0, *(f32*)(&D_003634fc), *(f32*)(&D_00363500));
    if ((a0 != (u32)frame)) {
        *(Q16*)(a0) = *(Q16*)((u32)frame);
    }
    return func_002ede48((u32)frame, a2, a0, *(f32*)(&D_003634fc), *(f32*)(&D_00363500));
}
