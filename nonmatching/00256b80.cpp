// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f028 asm("D_0035f028");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x00256b80 func_00256b80
u32 func_00256b80(u32 a0) asm("func_00256b80");
u32 func_00256b80(u32 a0) {
    return func_00139d78(*(u32*)(&D_0035f028) + (a0 * 0x198));
}
