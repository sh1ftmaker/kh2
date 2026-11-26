// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0028ac98(u32, u32) asm("func_0028ac98");
extern "C" void func_00139d78(u32, u32) asm("func_00139d78");

// 0x0028ae28 Tz::Select::IsSeqDone(...)
u32 lift_0028ae28(u32 a0, u32 a1) asm("_ZN2Tz6Select9IsSeqDoneEz");
u32 lift_0028ae28(u32 a0, u32 a1) {
    func_00139d78(*(u32*)(((a1 << 2) + *(u32*)((a0 + 0x28)))), a1);
    return ((u32)((*(u32*)((*(u32*)(((a1 << 2) + *(u32*)((a0 + 0x28)))) + 0x184)) ^ *(s16*)((func_0028ac98(a0, a1) + 4)))) < (u32)(1));
}
