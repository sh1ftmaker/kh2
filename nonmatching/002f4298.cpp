// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002f4148(u32, u32, f32) asm("func_002f4148");
extern "C" void func_002f40a0(u32, u32, f32) asm("func_002f40a0");
extern "C" void func_002f41f0(u32, u32, f32) asm("func_002f41f0");

// 0x002f4298 func_002f4298
u32 func_002f4298(u32 a0, u32 a1, u32 a2) asm("func_002f4298");
u32 func_002f4298(u32 a0, u32 a1, u32 a2) {
    func_002f40a0(a0, a1, *(f32*)((a2 + 8)));
    func_002f41f0(a0, a0, *(f32*)((a2 + 4)));
    return func_002f4148(a0, a0, *(f32*)(a2));
}
