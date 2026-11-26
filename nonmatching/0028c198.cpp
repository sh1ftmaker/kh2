// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f3c4 asm("D_0035f3c4");
extern "C" u32 D_0035f3cc asm("D_0035f3cc");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" void func_0028c0a0(u32, u32, u32, u32, u32, u32) asm("func_0028c0a0");

// 0x0028c198 Tz::MenuItem::start(int, int, int, Tz::Layout*, int, int, int)
u32 lift_0028c198(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("_ZN2Tz8MenuItem5startEiiiPNS_6LayoutEiii");
u32 lift_0028c198(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u32 s7;
    u32 s1;
    u32 v0;
    *(u32*)((*(u32*)(&D_0035f3c4) + 0x3780)) = (*(u32*)((*(u32*)(&D_0035f3c4) + 0x3780)) + -1);
    s7 = (*(u32*)(&D_0035f3c4) + (*(u32*)(((((*(u32*)((*(u32*)(&D_0035f3c4) + 0x3780)) + -1) << 2) + *(u32*)(&D_0035f3c4)) + 0x3700)) * 0x1b8));
    s1 = func_0023c4b8(func_0023f1b0(a3), a1);
    v0 = func_00236ca8(*(u32*)((func_0023f1b0(a3) + 0x28)), a2);
    func_0028c0a0(s7, a0, s1, v0, a4, a5);
    if (((s32)(*(u8*)((v0 + 0x190))) != 0)) {
        *(u32*)(((s7 + 0x18) + 0xb8)) = (*(u32*)(((s7 + 0x18) + 0xb8)) | 8);
    } else {
        *(u32*)(((s7 + 0x18) + 0xb8)) = (*(u32*)(((s7 + 0x18) + 0xb8)) & 0xfffffff7);
    }
    *(u32*)((s7 + 0x1b4)) = 0;
    *(u32*)(&D_0035f3cc) = (*(u32*)(&D_0035f3cc) + 1);
    return s7;
}
