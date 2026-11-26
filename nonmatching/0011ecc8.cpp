// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x0011ecc8 func_0011ecc8
void func_0011ecc8(u32 a0, u32 a1) asm("func_0011ecc8");
void func_0011ecc8(u32 a0, u32 a1) {
    u32 a1_0;
    u32 t7;
    u32 t7_1;
    if (((s32)(*(u32*)((a0 + 0x124))) != 0)) {
        a1_0 = *(u32*)((a0 + 0x124));
        t7 = *(u32*)(*(u32*)((a0 + 0x124)));
        do {
            if ((*(u32*)(a1_0) == a1)) {
                if (((s32)(*(u32*)((*(u32*)((a1_0 + 0xc)) + 8))) != 0)) {
                    *(u32*)((*(u32*)((*(u32*)((a1_0 + 0xc)) + 8)) + 0xc)) = *(u32*)((*(u32*)((a1_0 + 0xc)) + 0xc));
                } else {
                    *(u32*)((a0 + 0x124)) = *(u32*)((*(u32*)((a1_0 + 0xc)) + 0xc));
                }
                if ((*(u32*)((*(u32*)((a1_0 + 0xc)) + 0xc)) != 0)) {
                    *(u32*)((*(u32*)((*(u32*)((a1_0 + 0xc)) + 0xc)) + 8)) = *(u32*)((*(u32*)((a1_0 + 0xc)) + 8));
                }
                ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x10))) + 4))))(*(u32*)((a0 + 0x10)), *(u32*)((a1_0 + 0xc)));
                return;
            }
            t7_1 = *(u32*)(a1_0);
            a1_0 = *(u32*)((a1_0 + 0xc));
            t7 = t7_1;
        } while ((a1_0 != 0));
    }
    return;
}
