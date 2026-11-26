// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_00349b40 asm("D_00349b40");
extern "C" u32 D_0034af08 asm("D_0034af08");
extern "C" void func_0031b910(u32) asm("func_0031b910");
extern "C" void func_0031bb08(u32) asm("func_0031bb08");
extern "C" void func_0031bbc8(u32) asm("func_0031bbc8");

// 0x0031db80 func_0031db80
void func_0031db80(u32 a0) asm("func_0031db80");
void func_0031db80(u32 a0) {
    u32 s2;
    u32 s0;
    u32 s1;
    u32 s0_0;
    u32 s1_1;
    *(u32*)(a0) = (u32)&D_0034af08;
    s2 = (a0 + 0x30);
    if ((s2 != 0xfffff890)) {
        s0 = (a0 + 0xba0);
        while ((s0 = (s0 + -0x100)), (s1 = (a0 + 0x7a0)), (s1 != s0)) {
            ((void(*)(u32))(*(u32*)(*(u32*)(s0))))(s0);
        }
    }
    if ((s2 != 0xfffffc90)) {
        s0_0 = (s2 + 0x770);
        while ((s0_0 = (s0_0 + -0x100)), (s1_1 = (s2 + 0x370)), (s1_1 != s0_0)) {
            ((void(*)(u32))(*(u32*)(*(u32*)(s0_0))))(s0_0);
        }
    }
    func_0031bbc8(s2 + 0x270);
    func_0031b910(s2 + 0x150);
    *(u32*)(s2) = (u32)&D_00349b40;
    func_0031bb08(s2);
    *(u32*)(a0) = (u32)&D_00347f98;
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a0);
    return;
}
