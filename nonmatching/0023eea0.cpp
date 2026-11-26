// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035eb88 asm("D_0035eb88");
extern "C" u32 func_0023f168(u32) asm("func_0023f168");
extern "C" void func_001391c8(u32, u32, u32, u32, u32) asm("func_001391c8");
extern "C" void func_00236a58(u32, u32, u32) asm("func_00236a58");
extern "C" void func_0023c100(u32, u32, u32, u32) asm("func_0023c100");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");

// 0x0023eea0 Tz::Layout::create(int, void*, void*, int, int)
u32 lift_0023eea0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("_ZN2Tz6Layout6createEiPvS1_ii");
u32 lift_0023eea0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    func_001391c8(a0, a1, a5, a3, a4);
    func_00236a58(a0 + 0x18, a3, *(u32*)(&D_0035eb88));
    func_0023c100(a0 + 0x30, a2, a0 + 0x18, *(u32*)(&D_0035eb88));
    *(u32*)((a0 + 0x98)) = 0xfffffff6;
    *(u32*)((a0 + 0x9c)) = 0xfffffff6;
    func_0023f070(a0, a4, 0xffffffff);
    *(u8*)((a0 + 0x94)) = 0;
    return func_0023f168(a0);
}
