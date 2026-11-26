// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c61970 asm("D_01c61970");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_001aadb0(u32) asm("func_001aadb0");

// 0x00191f78 func_00191f78
u32 func_00191f78(u32 a0, u32 a1) asm("_ZN2YS7MESSAGE3SetEiPv");
u32 func_00191f78(u32 a0, u32 a1) {
    u32 s1;
    u32 v0;
    u32 t7;
    u32 v0_0;
    u32 t7_1;
    s1 = ((a0 << 3) + (u32)&D_01c61970);
    *(u32*)(s1) = a1;
    v0 = func_00168b38(a1, 2, 0);
    t7 = ((s32)(v0) != 0) ? ((u32)(0) < (u32)(*(u32*)((v0 + 8)))) : 0;
    if (((t7 & 0xff) != 0)) {
        *(u32*)((s1 + 4)) = *(u32*)((v0 + 8));
    } else {
        *(u32*)((s1 + 4)) = 0;
    }
    v0_0 = func_00168b38(a1, 0x18, 0);
    t7_1 = ((s32)(v0_0) != 0) ? ((u32)(0) < (u32)(*(u32*)((v0_0 + 8)))) : 0;
    if (((s32)((t7_1 & 0xff)) != 0)) {
        return func_001aadb0(*(u32*)((v0_0 + 8)));
    } else {
        return v0_0;
    }
}
