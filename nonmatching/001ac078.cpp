// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00239bf8(u32, u32, u32, u32) asm("func_00239bf8");

// 0x001ac078 wtarget_001ac078(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001ac078(u32 a0, u32 a1, u32 a2, u32 a3) asm("_Z16wtarget_001ac078jjjj");
void lift_001ac078(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 a1_0;
    u32 a1_1;
    u32 a1_2;
    *(u8*)(a0) = a1;
    a1_0 = (a1 << 2);
    *(u8*)((a0 + 1)) = a2;
    a1_1 = (a1_0 + a2);
    *(u8*)((a0 + 2)) = a3;
    a1_2 = (a1_1 << 1);
    if (((s32)(a1) != 0)) {
        func_00239bf8(a0 + 4, ((s32)(a3) < (s32)(4)) ? (a1_2 + 0x25) : (a1_2 + 0x21), a2, a3);
        return;
    } else {
        return;
    }
}
