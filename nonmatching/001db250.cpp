// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 func_0019c778(u32, u32) asm("func_0019c778");
extern "C" void func_0017d0e8(u32, f32) asm("func_0017d0e8");

// 0x001db250 func_001db250
// minilink-rodata 0x0036e7a0   (float literals live here in the original)
f32 func_001db250(u32 a0) asm("_ZNK2YS4ZONE7is_jumpEi");
f32 func_001db250(u32 a0) {
    u32 loc_0;
    func_0017d0e8((u32)&loc_0, -1.5707963705062866f - *(f32*)((*(u32*)((a0 + 0x6c)) + 0x20)));
    return func_0019c778(*(u32*)(&D_0034e948), (u32)&loc_0);
}
