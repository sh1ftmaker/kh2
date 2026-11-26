// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00144d90(u32, u32) asm("func_00144d90");
extern "C" u32 func_00147050(u32, u32, u32, u32, u32) asm("func_00147050");

// 0x00147140 func_00147140
void func_00147140(u32 a0, u32 a1) asm("_ZN2dk11OctDrawFile19cacheFindDrawObjectEPNS_11ObjDrawListE");
void func_00147140(u32 a0, u32 a1) {
    u32 loc_0;
    loc_0 = ((s32)(func_00144d90((*(u32*)((a0 + 4)) + (*(u16*)((a1 + 0x118)) * 0x30)) + 0x10, a1 + 0xd0)) == 0) ? 0 : *(u16*)((a1 + 0x11a));
    *(u16*)((a1 + 0x118)) = func_00147050(a0, 0, a1, 0, (u32)&loc_0);
    *(u16*)((a1 + 0x11a)) = *(u16*)(&loc_0);
    return;
}
