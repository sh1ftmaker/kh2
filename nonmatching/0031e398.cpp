// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e888 asm("D_0034e888");
extern "C" u32 D_00350ab0 asm("D_00350ab0");
extern "C" u32 D_003637e0 asm("D_003637e0");
extern "C" u32 D_00363828 asm("D_00363828");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_00239870(u32) asm("func_00239870");
extern "C" void func_002ee380(u32) asm("func_002ee380");
extern "C" void func_0031e590(u32) asm("func_0031e590");

// 0x0031e398 func_0031e398
u32 func_0031e398(u32 a0) asm("_ZN2YS14TUTORIAL_PAUSED0Ev");
u32 func_0031e398(u32 a0) {
    u32 s3;
    u32 s0;
    u32 s1;
    u32 s0_0;
    *(u32*)(a0) = (u32)&D_0034e888;
    *(u32*)((a0 + 0x24)) = (u32)&D_00363828;
    *(u32*)((a0 + 0x50)) = (u32)&D_00350ab0;
    s3 = (a0 + 0x50);
    if ((s3 != 0xfffff330)) {
        s0 = (a0 + 0x1280);
        while ((s1 = (a0 + 0xd20)), (s0_0 = (s0 + -0x158)), (s1 != s0_0)) {
            ((void(*)(u32))(*(u32*)(*(u32*)(s0_0))))(s0_0);
            s0 = s0_0;
        }
    }
    func_00239870(s3 + 0xb78);
    func_0031e590(s3);
    *(u32*)((a0 + 0x24)) = (u32)&D_003637e0;
    func_002ee380(a0);
    return func_00105110(a0);
}
