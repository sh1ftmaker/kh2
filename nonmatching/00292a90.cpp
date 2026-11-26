// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f4d0 asm("D_0035f4d0");
extern "C" u32 D_0035f4d4 asm("D_0035f4d4");

// 0x00292a90 func_00292a90
void func_00292a90(u32 a0) asm("func_00292a90");
void func_00292a90(u32 a0) {
    u32 t5;
    u32 t6;
    u32 t7;
    u8 t7_0;
    if (((s32)(*(u32*)(&D_0035f4d0)) > 0)) {
        t5 = 0;
        t6 = *(u32*)(&D_0035f4d4);
        do {
            t7 = *(u32*)(((t6 + (t5 * 0x10)) + 4));
            t7_0 = (t7 & 1);
            if ((t7_0 != 0)) {
                if ((*(u32*)((t6 + (t5 * 0x10))) == a0)) {
                    return;
                }
            }
            t5 = (t5 + 1);
        } while (((s32)(((s32)(t5) < (s32)(*(u32*)(&D_0035f4d0)))) != 0));
        return;
    } else {
        return;
    }
}
