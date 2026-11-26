// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350a56 asm("D_00350a56");
extern "C" u32 D_00350a70 asm("D_00350a70");
extern "C" u32 D_00350ab0 asm("D_00350ab0");
extern "C" u32 D_00350bb0 asm("D_00350bb0");
extern "C" u32 func_001ac5b8(u32) asm("func_001ac5b8");
extern "C" void func_0014c9f0(u32) asm("func_0014c9f0");
extern "C" void func_001c11a8(u32) asm("func_001c11a8");
extern "C" void func_00239870(u32) asm("func_00239870");
extern "C" void func_0031e668(u32) asm("func_0031e668");

// 0x001ad638 func_001ad638
u32 func_001ad638(u32 a0) asm("_ZN2YS22WINDOW_SYSTEM_TUTORIALD1Ev");
u32 func_001ad638(u32 a0) {
    u32 s0;
    u32 s0_0;
    *(u32*)(a0) = (u32)&D_00350a70;
    *(u8*)(&D_00350a56) = 0;
    func_001c11a8(0xc);
    func_0014c9f0(8);
    *(u32*)(a0) = (u32)&D_00350ab0;
    if ((a0 != 0xfffff330)) {
        s0 = (a0 + 0x1230);
        while ((s0 = (s0 + -0x158)), ((a0 + 0xcd0) != s0)) {
            ((void(*)(u32))(*(u32*)(*(u32*)(s0))))(s0);
        }
    }
    func_00239870(a0 + 0xb78);
    *(u32*)(a0) = (u32)&D_00350bb0;
    if ((a0 != 0xfffff9f8)) {
        s0_0 = (a0 + 0xb68);
        while ((s0_0 = (s0_0 + -0x158)), ((a0 + 0x608) != s0_0)) {
            ((void(*)(u32))(*(u32*)(*(u32*)(s0_0))))(s0_0);
        }
    }
    func_00239870(a0 + 0x4b0);
    func_00239870(a0 + 0x350);
    func_00239870(a0 + 0x1e4);
    func_0031e668(a0 + 0x84);
    return func_001ac5b8(a0);
}
