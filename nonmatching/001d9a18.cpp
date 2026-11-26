// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003638d0 asm("D_003638d0");
extern "C" u32 func_00312db8(u32, u32) asm("func_00312db8");

// 0x001d9a18 wtarget_001d9a18(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001d9a18(u32 a0, u32 a1) asm("_Z16wtarget_001d9a18jjjj");
u32 lift_001d9a18(u32 a0, u32 a1) {
    u32 t7;
    u32 t6;
    u32 v0;
    t7 = a0;
    t6 = 0;
    do {
        *(u8*)(t7) = 0;
        t6 = (t6 + 1);
        t7 = (a0 + t6);
    } while (((s32)(t7) != 0));
    if (((s32)(a1) < 0)) {
        *(u32*)(&D_003638d0) = (*(u32*)(&D_003638d0) * 0x10dcd);
        v0 = (s32)((u64)(func_00312db8((u32)((*(u32*)(&D_003638d0) * 0x10dcd)), 0x33333334)));
    } else {
        *(u32*)(&D_003638d0) = (*(u32*)(&D_003638d0) * 0x10dcd);
        v0 = (((s32)((s32)(((u32)((*(u32*)(&D_003638d0) * 0x10dcd)) << 2))) < (s32)(a1)) ? (s32)(((u32)((*(u32*)(&D_003638d0) * 0x10dcd)) << 2)) : ((s32)(((u32)((*(u32*)(&D_003638d0) * 0x10dcd)) << 2)) + 1));
    }
    *(u8*)((a0 + v0)) = 2;
    return v0;
}
