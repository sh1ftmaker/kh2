// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0034a700 asm("D_0034a700");
extern "C" u32 func_0031c8e8(u32) asm("func_0031c8e8");
extern "C" u32 func_0031c980(u32) asm("func_0031c980");
extern "C" u32 func_0031c9f8(u32) asm("func_0031c9f8");

// 0x0031cb58 func_0031cb58
u32 func_0031cb58(u32 a0) asm("func_0031cb58");
u32 func_0031cb58(u32 a0) {
    u32 t7;
    u32 s0;
    u32 s1;
    u32 v0_0;
    u32 t6;
    u32 s0_1;
    u32 s1_2;
    u32 v0_3;
    u32 t6_4;
    u32 s0_5;
    u32 s1_6;
    u32 v0;
    *(u32*)(a0) = (u32)&D_0034a700;
    t7 = (a0 + 0x2f2c);
    if ((t7 != 0xfffffff8)) {
        s0 = (a0 + 0x3894);
        while ((s0 = (s0 + -0x258)), (s1 = (a0 + 0x2f34)), (s1 != s0)) {
            v0_0 = func_0031c9f8(s0);
        }
        v0 = v0_0;
    }
    t6 = (a0 + 0x25b8);
    if ((t6 != 0xfffffff8)) {
        s0_1 = (a0 + 0x2f20);
        while ((s0_1 = (s0_1 + -0x258)), (s1_2 = (a0 + 0x25c0)), (s1_2 != s0_1)) {
            v0_3 = func_0031c980(s0_1);
        }
        v0 = v0_3;
    }
    t6_4 = (a0 + 0x24);
    if ((t6_4 != 0xfffffff8)) {
        s0_5 = (a0 + 0x25ac);
        while ((s0_5 = (s0_5 + -0x258)), (s1_6 = (a0 + 0x2c)), (s1_6 != s0_5)) {
            v0 = func_0031c8e8(s0_5);
        }
    }
    *(u32*)(a0) = (u32)&D_00347f98;
    return v0;
}
