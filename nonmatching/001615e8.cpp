// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00161548(u32, f32) asm("func_00161548");
extern "C" u32 func_001616d8(u32) asm("func_001616d8");
extern "C" void func_00161770(u32) asm("func_00161770");

// 0x001615e8 func_001615e8
void func_001615e8(u32 a0, f32 fa0) asm("_ZN2dk6Motion5startEif");
void func_001615e8(u32 a0, f32 fa0) {
    u32 v0;
    v0 = func_00161548(a0, fa0);
    *(u32*)((a0 + 0x48)) = v0;
    if (((s32)(v0) != 0)) {
        *(f32*)((a0 + 0x4c)) = fa0;
        *(f32*)((a0 + 0x50)) = (f32)((s32)(((u32(*)(u32))(*(u32*)((*(u32*)(v0) + 8))))(v0)));
        func_00161770(a0);
        func_001616d8(a0);
        return;
    } else {
        return;
    }
}
