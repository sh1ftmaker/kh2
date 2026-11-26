// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035edf4 asm("D_0035edf4");
extern "C" u32 D_00372160 asm("D_00372160");
extern "C" u32 D_00372178 asm("D_00372178");
extern "C" void func_0024dfe0(u32) asm("func_0024dfe0");

// 0x0024e008 func_0024e008
u32 func_0024e008(u32 a0) asm("func_0024e008");
u32 func_0024e008(u32 a0) {
    u32 v0;
    func_0024dfe0(a0);
    if (((s32)(*(u32*)(&D_0035edf4)) != 0)) {
        v0 = ((a0 * 6) + (u32)&D_00372178);
    } else {
        v0 = ((a0 * 6) + (u32)&D_00372160);
    }
    return v0;
}
