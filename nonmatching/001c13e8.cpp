// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001db7d0(u32) asm("func_001db7d0");
extern "C" void func_00105110(u32) asm("func_00105110");
extern "C" void func_001dc920(u32) asm("func_001dc920");

// 0x001c13e8 func_001c13e8
u32 func_001c13e8(u32 a0) asm("_ZN2YS10MASSEFFECT7MANAGERD1Ev");
u32 func_001c13e8(u32 a0) {
    func_001dc920(*(u32*)(a0));
    func_00105110(*(u32*)((a0 + 0x30)));
    return func_001db7d0(a0 + 0x14);
}
