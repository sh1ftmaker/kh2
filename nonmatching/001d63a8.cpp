// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 D_00352130 asm("D_00352130");
extern "C" u32 D_003638d0 asm("D_003638d0");
extern "C" f32 func_002f8b30(f32, f32) asm("func_002f8b30");
extern "C" u32 func_00181500(u32) asm("func_00181500");
extern "C" u32 func_00189200(u32, u32) asm("func_00189200");
extern "C" u32 func_001a3570(u32) asm("func_001a3570");
extern "C" u32 func_001b90c8(u32) asm("func_001b90c8");
extern "C" u32 func_001c99b0(u32) asm("func_001c99b0");

// 0x001d63a8 func_001d63a8
// minilink-rodata 0x0036e5d8   (float literals live here in the original)
void func_001d63a8(u32 a0) asm("_ZN2YS9ANTI_FORM7IsFinalEPNS_4SORAE");
void func_001d63a8(u32 a0) {
    u32 v0;
    u32 s0;
    f32 f2;
    u32 t7;
    f32 f1;
    f32 f0;
    u32 t4;
    u32 t4_0;
    u32 t4_1;
    u32 t4_2;
    u32 t4_3;
    if (((s32)(func_001a3570(0x1d)) <= 0)) {
        if (((s32)(func_001c99b0(5)) == 0)) {
            if (((s32)(func_00181500(0x4842)) != 0)) {
                if (((s32)(((u32)(*(u8*)((*(u32*)((a0 + 0x48c)) + 0x1b1))) < (u32)(*(u8*)((func_001b90c8(5) + 0x1c))))) == 0)) {
                    v0 = func_00189200((u32)&D_0032e020, 5);
                    s0 = *(u32*)(&D_00352130);
                    f2 = (*(f32*)((s0 + 0x98)) * func_002f8b30(*(f32*)((*(u32*)(&D_00352130) + 0x9c)), (f32)(*(s32*)((v0 + 4)))));
                    if ((*(f32*)((*(u32*)(&D_00352130) + 0xa0)) < f2)) {
                        f2 = *(f32*)((*(u32*)(&D_00352130) + 0xa0));
                    }
                    t7 = (*(u32*)(&D_003638d0) * 0x10dcd);
                    *(u32*)(&D_003638d0) = t7;
                    f1 = (f32)(t7);
                    *(u32*)((v0 + 4)) = (*(u32*)((v0 + 4)) + 1);
                    f0 = (f1 * 2.3283064365386963e-10f);
                    if (!((f2 <= (f0 * 100.0f)))) {
                        *(u32*)((v0 + 4)) = 0;
                        t4 = 1;
                    } else {
                        t4 = 0;
                    }
                    t4_0 = t4;
                } else {
                    t4_0 = 0;
                }
                t4_1 = t4_0;
            } else {
                t4_1 = 0;
            }
            t4_2 = t4_1;
        } else {
            t4_2 = 0;
        }
        t4_3 = t4_2;
    } else {
        t4_3 = 0;
    }
    return;
}
