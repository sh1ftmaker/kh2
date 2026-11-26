// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" void func_0011c4e8(u32, u32, u32, u32, u32, u32, f32) asm("func_0011c4e8");
extern "C" void func_0011ea40(u32, f32) asm("func_0011ea40");
extern "C" void func_002ef028(u32, f32) asm("func_002ef028");

// 0x002eedf0 func_002eedf0
u32 func_002eedf0(u32 a0) asm("func_002eedf0");
u32 func_002eedf0(u32 a0) {
    u32 s0;
    f32 f20;
    s0 = (a0 + 0x1c8);
    f20 = *(f32*)(&D_00349e10);
    func_002ef028(s0, *(f32*)(&D_00349e10));
    func_0011ea40(*(u32*)((a0 + 0x44)), f20);
    func_0011c4e8(*(u32*)((a0 + 0x44)), a0 + 0x150, *(u32*)((s0 + 8)), 0, 0, 0, *(f32*)((s0 + 0x10)));
    return 1;
}
