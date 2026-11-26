// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f20c asm("D_0035f20c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00192048(u32) asm("func_00192048");

// 0x00275e68 func_00275e68
u32 func_00275e68(u32 a0) asm("func_00275e68");
u32 func_00275e68(u32 a0) {
    u32 v0;
    u32 s0;
    u32 v0_0;
    v0 = func_00139d78(*(u32*)(&D_0035f20c) + 0x368);
    if (((s32)(a0) < 0)) {
        *(u32*)((*(u32*)(&D_0035f20c) + 0x500)) = 0;
    } else {
        s0 = *(u32*)(&D_0035f20c);
        v0_0 = func_00192048(a0);
        *(u32*)(((s0 + 0x368) + 0x198)) = v0_0;
        v0 = v0_0;
    }
    return v0;
}
