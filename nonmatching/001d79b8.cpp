// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001d7b10(u32, u32, f32) asm("func_001d7b10");

// 0x001d79b8 func_001d79b8
void func_001d79b8(u32 a0, u32 a1, f32 fa0) asm("func_001d79b8");
void func_001d79b8(u32 a0, u32 a1, f32 fa0) {
    u32 t3;
    u32 t5;
    u32 t2;
    t3 = 0;
    t5 = (a0 + 4);
    do {
        if ((*(u32*)(t5) == a1)) {
            t2 = 0;
            break;
        }
        t3 = (t3 + 1);
        t5 = (t5 + 8);
        t2 = (*(u32*)(t5) ? 0 : t5);
    } while (((s32)(((s32)(t3) < (s32)(4))) != 0));
    *(u32*)(t2) = a1;
    *(f32*)((t2 + 4)) = fa0;
    func_001d7b10(a0, a1, fa0);
    return;
}
