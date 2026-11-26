// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001b2d10(u32, u32) asm("func_001b2d10");
extern "C" void func_0019fbe0(u32, u32, u32) asm("func_0019fbe0");

// 0x001c8fe8 func_001c8fe8
void func_001c8fe8(u32 a0, u32 a1, u32 a2) asm("func_001c8fe8");
void func_001c8fe8(u32 a0, u32 a1, u32 a2) {
    u8 frame[32];
    func_0019fbe0((u32)frame + 0x10, a1, a2);
    if ((a0 != ((u32)frame + 0x10))) {
        *(Q16*)(a0) = *(Q16*)(((u32)frame + 0x10));
    }
    if ((0.0f < *(f32*)((a0 + 4)))) {
        if (((s32)(func_001b2d10(a2, a0)) != 0)) {
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(a1) + 0x14))))(a1, a2);
        }
    }
    return;
}
