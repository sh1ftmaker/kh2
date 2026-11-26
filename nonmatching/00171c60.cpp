// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034d8a0 asm("D_0034d8a0");
extern "C" u32 func_001c0d38(u32, u32, u32, u32) asm("func_001c0d38");

// 0x00171c60 func_00171c60
u32 func_00171c60(u32 a0) asm("_ZN2YS15trap_obj_attachEP8BD_VALUE");
u32 func_00171c60(u32 a0) {
    u32 v0;
    v0 = func_001c0d38(*(u32*)((*(u32*)(a0) + 4)), *(u32*)((*(u32*)((a0 + 4)) + 4)), *(u32*)((a0 + 8)), *(u32*)((a0 + 0xc)));
    if (((s32)(*(u32*)((a0 + 0x10))) != 0)) {
        *(u32*)((v0 + 0x14)) = *(u32*)((a0 + 0x14));
        *(u32*)((v0 + 0xc)) = *(u32*)(&D_0034d8a0);
        *(u32*)((v0 + 0x10)) = *(u32*)((a0 + 0x10));
    }
    return v0;
}
