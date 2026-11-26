// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001008d0 asm("D_001008d0");
extern "C" u32 D_0032b914 asm("D_0032b914");
extern "C" u32 D_00378ae8 asm("D_00378ae8");
extern "C" u32 D_0037aa00 asm("D_0037aa00");
extern "C" void func_001008d0(u32) asm("func_001008d0");

// 0x001002b0 func_001002b0
void func_001002b0() asm("func_001002b0");
void func_001002b0() {
    u8 frame[16];
    u32 s0;
    u32 t6;
    u32 t7;
    u32 sp;
    u32 sp_0;
    if (((s32)(*(u8*)(&D_0037aa00)) == 0)) {
        if ((*(u32*)(*(u32*)(&D_0032b914)) != 0)) {
            s0 = 0x330000;
            t6 = *(u32*)(*(u32*)(&D_0032b914));
            t7 = (*(u32*)(&D_0032b914) + 4);
            do {
                *(u32*)((s0 + -0x46ec)) = t7;
                ((void(*)())(t6))();
                t6 = *(u32*)(*(u32*)((s0 + -0x46ec)));
                t7 = (*(u32*)((s0 + -0x46ec)) + 4);
            } while (((s32)(t6) != 0));
        } else {
            sp = (u32)frame;
        }
        if (((s32)((u32)&D_001008d0) != 0)) {
            func_001008d0((u32)&D_00378ae8);
        }
        *(u8*)(&D_0037aa00) = 1;
        sp_0 = sp;
    } else {
        sp_0 = (u32)frame;
    }
    return;
}
