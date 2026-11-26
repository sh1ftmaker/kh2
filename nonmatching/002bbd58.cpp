// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002bbbc8(u32) asm("func_002bbbc8");
extern "C" u32 func_002bbc90(u32) asm("func_002bbc90");
extern "C" void func_002bb9b8(u32) asm("func_002bb9b8");

// 0x002bbd58 func_002bbd58
void func_002bbd58(u32 a0) asm("func_002bbd58");
void func_002bbd58(u32 a0) {
    if ((*(u8*)((a0 + 0x31)) != 5)) {
        if ((*(u8*)((a0 + 0x31)) != 6)) {
            func_002bb9b8(a0);
            return;
        } else {
            func_002bbc90(a0);
            return;
        }
    } else {
        func_002bbbc8(a0);
        return;
    }
}
