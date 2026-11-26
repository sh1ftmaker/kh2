// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001db8b8(u32, u32) asm("func_001db8b8");
extern "C" void func_003208a8(u32, u32) asm("func_003208a8");

// 0x001c1890 func_001c1890
u32 func_001c1890(u32 a0) asm("func_001c1890");
u32 func_001c1890(u32 a0) {
    func_003208a8(*(u32*)((a0 + 0x1c)) + 0xc, a0);
    return func_001db8b8(*(u32*)((a0 + 0x1c)) + 0x14, a0);
}
