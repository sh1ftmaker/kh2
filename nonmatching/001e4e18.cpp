// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001e4e18 func_001e4e18
// minilink-rodata 0x0036ed54   (float literals live here in the original)
void func_001e4e18(u32 a0) asm("_Z10pppInitDpdPc");
void func_001e4e18(u32 a0) {
    u32 t7;
    u32 v0;
    u32 t6;
    u32 t6_0;
    u32 a3_1;
    u32 t7_2;
    u32 t0;
    u32 t3;
    u32 t7_3;
    f32 f3;
    f32 f4;
    f32 f5;
    u32 t2;
    u32 t4;
    f32 acc;
    u32 t6_4;
    t7 = *(u32*)(a0);
    if (((s32)(t7) > 0)) {
        v0 = (a0 + 4);
        t6 = *(u32*)(v0);
        do {
            t6_0 = *(u32*)(v0);
            a3_1 = (t6_0 + 0x10);
            v0 = (v0 + 4);
            t7_2 = *(s16*)((a3_1 + 6));
            if (((s32)(t7_2) > 0)) {
                t0 = (t6_0 + 0x20);
                do {
                    t3 = (a3_1 + *(s16*)(t0));
                    t7_3 = *(s16*)((t3 + 2));
                    if (((s32)(t7_3) > 0)) {
                        f3 = 0.10999999940395355f;
                        f4 = 0.5899999737739563f;
                        f5 = 0.30000001192092896f;
                        t2 = 0;
                        t4 = (t3 + *(u32*)((t3 + 4)));
                        do {
                            t2 = (t2 + 1);
                            acc = ((f32)((s32)(*(u8*)(t4))) * f5);
                            *(u8*)(t4) = (s32)(((acc + ((f32)((s32)(*(u8*)((t4 + 1)))) * f4)) + ((f32)((s32)(*(u8*)((t4 + 2)))) * f3)));
                            *(u8*)((t4 + 1)) = (s32)(((acc + ((f32)((s32)(*(u8*)((t4 + 1)))) * f4)) + ((f32)((s32)(*(u8*)((t4 + 2)))) * f3)));
                            *(u8*)((t4 + 2)) = (s32)(((acc + ((f32)((s32)(*(u8*)((t4 + 1)))) * f4)) + ((f32)((s32)(*(u8*)((t4 + 2)))) * f3)));
                            t6_4 = *(s16*)((t3 + 2));
                            t4 = (t4 + 8);
                        } while (((s32)(((s32)(t2) < (s32)(t6_4))) != 0));
                    }
                    t7_2 = (t7_2 + -1);
                    t0 = (t0 + 8);
                } while (((s32)(t7_2) != 0));
            }
            t7 = (t7 + -1);
        } while ((t7 != 0));
    }
    return;
}
