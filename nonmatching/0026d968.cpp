// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e40 asm("D_00347e40");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035f100 asm("D_0035f100");
extern "C" u32 D_0035f104 asm("D_0035f104");
extern "C" u32 D_0035f108 asm("D_0035f108");
extern "C" u32 D_0035f10c asm("D_0035f10c");
extern "C" u32 D_0035f110 asm("D_0035f110");
extern "C" u32 D_0035f114 asm("D_0035f114");
extern "C" u32 D_0035f120 asm("D_0035f120");
extern "C" u32 D_0035f124 asm("D_0035f124");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_001063f0(u32, u32) asm("func_001063f0");
extern "C" u32 func_00288be8(u32) asm("func_00288be8");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_00242618(u32, u32) asm("func_00242618");
extern "C" void func_00287b18(u32, u32) asm("func_00287b18");
extern "C" void func_002889f0(u32, u32, u32) asm("func_002889f0");
extern "C" void func_0028d068(u32, u32) asm("func_0028d068");
extern "C" void func_0028d140(u32) asm("func_0028d140");
extern "C" void func_00290610(u32) asm("func_00290610");

// 0x0026d968 Tz::Selector::Init()
u32 lift_0026d968() asm("_ZN2Tz8Selector4InitEv");
u32 lift_0026d968() {
    u32 v0;
    u32 v0_0;
    u32 s3;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s4;
    u32 s5;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 s2_5;
    u32 t3;
    u32 t4;
    u32 t6;
    u32 t7;
    func_00287b18(2, 3);
    func_00242618(0xb, 1);
    func_0028d068(0x754a, 0xffffffff);
    *(u32*)(&D_0035f100) = 0;
    v0 = func_00288be8(0x38);
    func_002889f0(v0, 8, 0);
    *(u32*)(&D_0035f10c) = v0;
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x520, 0);
    *(u32*)(v0_0) = 3;
    s3 = (v0_0 + 4);
    s0 = s3;
    s1 = 2;
    s2 = (u32)&D_00347e40;
    s4 = (u32)&D_00347e60;
    s5 = 0xffffffff;
    do {
        *(u32*)((s0 + 0xc)) = 0;
        *(u32*)(s0) = s4;
        s1 = (s1 + -1);
        func_00239700(s0 + 0x18);
        *(u32*)(s0) = s2;
        *(u32*)((s0 + 0x198)) = 0;
        s0 = (s0 + 0x1b4);
    } while ((s1 != s5));
    *(u32*)(&D_0035f104) = s3;
    v0_1 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x198, 0);
    *(u32*)((v0_1 + 0xc)) = 0;
    *(u32*)(v0_1) = (u32)&D_00347e60;
    func_00239700(v0_1 + 0x18);
    *(u32*)(&D_0035f108) = v0_1;
    v0_2 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x1bc, 0);
    func_0028d140(v0_2);
    *(u32*)(&D_0035f110) = v0_2;
    v0_3 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x340, 0);
    func_00290610(v0_3);
    *(u32*)(&D_0035f124) = v0_3;
    v0_4 = func_001063f0(0x12, func_00103570());
    *(u32*)(&D_0035f114) = v0_4;
    s2_5 = 0x360000;
    t3 = 0xffffffff;
    t4 = 0;
    do {
        t4 = (t4 + 1);
        t6 = (t4 << 1);
        *(u16*)((t6 + *(u32*)((s2_5 + -0xeec)))) = t3;
    } while (((s32)(((s32)(t4) < (s32)(9))) != 0));
    if (((s32)(*(s8*)(&D_0035f120)) < 0)) {
        t7 = *(s8*)(&D_0035f120);
        *(u8*)(&D_0035f120) = 0;
    }
    return v0_4;
}
