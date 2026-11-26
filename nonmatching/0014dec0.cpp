// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004574d0 asm("D_004574d0");
extern "C" u32 func_002f2d60(u32, u32) asm("func_002f2d60");
extern "C" void func_002f25a0(u32, u32) asm("func_002f25a0");
extern "C" void func_002f2aa0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002f2aa0");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x0014dec0 func_0014dec0
u32 func_0014dec0(u32 a0, u32 a1) asm("func_0014dec0");
u32 func_0014dec0(u32 a0, u32 a1) {
    func_002f2aa0((u32)&D_004574d0, (s32)(((*(u16*)(a0) << 5) << 0x10)) >> 0x10, (*(s16*)((a0 + 4)) & 0xffff) >> 6, 1, 0, 0, *(s16*)((a0 + 4)), *(s16*)((a0 + 6)));
    func_003058a0(0);
    func_002f25a0(0, 0);
    return func_002f2d60((u32)&D_004574d0, a1);
}
