// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002f2be0(u32, u32) asm("func_002f2be0");

// 0x002367c8 func_002367c8
void func_002367c8(u32 a0) asm("_ZN2YI5IMAGE13InitLoadImageEv");
void func_002367c8(u32 a0) {
    if (((s32)(((s32)(*(u64*)((a0 + 0x30))) & 1)) == 0)) {
        func_002f2be0(a0 + 0x40, *(u32*)((a0 + 0x38)));
    }
    if (((((u64)(*(u64*)((a0 + 0x30))) >> 0x21) & 1) == 0)) {
        func_002f2be0(a0 + 0xa0, *(u32*)((a0 + 0x3c)));
        return;
    } else {
        return;
    }
}
