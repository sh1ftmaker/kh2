// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00195c80 asm("D_00195c80");
extern "C" u32 func_00143448(u32, u32, f32, f32) asm("func_00143448");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");

// 0x00195d00 func_00195d00
void func_00195d00(u32 a0, u32 a1) asm("_ZN2YS11ACTION_HANG7controlEPNS_3OBJE");
void func_00195d00(u32 a0, u32 a1) {
    if ((*(f32*)((a1 + 0x14)) < 0.0f)) {
        func_0017f488(a1 + 0x140, 8, 0.0f, 0.0f);
        func_0017f5e0(a1 + 0x140, 4, (u32)&D_00195c80, 0.0f, 0.0f);
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 4))))(a0, a1);
    } else {
        if (((s32)(func_00143448(*(u16*)((a1 + 0xb34)), 8, 0.0f, 0.0f)) == 0)) {
            ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(a0) + 0x20))))(a0, a1, 0);
        }
    }
    return;
}
