// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00230de0 func_00230de0
// minilink-rodata 0x00371284   (float literals live here in the original)
f32 func_00230de0(u32 a0, u32 a1, u32 a2, f32 fa0) asm("_ZN2sa5EVENT9calcValueEifPNS_22BIN_CAMERA_DATA_ENC_WKES2_");
f32 func_00230de0(u32 a0, u32 a1, u32 a2, f32 fa0) {
    u32 a0_0;
    u32 a0_1;
    u32 t6;
    u32 t7;
    f32 f9;
    f32 f11;
    u32 t5;
    u32 t7_2;
    u32 t7_3;
    f32 f5;
    f32 f2;
    f32 f4;
    f32 f1;
    f32 f0;
    f32 f2_4;
    f32 f4_5;
    f32 f1_6;
    f32 f3;
    f32 f3_7;
    f32 f2_8;
    f32 acc;
    f32 acc_9;
    f32 f1_10;
    f32 f2_11;
    f32 f0_12;
    a0_0 = (a0 << 4);
    a0_1 = (a0_0 + a1);
    t6 = *(u32*)(a0_1);
    t7 = (t6 << 3);
    f9 = *(f32*)((a0_1 + 4));
    f11 = *(f32*)((a0_1 + 0xc));
    if (((s32)(a2) != 0)) {
        *(f32*)((a2 + 0xc)) = f11;
        t6 = *(u32*)(a0_1);
    }
    t5 = (a0_1 + 0x10);
    t7_2 = *(u32*)((a0_1 + 0x10));
    t7_3 = (t7_2 << 3);
    if (((t6 >> 0x1d) != 1)) {
        if (((s32)((t6 >> 0x1d)) != 0)) {
            if (((s32)(((u32)((t6 >> 0x1d)) < (u32)(5))) != 0)) {
                f5 = ((f32)(((s32)(t7_3) >> 3)) * 0.001953125f);
                f2 = ((f32)(((s32)(t7) >> 3)) * 0.001953125f);
                f4 = ((fa0 - f2) * (fa0 - f2));
                f1 = (f4 * (fa0 - f2));
                f0 = ((1.0f / (f5 - f2)) * (1.0f / (f5 - f2)));
                f2_4 = (f4 * 3.0f);
                f4_5 = (f4 * (1.0f / (f5 - f2)));
                f1_6 = (f1 * f0);
                f3 = (f1_6 + f1_6);
                f3_7 = (f3 * (1.0f / (f5 - f2)));
                f2_8 = (f2_4 * f0);
                acc = (f9 * ((f3_7 - f2_8) + 1.0f));
                acc_9 = (acc + (*(f32*)((t5 + 4)) * (f2_8 - f3_7)));
                f1_10 = ((acc_9 + (f11 * ((f1_6 - (f4_5 + f4_5)) + (fa0 - f2)))) + (*(f32*)((t5 + 8)) * (f1_6 - f4_5)));
            } else {
                f1_10 = 0.0f;
            }
            f9 = f1_10;
        }
    } else {
        f2_11 = ((f32)(((s32)(t7) >> 3)) * 0.001953125f);
        f0_12 = ((*(f32*)((t5 + 4)) - f9) * (fa0 - f2_11));
        f9 = (f9 + (f0_12 / (((f32)(((s32)(t7_3) >> 3)) * 0.001953125f) - f2_11)));
    }
    return f9;
}
