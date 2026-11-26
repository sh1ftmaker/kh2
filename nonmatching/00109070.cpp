// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0033cc68 asm("D_0033cc68");
extern "C" u32 D_0033cc78 asm("D_0033cc78");
extern "C" u32 D_0033cc90 asm("D_0033cc90");
extern "C" u32 D_0033cca4 asm("D_0033cca4");
extern "C" u32 D_0033cca8 asm("D_0033cca8");
extern "C" u32 D_00340ea8 asm("D_00340ea8");

// 0x00109070 func_00109070
void func_00109070() asm("func_00109070");
void func_00109070() {
    u32 t3;
    u32 t4;
    u32 t5;
    u32 a3_0;
    u32 t0;
    u32 t1;
    u32 t2;
    u32 t3_1;
    u32 t4_2;
    u32 t5_3;
    t3 = (u32)&D_0033cc78;
    t4 = (u32)&D_0033cc90;
    t5 = 0;
    do {
        *(u32*)(((t5 << 2) + t3)) = 0;
        *(u32*)(((t5 << 2) + t4)) = 0;
        t5 = (t5 + 1);
    } while (((s32)(((s32)(t5) < (s32)(5))) != 0));
    if (((s32)(*(u32*)(&D_0033cc68)) > 0)) {
        a3_0 = 0x340000;
        t0 = 0x340000;
        t1 = 0x340000;
        t2 = 0x340000;
        t3_1 = 0;
        t4_2 = 0;
        t5_3 = 0;
        do {
            *(u32*)((t3_1 + *(u32*)((t1 + -0x3394)))) = 0;
            *(u32*)(((t3_1 + *(u32*)((t1 + -0x3394))) + 4)) = *(u32*)((a3_0 + -0x33a0));
            *(u32*)(((t4_2 + *(u32*)((t2 + -0x3390))) + 4)) = 0;
            *(u32*)((t4_2 + *(u32*)((t2 + -0x3390)))) = 0;
            *(u32*)(((t4_2 + *(u32*)((t2 + -0x3390))) + 8)) = 0;
            t3_1 = (t3_1 + 0x58);
            t4_2 = (t4_2 + 0x120);
            t5_3 = (t5_3 + 1);
        } while (((s32)(((s32)(t5_3) < (s32)(*(u32*)((t0 + -0x3398))))) != 0));
    }
    *(u32*)(&D_0033cca4) = 0;
    *(u32*)(&D_00340ea8) = (u32)&D_0033cca8;
    return;
}
