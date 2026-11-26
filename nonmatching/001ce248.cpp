// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352134 asm("D_00352134");
extern "C" u32 func_00168b88(u32, u32, u32, u32) asm("func_00168b88");

// 0x001ce248 func_001ce248
u32 func_001ce248(u32 a0, u32 a1) asm("func_001ce248");
u32 func_001ce248(u32 a0, u32 a1) {
    u32 t4;
    u32 t5;
    u32 t6;
    u32 a2_0;
    t4 = *(s8*)((a1 + 1));
    t5 = *(s8*)((a1 + 3));
    t6 = *(s8*)((a1 + 2));
    a2_0 = *(s8*)(a1);
    return *(u32*)((func_00168b88(*(u32*)(&D_00352134), a0, (a2_0 | (t5 << 0x18)) | ((t6 << 0x10) | (t4 << 8)), 0) + 8));
}
