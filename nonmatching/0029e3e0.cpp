// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f228 asm("D_0035f228");
extern "C" u32 D_0035f5b6 asm("D_0035f5b6");
extern "C" u32 func_002925c0() asm("func_002925c0");
extern "C" void func_00292630(u32) asm("func_00292630");
extern "C" void func_00293c40(u32, u32) asm("func_00293c40");
extern "C" void func_0029e430() asm("func_0029e430");

// 0x0029e3e0 func_0029e3e0
u32 func_0029e3e0(u32 a0) asm("func_0029e3e0");
u32 func_0029e3e0(u32 a0) {
    func_00292630(a0);
    func_0029e430();
    *(u16*)(&D_0035f5b6) = a0;
    func_00293c40((s32)((a0 << 0x10)) >> 0x10, (u32)((*(s8*)(&D_0035f228) ^ 1)) < (u32)(1));
    return func_002925c0();
}
