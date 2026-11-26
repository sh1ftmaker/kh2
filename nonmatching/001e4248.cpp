// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001e4248 func_001e4248
// minilink-rodata 0x0036ed04   (float literals live here in the original)
void func_001e4248(u32 a0) asm("func_001e4248");
void func_001e4248(u32 a0) {
    u32 t7;
    u32 v0;
    u32 t5;
    u32 t5_0;
    u32 t7_1;
    u32 t6;
    u32 t7_2;
    u32 t3;
    u32 t3_3;
    u32 v0_4;
    u32 t4;
    u32 t1;
    u32 t0;
    f32 f5;
    f32 f4;
    f32 f3;
    f32 acc;
    u32 t0_5;
    u32 t1_6;
    u32 t0_7;
    u32 t1_8;
    u32 v0_9;
    t7 = *(u32*)(a0);
    if (((s32)(t7) > 0)) {
        v0 = (a0 + 4);
        t5 = *(u32*)(v0);
        do {
            t5_0 = *(u32*)(v0);
            t7_1 = *(u32*)((t5_0 + 0x18));
            t6 = *(s16*)((t5_0 + 2));
            if (((s32)(t6) != 0)) {
                t7_2 = *(s16*)((t5_0 + 6));
                if ((t7_2 != 0x13)) {
                    if ((t7_2 != 0x14)) {
                        t3 = 0;
                    } else {
                        t3 = 0x10;
                    }
                    t3_3 = t3;
                } else {
                    t3_3 = 0x100;
                }
                v0_4 = (v0 + 4);
                if (((s32)(t3_3) != 0)) {
                    t4 = ((t5_0 + t7_1) + 0x20);
                    t1 = 0x13;
                    t0 = 0x14;
                    f5 = 0.30000001192092896f;
                    f4 = 0.5899999737739563f;
                    f3 = 0.10999999940395355f;
                    do {
                        acc = ((f32)((s32)(*(u8*)(t4))) * f5);
                        *(u8*)(t4) = (s32)(((acc + ((f32)((s32)(*(u8*)((t4 + 1)))) * f4)) + ((f32)((s32)(*(u8*)((t4 + 2)))) * f3)));
                        *(u8*)((t4 + 2)) = (s32)(((acc + ((f32)((s32)(*(u8*)((t4 + 1)))) * f4)) + ((f32)((s32)(*(u8*)((t4 + 2)))) * f3)));
                        *(u8*)((t4 + 1)) = (s32)(((acc + ((f32)((s32)(*(u8*)((t4 + 1)))) * f4)) + ((f32)((s32)(*(u8*)((t4 + 2)))) * f3)));
                        t3_3 = (t3_3 + -1);
                        t4 = (t4 + 4);
                    } while (((s32)(t3_3) != 0));
                    t0_5 = t0;
                    t1_6 = t1;
                } else {
                    t0_5 = 0x14;
                    t1_6 = 0x13;
                }
                t0_7 = t0_5;
                t1_8 = t1_6;
                v0_9 = v0_4;
            } else {
                t0_7 = 0x14;
                t1_8 = 0x13;
                v0_9 = (v0 + 4);
            }
            t7 = (t7 + -1);
            v0 = v0_9;
        } while ((t7 != 0));
    }
    return;
}
