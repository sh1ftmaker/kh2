// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001ccaa0 asm("D_001ccaa0");
extern "C" u32 D_003638d0 asm("D_003638d0");

// 0x001ccac0 func_001ccac0
// minilink-rodata 0x0036e204   (float literals live here in the original)
f32 func_001ccac0(u32 a0, u32 a1) asm("_ZN2YS11PRIZEEFFECT9vacuum_caEPNS_6BTLOBJE");
f32 func_001ccac0(u32 a0, u32 a1) {
    u32 t6;
    u32 t6_0;
    f32 f0;
    u32 t6_1;
    f32 f1;
    f32 f0_2;
    u32 t6_3;
    f32 f1_4;
    f32 f2;
    u32 a0_5;
    f32 f0_6;
    f32 f0_7;
    *(u32*)((a0 + 0x10)) = (u32)&D_001ccaa0;
    *(u32*)((a0 + 0x48)) = a1;
    t6 = *(u32*)(&D_003638d0);
    t6_0 = (t6 * 0x10dcd);
    *(u32*)(&D_003638d0) = t6_0;
    f0 = (f32)(t6_0);
    t6_1 = (*(u32*)(&D_003638d0) * 0x10dcd);
    *(u32*)(&D_003638d0) = t6_1;
    f1 = (f0 * 2.3283064365386963e-10f);
    f0_2 = (f32)(t6_1);
    t6_3 = (*(u32*)(&D_003638d0) * 0x10dcd);
    *(u32*)(&D_003638d0) = t6_3;
    f1_4 = (f0_2 * 2.3283064365386963e-10f);
    f2 = (f32)(t6_3);
    a0_5 = (a0 + 0x30);
    *(f32*)(a0_5) = (-10.0f + (f1 * 20.0f));
    *(f32*)((a0_5 + 4)) = (-30.0f + (f1_4 * 10.0f));
    *(u32*)((a0_5 + 0xc)) = 0;
    f0_6 = (f2 * 2.3283064365386963e-10f);
    f0_7 = (f0_6 * 20.0f);
    *(f32*)((a0_5 + 8)) = (-10.0f + f0_7);
    return f0_7;
}
