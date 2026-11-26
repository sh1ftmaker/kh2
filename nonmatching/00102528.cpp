// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00102528 func_00102528
void func_00102528(u32 a0, u32 a1) asm("_ZN12TASK_MANAGER4linkEP4TASK");
void func_00102528(u32 a0, u32 a1) {
    u32 t3;
    u32 t4;
    u32 t5;
    u32 t6;
    t3 = 0;
    t4 = 0;
    while ((t5 = (t4 == 0) ? *(u32*)((a0 + 8)) : *(u32*)((t4 + 0x38))), (t4 = t5), ((s32)(t5) != 0)) {
        if (((s32)(((s32)(*(u32*)((a1 + 0x2c))) < (s32)(*(u32*)((t5 + 0x2c))))) != 0)) {
            if (((s32)(t5) != 0)) {
                if ((*(u32*)((a0 + 0x110)) == t5)) {
                    *(u32*)((a0 + 0x110)) = a1;
                }
            }
            break;
        }
        t3 = t5;
    }
    if (((s32)(t3) == 0)) {
        if ((*(u32*)((a0 + 8)) == 0)) {
            *(u32*)(((a0 + 8) + 4)) = a1;
            *(u32*)((a0 + 8)) = a1;
            *(u32*)((a1 + 0x38)) = 0;
            *(u32*)((a1 + 0x3c)) = 0;
            return;
        } else {
            *(u32*)((*(u32*)((a0 + 8)) + 0x3c)) = a1;
            *(u32*)((a1 + 0x3c)) = 0;
            *(u32*)((a1 + 0x38)) = *(u32*)((a0 + 8));
            *(u32*)((a0 + 8)) = a1;
            return;
        }
    } else {
        t6 = (a0 + 8);
        if ((t3 == *(u32*)((t6 + 4)))) {
            *(u32*)((t3 + 0x38)) = a1;
            *(u32*)((a1 + 0x38)) = 0;
            *(u32*)((a1 + 0x3c)) = *(u32*)((t6 + 4));
            *(u32*)((t6 + 4)) = a1;
            return;
        } else {
            *(u32*)((a1 + 0x3c)) = t3;
            *(u32*)((a1 + 0x38)) = *(u32*)((t3 + 0x38));
            *(u32*)((*(u32*)((t3 + 0x38)) + 0x3c)) = a1;
            *(u32*)((t3 + 0x38)) = a1;
            return;
        }
    }
}
