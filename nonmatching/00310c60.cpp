// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e3b300 asm("D_01e3b300");
extern "C" u32 func_0030edb0(u32) asm("func_0030edb0");
extern "C" void func_0030ee00() asm("func_0030ee00");
extern "C" void func_00310130(u32) asm("func_00310130");

// 0x00310c60 func_00310c60
void func_00310c60(u32 a0) asm("func_00310c60");
void func_00310c60(u32 a0) {
    u32 s2;
    u32 s2_0;
    u32 v0;
    u32 s2_1;
    if (((s32)(a0) >= 0)) {
        if (((s32)(((a0 ^ *(u32*)((((a0 >> 8) << 4) + 4))) & 0xff)) != 0)) {
            if (((s32)(func_0030edb0(a0)) != 0)) {
                s2 = func_0030edb0(a0);
                func_0030ee00();
            }
        } else {
            s2_0 = func_0030edb0(a0);
            v0 = *(u32*)(&D_01e3b300);
            func_00310130(*(u32*)((((a0 >> 8) << 4) + 4)));
            *(u32*)(&D_01e3b300) = ((a0 >> 8) << 4);
            *(u32*)(((a0 >> 8) << 4)) = v0;
            *(u32*)((((a0 >> 8) << 4) + 4)) = 0;
            if (((s32)(s2_0) != 0)) {
                func_0030ee00();
            }
        }
    } else {
        if (((s32)(func_0030edb0(a0)) != 0)) {
            s2_1 = func_0030edb0(a0);
            func_0030ee00();
        }
    }
    return;
}
