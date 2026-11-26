// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002f3f88(u32, u32) asm("func_002f3f88");

// 0x002f4480 func_002f4480
u32 func_002f4480(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_002f4480");
u32 func_002f4480(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    func_002f3f88(a0, a1);
    func_002f3f88(a0 + 0x10, a2);
    func_002f3f88(a0 + 0x20, a3);
    return func_002f3f88(a0 + 0x30, a4);
}
