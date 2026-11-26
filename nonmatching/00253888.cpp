// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035eee0 asm("D_0035eee0");
extern "C" u32 D_0035ef50 asm("D_0035ef50");
extern "C" u32 D_0035ef54 asm("D_0035ef54");
extern "C" u32 D_01dae6c0 asm("D_01dae6c0");

// 0x00253888 func_00253888
void func_00253888(u32 a0) asm("func_00253888");
void func_00253888(u32 a0) {
    u32 t2;
    u32 t4;
    u32 t6;
    u32 t5;
    u32 t7;
    t2 = 0;
    t4 = 6;
    t6 = (u32)&D_0035eee0;
    do {
        t5 = *(u32*)((t6 + 0xc));
        if (((s32)(t5) != 0)) {
            t7 = *(u32*)(t6);
            if (((s32)(((s32)(t7) < (s32)(a0))) == 0)) {
                *(u32*)(t6) = 0;
                *(u32*)((t6 + 4)) = 0;
                *(u32*)((t6 + 0xc)) = 0;
                *(u32*)((t6 + 8)) = 0;
                t2 = ((t7 ^ a0) ? t2 : (t5 - (u32)&D_01dae6c0));
            }
        }
        t4 = (t4 + -1);
        t6 = (t6 + 0x10);
    } while (((s32)(t4) >= 0));
    *(u32*)(&D_0035ef50) = t2;
    *(u32*)(&D_0035ef54) = a0;
    return;
}
