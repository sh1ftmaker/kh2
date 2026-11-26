// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348050 asm("D_00348050");
extern "C" u32 D_003484a0 asm("D_003484a0");
extern "C" u32 D_00348578 asm("D_00348578");
extern "C" u32 func_0013a800() asm("func_0013a800");
extern "C" u32 func_0013a810() asm("func_0013a810");
extern "C" u32 func_0013b2d8(f32) asm("func_0013b2d8");
extern "C" u32 func_0013cb80() asm("func_0013cb80");
extern "C" void func_00138698(u32, u32) asm("func_00138698");
extern "C" void func_001387f8(u32, u32, u32, u32) asm("func_001387f8");
extern "C" void func_0013d4c8() asm("func_0013d4c8");

// 0x0013d620 func_0013d620
u32 func_0013d620() asm("_ZN2dk12COMMAND_DRAW24resetSpecialCommandImageEv");
u32 func_0013d620() {
    u32 s2;
    func_00138698(*(u32*)(&D_00348050), func_0013a800());
    *(u32*)((*(u32*)(&D_003484a0) + 0x2a0)) = 0;
    func_0013d4c8();
    s2 = func_0013a810();
    func_001387f8(*(u32*)(&D_003484a0) + 0x104, s2, func_0013cb80() + 0x20, *(u32*)(&D_00348578));
    *(u32*)((*(u32*)(&D_003484a0) + 0x28c)) = *(u32*)(((u32)&D_00348578 + 4));
    return func_0013b2d8(0.0f);
}
