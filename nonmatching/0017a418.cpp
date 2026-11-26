// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001d6ae0(u32, u32) asm("func_001d6ae0");
extern "C" void func_001d6b40(u32, u32) asm("func_001d6b40");

// 0x0017a418 func_0017a418
void func_0017a418(u32 a0, u32 a1) asm("_ZN2YS6PLAYER17set_command_phaseEi");
void func_0017a418(u32 a0, u32 a1) {
    if ((a1 != 1)) {
        if ((a1 == 2)) {
            func_001d6b40(*(u32*)((a0 + 0xb3c)), a1);
        }
    } else {
        func_001d6ae0(*(u32*)((a0 + 0xb3c)), a1);
    }
    *(u8*)((a0 + 0xb64)) = a1;
    return;
}
