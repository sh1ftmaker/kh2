// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c7a0 asm("D_0034c7a0");
extern "C" u32 D_0034c7a4 asm("D_0034c7a4");
extern "C" u32 D_004f41c0 asm("D_004f41c0");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" void func_0031a830(u32) asm("func_0031a830");

// 0x00165898 func_00165898
void func_00165898(u32 a0) asm("_ZN2dk6ObjOcc4initEP9ALLOCATOR");
void func_00165898(u32 a0) {
    u32 v0;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 t5;
    u32 t6;
    *(u32*)(&D_0034c7a4) = a0;
    *(u32*)(&D_004f41c0) = 0;
    *(u32*)(((u32)&D_004f41c0 + 4)) = 0;
    v0 = func_001063c0(0x504, a0);
    s0 = (v0 + 8);
    s1 = v0;
    s2 = 0x3f;
    s3 = 0xffffffff;
    do {
        *(u32*)(s1) = 0;
        *(u32*)((s1 + 4)) = 0;
        func_0031a830(s1 + 8);
        func_0031a830(s1 + 8);
        s0 = (s1 + 8);
        s1 = (s1 + 0x10);
        s2 = (s2 + -1);
    } while ((s2 != s3));
    t5 = 0;
    t6 = (v0 + 0x400);
    do {
        *(u32*)(t6) = t5;
        t5 = (t5 + 1);
        t6 = (t6 + 4);
    } while (((s32)(((s32)(t5) < (s32)(0x40))) != 0));
    *(u32*)(&D_0034c7a0) = v0;
    *(u32*)((v0 + 0x500)) = 0x40;
    return;
}
