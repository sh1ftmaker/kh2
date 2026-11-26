// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002f3dd8(u32, u32) asm("func_002f3dd8");
extern "C" void func_002f3d98(u32, u32) asm("func_002f3d98");
extern "C" void func_002f3f40(u32, u32, f32) asm("func_002f3f40");

// 0x002f43c0 func_002f43c0
f32 func_002f43c0(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002f43c0");
f32 func_002f43c0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 loc_0;
    func_002f3f40((u32)&loc_0, a1, -1.0f);
    func_002f3d98(a0, (u32)&loc_0);
    func_002f3f40((u32)&loc_0, a2, -1.0f);
    func_002f3d98(a0 + 0x10, (u32)&loc_0);
    func_002f3f40((u32)&loc_0, a3, -1.0f);
    func_002f3d98(a0 + 0x20, (u32)&loc_0);
    *(f32*)((a0 + 0x30)) = 0.0f;
    *(f32*)((a0 + 0x34)) = 0.0f;
    *(f32*)((a0 + 0x38)) = 0.0f;
    *(f32*)((a0 + 0x3c)) = 1.0f;
    return func_002f3dd8(a0, a0);
}
