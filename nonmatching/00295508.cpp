// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 func_00275e68(u32, u32, u32) asm("func_00275e68");
extern "C" u32 func_00275ec8(u32) asm("func_00275ec8");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" u32 func_0028de08(u32, u32, u32) asm("func_0028de08");
extern "C" u32 func_00295270(u32, u32) asm("func_00295270");
extern "C" u32 func_002956c0(u32) asm("func_002956c0");

// 0x00295508 func_00295508
u32 func_00295508() asm("func_00295508");
u32 func_00295508() {
    u32 s1;
    u32 v0;
    u32 s2;
    s1 = func_002766d0();
    v0 = func_0028b040(*(u32*)(&D_0035f200));
    s2 = func_00295270(v0, 0);
    if (((s32)(func_002956c0(v0)) != 0)) {
        return func_00275e68(s2, s1 + 0x110a0, 0x40);
    } else {
        return func_00275ec8(func_0028de08(s2, s1 + 0x110a0, 0x40));
    }
}
