// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2c8 asm("D_0035f2c8");
extern "C" u32 D_0035f2cc asm("D_0035f2cc");
extern "C" u32 D_00374360 asm("D_00374360");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_002854c0() asm("func_002854c0");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");

// 0x00284650 func_00284650
u32 func_00284650() asm("_ZN2Tz6Ending7LoopAllEv");
u32 func_00284650() {
    u32 v0;
    u32 a0_0;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 v0_2;
    func_00139d78(*(u32*)(&D_0035f2c8));
    v0 = func_002854c0();
    func_0023f070(*(u32*)(&D_0035f2c8), *(s8*)(((((v0 << 1) + v0) + (u32)&D_00374360) + 2)), 0xffffffff);
    func_00139d78(*(u32*)(&D_0035f2cc));
    func_00138c10(*(u32*)(&D_0035f2cc), 2);
    func_00139d78(*(u32*)(&D_0035f2cc) + 0x1b4);
    func_00138c10(*(u32*)(&D_0035f2cc) + 0x1b4, 8);
    a0_0 = *(u32*)(&D_0035f2cc);
    s2 = 0;
    s3 = 7;
    s4 = 0x360000;
    do {
        func_00139d78((a0_0 + s2) + 0x368);
        v0_2 = func_00138c10((*(u32*)((s4 + -0xd34)) + s2) + 0x368, 5);
        a0_0 = *(u32*)((s4 + -0xd34));
        s2 = (s2 + 0x1b4);
        s3 = (s3 + -1);
    } while (((s32)(s3) >= 0));
    return v0_2;
}
