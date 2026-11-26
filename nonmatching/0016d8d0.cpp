// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_004f62a0 asm("D_004f62a0");
extern "C" u32 func_0017d698(u32, u32, u32, f32) asm("func_0017d698");

// 0x0016d8d0 func_0016d8d0
u32 func_0016d8d0(u32 a0) asm("func_0016d8d0");
u32 func_0016d8d0(u32 a0) {
    u8 frame[16];
    u32 v0;
    v0 = func_0017d698((u32)frame, *(u32*)(a0), *(u32*)((a0 + 4)), *(f32*)((a0 + 8)));
    if (((u32)frame != (u32)&D_004f62a0)) {
        *(Q16*)((u32)&D_004f62a0) = *(Q16*)((u32)frame);
    }
    *(u32*)(a0) = (u32)&D_004f62a0;
    return v0;
}
