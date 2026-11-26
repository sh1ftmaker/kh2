// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002f25a0(u32, u32) asm("func_002f25a0");
extern "C" void func_0011cdf0(u32, u32, u32, u32, u32) asm("func_0011cdf0");

// 0x002eee68 func_002eee68
u32 func_002eee68(u32 a0, u32 a1, u32 a2) asm("_ZN4menu9ObjWidget4drawENS_8PositionEN2YS5COLORE");
u32 func_002eee68(u32 a0, u32 a1, u32 a2) {
    u8 frame[32];
    *(u64*)((u32)frame) = a1;
    *(u32*)(((u32)frame + 0x10)) = a2;
    func_0011cdf0(*(u32*)((a0 + 0x44)), a0 + 0x50, a0 + 0x150, a0 + 0x190, 0);
    return func_002f25a0(0, 0);
}
