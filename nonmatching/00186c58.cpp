// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00352130 asm("D_00352130");
extern "C" u32 func_0019c838(u32, u32, f32) asm("func_0019c838");

// 0x00186c58 func_00186c58
// minilink-rodata 0x0036c990   (float literals live here in the original)
void func_00186c58(u32 a0, u32 a1, f32 fa0) asm("func_00186c58");
void func_00186c58(u32 a0, u32 a1, f32 fa0) {
    Q16 loc_0;
    f32 f1;
    u32 t5;
    if ((func_0019c838(a0, a1, fa0) != 0)) {
        loc_0 = *(Q16*)(a1);
        f1 = *(f32*)((*(u32*)(&D_00352130) + 0x38));
        *(f32*)(((u32)&loc_0 + 4)) = 50.0f;
        *(f32*)(((u32)&loc_0 + 0xc)) = (fa0 * f1);
        t5 = *(u32*)((a0 + 0xc));
        ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(t5) + 8))))(t5, a0, (u32)&loc_0);
    }
    return;
}
