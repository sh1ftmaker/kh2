// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00367920 asm("D_00367920");
extern "C" u32 D_01e4c798 asm("D_01e4c798");
extern "C" u32 D_01e4c7a0 asm("D_01e4c7a0");
extern "C" u32 func_00305510() asm("func_00305510");
extern "C" u32 func_003060f0() asm("func_003060f0");
extern "C" u32 func_00316e00() asm("func_00316e00");
extern "C" u32 func_00316e10() asm("func_00316e10");

// 0x00316a50 func_00316a50
u32 func_00316a50() asm("func_00316a50");
u32 func_00316a50() {
    u32 s0;
    u32 s1;
    u32 t7;
    u32 t7_0;
    u32 t6;
    u32 t7_1;
    u32 t7_2;
    u32 t7_3;
    u32 v0;
    u32 v0_4;
    u32 v0_5;
    if (((s32)(*(u32*)(&D_00367920)) != 0)) {
        s0 = *(u32*)(&D_01e4c7a0);
        s1 = func_00316e00();
        t7 = (s0 << 2);
        if (((s32)(((s32)(s0) < (s32)(9))) != 0)) {
            t7_0 = (t7 + func_00316e10());
            if ((*(u32*)(t7_0) != 0)) {
                if ((func_003060f0() != 1)) {
                    t6 = func_00305510();
                } else {
                    t6 = 0;
                }
                t7_1 = (t6 << 3);
                t7_2 = (t7_1 + s0);
                t7_3 = (t7_2 << 2);
                v0 = *(u32*)((t7_3 + s1));
            } else {
                v0 = 0;
            }
            v0_4 = v0;
        } else {
            v0_4 = 0;
        }
        v0_5 = v0_4;
    } else {
        v0_5 = (u32)&D_01e4c798;
    }
    return v0_5;
}
