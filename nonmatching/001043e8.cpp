// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032ba90 asm("D_0032ba90");
extern "C" u32 D_0032babc asm("D_0032babc");
extern "C" u32 D_0032bac0 asm("D_0032bac0");
extern "C" u32 D_0032bac4 asm("D_0032bac4");
extern "C" u32 D_0032bac8 asm("D_0032bac8");
extern "C" u32 D_0032bad0 asm("D_0032bad0");
extern "C" u32 D_00369e30 asm("D_00369e30");
extern "C" u32 func_00106178(u32, u32) asm("func_00106178");
extern "C" u32 func_00170b30(u32) asm("func_00170b30");
extern "C" u32 func_01f18014(u32, u32) asm("func_01f18014");
extern "C" void func_00167f38(u32) asm("func_00167f38");
extern "C" void func_00168548(u32, u32, u32) asm("func_00168548");
extern "C" void func_001688a0() asm("func_001688a0");
extern "C" void func_00170888(u32) asm("func_00170888");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x001043e8 D_001043e8
u32 lift_D_001043e8(u32 a0) asm("D_001043e8");
u32 lift_D_001043e8(u32 a0) {
    u32 v0;
    u32 s0;
    u32 t5;
    u32 t6;
    u32 t7;
    u32 t5_0;
    func_00167f38(4);
    func_00168548((u32)&D_00369e30, 0, 0);
    func_00170888(a0);
    func_003058a0(2);
    func_001688a0();
    func_00170888(a0);
    *(u32*)(&D_0032babc) = func_00106178(func_00170b30(0xb00000), 0xb00000);
    v0 = func_00170b30(0x1e0000);
    *(u32*)(&D_0032bac0) = func_00106178(v0, 0x40000);
    s0 = (v0 + 0x40000);
    *(u32*)(&D_0032bac4) = func_00106178(s0, 0x180000);
    *(u32*)(&D_0032bac8) = func_00106178(s0 + 0x180000, 0x20000);
    t5 = 0;
    t6 = (u32)&D_0032bad0;
    t7 = (u32)&D_0032bad0;
    do {
        *(u8*)(t7) = 0;
        t5_0 = (t5 + 1);
        t5 = t5_0;
        t7 = (t5_0 + t6);
    } while (((s32)(t7) != 0));
    return func_01f18014(0, (u32)&D_0032ba90);
}
