// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032f254 asm("D_0032f254");
extern "C" u32 D_01d49360 asm("D_01d49360");

// 0x001c0ba0 func_001c0ba0
void func_001c0ba0(u32 a0) asm("func_001c0ba0");
void func_001c0ba0(u32 a0) {
    u32 t4;
    u32 t3;
    if (((s32)(*(u32*)((*(u32*)(&D_01d49360) + 4))) > 0)) {
        t4 = (*(u32*)(&D_01d49360) + 8);
        t3 = 0;
        do {
            if ((*(u32*)((t4 + 4)) == a0)) {
                *(u32*)((((*(u32*)(t4) >> 5) << 2) + (u32)&D_0032f254)) = (*(u32*)((((*(u32*)(t4) >> 5) << 2) + (u32)&D_0032f254)) | (1 << (*(u32*)(t4) & 0x1f)));
            }
            t3 = (t3 + 1);
            t4 = (t4 + 0x20);
        } while (((s32)(((s32)(t3) < (s32)(*(u32*)((*(u32*)(&D_01d49360) + 4))))) != 0));
    }
    return;
}
