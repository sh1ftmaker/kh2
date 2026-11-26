// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_003056c0(u32) asm("func_003056c0");
extern "C" void func_003056d0(u32) asm("func_003056d0");

// 0x0030f128 func_0030f128
u32 func_0030f128() asm("func_0030f128");
u32 func_0030f128() {
    u8 frame[16];
    func_003056d0((u32)frame);
    *(u32*)(((u32)frame + 4)) = ((*(u32*)((u32)frame) & 0xffff1fff) | 0x2000);
    func_003056c0((u32)frame + 4);
    func_003056d0((u32)frame + 4);
    func_003056c0((u32)frame);
    return ((u32)(((*(u32*)(((u32)frame + 4)) >> 0xd) & 7)) < (u32)(1));
}
