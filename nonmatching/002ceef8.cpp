// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" u32 func_002cec08(u32, u32) asm("func_002cec08");

// 0x002ceef8 func_002ceef8
u32 func_002ceef8(u32 a0, u32 a1) asm("_ZN2Ti8MiniGame14obj_is_visibleEPN2YS3OBJE");
u32 func_002ceef8(u32 a0, u32 a1) {
    u8 frame[32];
    *(u32*)((u32)frame) = *(u32*)((a1 + 0x740));
    *(u32*)(((u32)frame + 4)) = *(u32*)(((a1 + 0x740) + 4));
    *(u32*)(((u32)frame + 8)) = *(u32*)(((a1 + 0x740) + 8));
    *(u32*)(((u32)frame + 0xc)) = *(u32*)(((a1 + 0x740) + 0xc));
    *(u32*)(((u32)frame + 0x10)) = *(u32*)(((a1 + 0x740) + 0x10));
    *(u32*)(((u32)frame + 0x14)) = *(u32*)(((a1 + 0x740) + 0x14));
    return ((u32)(0) < (u32)(func_002cec08(*(u32*)(&D_00361f60), (u32)frame)));
}
