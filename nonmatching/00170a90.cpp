// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dca0 asm("D_0034dca0");
extern "C" u32 func_001700e8() asm("func_001700e8");
extern "C" u32 func_002ff1a4(u32, u32) asm("func_002ff1a4");

// 0x00170a90 func_00170a90
void func_00170a90(u32 a0) asm("func_00170a90");
void func_00170a90(u32 a0) {
    u32 s1;
    u32 s0;
    u32 t7;
    s1 = 0;
    do {
        s0 = (s1 == 0) ? *(u32*)(&D_0034dca0) : *(u32*)((s1 + 0x3c));
        s1 = s0;
        if (((s32)(s0) == 0)) {
            return;
        }
        if (((s32)(func_002ff1a4(s0 + 4, a0)) != 0)) {
            continue;
        }
        t7 = *(u32*)((s0 + 0x28));
    } while (((s32)((((s32)(t7) < (s32)(0x2710)) ^ 1)) == 0));
    func_001700e8();
    return;
}
