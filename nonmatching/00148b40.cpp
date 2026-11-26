// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00457478 asm("D_00457478");
extern "C" u32 D_00457480 asm("D_00457480");
extern "C" u32 func_0011de88(u32, u32, u32, u32, u32) asm("func_0011de88");

// 0x00148b40 func_00148b40
u32 func_00148b40(u32 a0, u32 a1) asm("func_00148b40");
u32 func_00148b40(u32 a0, u32 a1) {
    u32 loc_0;
    u32 t6;
    u32 t5;
    u16 loc_3e;
    t6 = 0;
    t5 = (u32)&loc_0;
    do {
        *(u16*)((t5 + (t6 * 2))) = t6;
        t6 = (t6 + 1);
    } while (((s32)(((s32)(t6) < (s32)(0x20))) != 0));
    loc_3e = 0xffffffff;
    *(u32*)(&D_00457480) = (*(u32*)(&D_00457480) | 2);
    *(u8*)(((u32)&D_00457480 + 8)) = 0xffffff80;
    *(u8*)(((u32)&D_00457480 + 9)) = 0xffffff80;
    *(u8*)(((u32)&D_00457480 + 0xa)) = 0xffffff80;
    *(u8*)(((u32)&D_00457480 + 0xb)) = 0xffffffff;
    return func_0011de88(*(u32*)(a1), (u32)&D_00457480, (u32)&loc_0, *(u32*)(&D_00457478), 0);
}
