// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034aa98 asm("D_0034aa98");
extern "C" u32 D_0034aa9c asm("D_0034aa9c");
extern "C" u32 func_0015aea8(u32, u32) asm("func_0015aea8");
extern "C" void func_0015ad80(u32, u32) asm("func_0015ad80");

// 0x0015b268 func_0015b268
void func_0015b268(u32 a0, f32 fa0) asm("func_0015b268");
void func_0015b268(u32 a0, f32 fa0) {
    if (((s32)(*(u32*)(&D_0034aa98)) == 0)) {
        func_0015ad80(*(u32*)(&D_0034aa9c), a0);
        *(u32*)(&D_0034aa98) = (*(u32*)(&D_0034aa98) + 1);
        return;
    } else {
        *(f32*)((*(u32*)(&D_0034aa9c) + 0x1b4)) = fa0;
        func_0015aea8(*(u32*)(&D_0034aa9c), a0);
        return;
    }
}
