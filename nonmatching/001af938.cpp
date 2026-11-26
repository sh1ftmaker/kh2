// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 D_0036d8b8 asm("D_0036d8b8");
extern "C" f32 func_0016afe0(u32) asm("func_0016afe0");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001373d8() asm("func_001373d8");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_0016e920(u32) asm("func_0016e920");
extern "C" void func_001880b0(u32, u32) asm("func_001880b0");
extern "C" void func_001c7fb8(u32, u32, u32, f32) asm("func_001c7fb8");
extern "C" void func_001c8ba8() asm("func_001c8ba8");

// 0x001af938 YS::GAMEOVER::Reraise()
u32 lift_001af938() asm("_ZN2YS8GAMEOVER7ReraiseEv");
u32 lift_001af938() {
    u32 s1;
    u32 s0;
    u32 s3;
    u32 s2;
    func_001c8ba8();
    s1 = *(u32*)(&D_0034e948);
    s0 = func_001050d8(0xd00);
    s3 = func_0016e920(0x4f4);
    s2 = func_0016c028(s1);
    func_001c7fb8(s0, s3, s2, func_0016afe0(s1));
    func_001880b0(s0 + 0x300, (u32)&D_0036d8b8);
    *(u32*)(&D_0034f240) = (*(u32*)(&D_0034f240) & 0xfffffffd);
    return func_001373d8();
}
