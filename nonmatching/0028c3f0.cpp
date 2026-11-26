// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_0035f3c4 asm("D_0035f3c4");
extern "C" u32 D_0035f3c8 asm("D_0035f3c8");
extern "C" u32 D_0035f3cc asm("D_0035f3cc");
extern "C" u32 D_0035f3d0 asm("D_0035f3d0");
extern "C" u32 D_0035f3e0 asm("D_0035f3e0");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" void func_00239700(u32) asm("func_00239700");

// 0x0028c3f0 Tz::MenuItem::init(ALLOCATOR*)
void lift_0028c3f0(u32 a0) asm("_ZN2Tz8MenuItem4initEP9ALLOCATOR");
void lift_0028c3f0(u32 a0) {
    u32 v0;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 s6;
    u32 t5;
    u32 t6;
    if (((s32)(*(u32*)(&D_0035f3c4)) != 0)) {
        *(u32*)(&D_0035f3c8) = *(u32*)(&D_0035f3c4);
        *(u32*)(&D_0035f3d0) = *(u32*)(&D_0035f3cc);
    }
    *(u32*)(&D_0035f3cc) = 0;
    v0 = func_001063c0(0x3784, a0);
    s0 = v0;
    s1 = 0x1f;
    s2 = 0xffffffff;
    s3 = (u32)&D_0035f3e0;
    s4 = (u32)&D_00347e60;
    s6 = (u32)&D_0035f3c4;
    do {
        *(u32*)(s0) = s4;
        *(u32*)((s0 + 0xc)) = 0;
        func_00239700(s0 + 0x18);
        *(u32*)(s0) = s3;
        *(u32*)((s0 + 0x198)) = 0;
        s0 = (s0 + 0x1b8);
        s1 = (s1 + -1);
    } while ((s1 != s2));
    t5 = 0;
    t6 = (v0 + 0x3700);
    do {
        *(u32*)(t6) = t5;
        t5 = (t5 + 1);
        t6 = (t6 + 4);
    } while (((s32)(((s32)(t5) < (s32)(0x20))) != 0));
    *(u32*)((v0 + 0x3780)) = 0x20;
    *(u32*)(s6) = v0;
    return;
}
