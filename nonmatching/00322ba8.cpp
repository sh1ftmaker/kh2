// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001ddd10(u32) asm("func_001ddd10");
extern "C" void func_00108698(u32) asm("func_00108698");

// 0x00322ba8 func_00322ba8
u32 func_00322ba8(u32 a0) asm("func_00322ba8");
u32 func_00322ba8(u32 a0) {
    func_00108698(a0 + 0x38);
    return func_001ddd10(a0 + 0xc0);
}
