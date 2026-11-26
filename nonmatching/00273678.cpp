// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f014 asm("D_0035f014");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 func_001058e8() asm("func_001058e8");
extern "C" u32 func_001a3820(u32) asm("func_001a3820");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00281f20(u32) asm("func_00281f20");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");

// 0x00273678 func_00273678
u32 func_00273678() asm("_ZN2Tz8CmCustom16ChangeCustomInfoEv");
u32 func_00273678() {
    u32 v0;
    u32 s1;
    u32 s0;
    u32 v0_0;
    v0 = func_0028b040(*(u32*)(&D_0035f01c));
    s1 = ((s32)(v0) != 0) ? func_001a3820(*(u16*)(((func_00281f20(*(u32*)(&D_0035f014)) + (v0 * 6)) + -6))) : 0;
    s0 = func_002570a0(0x1a);
    v0_0 = func_001058e8();
    *(u16*)(((((s0 << 1) + v0_0) + 0x36f0) + 8)) = s1;
    return v0_0;
}
