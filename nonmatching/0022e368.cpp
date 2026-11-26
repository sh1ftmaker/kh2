// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035dcf4 asm("D_0035dcf4");

// 0x0022e368 func_0022e368
void func_0022e368(u32 a0) asm("func_0022e368");
void func_0022e368(u32 a0) {
    u32 t5;
    u32 t4;
    u32 t7;
    u32 t5_0;
    t5 = 0;
    t4 = 0;
    do {
        t7 = (t4 + *(u32*)(&D_0035dcf4));
        if ((*(u32*)((t7 + 4)) == 0xffffffff)) {
            *(u32*)((t7 + 4)) = *(s16*)((a0 + 8));
            *(u32*)((t4 + *(u32*)(&D_0035dcf4))) = *(s16*)((a0 + 0xa));
            *(u16*)(((t4 + *(u32*)(&D_0035dcf4)) + 8)) = *(u16*)((a0 + 0xc));
            *(u16*)(((t4 + *(u32*)(&D_0035dcf4)) + 0x2e)) = *(u16*)((a0 + 4));
            *(u32*)(((t4 + *(u32*)(&D_0035dcf4)) + 0xc)) = 0;
            return;
        }
        t5_0 = (t5 + 1);
        t4 = (t4 + 0x34);
        t5 = t5_0;
    } while (((s32)(((s32)(t5_0) < (s32)(0x60))) != 0));
    return;
}
