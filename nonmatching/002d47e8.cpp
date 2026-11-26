// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003621a0 asm("D_003621a0");
extern "C" u32 func_002d2a08(u32) asm("func_002d2a08");
extern "C" void func_002e7328(u32) asm("func_002e7328");

// 0x002d47e8 func_002d47e8
u32 func_002d47e8(u32 a0) asm("func_002d47e8");
u32 func_002d47e8(u32 a0) {
    *(u32*)(a0) = (u32)&D_003621a0;
    func_002e7328(a0 + 0xc88);
    return func_002d2a08(a0);
}
