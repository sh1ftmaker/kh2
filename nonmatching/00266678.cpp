// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002666a8() asm("func_002666a8");
extern "C" void func_002657a8(u32) asm("func_002657a8");
extern "C" void func_00266988() asm("func_00266988");

// 0x00266678 func_00266678
u32 func_00266678(u32 a0, u32 a1) asm("_ZN2Tz6CmStat10DrawUpdateEPNS_6SelectEii");
u32 func_00266678(u32 a0, u32 a1) {
    if ((a1 == 0x17)) {
        func_002657a8(a0);
    }
    func_00266988();
    return func_002666a8();
}
