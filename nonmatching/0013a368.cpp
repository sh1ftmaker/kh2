// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347fd8 asm("D_00347fd8");
extern "C" u32 D_004193c0 asm("D_004193c0");
extern "C" u32 func_0013a4a8() asm("func_0013a4a8");
extern "C" u32 func_0013d498() asm("func_0013d498");
extern "C" u32 func_00168aa0(u32, u32) asm("func_00168aa0");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" void func_0013b3f8() asm("func_0013b3f8");

// 0x0013a368 func_0013a368
u32 func_0013a368() asm("_ZN2dk8Field2DD14restartCommandEv");
u32 func_0013a368() {
    u32 v0;
    u32 s1;
    u32 s0;
    u32 v0_0;
    *(u32*)(&D_00347fd8) = (u32)&D_004193c0;
    v0 = func_00168aa0((u32)&D_004193c0, 0x19);
    *(u32*)(((u32)&D_00347fd8 + 4)) = v0;
    if (((s32)(v0) > 0)) {
        s1 = 0;
        s0 = (u32)&D_00347fd8;
        do {
            *(u32*)(((s0 + (s1 * 8)) + 0xc)) = *(u32*)((func_00168b38(*(u32*)(&D_00347fd8), 0x19, s1) + 8));
            if (((s32)(func_00168b38(*(u32*)(&D_00347fd8), 0x18, 0)) != 0)) {
                *(u32*)(((s0 + (s1 * 8)) + 8)) = *(u32*)((func_00168b38(*(u32*)(&D_00347fd8), 0x18, s1) + 8));
            } else {
                *(u32*)(((s0 + (s1 * 8)) + 8)) = 0;
            }
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(*(u32*)(((u32)&D_00347fd8 + 4))))) != 0));
    }
    v0_0 = func_0013d498();
    if (((s32)(v0_0) == 0)) {
        func_0013b3f8();
        return func_0013a4a8();
    } else {
        return v0_0;
    }
}
