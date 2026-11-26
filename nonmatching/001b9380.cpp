// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d48da0 asm("D_01d48da0");

// 0x001b9380 func_001b9380
void func_001b9380(u32 a0) asm("func_001b9380");
void func_001b9380(u32 a0) {
    u32 t2;
    u32 t4;
    u32 t5;
    t2 = 0;
    t4 = 0;
    while ((t5 = ((s32)(t4) != 0) ? *(u32*)((t4 + 0x8b4)) : *(u32*)(&D_01d48da0)), (t4 = t5), ((s32)(t5) != 0)) {
        if (((s32)(((u32)(*(u8*)((t5 + 0x9ad))) < (u32)(*(u8*)((a0 + 0x9ad))))) == 0)) {
            break;
        }
        t2 = t5;
    }
    if (((s32)(t2) == 0)) {
        if (((s32)(*(u32*)(&D_01d48da0)) == 0)) {
            *(u32*)(((u32)&D_01d48da0 + 4)) = a0;
            *(u32*)(&D_01d48da0) = a0;
            *(u32*)((a0 + 0x8b4)) = 0;
            return;
        } else {
            *(u32*)((a0 + 0x8b4)) = *(u32*)(&D_01d48da0);
            *(u32*)(&D_01d48da0) = a0;
            return;
        }
    } else {
        if ((t2 == *(u32*)(((u32)&D_01d48da0 + 4)))) {
            *(u32*)((t2 + 0x8b4)) = a0;
            *(u32*)((a0 + 0x8b4)) = 0;
            *(u32*)(((u32)&D_01d48da0 + 4)) = a0;
            return;
        } else {
            *(u32*)((a0 + 0x8b4)) = *(u32*)((t2 + 0x8b4));
            *(u32*)((t2 + 0x8b4)) = a0;
            return;
        }
    }
}
