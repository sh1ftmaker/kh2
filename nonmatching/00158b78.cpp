// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_004f35a4 asm("D_004f35a4");
extern "C" f32 func_0013fd10(u32, u32) asm("func_0013fd10");
extern "C" f32 func_00158c88(u32) asm("func_00158c88");
extern "C" f32 func_0017ce10(f32) asm("func_0017ce10");
extern "C" u32 func_001584f8(u32, u32) asm("func_001584f8");
extern "C" u32 func_00158548(u32) asm("func_00158548");
extern "C" u32 func_0019c4d0(u32) asm("func_0019c4d0");
extern "C" void func_0013fd78(u32) asm("func_0013fd78");
extern "C" void func_0013fdf0(u32, u32, f32) asm("func_0013fdf0");

// 0x00158b78 dk::DangleCamera::control(YS::PAD*, dk::ObjCamera*)
void lift_00158b78(u32 a0, u32 a1) asm("_ZN2dk12DangleCamera7controlEPN2YS3PADEPNS_9ObjCameraE");
void lift_00158b78(u32 a0, u32 a1) {
    u32 t7;
    f32 f20;
    u32 t6;
    u32 t7_0;
    f32 f20_1;
    f32 f0;
    f32 f0_2;
    f32 f1;
    f32 f1_3;
    f32 f0_4;
    f32 f0_5;
    f32 f1_6;
    f32 f20_7;
    t7 = *(u64*)((a0 + 8));
    if (((s32)((t7 & 0x20000)) != 0)) {
        f20 = *(f32*)(&D_00349e10);
        *(f32*)((a1 + 0x50)) = func_0013fd10(a1, a1);
        t6 = (a1 + 0x10);
        t7_0 = (a1 + 0x60);
        func_0013fd78(a1);
        if ((t6 != t7_0)) {
            *(Q16*)(t6) = *(Q16*)(t7_0);
        }
        f20_7 = f20;
    } else {
        f20_1 = *(f32*)(&D_00349e10);
        if (((s32)(func_001584f8(a0, a1)) != 0)) {
            f0 = *(f32*)(&D_004f35a4);
            f0_2 = (f0 * *(f32*)((a0 + 0x2c)));
            f1 = *(f32*)((a1 + 0x4c));
            f1_3 = (f1 + (f0_2 * f20_1));
            *(f32*)((a1 + 0x4c)) = f1_3;
            *(f32*)((a1 + 0x4c)) = func_0017ce10(f1_3);
            *(f32*)((a1 + 0x50)) = func_0017ce10(f1_3);
        } else {
            if (((s32)(func_00158548(a0)) != 0)) {
                f0_4 = *(f32*)(&D_004f35a4);
                f0_5 = (f0_4 * *(f32*)((a0 + 0x2c)));
                f1_6 = *(f32*)((a1 + 0x4c));
                *(f32*)((a1 + 0x4c)) = (f1_6 - (f0_5 * f20_1));
                *(f32*)((a1 + 0x4c)) = func_0017ce10(f1_6 - (f0_5 * f20_1));
                *(f32*)((a1 + 0x50)) = func_0017ce10(f1_6 - (f0_5 * f20_1));
            }
        }
        f20_7 = f20_1;
    }
    if (((s32)(func_0019c4d0(*(u32*)((a1 + 0x44)))) == 0)) {
        func_0013fdf0(a1, a0, f20_7);
    }
    func_00158c88(a1);
    return;
}
