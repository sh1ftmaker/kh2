// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" f32 func_002edd20(u32, u32, u32, f32, f32) asm("func_002edd20");
extern "C" f32 func_002f8870(f32) asm("func_002f8870");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");
extern "C" u32 func_00313e80(u32, u32) asm("func_00313e80");
extern "C" u32 func_003142e0(u32, u32) asm("func_003142e0");

// 0x002ede48 func_002ede48
void func_002ede48(u32 a0, u32 a1, u32 a2, f32 fa0, f32 fa1) asm("func_002ede48");
void func_002ede48(u32 a0, u32 a1, u32 a2, f32 fa0, f32 fa1) {
    f32 f21;
    u32 s0;
    f32 f20;
    f32 f0;
    if ((a0 != a2)) {
        *(Q16*)(a0) = *(Q16*)(a2);
    }
    f21 = (func_002edd20(a1, a1, a2, fa0, fa1) - fa0);
    s0 = func_00313b80(func_002f8870(func_002edd20(a1, a1, a2, fa0, fa1) - fa0));
    f20 = (fa1 * *(f32*)(&D_00349e10));
    if (((s32)(func_003142e0(func_00313e80(func_00313b80(fa1 * *(f32*)(&D_00349e10)), (u64)(0x1009) << 0x32), s0)) < 0)) {
        if (((s32)(func_003142e0(func_00313b80(f21), 0)) < 0)) {
            *(f32*)((a0 + 4)) -= f20;
        } else {
            *(f32*)((a0 + 4)) += f20;
        }
    }
    return;
}
