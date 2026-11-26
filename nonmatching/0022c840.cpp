// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" void func_001024a8(u32) asm("func_001024a8");
extern "C" void func_00144490(u32, f32, f32, f32, f32, f32, f32) asm("func_00144490");
extern "C" void func_001d6790(u32) asm("func_001d6790");

// 0x0022c840 func_0022c840
// minilink-rodata 0x003711ac   (float literals live here in the original)
void func_0022c840(u32 a0) asm("_ZN2sa9mu060TaskEP4TASK");
void func_0022c840(u32 a0) {
    u8 frame[32];
    func_00144490((u32)frame, -18000.0f, 0.0f, *(f32*)((a0 + 8)) - 187.5f, 18000.0f, 0.0f, *(f32*)((a0 + 8)) + 187.5f);
    func_001d6790((u32)frame);
    *(f32*)((a0 + 8)) = (*(f32*)((a0 + 8)) - 375.0f);
    *(f32*)((a0 + 4)) = (*(f32*)((a0 + 4)) - *(f32*)(&D_00349e10));
    if (((*(f32*)((a0 + 4)) - *(f32*)(&D_00349e10)) < 0.0f)) {
        func_001024a8(a0);
    }
    return;
}
