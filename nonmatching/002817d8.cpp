// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f270 asm("D_0035f270");
extern "C" u32 D_0035f274 asm("D_0035f274");
extern "C" u32 D_0035f278 asm("D_0035f278");
extern "C" u32 D_0035f27c asm("D_0035f27c");
extern "C" u32 D_0035f284 asm("D_0035f284");
extern "C" u32 D_0035f288 asm("D_0035f288");
extern "C" u32 D_0035f28c asm("D_0035f28c");
extern "C" u32 D_0035f299 asm("D_0035f299");
extern "C" u32 D_0035f2a0 asm("D_0035f2a0");
extern "C" u32 D_0035f2a8 asm("D_0035f2a8");
extern "C" u32 D_003741a8 asm("D_003741a8");

// 0x002817d8 func_002817d8
void func_002817d8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_002817d8");
void func_002817d8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u32 t4;
    u32 t7;
    u32 t7_0;
    u32 t3;
    u32 t4_1;
    *(u32*)(&D_0035f270) = a0;
    *(u32*)(&D_0035f284) = a3;
    *(u32*)(&D_0035f278) = a1;
    *(u32*)(&D_0035f27c) = a2;
    *(u32*)(&D_0035f274) = a4;
    if (((s32)(a5) != 0)) {
        *(u32*)(&D_0035f28c) = *(u32*)(&D_0035f288);
        *(u8*)(&D_0035f299) = 1;
    } else {
        *(u32*)(&D_0035f28c) = 0;
        *(u8*)(&D_0035f299) = 0;
    }
    t4 = 0;
    t7 = (0 << 1);
    do {
        t7_0 = ((s32)(a5) != 0) ? *(u16*)((t7 + a5)) : 0xffffffff;
        *(u16*)((t7 + (u32)&D_0035f2a0)) = t7_0;
        t4 = (t4 + 1);
        t7 = (t4 << 1);
    } while (((s32)(t7) != 0));
    if (((s32)(a6) == 0)) {
        a6 = (u32)&D_003741a8;
    }
    t3 = (u32)&D_0035f2a8;
    t4_1 = 0;
    do {
        *(u16*)(((t4_1 << 1) + t3)) = *(u16*)(((t4_1 << 1) + a6));
        t4_1 = (t4_1 + 1);
    } while (((s32)(((s32)(t4_1) < (s32)(2))) != 0));
    return;
}
