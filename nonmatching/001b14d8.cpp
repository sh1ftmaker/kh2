// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001b1560 asm("D_001b1560");
extern "C" u32 D_001b18e8 asm("D_001b18e8");
extern "C" u32 D_00350e8c asm("D_00350e8c");
extern "C" u32 D_01d44100 asm("D_01d44100");
extern "C" u32 D_01d44108 asm("D_01d44108");
extern "C" u32 D_01d443c8 asm("D_01d443c8");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");

// 0x001b14d8 func_001b14d8
u32 func_001b14d8() asm("_ZN2YS5LIGHT4InitEv");
u32 func_001b14d8() {
    u32 t6;
    u32 t5;
    u32 v0;
    *(u32*)(&D_01d44100) = 0;
    *(u32*)(((u32)&D_01d44100 + 4)) = 0;
    t6 = 0;
    t5 = (u32)&D_01d44108;
    do {
        *(u32*)(((t5 + (t6 * 4)) + 0x280)) = t6;
        t6 = (t6 + 1);
    } while (((s32)(((s32)(t6) < (s32)(0x10))) != 0));
    *(u8*)(&D_00350e8c) = 0;
    *(u32*)(&D_01d443c8) = 0x10;
    v0 = func_00102c18(1, 0xa410, (u32)&D_001b1560);
    *(u32*)((v0 + 0x30)) = (u32)&D_001b18e8;
    return v0;
}
