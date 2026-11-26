// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00187650(u32, u32, u32) asm("func_00187650");
extern "C" u32 func_001a1990(u32, u32, u32) asm("func_001a1990");

// 0x001a1a20 func_001a1a20
void func_001a1a20(u32 a0, u32 a1, u32 a2) asm("_ZN2YS5SHEET6add_mpEib");
void func_001a1a20(u32 a0, u32 a1, u32 a2) {
    if (((s32)(*(u32*)((a0 + 0x25c))) != 0)) {
        func_00187650(*(u32*)((a0 + 0x25c)), a1, a2 & 0xff);
        return;
    } else {
        func_001a1990(a0, a1, a2 & 0xff);
        return;
    }
}
