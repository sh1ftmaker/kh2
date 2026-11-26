// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d64 asm("D_00347d64");
extern "C" u32 D_00347d70 asm("D_00347d70");
extern "C" u32 D_00347db0 asm("D_00347db0");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 func_00137c50(u32) asm("func_00137c50");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0031a350(u32) asm("func_0031a350");
extern "C" void func_0031a830(u32) asm("func_0031a830");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x00137fb8 u_call0_00137fb8()
u32 lift_00137fb8() asm("_Z16u_call0_00137fb8v");
u32 lift_00137fb8() {
    u32 v0;
    u32 s4;
    u32 s3;
    u32 s1;
    u32 s0;
    u32 s7;
    u32 s6;
    u32 s5;
    u32 s4_0;
    u32 s3_1;
    u32 s1_2;
    u32 s0_3;
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x4790, 0);
    *(u32*)(v0) = (u32)&D_00347d70;
    *(u32*)((v0 + 0xc)) = 0;
    func_0031a830(v0 + 0x20);
    s4 = 0xffffffff;
    s3 = (v0 + 0x30);
    s1 = 7;
    s0 = (v0 + 0x40);
    do {
        func_0031a350(s0);
        s0 = (s0 + 0x530);
        s1 = (s1 + -1);
    } while ((s1 != s4));
    *(u32*)(s3) = 0;
    *(u32*)((s3 + 4)) = 0;
    func_0031a830(v0 + 0x29c0);
    s7 = (v0 + 0x29c4);
    s6 = (u32)&D_00347f98;
    s5 = (u32)&D_00347e60;
    s4_0 = (u32)&D_00347db0;
    s3_1 = 0xffffffff;
    s1_2 = 0xf;
    s0_3 = (v0 + 0x29cc);
    do {
        *(u32*)(s0_3) = s6;
        func_0031a838(s0_3 + 0xc);
        *(u32*)(s0_3) = s5;
        func_00239700(s0_3 + 0x18);
        *(u32*)(s0_3) = s4_0;
        *(u32*)((s0_3 + 0x198)) = 0;
        s0_3 = (s0_3 + 0x1dc);
        s1_2 = (s1_2 + -1);
    } while ((s1_2 != s3_1));
    *(u32*)(s7) = 0;
    *(u32*)((s7 + 4)) = 0;
    *(u32*)(&D_00347d64) = v0;
    return func_00137c50(*(u32*)(&D_00347d64));
}
