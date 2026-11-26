// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00282858(u32, u32, u32) asm("func_00282858");
extern "C" u32 func_00282b00(u32, u32, u32) asm("func_00282b00");
extern "C" void func_00281f70(u32, u32, u32) asm("func_00281f70");

// 0x002827f0 Tz::ItemInfo::MakeMsgTbl(int, int)
u32 lift_002827f0(u32 a0, u32 a1, u32 a2) asm("_ZN2Tz8ItemInfo10MakeMsgTblEii");
u32 lift_002827f0(u32 a0, u32 a1, u32 a2) {
    func_00281f70(a0, a1, a2);
    if (((s32)(*(u32*)((a0 + 0x1008))) == 0)) {
        return func_00282858(a0, a1, a2);
    } else {
        return func_00282b00(a0, a1, a2);
    }
}
