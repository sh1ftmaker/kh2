// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S36_20_u16 { u8 _p[20]; u16 m; u8 _q[14]; };
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_00372a28 asm("D_00372a28");
extern "C" u32 func_00257fa8(u32) asm("func_00257fa8");
extern "C" u32 func_00263a58(u32, u32) asm("func_00263a58");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");

// 0x00256a58 Tz::CmTop::UpdateHelpMess()
u32 lift_00256a58() asm("_ZN2Tz5CmTop14UpdateHelpMessEv");
u32 lift_00256a58() {
    u32 v0;
    v0 = func_00257fa8(func_0028b040(*(u32*)(&D_0035f01c)));
    return func_00263a58(((S36_20_u16*)&D_00372a28)[v0].m, 1);
}
