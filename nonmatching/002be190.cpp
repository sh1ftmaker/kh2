// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_002eedc0(u32, u32, f32) asm("func_002eedc0");
extern "C" u32 func_002eedd8(u32, u32, f32) asm("func_002eedd8");

// 0x002be190 func_002be190
u32 func_002be190(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN8worldmap8Libretto11startMotionEiPii");
u32 func_002be190(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[16];
    u32 s2;
    u32 v0;
    u32 s1;
    u32 s0;
    u32 v0_0;
    u32 sp;
    s2 = *(u32*)((((a1 << 2) + a0) + 0x2c));
    v0 = func_002eedc0(s2, *(u32*)((func_00168b38(*(u32*)((a0 + 0x68)), 0xffffffff, *(u32*)(a2)) + 8)), 0.0f);
    if (((s32)(((s32)(1) < (s32)(a3))) != 0)) {
        s1 = (a3 + -1);
        s0 = (a2 + 4);
        do {
            v0_0 = func_002eedd8(s2, *(u32*)((func_00168b38(*(u32*)((a0 + 0x68)), 0xffffffff, *(u32*)(s0)) + 8)), 0.0f);
            s0 = (s0 + 4);
            s1 = (s1 + -1);
            v0 = v0_0;
        } while ((s1 != 0));
    } else {
        sp = (u32)frame;
    }
    return v0;
}
