// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f6cc asm("D_0035f6cc");
extern "C" u32 func_00234570(u32, u32) asm("func_00234570");
extern "C" u32 func_00240ba0() asm("func_00240ba0");
extern "C" void func_00287d20(u32) asm("func_00287d20");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");
extern "C" void func_002b4dd0(u32) asm("func_002b4dd0");
extern "C" void func_002b5108(u32, u32) asm("func_002b5108");

// 0x002b4c10 Tz::CmSLBase::SetupSlotCheck()
u32 lift_002b4c10() asm("_ZN2Tz8CmSLBase14SetupSlotCheckEv");
u32 lift_002b4c10() {
    u32 s0;
    s0 = func_00240ba0();
    func_002b4dd0(0xffffffff);
    func_002b5108(0x8a89, s0);
    func_0028f4d8(1, *(u16*)((((s0 * 0x24) + *(u32*)(*(u32*)(&D_0035f6cc))) + 0x12)), 0);
    func_00287d20(0);
    return func_00234570(s0, 0);
}
