// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003637e0 asm("D_003637e0");

// 0x002edf28 func_002edf28
void func_002edf28(u32 a0) asm("_ZN4menu6WidgetC2Ev");
void func_002edf28(u32 a0) {
    u32 t7;
    *(u32*)(a0) = (u32)&D_003637e0;
    *(u32*)((a0 + 4)) = 0;
    *(u32*)((a0 + 8)) = 0;
    *(u32*)((a0 + 0xc)) = 0;
    *(u32*)((a0 + 0x10)) = 0;
    *(u32*)((a0 + 0x14)) = 0;
    *(u8*)((a0 + 0x18)) = 0x80;
    t7 = (a0 + 0x18);
    *(u8*)((t7 + 1)) = 0x80;
    *(u8*)((t7 + 2)) = 0x80;
    *(u8*)((t7 + 3)) = 0x80;
    *(u32*)((a0 + 0x1c)) = 0;
}
