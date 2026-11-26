// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_002f8ad0(f32, f32) asm("func_002f8ad0");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");
extern "C" u32 func_003142e0(u32, u32) asm("func_003142e0");

// 0x001168c0 func_001168c0
void func_001168c0(u32 a0) asm("func_001168c0");
void func_001168c0(u32 a0) {
    if ((func_003142e0(func_00313b80(*(f32*)((a0 + 0x660))), 0) != 0) || (func_003142e0(func_00313b80(*(f32*)((a0 + 0x664))), 0) != 0)) {
        *(f32*)((a0 + 0x65c)) = func_002f8ad0(*(f32*)((a0 + 0x660)), -(*(f32*)((a0 + 0x664))));
    }
    return;
}
