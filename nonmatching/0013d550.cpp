// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348050 asm("D_00348050");
extern "C" u32 D_003484a0 asm("D_003484a0");
extern "C" u32 D_00348578 asm("D_00348578");
extern "C" u32 func_0013a9d0() asm("func_0013a9d0");
extern "C" u32 func_0013b2d8(f32) asm("func_0013b2d8");
extern "C" u32 func_0013cb80() asm("func_0013cb80");
extern "C" void func_001387f8(u32, u32, u32, u32) asm("func_001387f8");
extern "C" void func_0013b348(u32, u32) asm("func_0013b348");
extern "C" void func_0013d4c8() asm("func_0013d4c8");
extern "C" void func_002362b0(u32, u32) asm("func_002362b0");
extern "C" void func_002367c8(u32) asm("func_002367c8");
extern "C" void func_002368e8(u32, f32) asm("func_002368e8");

// 0x0013d550 func_0013d550
// minilink-rodata 0x0036ad68   (float literals live here in the original)
u32 func_0013d550(u32 a0, u32 a1) asm("_ZN2dk12COMMAND_DRAW22setSpecialCommandImageEPvS1_");
u32 func_0013d550(u32 a0, u32 a1) {
    u32 s0;
    if (((s32)(*(u32*)(&D_003484a0)) == 0)) {
        func_0013b348(0, a1);
    }
    s0 = (*(u32*)(&D_00348050) + 0x20);
    func_002362b0(*(u32*)(&D_00348050) + 0x20, a0);
    if (((s32)(func_0013a9d0()) != 0)) {
        func_002368e8(s0, 0.949999988079071f);
    }
    func_002367c8(s0);
    *(u32*)((*(u32*)(&D_003484a0) + 0x2a0)) = a1;
    func_0013d4c8();
    func_001387f8(*(u32*)(&D_003484a0) + 0x104, a1, func_0013cb80() + 0x20, *(u32*)(((u32)&D_00348578 + 8)));
    *(u32*)((*(u32*)(&D_003484a0) + 0x28c)) = *(u32*)(((u32)&D_00348578 + 0xc));
    return func_0013b2d8(0.0f);
}
