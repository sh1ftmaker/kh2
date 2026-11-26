// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_00319a60(u32) asm("func_00319a60");

// 0x002a9ce8 Tz::JmNewInfo::Init()
u32 lift_002a9ce8() asm("_ZN2Tz9JmNewInfo4InitEv");
u32 lift_002a9ce8() {
    u32 v0;
    u32 v0_0;
    v0 = func_001063c0(0x968, func_00103570());
    v0_0 = func_00319a60(v0);
    *(u32*)(&D_0035f610) = v0;
    return v0_0;
}
