// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00354688 asm("D_00354688");
extern "C" u32 D_0035468c asm("D_0035468c");
extern "C" u32 func_00223e98(u32, u32, u32, u32, u32, f32, f32) asm("func_00223e98");

// 0x0020cf60 func_0020cf60
void func_0020cf60(u32 a0, u32 a1) asm("func_0020cf60");
void func_0020cf60(u32 a0, u32 a1) {
    if (((s32)(*(u32*)(&D_00354688)) != 0)) {
        if (((s32)(*(u32*)(&D_0035468c)) > 0)) {
            func_00223e98(*(u32*)((a1 + 4)), a1 + 8, *(u8*)((a1 + 0x1c)), *(u8*)((a1 + 0x1d)), *(u32*)((a1 + 0x14)), *(f32*)((a1 + 0xc)), *(f32*)((a1 + 0x10)));
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
