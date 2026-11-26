// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0033caf4 asm("D_0033caf4");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_003743f8 asm("D_003743f8");
extern "C" u32 D_01e21ef8 asm("D_01e21ef8");
extern "C" u32 func_00138650(u32, u32, u32, u32) asm("func_00138650");
extern "C" u32 func_0023f988(u32, u32) asm("func_0023f988");
extern "C" void func_002361a0(u32) asm("func_002361a0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0023f800(u32) asm("func_0023f800");
extern "C" void func_0023fa90(u32, u32) asm("func_0023fa90");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");

// 0x002875e8 func_002875e8
u32 func_002875e8(u32 a0) asm("_ZN2Tz8Mg2DTronC1Ev");
u32 func_002875e8(u32 a0) {
    u32 v0;
    u32 s2;
    u32 s4;
    u32 s5;
    u32 s6;
    u32 v0_0;
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x1c0, 0);
    *(u32*)((v0 + 0xc)) = 0;
    *(u32*)(v0) = (u32)&D_00347e80;
    func_002361a0(v0 + 0x20);
    *(u32*)(a0) = v0;
    func_0023f800(a0 + 0xc);
    s2 = 1;
    s4 = (a0 + 0xc);
    s5 = (u32)&D_00347e60;
    s6 = 0x340000;
    do {
        v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)((s6 + 0x7f80)) + 0x14))))))(*(u32*)((*(u32*)((s6 + 0x7f80)) + 0x14)), 0x198, 0);
        *(u32*)((v0_0 + 0xc)) = 0;
        *(u32*)(v0_0) = s5;
        func_00239700(v0_0 + 0x18);
        *(u32*)(((a0 + ((s2 - 1) * -4)) + 4)) = v0_0;
        s2 = (s2 + -1);
    } while (((s32)(s2) >= 0));
    func_002fee78((u32)&D_01e21ef8, (u32)&D_003743f8, *(u32*)(&D_0033caf4));
    func_0023fa90(s4, (u32)&D_01e21ef8);
    return func_00138650(*(u32*)(a0), 0x6590, func_0023f988(s4, 0), 0);
}
