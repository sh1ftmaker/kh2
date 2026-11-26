// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_0016b0a0(u32) asm("func_0016b0a0");
extern "C" void func_0016b070(u32, u32) asm("func_0016b070");

// 0x001cfaf0 func_001cfaf0
void func_001cfaf0(u32 a0, u32 a1) asm("_ZN2YS12ACTION_NMGUN7controlEPNS_3OBJE");
void func_001cfaf0(u32 a0, u32 a1) {
    Q16 loc_0;
    f32 f1;
    f32 f5;
    f32 f1_0;
    f32 f0;
    f32 f0_1;
    f32 f4;
    f32 f1_2;
    f32 f5_3;
    f32 f1_4;
    f32 f0_5;
    f32 f0_6;
    f32 f2;
    loc_0 = *(Q16*)(func_0016b0a0(a1));
    if ((0.0f < *(f32*)((a1 + 0x1c)))) {
        f1 = *(f32*)((a1 + 0x10));
        f5 = *(f32*)((a1 + 0xb94));
        f1_0 = (f1 * *(f32*)((a1 + 0xb90)));
        f0 = *(f32*)(((u32)&loc_0 + 4));
        f0_1 = (f0 + (f1_0 * *(f32*)(&D_00349e10)));
        *(f32*)(((u32)&loc_0 + 4)) = f0_1;
        if (!((f0_1 < -(f5)))) {
            if (!((f5 < f0_1))) {
                f5 = f0_1;
            }
            f4 = f5;
        } else {
            f4 = -(f5);
        }
        f1_2 = *(f32*)((a1 + 0x14));
        f5_3 = *(f32*)((a1 + 0xb9c));
        f1_4 = (f1_2 * *(f32*)((a1 + 0xb98)));
        *(f32*)(((u32)&loc_0 + 4)) = f4;
        f0_5 = *(f32*)(&loc_0);
        f0_6 = (f0_5 + (f1_4 * *(f32*)(&D_00349e10)));
        *(f32*)(&loc_0) = f0_6;
        if (!((f0_6 < -(f5_3)))) {
            if (!((f5_3 < f0_6))) {
                f5_3 = f0_6;
            }
            f2 = f5_3;
        } else {
            f2 = -(f5_3);
        }
        *(f32*)(&loc_0) = f2;
        func_0016b070(a1, (u32)&loc_0);
    }
    return;
}
