// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034d6c0 asm("D_0034d6c0");
extern "C" u32 func_00167e00(u32) asm("func_00167e00");

// 0x00167ea8 func_00167ea8
u32 func_00167ea8() asm("func_00167ea8");
u32 func_00167ea8() {
    func_00167e00((u32)&D_0034d6c0);
    return func_00167e00((u32)&D_0034d6c0 + 0x60);
}
