// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00192868(u32, u32, u32, u32) asm("func_00192868");

// 0x00192990 func_00192990
u32 func_00192990(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00192990");
u32 func_00192990(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[48];
    u32 s3;
    u32 s1;
    u32 v0;
    u32 t3;
    u32 t2;
    u32 t7;
    u32 t6;
    u32 sp;
    u32 t7_0;
    u32 t6_1;
    *(u32*)((u32)frame) = *(u32*)(a2);
    *(u32*)(((u32)frame + 4)) = *(u32*)((a2 + 4));
    *(u32*)(((u32)frame + 8)) = *(u32*)((a2 + 8));
    *(u32*)(((u32)frame + 0xc)) = *(u32*)((a2 + 0xc));
    *(u32*)(((u32)frame + 0x10)) = *(u32*)((a2 + 0x10));
    *(u32*)(((u32)frame + 0x14)) = *(u32*)((a2 + 0x14));
    *(u32*)(((u32)frame + 0x20)) = 0;
    *(u32*)(((u32)frame + 0x24)) = 0;
    *(u32*)(a3) = 0;
    *(u32*)((a3 + 4)) = 0;
    if (((s32)(a0) != 0)) {
        s3 = (u32)frame;
        s1 = ((u32)frame + 0x20);
        do {
            v0 = func_00192868(a0, a1, s3, s1);
            t3 = *(u32*)(a3);
            t2 = *(u32*)((a3 + 4));
            t7 = *(u32*)(((u32)frame + 0x20));
            t6 = *(u32*)(((u32)frame + 0x24));
            *(u32*)(a3) = (((u32)(*(u32*)(((u32)frame + 0x20))) < (u32)(t3)) ? t3 : t7);
            *(u32*)((a3 + 4)) = (((u32)(*(u32*)(((u32)frame + 0x24))) < (u32)(t2)) ? t2 : t6);
            a0 = v0;
        } while (((s32)(a0) != 0));
    } else {
        sp = (u32)frame;
    }
    t7_0 = *(u32*)(a3);
    t6_1 = *(u32*)((a3 + 4));
    *(u32*)(a3) = ((t7_0 + 1) & 0xfffffffe);
    *(u32*)((a3 + 4)) = ((t6_1 + 1) & 0xfffffffe);
    return a0;
}
