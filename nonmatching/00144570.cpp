// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x00144570 func_00144570
f32 func_00144570(u32 a0, u32 a1) asm("func_00144570");
f32 func_00144570(u32 a0, u32 a1) {
    u8 frame[16];
    f32 f1;
    f32 f0;
    f32 f2;
    f32 f3;
    if (((u32)frame != a1)) {
        *(Q16*)((u32)frame) = *(Q16*)(a1);
    }
    f1 = *(f32*)((u32)frame);
    f0 = *(f32*)((a1 + 0x10));
    f2 = *(f32*)(((u32)frame + 4));
    f3 = *(f32*)(((u32)frame + 8));
    *(f32*)((a0 + 0xc)) = (f1 + f0);
    *(f32*)((a0 + 0x10)) = (f2 + f0);
    *(f32*)((a0 + 0x14)) = (f3 + f0);
    *(f32*)(a0) = (f1 - f0);
    *(f32*)((a0 + 4)) = (f2 - f0);
    *(f32*)((a0 + 8)) = (f3 - f0);
    return f0;
}
