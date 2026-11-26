// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348800 asm("D_00348800");
extern "C" u32 D_00348804 asm("D_00348804");
extern "C" u32 D_00348808 asm("D_00348808");
extern "C" u32 D_0034880c asm("D_0034880c");
extern "C" u32 D_00348810 asm("D_00348810");
extern "C" u32 D_00348814 asm("D_00348814");
extern "C" u32 D_00348818 asm("D_00348818");
extern "C" u32 D_0034881c asm("D_0034881c");
extern "C" u32 D_0034881d asm("D_0034881d");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_00149288(u32) asm("func_00149288");
extern "C" u32 func_00149290(u32) asm("func_00149290");
extern "C" u32 func_00149298(u32) asm("func_00149298");
extern "C" u32 func_001492a0(u32) asm("func_001492a0");
extern "C" u32 func_001492a8(u32) asm("func_001492a8");
extern "C" u32 func_001492b0(u32) asm("func_001492b0");
extern "C" u32 func_001492b8(u32) asm("func_001492b8");
extern "C" u32 func_001492c0(u32) asm("func_001492c0");
extern "C" u32 func_001492d0(u32) asm("func_001492d0");
extern "C" u32 func_001492d8(u32) asm("func_001492d8");
extern "C" u32 func_00153678(u32, u32, u32) asm("func_00153678");
extern "C" void func_00108698(u32) asm("func_00108698");
extern "C" void func_0011b6a8(u32) asm("func_0011b6a8");
extern "C" void func_0011e260(u32, u32) asm("func_0011e260");
extern "C" void func_0011e880(u32, u32, u32, u32) asm("func_0011e880");
extern "C" void func_0011eb08(u32, u32) asm("func_0011eb08");
extern "C" void func_001415e8(u32, u32, u32) asm("func_001415e8");
extern "C" void func_00142bf8(u32) asm("func_00142bf8");
extern "C" void func_00143278() asm("func_00143278");
extern "C" void func_00143298(u32, u32, u8, u32) asm("func_00143298");
extern "C" void func_00145830(u32, u32, u8, u32) asm("func_00145830");
extern "C" void func_0014ecb8() asm("func_0014ecb8");
extern "C" void func_0015c500() asm("func_0015c500");
extern "C" void func_0015c6d0(u32) asm("func_0015c6d0");

// 0x00142c90 func_00142c90
u32 func_00142c90(u32 a0, u32 a1, u8 a2, u32 a3) asm("_ZN2dk6Octree6createEPNS_7MapFileEP9ALLOCATORby");
u32 func_00142c90(u32 a0, u32 a1, u8 a2, u32 a3) {
    u32 s1;
    u32 s1_0;
    u32 s0;
    u32 v0;
    u32 v0_1;
    u32 s0_2;
    u32 s0_3;
    u32 s0_4;
    u32 s0_5;
    u32 s0_6;
    *(u8*)(&D_0034881c) = a2;
    *(u8*)(&D_0034881d) = 0;
    func_00143298(a0, a1, a2, a3);
    func_00143278();
    s1 = func_001063c0(0x5380, a1);
    func_00145830(s1, func_00149298(a0), a2, a3);
    *(u32*)(&D_00348800) = s1;
    s1_0 = func_001063c0(0x90, a1);
    s0 = func_00149288(a0);
    v0 = func_00149290(a0);
    *(u32*)((s1_0 + 4)) = s0;
    func_00108698(s1_0 + 0x50);
    *(u32*)((s1_0 + 0x88)) = a1;
    v0_1 = ((u32(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((s1_0 + 4))) + 0x24))))(*(u32*)((s1_0 + 4)), a1);
    *(u32*)(s1_0) = v0_1;
    if (((s32)(v0) != 0)) {
        *(u32*)((s1_0 + 0x74)) = v0;
        func_0011e260(v0_1, v0);
    }
    func_0011b6a8(s1_0 + 0x10);
    func_0011eb08(*(u32*)(s1_0), 0);
    func_0011e880(*(u32*)(s1_0), 2, 0, 0);
    *(u8*)((s1_0 + 0x8c)) = 0;
    *(u32*)(&D_00348818) = s1_0;
    func_0014ecb8();
    if (((s32)(func_001492a0(a0)) != 0)) {
        s0_2 = func_001063c0(0xe0, a1);
        func_001415e8(s0_2, func_001492a0(a0), a3);
        *(u32*)(&D_00348804) = s0_2;
        func_00142bf8(s0_2);
    }
    if (((s32)(func_001492a8(a0)) != 0)) {
        s0_3 = func_001063c0(0xe0, a1);
        func_001415e8(s0_3, func_001492a8(a0), a3);
        *(u32*)(&D_00348808) = s0_3;
    }
    if (((s32)(func_001492b0(a0)) != 0)) {
        s0_4 = func_001063c0(0xe0, a1);
        func_001415e8(s0_4, func_001492b0(a0), a3);
        *(u32*)(&D_0034880c) = s0_4;
    }
    if (((s32)(func_001492b8(a0)) != 0)) {
        s0_5 = func_001063c0(0xe0, a1);
        func_001415e8(s0_5, func_001492b8(a0), a3);
        *(u32*)(&D_00348810) = s0_5;
    }
    if (((s32)(func_001492c0(a0)) != 0)) {
        s0_6 = func_001063c0(0xe0, a1);
        func_001415e8(s0_6, func_001492c0(a0), a3);
        *(u32*)(&D_00348814) = s0_6;
    }
    func_0015c500();
    if (((s32)(func_001492d8(a0)) != 0)) {
        func_0015c6d0(func_001492d8(a0));
    }
    return func_00153678(func_001492d0(a0), a3, a1);
}
