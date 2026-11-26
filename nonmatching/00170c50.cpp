// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dca0 asm("D_0034dca0");
extern "C" u32 func_00170c38() asm("func_00170c38");

// 0x00170c50 func_00170c50
void func_00170c50() asm("_ZN2YS10CACHE_BUFF14IsFlushingListEv");
void func_00170c50() {
    u32 t5;
    u32 t6;
    u32 t6_0;
    if (((s32)(func_00170c38()) == 0)) {
        t5 = 0;
        while ((t6 = (t5 == 0) ? *(u32*)(&D_0034dca0) : *(u32*)((t5 + 0x3c))), (t5 = t6), ((s32)(t6) != 0)) {
            if (((s32)((((s32)(*(u32*)((t6 + 0x28))) < (s32)(0x2710)) ^ 1)) != 0)) {
                continue;
            }
            if (((s32)(*(u8*)((t6 + 1))) == 0)) {
                continue;
            }
            if ((*(u8*)((t6 + 1)) != 3)) {
                return;
            }
        }
        t6_0 = 0;
    } else {
        t6_0 = 1;
    }
    return;
}
