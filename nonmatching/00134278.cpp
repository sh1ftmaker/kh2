// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00134258() asm("func_00134258");
extern "C" void func_00133f20() asm("func_00133f20");

// 0x00134278 func_00134278
u32 func_00134278() asm("func_00134278");
u32 func_00134278() {
    u32 s0;
    s0 = func_00134258();
    func_00133f20();
    return s0;
}
