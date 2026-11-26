// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_002eb6f8(u32, u32, f32) asm("func_002eb6f8");
extern "C" void func_0017c4c8(u32, u32, u32) asm("func_0017c4c8");

// 0x002ec9d0 func_002ec9d0
u32 func_002ec9d0(u32 a0, u32 a1, u32 a2) asm("_ZN2Ts21ACTION_SKATEBOARDEDGE4JumpEPN2YS3OBJERKN2kn7FVectorEi");
u32 func_002ec9d0(u32 a0, u32 a1, u32 a2) {
    Q16 loc_0;
    u32 v0;
    loc_0 = *(Q16*)(a1);
    func_0017c4c8(a0, (u32)&loc_0, a2);
    *(u8*)((a0 + 0x514)) = 8;
    v0 = func_002eb6f8(a0, a2, 0.0f);
    *(u32*)((a0 + 0x100)) = (a2 + 1);
    *(u32*)((a0 + 0x104)) = (a2 + 2);
    return v0;
}
