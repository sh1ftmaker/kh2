// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f600 asm("D_0035f600");
extern "C" u32 D_0035f604 asm("D_0035f604");
extern "C" void func_00106420(u32) asm("func_00106420");

// 0x002a76d8 func_002a76d8
void func_002a76d8() asm("func_002a76d8");
void func_002a76d8() {
    u32 s0;
    u32 s1;
    u32 s1_0;
    if (((s32)(*(u32*)(&D_0035f600)) != 0)) {
        func_00106420(*(u32*)(&D_0035f600));
        *(u32*)(&D_0035f600) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f604)) != 0)) {
        s0 = (*(u32*)(&D_0035f604) + 0x2210);
        while ((s0 = (s0 + -0x1b4)), (*(u32*)(&D_0035f604) != s0)) {
            s1 = *(u32*)(&D_0035f604);
            ((void(*)(u32))(*(u32*)((*(u32*)(s0) + 0xc))))(s0);
        }
        s1_0 = *(u32*)(&D_0035f604);
        func_00106420(*(u32*)(&D_0035f604));
        *(u32*)(&D_0035f604) = 0;
    }
    return;
}
