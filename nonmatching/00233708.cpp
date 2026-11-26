// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00233708 func_00233708
u32 func_00233708(u32 a0, u32 a1) asm("func_00233708");
u32 func_00233708(u32 a0, u32 a1) {
    u32 loc_0;
    u32 loc_4;
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    loc_0 = a1;
    loc_4 = a0;
    if ((*(u8*)(&loc_0) != 0x80)) {
        a0 = ((s32)(((u32)(((s32)((*(u8*)(&loc_4) * *(u8*)(&loc_0))) >> 7)) < (u32)(0x100))) == 0) ? (a0 | 0xff) : ((a0 & 0xffffff00) | (((s32)((*(u8*)(&loc_4) * *(u8*)(&loc_0))) >> 7) & 0xff));
        loc_4 = a0;
    }
    if ((*(u8*)(((u32)&loc_0 + 1)) != 0x80)) {
        t7 = ((u32)(((s32)((*(u8*)(((u32)&loc_4 + 1)) * *(u8*)(((u32)&loc_0 + 1)))) >> 7)) < (u32)(0x100)) ? ((s32)((*(u8*)(((u32)&loc_4 + 1)) * *(u8*)(((u32)&loc_0 + 1)))) >> 7) : 0xffffffff;
        *(u8*)(((u32)&loc_4 + 1)) = t7;
    }
    if ((*(u8*)(((u32)&loc_0 + 2)) != 0x80)) {
        t7_0 = ((u32)(((s32)((*(u8*)(((u32)&loc_4 + 2)) * *(u8*)(((u32)&loc_0 + 2)))) >> 7)) < (u32)(0x100)) ? ((s32)((*(u8*)(((u32)&loc_4 + 2)) * *(u8*)(((u32)&loc_0 + 2)))) >> 7) : 0xffffffff;
        *(u8*)(((u32)&loc_4 + 2)) = t7_0;
    }
    if ((*(u8*)(((u32)&loc_0 + 3)) != 0x80)) {
        t7_1 = ((u32)(((s32)((*(u8*)(((u32)&loc_4 + 3)) * *(u8*)(((u32)&loc_0 + 3)))) >> 7)) < (u32)(0x100)) ? ((s32)((*(u8*)(((u32)&loc_4 + 3)) * *(u8*)(((u32)&loc_0 + 3)))) >> 7) : 0xffffffff;
        *(u8*)(((u32)&loc_4 + 3)) = t7_1;
    }
    return loc_4;
}
