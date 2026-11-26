// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e8a8 asm("D_0034e8a8");
extern "C" u32 D_00350ab0 asm("D_00350ab0");
extern "C" u32 D_00350bb0 asm("D_00350bb0");
extern "C" u32 func_001ac5b8(u32) asm("func_001ac5b8");
extern "C" void func_00239848(u32) asm("func_00239848");
extern "C" void func_00239870(u32) asm("func_00239870");

// 0x0031fc78 func_0031fc78
u32 func_0031fc78(u32 a0) asm("_ZN4menu14TutorialWidgetD1Ev");
u32 func_0031fc78(u32 a0) {
    u32 s0;
    u32 s0_0;
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
    *(u32*)((a0 + 0x84)) = (u32)&D_0034e8a8;
    func_00239848(a0 + 0x84);
    return func_001ac5b8(a0);
}
