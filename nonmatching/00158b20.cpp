// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034a9c0 asm("D_0034a9c0");
extern "C" u32 D_0034a9d0 asm("D_0034a9d0");
extern "C" u32 D_0034a9e0 asm("D_0034a9e0");
extern "C" u32 D_0034a9e4 asm("D_0034a9e4");

// 0x00158b20 func_00158b20
void func_00158b20(u32 a0) asm("func_00158b20");
void func_00158b20(u32 a0) {
    *(f32*)((a0 + 0x48)) = *(f32*)(&D_0034a9e0);
    *(f32*)((a0 + 0x50)) = *(f32*)(&D_0034a9e4);
    if (((a0 + 0x90) != (u32)&D_0034a9c0)) {
        *(Q16*)((a0 + 0x90)) = *(Q16*)((u32)&D_0034a9c0);
    }
    if (((a0 + 0x70) != (u32)&D_0034a9d0)) {
        *(Q16*)((a0 + 0x70)) = *(Q16*)((u32)&D_0034a9d0);
    }
    return;
}
