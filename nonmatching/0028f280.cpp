// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e40 asm("D_00347e40");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_0035f458 asm("D_0035f458");
extern "C" u32 D_0035f45c asm("D_0035f45c");
extern "C" u32 D_0035f460 asm("D_0035f460");
extern "C" u32 D_0035f468 asm("D_0035f468");
extern "C" u32 D_0035f470 asm("D_0035f470");
extern "C" u32 D_0035f478 asm("D_0035f478");
extern "C" u32 D_0035f480 asm("D_0035f480");
extern "C" u32 func_00103570(u32, u32, u32, u32, u32) asm("func_00103570");
extern "C" u32 func_001063f0(u32, u32) asm("func_001063f0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0028d140(u32) asm("func_0028d140");

// 0x0028f280 Tz::SelHist::Init(int, int, Tz::Layout*, short const*, short const*)
void lift_0028f280(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2Tz7SelHist4InitEiiPNS_6LayoutEPKsS4_");
void lift_0028f280(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    u32 s4;
    u32 s5;
    u32 s4_0;
    u32 s3;
    u32 s2;
    u32 s1;
    u32 t6;
    u32 t5;
    u32 t0;
    u32 t0_1;
    u32 a3_2;
    u32 a2_3;
    u32 a1_4;
    u32 t5_5;
    u32 t3;
    u32 t0_6;
    *(u32*)(&D_0035f458) = a0;
    *(u32*)(&D_0035f45c) = a1;
    *(u32*)(&D_0035f460) = a2;
    v0 = func_001063f0(0xdd4, func_00103570(a0, a1, a2, a3, a4));
    *(u32*)(v0) = 4;
    s4 = (v0 + 4);
    *(u32*)((s4 + 0xc)) = 0;
    s5 = 0xffffffff;
    s4_0 = s4;
    s3 = (u32)&D_00347e60;
    s2 = (u32)&D_00347e40;
    s1 = 3;
    do {
        *(u32*)((s4 + 0xc)) = 0;
        *(u32*)(s4) = s3;
        func_00239700(s4 + 0x18);
        *(u32*)(s4) = s2;
        *(u32*)((s4 + 0x198)) = 0;
        func_0028d140(s4 + 0x1b4);
        s4 = (s4 + 0x374);
        s1 = (s1 + -1);
    } while ((s1 != s5));
    *(u32*)(&D_0035f480) = s4_0;
    t6 = 0;
    t5 = 0x360000;
    t0 = 3;
    do {
        *(u32*)(((t6 + *(u32*)((t5 + -0xb80))) + 0x370)) = 0;
        t0 = (t0 + -1);
        t6 = (t6 + 0x374);
    } while (((s32)(t0) >= 0));
    t0_1 = 0;
    a3_2 = (u32)&D_0035f478;
    a2_3 = (u32)&D_0035f470;
    a1_4 = (u32)&D_0035f468;
    do {
        t5_5 = (t0_1 << 1);
        t3 = (t5_5 + a3);
        *(u16*)((t5_5 + a1_4)) = *(u16*)(t3);
        t0_6 = (t0_1 + 1);
        *(u16*)((t5_5 + a2_3)) = *(u16*)(t3);
        *(u16*)((t5_5 + a3_2)) = *(u16*)((t5_5 + a4));
        t0_1 = t0_6;
    } while (((s32)(((s32)(t0_6) < (s32)(3))) != 0));
    return;
}
