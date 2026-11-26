// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" f32 func_002f8960(f32) asm("func_002f8960");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");

// 0x0017c930 func_0017c930
// minilink-rodata 0x0036c52c   (float literals live here in the original)
f32 func_0017c930(u32 a0, u32 a1) asm("_ZN2YS11ACTION_JUMP15calc_movement_yEPNS_3OBJE");
f32 func_0017c930(u32 a0, u32 a1) {
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    f32 f20;
    f32 f0;
    f32 f0_2;
    if (((s32)((*(u32*)((a1 + 0x160)) & 0x20)) == 0)) {
        if (((s32)((*(u32*)((a1 + 0x160)) & 0x1000000)) != 0)) {
            t7 = 1;
        } else {
            t7 = 0;
        }
        t7_0 = t7;
    } else {
        t7_0 = 1;
    }
    if ((t7_0 == 0)) {
        if (((s32)((*(u32*)((a1 + 0x160)) & 0x40)) != 0)) {
            t7_1 = 0;
        } else {
            t7_1 = 1;
        }
        t7_0 = t7_1;
    } else {
        t7_0 = 0;
    }
    if (((s32)(t7_0) != 0)) {
        f20 = (*(f32*)((a1 + 0xd0)) < *(f32*)((a1 + 0xd4))) ? (*(f32*)((a1 + 0xd8)) + (*(f32*)((a1 + 0xdc)) * func_002f8960((func_002f8960(((*(f32*)((a1 + 0xd0)) / *(f32*)((a1 + 0xd4))) * 3.1415927410125732f) * 0.5f) * 3.1415927410125732f) * 0.5f))) : ((*(f32*)((a1 + 0xd8)) + *(f32*)((a1 + 0xdc))) + ((((*(f32*)((a1 + 0xd0)) - *(f32*)((a1 + 0xd4))) * 0.40816324949264526f) * (*(f32*)((a1 + 0xd0)) - *(f32*)((a1 + 0xd4)))) * 0.5f));
        f0 = ((f20 - *(f32*)((func_0016c028(a1) + 4))) < (*(f32*)((a1 + 0x120)) * *(f32*)(&D_00349e10))) ? (f20 - *(f32*)((func_0016c028(a1) + 4))) : (*(f32*)((a1 + 0x120)) * *(f32*)(&D_00349e10));
        f0_2 = f0;
    } else {
        f0_2 = 0.0f;
    }
    return f0_2;
}
