// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9eaa0 asm("D_01d9eaa0");

// 0x001e9078 func_001e9078
void func_001e9078(u32 a0, u32 a1, u32 a2) asm("func_001e9078");
void func_001e9078(u32 a0, u32 a1, u32 a2) {
    *(u32*)(((a0 + *(u32*)(*(u32*)((a2 + 0xc)))) + 0xa0)) = *(u32*)((a1 + 4));
    if (((s32)(*(u32*)(&D_01d9eaa0)) != 0)) {
        if (((s32)(*(u32*)(((*(u8*)((*(u32*)((a0 + 8)) + 0xe)) << 2) + *(u32*)(&D_01d9eaa0)))) != 0)) {
            ((void(*)(u32, u32, u32))(*(u32*)(((*(u8*)((*(u32*)((a0 + 8)) + 0xe)) << 2) + *(u32*)(&D_01d9eaa0)))))(a0, *(u32*)((a1 + 4)), a2);
        }
    }
    return;
}
