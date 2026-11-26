// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d5c asm("D_00347d5c");
extern "C" u32 func_00138d60(u32, u32, u32, u32, u32, u32, u32) asm("func_00138d60");
extern "C" u32 func_0013a7e8(u32, u32, u32, u32) asm("func_0013a7e8");

// 0x00137890 func_00137890
u32 func_00137890(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00137890");
u32 func_00137890(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 s1;
    u32 v0;
    s1 = *(u32*)(&D_00347d5c);
    v0 = func_00138d60(a0, 0x2b5c, func_0013a7e8(1, a1, a2, a3), s1 + 0x20, 0x4d, a1, 0);
    *(u32*)((a0 + 0x1a8)) = 0x10;
    *(u32*)((a0 + 0x1b0)) = 2;
    *(u32*)((a0 + 0x1b4)) = 0;
    *(u32*)((a0 + 0x1b8)) = a2;
    *(u32*)((a0 + 0x518)) = 0;
    *(u32*)((a0 + 0x51c)) = a3;
    return v0;
}
