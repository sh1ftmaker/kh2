// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035f5ec asm("D_0035f5ec");
extern "C" u32 D_0035f5f0 asm("D_0035f5f0");
extern "C" void func_00106420(u32) asm("func_00106420");

// 0x002a4d48 func_002a4d48
void func_002a4d48() asm("func_002a4d48");
void func_002a4d48() {
    u32 a1_0;
    u32 s0;
    if (((s32)(*(u32*)(&D_0035f5ec)) != 0)) {
        func_00106420(*(u32*)(&D_0035f5ec));
        *(u32*)(&D_0035f5ec) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f5f0)) != 0)) {
        a1_0 = *(u32*)(&D_0035f5f0);
        s0 = (*(u32*)(&D_0035f5f0) + (*(u32*)((*(u32*)(&D_0035f5f0) + -4)) * 0x1b4));
        while ((s0 = (s0 + -0x1b4)), (a1_0 != s0)) {
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(s0) + 0xc))))(s0, a1_0);
            a1_0 = *(u32*)(&D_0035f5f0);
        }
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a1_0 + -4);
        *(u32*)(&D_0035f5f0) = 0;
    }
    return;
}
