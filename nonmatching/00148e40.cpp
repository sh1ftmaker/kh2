// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00148e40(u32, u32, u32, u32) asm("func_00148e40");

// 0x00148e40 func_00148e40
void func_00148e40(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00148e40");
void func_00148e40(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 t6;
    u32 t6_0;
    u32 t6_1;
    u32 s0;
    t6 = *(u32*)((a1 + 0xf8));
    if (((s32)((t6 & 8)) == 0)) {
        if (((s32)((t6 & 0x40)) != 0)) {
            t6_0 = *(u32*)(a3);
            *(u32*)(((t6_0 << 2) + a2)) = a1;
            *(u32*)(a3) = (t6_0 + 1);
        }
    } else {
        t6_1 = *(u32*)(a3);
        *(u32*)(((t6_1 << 2) + a2)) = a1;
        *(u32*)(a3) = (t6_1 + 1);
    }
    s0 = 0;
    while ((a1 = (s0 == 0) ? *(u32*)((a1 + 0xf0)) : *(u32*)((s0 + 0xec))), (s0 = a1), ((s32)(a1) != 0)) {
        func_00148e40(a0, a1, a2, a3);
    }
    return;
}
