// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f63a8 asm("D_004f63a8");
extern "C" u32 D_004f63ac asm("D_004f63ac");
extern "C" u32 func_0016f930(u32) asm("func_0016f930");

// 0x0016f8d0 func_0016f8d0
u32 func_0016f8d0(u32 a0) asm("func_0016f8d0");
u32 func_0016f8d0(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = func_0016f930(a0);
    if ((v0 == 0x960)) {
        v0_0 = func_0016f930(0);
        v0 = v0_0;
    }
    if ((v0 != 0x96a)) {
        if ((v0 == 0x974)) {
            *(u32*)(&D_004f63ac) = a0;
        }
    } else {
        *(u32*)(&D_004f63a8) = a0;
    }
    return v0;
}
