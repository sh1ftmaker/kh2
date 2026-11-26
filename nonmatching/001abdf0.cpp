// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001abb78(u32, u32) asm("func_001abb78");
extern "C" u32 func_00239bf8(u32, u32) asm("func_00239bf8");

// 0x001abdf0 func_001abdf0
void func_001abdf0(u32 a0, u32 a1) asm("_ZN2YS8TURNPAGE3setENS0_4TYPEE");
void func_001abdf0(u32 a0, u32 a1) {
    *(u32*)(a0) = a1;
    if ((a1 != 1)) {
        if (((s32)(((s32)(a1) < (s32)(2))) == 0)) {
            if ((a1 != 2)) {
                return;
            } else {
                func_001abb78(a0 + 0x15c, 0x41);
                return;
            }
        } else {
            return;
        }
    } else {
        func_00239bf8(a0 + 4, 0x41);
        return;
    }
}
