// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 func_00188958(u32, u32) asm("func_00188958");
extern "C" u32 func_00188fe0(u32, u32) asm("func_00188fe0");
extern "C" u32 func_001891b8(u32, u32) asm("func_001891b8");
extern "C" u32 func_00189200(u32, u32) asm("func_00189200");
extern "C" u32 func_001a3188(u32, u32, u32) asm("func_001a3188");

// 0x001c2d88 func_001c2d88
u32 func_001c2d88(u32 a0) asm("_ZNK2YS11PLAYERPARAM5applyEv");
u32 func_001c2d88(u32 a0) {
    u32 a1_0;
    u32 v0;
    u32 v0_1;
    u32 s1;
    u32 s2;
    u32 v0_2;
    u32 t7;
    u32 t6;
    u32 v0_3;
    u32 s1_4;
    u32 a0_5;
    u32 v0_6;
    u32 v0_7;
    a1_0 = *(u8*)((a0 + 2));
    if (((s32)((a1_0 & 0x80)) != 0)) {
        v0 = func_00189200((u32)&D_0032e020, (a1_0 & 0xff) & 0x7f);
        s1 = 0;
        s2 = v0;
        v0_2 = v0;
    } else {
        v0_1 = func_00188fe0((u32)&D_0032e020, a1_0 & 0xff);
        s1 = v0_1;
        s2 = 0;
        v0_2 = v0_1;
    }
    if (((s32)(s1) != 0)) {
        t7 = *(u8*)((a0 + 3));
        *(u8*)((s1 + 5)) = t7;
        *(u8*)((s1 + 4)) = t7;
        t6 = *(u8*)((a0 + 4));
        *(u8*)((s1 + 7)) = t6;
        *(u8*)((s1 + 6)) = t6;
        *(u8*)((s1 + 8)) = *(u8*)((a0 + 5));
        *(u8*)((s1 + 9)) = *(u8*)((a0 + 6));
        *(u8*)((s1 + 0xa)) = *(u8*)((a0 + 7));
        *(u8*)((s1 + 0xb)) = *(u8*)((a0 + 8));
        *(u8*)((s1 + 0x10)) = *(u8*)((a0 + 9));
        *(u8*)((s1 + 0x11)) = *(u8*)((a0 + 0xa));
        v0_3 = func_00188958(s1, *(u8*)((a0 + 0xb)));
        v0_2 = v0_3;
    }
    s1_4 = 0x1f;
    do {
        a0_5 = *(u16*)(((a0 + ((s1_4 - 0x1f) * -2)) + 0xc));
        if ((a0_5 != 0)) {
            if (((s32)(s2) == 0)) {
                v0_6 = func_001a3188(a0_5 & 0xffff7fff, *(u8*)((a0 + 2)), a0_5 >> 0xf);
                v0_2 = v0_6;
            } else {
                v0_7 = func_001891b8(s2, a0_5);
                v0_2 = v0_7;
            }
        }
        s1_4 = (s1_4 + -1);
    } while (((s32)(s1_4) >= 0));
    return v0_2;
}
