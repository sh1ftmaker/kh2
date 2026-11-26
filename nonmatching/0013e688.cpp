// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e18 asm("D_00347e18");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_003486a0 asm("D_003486a0");
extern "C" u32 D_003486a4 asm("D_003486a4");
extern "C" u32 D_003486b0 asm("D_003486b0");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_0013a7d0(u32) asm("func_0013a7d0");
extern "C" u32 func_0013e890() asm("func_0013e890");
extern "C" void func_00138650(u32, u32, u32, u32) asm("func_00138650");
extern "C" void func_002361a0(u32) asm("func_002361a0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x0013e688 u_call0_0013e688()
u32 lift_0013e688() asm("_Z16u_call0_0013e688v");
u32 lift_0013e688() {
    u32 v0;
    u32 fp;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s5;
    u32 s6;
    u32 s7;
    u32 t5;
    u32 t6;
    u32 v0_0;
    v0 = func_001063c0(0x1fb0, func_001050c8());
    fp = 0xffffffff;
    s0 = (v0 + 0xc);
    s1 = v0;
    s2 = 8;
    s3 = (u32)&D_00347e60;
    s5 = (u32)&D_00347f98;
    s6 = (u32)&D_003486b0;
    s7 = (u32)&D_00347e18;
    do {
        *(u32*)((s0 + -0xc)) = s3;
        *(u32*)(s0) = 0;
        func_00239700(s1 + 0x18);
        *(u32*)((s0 + -0xc)) = s6;
        *(u32*)((s0 + 0x1a4)) = 0;
        *(u32*)((s0 + 0x1b4)) = s5;
        func_0031a838(s1 + 0x1cc);
        *(u32*)((s0 + 0x1b4)) = s3;
        func_00239700(s1 + 0x1d8);
        *(u32*)((s0 + 0x1b4)) = s7;
        *(u32*)((s0 + 0x364)) = 0;
        s0 = (s0 + 0x380);
        s1 = (s1 + 0x380);
        s2 = (s2 + -1);
    } while ((s2 != fp));
    t5 = 0;
    t6 = (v0 + 0x1f80);
    do {
        *(u32*)(t6) = t5;
        t5 = (t5 + 1);
        t6 = (t6 + 4);
    } while (((s32)(((s32)(t5) < (s32)(9))) != 0));
    *(u32*)((v0 + 0x1fa4)) = 9;
    *(u32*)(&D_003486a4) = v0;
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x1c0, 0);
    *(u32*)(v0_0) = (u32)&D_00347e80;
    *(u32*)((v0_0 + 0xc)) = 0;
    func_002361a0(v0_0 + 0x20);
    *(u32*)(&D_003486a0) = v0_0;
    func_00138650(*(u32*)(&D_003486a0), 0xe74, func_0013a7d0(0), 0);
    return func_0013e890();
}
