// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00182c60 asm("D_00182c60");
extern "C" u32 D_0034ed00 asm("D_0034ed00");
extern "C" u32 D_01c6058c asm("D_01c6058c");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_00182940(u32) asm("func_00182940");

// 0x00182b18 YS::UNIT::ActivateAll()
u32 lift_00182b18() asm("_ZN2YS4UNIT11ActivateAllEv");
u32 lift_00182b18() {
    u32 v0;
    u32 s0;
    u32 s1;
    u32 v0_0;
    v0 = func_00102c18(1, 0x2ee0, (u32)&D_00182c60);
    if (((s32)(*(u32*)(&D_0034ed00)) > 0)) {
        s0 = 0;
        s1 = 0;
        do {
            if (((s32)((*(u32*)((s0 + (u32)&D_01c6058c)) & 2)) == 0)) {
                v0_0 = func_00182940(s0 + ((u32)&D_01c6058c + -4));
                v0 = v0_0;
            }
            s0 = (s0 + 0xc);
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(*(u32*)(&D_0034ed00)))) != 0));
    }
    return v0;
}
