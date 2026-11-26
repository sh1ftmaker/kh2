// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0031eec8 asm("D_0031eec8");
extern "C" u32 func_002fd248(u32, u32, u32, u32, u32) asm("func_002fd248");

// 0x00191f20 func_00191f20
u32 func_00191f20(u32 a0, u32 a1) asm("func_00191f20");
u32 func_00191f20(u32 a0, u32 a1) {
    u32 v0;
    u32 t7;
    v0 = func_002fd248(a1 & 0xffff7fff, a0 + 8, *(u32*)((a0 + 4)), 8, (u32)&D_0031eec8);
    t7 = ((s32)(v0) != 0) ? (a0 + *(u32*)((v0 + 4))) : 0;
    return t7;
}
