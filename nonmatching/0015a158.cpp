// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_0034aa84 asm("D_0034aa84");
extern "C" u32 D_004f3604 asm("D_004f3604");
extern "C" f32 func_0015a098() asm("func_0015a098");
extern "C" f32 func_0017ce10(f32) asm("func_0017ce10");
extern "C" u32 func_001584f8(u32, u32) asm("func_001584f8");
extern "C" u32 func_00158548(u32) asm("func_00158548");
extern "C" u32 func_0019c4d0(u32) asm("func_0019c4d0");
extern "C" void func_0013fd90(u32) asm("func_0013fd90");
extern "C" void func_00159fd0(u32, u32, f32) asm("func_00159fd0");

// 0x0015a158 func_0015a158
void func_0015a158(u32 a0, u32 a1) asm("_ZN2dk12TargetCamera7controlEPN2YS3PADEPNS_9ObjCameraE");
void func_0015a158(u32 a0, u32 a1) {
    f32 f20;
    f32 f0;
    f32 f0_0;
    f32 f1;
    f32 f1_1;
    f32 f0_2;
    f32 f0_3;
    f32 f1_4;
    u32 t7;
    u32 t7_5;
    f20 = *(f32*)(&D_00349e10);
    if (((s32)(func_001584f8(a0, a1)) != 0)) {
        f0 = *(f32*)(&D_004f3604);
        f0_0 = (f0 * *(f32*)((a0 + 0x2c)));
        f1 = *(f32*)((a1 + 0x4c));
        f1_1 = (f1 + (f0_0 * f20));
        *(f32*)((a1 + 0x4c)) = f1_1;
        *(f32*)((a1 + 0x4c)) = func_0017ce10(f1_1);
        *(f32*)((a1 + 0x50)) = func_0017ce10(f1_1);
    } else {
        if (((s32)(func_00158548(a0)) != 0)) {
            f0_2 = *(f32*)(&D_004f3604);
            f0_3 = (f0_2 * *(f32*)((a0 + 0x2c)));
            f1_4 = *(f32*)((a1 + 0x4c));
            *(f32*)((a1 + 0x4c)) = (f1_4 - (f0_3 * f20));
            *(f32*)((a1 + 0x4c)) = func_0017ce10(f1_4 - (f0_3 * f20));
            *(f32*)((a1 + 0x50)) = func_0017ce10(f1_4 - (f0_3 * f20));
        }
    }
    if (((s32)(func_0019c4d0(*(u32*)((a1 + 0x44)))) != 0)) {
        t7 = *(u64*)(a0);
        if (((t7 & (u64)(1)) != 0)) {
            func_00159fd0(a1, a0, f20);
        }
    } else {
        func_00159fd0(a1, a0, f20);
    }
    t7_5 = *(u64*)((a0 + 8));
    if (((t7_5 & 0x20000) != 0)) {
        *(f32*)((a1 + 0x50)) = func_0015a098();
        func_0013fd90(a1);
        *(f32*)(&D_0034aa84) = *(f32*)((a1 + 0x48));
    }
    return;
}
