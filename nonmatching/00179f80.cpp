// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00179f10(u32) asm("func_00179f10");
extern "C" void func_001d6ab0(u32) asm("func_001d6ab0");

// 0x00179f80 func_00179f80
u32 func_00179f80(u32 a0) asm("func_00179f80");
u32 func_00179f80(u32 a0) {
    func_00179f10(a0);
    func_001d6ab0(*(u32*)((a0 + 0xb3c)));
    return ((u32(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(a0) + 0x78))))(a0, *(u32*)((*(u32*)((a0 + 0x48c)) + 4)), 0, 0);
}
