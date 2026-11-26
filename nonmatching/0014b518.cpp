// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x0014b518 func_0014b518
void func_0014b518(u32 a0, u32 a1) asm("_ZN2dk8RectBase9setMirrorEj");
void func_0014b518(u32 a0, u32 a1) {
    u32 t3;
    u16 t5;
    u32 t6;
    u16 t6_0;
    u32 t6_1;
    u16 t6_2;
    u16 t7;
    if ((a1 != 2)) {
        if (((s32)(((u32)(a1) < (u32)(3))) != 0)) {
            if ((a1 != 1)) {
                return;
            } else {
                t3 = *(u64*)((a0 + 0xd0));
                t5 = (t3 & 0xffff);
                t6 = *(u64*)((a0 + 0xe0));
                t6_0 = (t6 & 0xffff);
                *(u64*)((a0 + 0xd0)) = ((t3 & 0xffff0000) | t6_0);
                *(u64*)((a0 + 0xe0)) = ((t6 & 0xffff0000) | t5);
                return;
            }
        } else {
            if ((a1 != 3)) {
                return;
            } else {
                t6_1 = *(u64*)((a0 + 0xe0));
                *(u64*)((a0 + 0xd0)) = t6_1;
                *(u64*)((a0 + 0xe0)) = *(u64*)((a0 + 0xd0));
                return;
            }
        }
    } else {
        t6_2 = ((*(u64*)((a0 + 0xd0)) >> 0x10) & 0xffff);
        t7 = ((*(u64*)((a0 + 0xe0)) >> 0x10) & 0xffff);
        *(u64*)((a0 + 0xd0)) = ((*(u64*)((a0 + 0xd0)) & ((u64)(0xffffffff) | 0xffff)) | (t7 << 0x10));
        *(u64*)((a0 + 0xe0)) = ((*(u64*)((a0 + 0xe0)) & ((u64)(0xffffffff) | 0xffff)) | (t6_2 << 0x10));
        return;
    }
}
