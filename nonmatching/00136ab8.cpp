// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d30 asm("D_00347d30");
extern "C" u32 D_00347d40 asm("D_00347d40");
extern "C" u32 func_00136a98() asm("func_00136a98");

// 0x00136ab8 func_00136ab8
u32 func_00136ab8() asm("func_00136ab8");
u32 func_00136ab8() {
    u32 t5;
    *(u32*)(&D_00347d30) = 0;
    t5 = ((u32)&D_00347d30 + 0x10);
    *(u32*)(&D_00347d40) = 0;
    *(u32*)(((u32)&D_00347d30 + 4)) = 0;
    *(u32*)(((u32)&D_00347d30 + 8)) = 0;
    *(u32*)(((u32)&D_00347d30 + 0xc)) = 0;
    *(u32*)(((u32)&D_00347d30 + 0x1c)) = 0;
    *(u32*)((t5 + 4)) = 0;
    *(u32*)((t5 + 8)) = 0;
    return func_00136a98();
}
