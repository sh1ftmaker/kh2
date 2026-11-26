// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_002f87c0(f32) asm("func_002f87c0");
extern "C" f32 func_002f8960(f32) asm("func_002f8960");

// 0x00237988 func_00237988
u32 func_00237988(u32 a0, f32 fa0) asm("func_00237988");
u32 func_00237988(u32 a0, f32 fa0) {
    f32 f22;
    f32 f23;
    f32 f24;
    f32 f21;
    f32 f20;
    *(f32*)((a0 + 0x78)) = fa0;
    f22 = func_002f8960(*(f32*)((a0 + 0x70)));
    f23 = func_002f87c0(*(f32*)((a0 + 0x70)));
    f24 = func_002f8960(*(f32*)((a0 + 0x74)));
    f21 = func_002f87c0(*(f32*)((a0 + 0x74)));
    f20 = func_002f8960(*(f32*)((a0 + 0x78)));
    *(f32*)((a0 + 0x1c)) = (f21 * func_002f87c0(*(f32*)((a0 + 0x78))));
    *(f32*)((a0 + 0x24)) = (((f22 * f24) * func_002f87c0(*(f32*)((a0 + 0x78)))) + (f23 * f20));
    *(f32*)((a0 + 0x20)) = (f21 * -(f20));
    *(f32*)((a0 + 0x28)) = (((f22 * f24) * -(f20)) + (f23 * func_002f87c0(*(f32*)((a0 + 0x78)))));
    return func_002f87c0(*(f32*)((a0 + 0x78)));
}
