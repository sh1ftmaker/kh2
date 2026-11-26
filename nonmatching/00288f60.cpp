// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00288f60 func_00288f60
void func_00288f60(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00288f60");
void func_00288f60(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 t3;
    u32 a1_0;
    u32 t4;
    u32 t5;
    u32 t4_1;
    u32 t3_2;
    u32 a1_3;
    u32 a1_4;
    u32 t6;
    u32 t7;
    t3 = 3;
    a1_0 = (a1 << 2);
    t4 = (a1 << 3);
    do {
        t5 = (a2 + ((t3 - 3) * -2));
        t4_1 = (t4 + ((t3 - 3) * -2));
        *(u16*)((t4_1 + *(u32*)((a0 + 0x2c)))) = *(u16*)(t5);
        t3 = (t3 + -1);
    } while (((s32)(t3) >= 0));
    t3_2 = 3;
    a1_3 = (a1_0 << 1);
    do {
        a1_4 = (a1_3 + ((t3_2 - 3) * -2));
        t6 = (a3 + ((t3_2 - 3) * -2));
        t7 = ((s32)(a3) != 0) ? *(u16*)(t6) : *(u16*)(a2);
        *(u16*)((a1_4 + *(u32*)((a0 + 0x30)))) = t7;
        a2 = (a2 + 2);
        t3_2 = (t3_2 + -1);
    } while (((s32)(t3_2) >= 0));
    return;
}
