// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2e4 asm("D_0035f2e4");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");
extern "C" u32 func_002859a0(u32) asm("func_002859a0");
extern "C" u32 func_00285d18(u32) asm("func_00285d18");

// 0x00285e30 func_00285e30
u32 func_00285e30(u32 a0) asm("func_00285e30");
u32 func_00285e30(u32 a0) {
    u32 t5;
    u32 t6;
    u32 t7;
    u32 v0;
    u32 t7_0;
    u32 a0_1;
    u32 s0;
    u32 s5;
    u32 t7_2;
    u32 s1;
    u32 t6_3;
    u32 t7_4;
    u32 s2;
    u32 s6;
    u32 t7_5;
    u32 s0_6;
    u32 v0_7;
    if (((s32)(a0) >= 0)) {
        t5 = ((a0 >> 5) << 2);
        t6 = *(u32*)(&D_0035f2e4);
        t7 = *(u32*)((t5 + t6));
        v0 = (1 << (a0 & 0x1f));
        if (((s32)((t7 & v0)) != 0)) {
            t7_0 = *(u32*)((t5 + func_002859a0(a0)));
            a0_1 = ((u32)(0) < (u32)((t7_0 & v0)));
        } else {
            a0_1 = 0;
        }
        v0_7 = a0_1;
    } else {
        s0 = 0;
        s5 = 1;
        t7_2 = (0 >> 5);
        do {
            s1 = (t7_2 << 2);
            t6_3 = *(u32*)(&D_0035f2e4);
            t7_4 = *(u32*)((s1 + t6_3));
            s2 = (1 << (s0 & 0x1f));
            s6 = func_002859a0(a0);
            if (((t7_4 & s2) != 0)) {
                if (((s32)(func_00285d18(*(u8*)((func_001a80c8(s0) + 2)))) != 0)) {
                    t7_5 = *(u32*)((s1 + s6));
                    if (((s32)(((u32)(0) < (u32)((t7_5 & s2)))) == 0)) {
                        return ((u32)(0) < (u32)((t7_5 & s2)));
                    }
                    s5 = ((u32)(0) < (u32)((t7_5 & s2)));
                }
            }
            s0_6 = (s0 + 1);
            s0 = s0_6;
            t7_2 = (s0_6 >> 5);
        } while (((s32)(t7_2) != 0));
        v0_7 = s5;
    }
    return v0_7;
}
