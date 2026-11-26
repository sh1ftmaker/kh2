// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00104f58(u32, u32, u32, u32, u32) asm("func_00104f58");

// 0x00172fb0 func_00172fb0
u32 func_00172fb0(u32 a0) asm("_ZN2YS14trap_area_jumpEP8BD_VALUE");
u32 func_00172fb0(u32 a0) {
    u8 frame[16];
    *(u8*)((u32)frame) = 0xffff;
    *(u8*)(((u32)frame + 1)) = *(u8*)(a0);
    *(u8*)(((u32)frame + 2)) = *(u8*)((a0 + 4));
    *(u16*)(((u32)frame + 4)) = 0xffff;
    *(u16*)(((u32)frame + 6)) = 0xffff;
    *(u16*)(((u32)frame + 8)) = 0xffff;
    return func_00104f58((u32)frame, *(u32*)((a0 + 8)), 0, 0, 0);
}
