// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2e4 asm("D_0035f2e4");
extern "C" u32 func_002859a0(u32) asm("func_002859a0");

// 0x002864f8 func_002864f8
void func_002864f8(u32 a0) asm("func_002864f8");
void func_002864f8(u32 a0) {
    u32 a0_0;
    u32 t4;
    u32 t7;
    if (((s32)(a0) >= 0)) {
        a0_0 = ((s32)((*(u32*)(((*(u32*)(&D_0035f2e4) + ((a0 >> 5) << 2)) + 0xc8)) & (1 << (a0 & 0x1f)))) != 0) ? ((u32)(0) < (u32)((*(u32*)(((func_002859a0(a0) + ((a0 >> 5) << 2)) + 0xcc)) & (1 << (a0 & 0x1f))))) : 0;
    } else {
        t4 = 0;
        t7 = (0 >> 5);
        do {
            t7 = (t7 << 2);
            t4 = (t4 + 1);
            if (((s32)((*(u32*)((t7 + (*(u32*)(&D_0035f2e4) + 0xc8))) & (1 << (t4 & 0x1f)))) != 0)) {
                if (((s32)(((u32)(0) < (u32)((*(u32*)((t7 + (func_002859a0(a0) + 0xcc))) & (1 << (t4 & 0x1f)))))) == 0)) {
                    return;
                }
            }
            t7 = (t4 >> 5);
        } while (((s32)(((s32)(t4) < (s32)(9))) != 0));
    }
    return;
}
