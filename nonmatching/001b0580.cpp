// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_001b13d0 asm("D_001b13d0");
extern "C" u32 D_01c940c0 asm("D_01c940c0");
extern "C" u32 D_01c940d0 asm("D_01c940d0");
extern "C" f32 func_001b0498(u32) asm("func_001b0498");
extern "C" f32 func_002f87c0(f32) asm("func_002f87c0");
extern "C" void func_002fd188(u32) asm("func_002fd188");

// 0x001b0580 func_001b0580
// minilink-rodata 0x0036d960   (float literals live here in the original)
f32 func_001b0580(u32 a0) asm("_ZN2YS6LOOKAT12make_to_faceEv");
f32 func_001b0580(u32 a0) {
    u32 t7;
    f32 f0;
    u32 t7_0;
    f32 f0_1;
    f32 f0_2;
    u32 t7_3;
    f32 f0_4;
    u32 t7_5;
    if (((s32)(*(s8*)(&D_01c940c0)) == 0)) {
        *(u8*)(&D_01c940c0) = 1;
        func_002fd188((u32)&D_001b13d0);
    }
    if (((s32)(func_001b0498(a0)) != 0)) {
        if (((s32)(*(u32*)((a0 + 4))) < (s32)(3))) {
            if (((s32)(*(u32*)((a0 + 4))) <= 0)) {
                if (((s32)(*(u32*)((a0 + 4))) == 0)) {
                    t7 = 0;
                } else {
                    t7 = (u32)&D_01c940d0;
                }
                f0 = func_001b0498(a0);
                t7_0 = t7;
            } else {
                if (((a0 + 0x20) != (u32)&D_01c940d0)) {
                    *(Q16*)((u32)&D_01c940d0) = *(Q16*)((a0 + 0x20));
                }
                *(f32*)(((u32)&D_01c940d0 + 0xc)) = ((1.0f - func_002f87c0(*(f32*)((a0 + 0x10)) * 3.1415927410125732f)) * 0.5f);
                *(u16*)(((u32)&D_01c940d0 + 0x10)) = *(u16*)((a0 + 0xc));
                *(u64*)(((u32)&D_01c940d0 + 0x10)) = (*(u64*)(((u32)&D_01c940d0 + 0x10)) & 0xfffeffff);
                f0 = 0.5f;
                t7_0 = (u32)&D_01c940d0;
            }
            f0_2 = f0;
            t7_3 = t7_0;
        } else {
            if ((*(u32*)((a0 + 4)) == 3)) {
                if (((a0 + 0x20) != (u32)&D_01c940d0)) {
                    *(Q16*)((u32)&D_01c940d0) = *(Q16*)((a0 + 0x20));
                }
                *(f32*)(((u32)&D_01c940d0 + 0xc)) = ((1.0f - func_002f87c0(*(f32*)((a0 + 0x10)) * 3.1415927410125732f)) * 0.5f);
                *(u16*)(((u32)&D_01c940d0 + 0x10)) = *(u16*)((a0 + 0xc));
                *(u64*)(((u32)&D_01c940d0 + 0x10)) = (*(u64*)(((u32)&D_01c940d0 + 0x10)) | 0x10000);
                f0_1 = 0.5f;
            } else {
                f0_1 = func_001b0498(a0);
            }
            f0_2 = f0_1;
            t7_3 = (u32)&D_01c940d0;
        }
        f0_4 = f0_2;
        t7_5 = t7_3;
    } else {
        f0_4 = func_001b0498(a0);
        t7_5 = 0;
    }
    return f0_4;
}
