// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e3b508 asm("D_01e3b508");
extern "C" u32 func_00305a50(u32, u32, u32) asm("func_00305a50");

// 0x00310fe0 func_00310fe0
u32 func_00310fe0(u16 a0, u32 a1, u32 a2) asm("func_00310fe0");
u32 func_00310fe0(u16 a0, u32 a1, u32 a2) {
    u8 frame[16];
    *(u32*)((u32)frame) = a0;
    *(u32*)(((u32)frame + 4)) = a1;
    *(u32*)(((u32)frame + 8)) = a2;
    *(u32*)(((u32)frame + 0xc)) = ((u32)&D_01e3b508 | 0x20000000);
    return func_00305a50(1, (u32)frame, a2);
}
