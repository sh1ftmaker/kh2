// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f3588 asm("D_004f3588");
extern "C" f32 func_0017ce10(u32, u32, u32, u32, u32, u32, f32) asm("func_0017ce10");

// 0x00155758 func_00155758
void func_00155758(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("func_00155758");
void func_00155758(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    f32 f0;
    if (((s32)(((s32)(a0) < (s32)(0x3c))) != 0)) {
        *(u32*)(a1) = 0;
        f0 = ((f32)((s32)(a0)) * *(f32*)(&D_004f3588));
        *(f32*)(a5) = f0;
        *(f32*)(a5) = func_0017ce10(a0, a1, a2, a3, a4, a5, f0);
        if (((s32)(((s32)(a0) < (s32)(0x14))) != 0)) {
            *(u32*)(a3) = 0x40;
            *(u32*)(a4) = 0x64;
            *(u32*)(a2) = 0xffffffce;
        } else {
            if (((s32)(((s32)(a0) < (s32)(0x28))) != 0)) {
                *(u32*)(a3) = 0x40;
                *(u32*)(a4) = 0x32;
                *(u32*)(a2) = 0;
            } else {
                *(u32*)(a3) = 0;
                *(u32*)(a4) = 0;
                *(u32*)(a2) = 0x32;
            }
        }
    }
    return;
}
