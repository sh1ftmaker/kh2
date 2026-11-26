// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_0013a7e8(u32) asm("func_0013a7e8");
extern "C" u32 func_0013d7e0() asm("func_0013d7e0");
extern "C" u32 func_00155d58(u32, u32) asm("func_00155d58");
extern "C" u32 func_00158290(u32) asm("func_00158290");
extern "C" u32 func_001582a8(u32) asm("func_001582a8");
extern "C" void func_001395e8(u32) asm("func_001395e8");
extern "C" void func_00139610(u32) asm("func_00139610");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0013e0f8(u32, u32, u32, u32) asm("func_0013e0f8");
extern "C" void func_0014b200(u32, u32) asm("func_0014b200");
extern "C" void func_00153fa0(u32, u32, u32, u32, u32, u32) asm("func_00153fa0");
extern "C" void func_00156130(u32, u32, u32, u32) asm("func_00156130");
extern "C" void func_001564b0(u32, u32, u32, u32) asm("func_001564b0");
extern "C" void func_001565c0(u32, u32, u32, u32) asm("func_001565c0");
extern "C" void func_00156880(u32, u32, u32, u32) asm("func_00156880");
extern "C" void func_00158050(u32, u32, u32, u32, u32, u32, u32) asm("func_00158050");
extern "C" void func_00158138(u32) asm("func_00158138");
extern "C" void func_001581f8(u32) asm("func_001581f8");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x001569d8 func_001569d8
u32 func_001569d8(u32 a0) asm("_ZN2dk12GAUGE_PLAYER6createEPN2YS3OBJE");
u32 func_001569d8(u32 a0) {
    u32 s4;
    f32 fp;
    u32 s7;
    u32 v0;
    u32 s0;
    u32 s5;
    u32 s1;
    u32 s3;
    u32 s0_0;
    u32 s1_1;
    u32 s0_2;
    u32 s1_3;
    u32 s0_4;
    u32 s0_5;
    s4 = (a0 + 0x1a30);
    func_00158138(a0);
    fp = func_0013a7e8(1);
    s7 = func_0013d7e0();
    v0 = func_00158290(a0);
    *(u32*)((a0 + 0x3cf0)) = 0;
    *(u8*)((a0 + 0x3cf4)) = 0xffffffff;
    *(u8*)((a0 + 0x3cf5)) = 0xffffffff;
    *(u8*)((a0 + 0x3cf6)) = 0;
    *(u8*)((a0 + 0x3cf7)) = 0;
    *(u8*)((a0 + 0x3cf8)) = 0;
    *(u8*)((a0 + 0x3cf9)) = 0;
    *(u8*)((a0 + 0x3cfa)) = 0;
    *(u8*)((a0 + 0x3cfb)) = 0;
    s0 = (a0 + 0x33b0);
    func_00158050(s4, 0x1b58, fp, s7, 0x88, 0, v0);
    func_0013e0f8(s0, 0x1b58, 0, v0);
    func_00139d78(s0);
    func_0014b200(a0 + 0x33d0, 0);
    func_0014b200(a0 + 0x34f0, 0);
    func_001581f8(a0);
    s5 = (a0 + 0x40);
    func_001565c0(a0, fp, s7, v0);
    func_00153fa0(s5, 0x1b58, 0, *(u32*)((a0 + 0x34)), *(u32*)((a0 + 0x18)), v0);
    func_00156880(a0, fp, s7, v0);
    s1 = s4;
    s3 = 0xb;
    do {
        *(u32*)((s1 + 0x18c)) = s4;
        func_001396b0(s1);
        if (((s32)(*(u32*)((s1 + 0x18c))) != 0)) {
            *(u32*)((s1 + 0x190)) = 0;
            func_001396b0(s1);
            if (((s32)(*(u32*)((s1 + 0x190))) != 0)) {
                func_0031a260(s1, 0);
            }
        }
        func_001395e8(s1);
        func_00139610(s1);
        s1 = (s1 + 0x19c);
        s3 = (s3 + -1);
    } while (((s32)(s3) >= 0));
    s0_0 = (a0 + 0x33b0);
    s1_1 = 3;
    do {
        func_00139d78(s0_0);
        *(u32*)((s0_0 + 0x240)) = s4;
        s0_0 = (s0_0 + 0x250);
        s1_1 = (s1_1 + -1);
    } while (((s32)(s1_1) >= 0));
    *(u32*)((s5 + 0x18c)) = s4;
    func_001396b0(s5);
    if (((s32)(*(u32*)((s5 + 0x18c))) != 0)) {
        *(u32*)((s5 + 0x190)) = 0;
        func_001396b0(s5);
        if (((s32)(*(u32*)((s5 + 0x190))) != 0)) {
            func_0031a260(s5, 0);
        }
    }
    s0_2 = (a0 + 0x28ac);
    s1_3 = (a0 + 0x2710);
    *(u32*)((s0_2 + 0x18c)) = s1_3;
    func_001396b0(s0_2);
    if ((*(u32*)((s0_2 + 0x18c)) != 0)) {
        *(u32*)((s0_2 + 0x190)) = 0;
        func_001396b0(s0_2);
        if (((s32)(*(u32*)((s0_2 + 0x190))) != 0)) {
            func_0031a260(s0_2, 0);
        }
    }
    s0_4 = (a0 + 0x2a48);
    *(u32*)((s0_4 + 0x18c)) = s1_3;
    func_001396b0(s0_4);
    if ((*(u32*)((s0_4 + 0x18c)) != 0)) {
        *(u32*)((s0_4 + 0x190)) = 0;
        func_001396b0(s0_4);
        if (((s32)(*(u32*)((s0_4 + 0x190))) != 0)) {
            func_0031a260(s0_4, 0);
        }
    }
    s0_5 = (a0 + 0x2be4);
    *(u32*)((s0_5 + 0x18c)) = s1_3;
    func_001396b0(s0_5);
    if ((*(u32*)((s0_5 + 0x18c)) != 0)) {
        *(u32*)((s0_5 + 0x190)) = 0;
        func_001396b0(s0_5);
        if (((s32)(*(u32*)((s0_5 + 0x190))) != 0)) {
            func_0031a260(s0_5, 0);
        }
    }
    *(u32*)((s4 + 0x18c)) = 0;
    func_001396b0(s4);
    if (((s32)(*(u32*)((s4 + 0x18c))) != 0)) {
        *(u32*)((s4 + 0x190)) = 0;
        func_001396b0(s4);
        if (((s32)(*(u32*)((s4 + 0x190))) != 0)) {
            func_0031a260(s4, 0);
        }
    }
    *(u32*)((s4 + 0x188)) = func_00155d58(a0, 0);
    *(u32*)((s1_3 + 0x188)) = 0x75;
    func_00156130(a0, fp, s7, v0);
    func_001564b0(a0, fp, s7, v0);
    return func_001582a8(a0);
}
