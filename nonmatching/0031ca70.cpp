// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0034a700 asm("D_0034a700");
extern "C" void func_0031c8e8(u32) asm("func_0031c8e8");
extern "C" void func_0031c980(u32) asm("func_0031c980");
extern "C" void func_0031c9f8(u32) asm("func_0031c9f8");

// 0x0031ca70 func_0031ca70
void func_0031ca70(u32 a0) asm("func_0031ca70");
void func_0031ca70(u32 a0) {
    u32 t7;
    u32 s0;
    u32 s1;
    u32 t6;
    u32 s0_0;
    u32 s1_1;
    u32 t6_2;
    u32 s0_3;
    u32 s1_4;
    *(u32*)(a0) = (u32)&D_0034a700;
    t7 = (a0 + 0x2f2c);
    if ((t7 != 0xfffffff8)) {
        s0 = (a0 + 0x3894);
        while ((s0 = (s0 + -0x258)), (s1 = (a0 + 0x2f34)), (s1 != s0)) {
            func_0031c9f8(s0);
        }
    }
    t6 = (a0 + 0x25b8);
    if ((t6 != 0xfffffff8)) {
        s0_0 = (a0 + 0x2f20);
        while ((s0_0 = (s0_0 + -0x258)), (s1_1 = (a0 + 0x25c0)), (s1_1 != s0_0)) {
            func_0031c980(s0_0);
        }
    }
    t6_2 = (a0 + 0x24);
    if ((t6_2 != 0xfffffff8)) {
        s0_3 = (a0 + 0x25ac);
        while ((s0_3 = (s0_3 + -0x258)), (s1_4 = (a0 + 0x2c)), (s1_4 != s0_3)) {
            func_0031c8e8(s0_3);
        }
    }
    *(u32*)(a0) = (u32)&D_00347f98;
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a0);
    return;
}
