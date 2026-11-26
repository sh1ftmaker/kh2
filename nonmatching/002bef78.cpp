// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002bef78 func_002bef78
void func_002bef78(u32 a0, u32 a1, u32 a2) asm("func_002bef78");
void func_002bef78(u32 a0, u32 a1, u32 a2) {
    u8 frame[32];
    *(u64*)((u32)frame) = a1;
    *(u32*)(((u32)frame + 0x10)) = a2;
    ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x24))) + 0x10))))(*(u32*)((a0 + 0x24)), a1, a2);
}
