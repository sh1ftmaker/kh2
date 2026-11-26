// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00101ce0() asm("func_00101ce0");
extern "C" void func_00100350() asm("func_00100350");

// 0x00319788 func_00319788
u32 func_00319788() asm("func_00319788");
u32 func_00319788() {
    func_00100350();
    return func_00101ce0();
}
