// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0019c898(u32, u32) asm("func_0019c898");
extern "C" u32 func_001d5f30(u32, u32) asm("func_001d5f30");

// 0x001d6088 func_001d6088
u32 func_001d6088(u32 a0, u32 a1) asm("_ZN2YS10FORM_LEVEL19CheckWisdomAndFinalEiPNS_6PLAYERE");
u32 func_001d6088(u32 a0, u32 a1) {
    u32 v0;
    if ((*(u32*)((a1 + 0xb50)) != 2)) {
        if ((*(u32*)((a1 + 0xb50)) != 5)) {
            return;
        } else {
            if (((u32)((a0 + -0xbb8)) < (u32)(0x3f7))) {
                return func_001d5f30(a1, 1);
            } else {
                return;
            }
        }
    } else {
        if (((u32)((a0 + -0x3e8)) < (u32)(0x3f4))) {
            v0 = func_0019c898(a0, a1);
            if ((v0 != 0)) {
                return v0;
            } else {
                return func_001d5f30(a1, 1);
            }
        } else {
            return;
        }
    }
}
