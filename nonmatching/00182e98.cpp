// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034ed00 asm("D_0034ed00");
extern "C" u32 D_01c60588 asm("D_01c60588");
extern "C" u32 func_0019b380(u32, u32) asm("func_0019b380");

// 0x00182e98 YS::UNIT::GetPathByID(int)
u32 lift_00182e98(u32 a0) asm("_ZN2YS4UNIT11GetPathByIDEi");
u32 lift_00182e98(u32 a0) {
    u32 s1;
    u32 s0;
    u32 v0;
    if (((s32)(*(u32*)(&D_0034ed00)) > 0)) {
        s1 = 0;
        s0 = (u32)&D_01c60588;
        do {
            v0 = func_0019b380(*(u32*)(((s0 + (s1 * 0xc)) + 8)), a0);
            if (((s32)(v0) != 0)) {
                return v0;
            }
            s1 = (s1 + 1);
        } while (((s32)(s1) < (s32)(*(u32*)(&D_0034ed00))));
    }
    return 0;
}
