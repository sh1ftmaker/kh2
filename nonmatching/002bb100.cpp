// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003616e8 asm("D_003616e8");
extern "C" u32 D_01e2aa80 asm("D_01e2aa80");

// 0x002bb100 func_002bb100
void func_002bb100(u32 a0, u32 a1, u32 a2) asm("func_002bb100");
void func_002bb100(u32 a0, u32 a1, u32 a2) {
    u32 t7;
    u32 t7_0;
    t7 = *(u32*)(&D_003616e8);
    *(u32*)((a0 + 0x14)) = t7;
    *(u32*)(&D_003616e8) = (t7 + 1);
    if (((s32)((t7 + 1)) == 0)) {
        *(u32*)(&D_003616e8) = 1;
    }
    *(u32*)((a0 + 0x24)) = 0;
    *(u8*)((a0 + 0x30)) = 1;
    *(u8*)((a0 + 0x31)) = a2;
    if ((a1 == 1)) {
        *(u32*)((a0 + 0x24)) = 2;
    }
    *(u16*)((a0 + 0x28)) = 0x3fff;
    *(u16*)((a0 + 0x2c)) = 0x40;
    t7_0 = *(u32*)(((u32)&D_01e2aa80 + 4));
    if ((t7_0 == 0)) {
        *(u32*)(((u32)&D_01e2aa80 + 4)) = a0;
        *(u32*)(&D_01e2aa80) = a0;
        *(u32*)((a0 + 0x1c)) = 0;
        return;
    } else {
        *(u32*)((t7_0 + 0x1c)) = a0;
        *(u32*)((a0 + 0x1c)) = 0;
        *(u32*)(((u32)&D_01e2aa80 + 4)) = a0;
        return;
    }
}
