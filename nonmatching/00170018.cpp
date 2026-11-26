// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dcc0 asm("D_0034dcc0");
extern "C" u32 D_0034dcc8 asm("D_0034dcc8");
extern "C" u32 func_0016ffc8(u32) asm("func_0016ffc8");

// 0x00170018 func_00170018
void func_00170018(u32 a0) asm("_ZN2YS10CACHE_BUFF6HEADER5clearEv");
void func_00170018(u32 a0) {
    u32 s0;
    u32 t7;
    u32 t5;
    u32 v0;
    u32 s0_0;
    u32 t7_1;
    u32 t6;
    u32 t7_2;
    if (((s32)((((s32)(*(u32*)((a0 + 0x28))) < (s32)(0x2710)) ^ 1)) == 0)) {
        s0 = 0;
        t7 = *(u32*)((u32)&D_0034dcc0);
        t5 = (u32)&D_0034dcc0;
        do {
            if ((*(u32*)((a0 + 0x28)) == *(u32*)((t5 + (s0 * 4))))) {
                *(u32*)((a0 + 0x28)) = 0x7148;
                return;
            }
            s0 = (s0 + 1);
            t7 = ((s32)(s0) < (s32)(2));
        } while ((t7 != 0));
        v0 = func_0016ffc8(a0);
        *(u32*)((a0 + 0x28)) = v0;
        s0_0 = 0;
        t7_1 = *(u32*)((u32)&D_0034dcc8);
        t6 = (u32)&D_0034dcc8;
        do {
            if ((v0 == *(u32*)((t6 + (s0_0 * 4))))) {
                *(u32*)((a0 + 0x28)) = (s0_0 + 0x3c28);
                return;
            }
            s0_0 = (s0_0 + 1);
            t7_1 = ((s32)(s0_0) < (s32)(0xd));
        } while ((t7_1 != 0));
        if (((s32)(v0) < 0)) {
            t7_2 = 0x7530;
        } else {
            t7_2 = (v0 + 0x2710);
        }
        *(u32*)((a0 + 0x28)) = t7_2;
    } else {
        if (((s32)(((s32)(*(u32*)((a0 + 0x28))) < (s32)(0x7530))) != 0)) {
            *(u32*)((a0 + 0x28)) = (*(u32*)((a0 + 0x28)) + 0x32);
        }
    }
    return;
}
