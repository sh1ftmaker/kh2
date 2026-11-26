// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350ab0 asm("D_00350ab0");
extern "C" u32 D_00350bb0 asm("D_00350bb0");
extern "C" u32 D_003637e0 asm("D_003637e0");
extern "C" u32 D_00363828 asm("D_00363828");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_001ac5b8(u32) asm("func_001ac5b8");
extern "C" void func_00239870(u32) asm("func_00239870");
extern "C" void func_0031e668(u32) asm("func_0031e668");

// 0x003259a0 func_003259a0
u32 func_003259a0(u32 a0) asm("_ZN2YS15WINDOW_TUTORIALD1Ev");
u32 func_003259a0(u32 a0) {
    u32 s2;
    u32 s0;
    u32 s1;
    u32 s0_0;
    u32 s1_1;
    *(u32*)(a0) = (u32)&D_00363828;
    *(u32*)((a0 + 0x2c)) = (u32)&D_00350ab0;
    s2 = (a0 + 0x2c);
    if ((s2 != 0xfffff330)) {
        s0 = (a0 + 0x125c);
        while ((s0 = (s0 + -0x158)), (s1 = (a0 + 0xcfc)), (s1 != s0)) {
            ((void(*)(u32))(*(u32*)(*(u32*)(s0))))(s0);
        }
    }
    func_00239870(s2 + 0xb78);
    *(u32*)(s2) = (u32)&D_00350bb0;
    if ((s2 != 0xfffff9f8)) {
        s0_0 = (s2 + 0xb68);
        while ((s0_0 = (s0_0 + -0x158)), (s1_1 = (s2 + 0x608)), (s1_1 != s0_0)) {
            ((void(*)(u32))(*(u32*)(*(u32*)(s0_0))))(s0_0);
        }
    }
    func_00239870(s2 + 0x4b0);
    func_00239870(s2 + 0x350);
    func_00239870(s2 + 0x1e4);
    func_0031e668(s2 + 0x84);
    func_001ac5b8(s2);
    *(u32*)(a0) = (u32)&D_003637e0;
    return func_00106420(a0);
}
