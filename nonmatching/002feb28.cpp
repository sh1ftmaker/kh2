// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002feac0(u32, u32, u32) asm("func_002feac0");

// 0x002feb28 wtarget_002feb28(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_002feb28(u32 a0, u32 a1, u32 a2) asm("_Z16wtarget_002feb28jjjj");
void lift_002feb28(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t6_0;
    u32 t6_1;
    u32 t6_2;
    u32 t6_3;
    if (((s32)(((u32)(a1) < (u32)(0x20))) == 0)) {
        *(u32*)(a0) = 0x16;
        t6_3 = 0xffffffff;
    } else {
        if (((s32)(*(u32*)((a0 + 0x1d4))) == 0)) {
            if (((s32)(func_002feac0(a0, *(u32*)((a0 + 0x1d4)), a2)) == 0)) {
                t6 = *(u32*)(((a1 << 2) + *(u32*)((a0 + 0x1d4))));
                *(u32*)(((a1 << 2) + *(u32*)((a0 + 0x1d4)))) = a2;
                t6_0 = t6;
            } else {
                t6_0 = 0xffffffff;
            }
            t6_2 = t6_0;
        } else {
            t6_1 = *(u32*)(((a1 << 2) + *(u32*)((a0 + 0x1d4))));
            *(u32*)(((a1 << 2) + *(u32*)((a0 + 0x1d4)))) = a2;
            t6_2 = t6_1;
        }
        t6_3 = t6_2;
    }
    return;
}
