// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c60888 asm("D_01c60888");
extern "C" u32 func_001a80c8(u32, u32) asm("func_001a80c8");

// 0x00185890 func_00185890
u32 func_00185890(u32 a0, u32 a1) asm("func_00185890");
u32 func_00185890(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(a0) != 0)) {
        if (((s32)(a1) != 0)) {
            v0 = ((s32)(*(u32*)(((a0 << 2) + *(u32*)(&D_01c60888)))) == 0) ? 0 : *(u32*)(((*(u16*)((func_001a80c8(a1, a1) + 4)) << 2) + (*(u32*)(&D_01c60888) + (*(u32*)(((a0 << 2) + *(u32*)(&D_01c60888))) << 2))));
            v0_0 = v0;
        } else {
            v0_0 = 0;
        }
        v0_1 = v0_0;
    } else {
        v0_1 = 0;
    }
    return v0_1;
}
