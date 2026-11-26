// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a1910(u32, u32, u32) asm("func_001a1910");
extern "C" void func_001a1a50(u32, u32) asm("func_001a1a50");

// 0x001adb80 func_001adb80
u32 func_001adb80(u32 a0, u32 a1) asm("func_001adb80");
u32 func_001adb80(u32 a0, u32 a1) {
    func_001a1a50(a1, 0);
    return func_001a1910(a1, *(u32*)((a1 + 4)), 0);
}
