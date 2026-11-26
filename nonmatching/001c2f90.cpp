// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001c2f90 func_001c2f90
// minilink-rodata 0x0036dde0   (float literals live here in the original)
f32 func_001c2f90(u32 a0, u32 a1) asm("_ZN2YS7ABILITY4initEPNS_5SHEETE");
f32 func_001c2f90(u32 a0, u32 a1) {
    u32 t6;
    u32 t6_0;
    u32 t7;
    *(u32*)((a0 + 0x28)) = a1;
    t6 = 7;
    do {
        *(u32*)((a0 + ((t6 - 7) * -4))) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    t6_0 = 0;
    t7 = a0;
    do {
        *(u8*)(((t6_0 + a0) + 0x20)) = 0;
        t6_0 = (t6_0 + 1);
        t7 = ((s32)(t6_0) < (s32)(5));
    } while ((t7 != 0));
    *(u32*)((a0 + 0x74)) = 0;
    *(u32*)((a0 + 0x34)) = 0;
    *(u8*)((a0 + 0x2c)) = 3;
    *(u8*)((a0 + 0x2f)) = 1;
    *(u16*)((a0 + 0x48)) = 0x64;
    *(f32*)((a0 + 0x70)) = 1.0f;
    *(u8*)((a0 + 0x2d)) = 3;
    *(u8*)((a0 + 0x2e)) = 1;
    *(f32*)((a0 + 0x38)) = 1.0f;
    *(f32*)((a0 + 0x3c)) = 1.0f;
    *(f32*)((a0 + 0x40)) = 1.0f;
    *(u8*)((a0 + 0x30)) = 0;
    *(u16*)((a0 + 0x44)) = 0x64;
    *(u16*)((a0 + 0x46)) = 0x64;
    *(u32*)((a0 + 0x54)) = 0;
    *(u32*)((a0 + 0x58)) = 0;
    *(f32*)((a0 + 0x5c)) = 1.0f;
    *(f32*)((a0 + 0x60)) = 1.0f;
    *(u32*)((a0 + 0x64)) = 0;
    *(u32*)((a0 + 0x68)) = 0;
    *(u16*)((a0 + 0x4a)) = 0;
    *(u16*)((a0 + 0x4c)) = 0;
    *(u16*)((a0 + 0x4e)) = 0;
    *(u16*)((a0 + 0x50)) = 0;
    *(f32*)((a0 + 0x6c)) = 1.0f;
    *(u16*)((a0 + 0x52)) = 0;
    return 1.0f;
}
