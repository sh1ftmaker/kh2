// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct A400_u32 { u8 _p[0x400]; u32 m[1]; };
extern "C" u32 D_01e2a5f8 asm("D_01e2a5f8");
extern "C" u32 func_002bac78(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002bac78");

// 0x002baf48 func_002baf48
u32 func_002baf48(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("func_002baf48");
u32 func_002baf48(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u32 t6;
    t6 = *(u32*)(((u32)&D_01e2a5f8 + 0x480));
    *(u32*)(((u32)&D_01e2a5f8 + 0x480)) = (t6 + -1);
    return func_002bac78((((A400_u32*)&D_01e2a5f8)->m[(t6 + -1)] << 5) + (u32)&D_01e2a5f8, a0, a1, a2, a3, a4, a5, a3);
}
