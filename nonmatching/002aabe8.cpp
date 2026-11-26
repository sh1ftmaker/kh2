// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_002a99c8(u32) asm("func_002a99c8");
extern "C" u32 func_002a9d68() asm("func_002a9d68");

// 0x002aabe8 func_002aabe8
void func_002aabe8() asm("func_002aabe8");
void func_002aabe8() {
    u32 s0;
    u32 v0;
    u32 s0_0;
    u32 s1;
    u32 v0_1;
    u32 t4;
    u32 s2;
    u32 t5;
    u32 t6;
    u32 t6_2;
    u32 s2_3;
    u32 s2_4;
    u32 s1_5;
    u32 s0_6;
    s0 = func_002a9d68();
    v0 = func_00294000(8);
    if (((s32)(*(u32*)((v0 + 8))) > 0)) {
        s0_0 = (v0 + 0x10);
        s1 = 0;
        do {
            v0_1 = func_002a99c8(s0_0);
            if ((v0_1 != 0)) {
                if ((v0_1 != 3)) {
                    t4 = ((s1 >> 5) << 2);
                    s2 = (s0 + 0x94);
                    t5 = (1 << (s1 & 0x1f));
                    if (((*(u32*)((t4 + s2)) & t5) == 0)) {
                        t6 = (*(u32*)(&D_0035f610) + 0x94);
                        t6_2 = (t6 + t4);
                        *(u32*)(t6_2) = (*(u32*)(t6_2) | t5);
                    }
                    s2_3 = s2;
                } else {
                    s2_3 = (s0 + 0x94);
                }
                s2_4 = s2_3;
            } else {
                s2_4 = (s0 + 0x94);
            }
            s1_5 = (s1 + 1);
            s0_6 = (s0_0 + 0x10);
            s0_0 = s0_6;
            s1 = s1_5;
        } while (((s32)(((s32)(s1_5) < (s32)(*(u32*)((v0 + 8))))) != 0));
    }
    return;
}
