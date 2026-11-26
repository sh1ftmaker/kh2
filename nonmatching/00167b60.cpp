// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034d3c0 asm("D_0034d3c0");
extern "C" u32 func_001678f0(u32) asm("func_001678f0");

// 0x00167b60 func_00167b60
u32 func_00167b60() asm("_ZN2YS3PAD8ReadTaskEP4TASK");
u32 func_00167b60() {
    func_001678f0((u32)&D_0034d3c0);
    return func_001678f0((u32)&D_0034d3c0 + 0x180);
}
