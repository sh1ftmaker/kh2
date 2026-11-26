// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_00294268(u32) asm("func_00294268");
extern "C" u32 func_002a9d68() asm("func_002a9d68");

// 0x002abe28 func_002abe28
void func_002abe28() asm("func_002abe28");
void func_002abe28() {
    u32 s4;
    u32 v0;
    u32 t5;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 t7;
    u32 t5_0;
    u32 t6;
    u32 t4;
    u32 t7_1;
    u32 t3;
    u32 t7_2;
    u32 t7_3;
    u32 t7_4;
    u32 t7_5;
    u32 t6_6;
    u32 s1_7;
    s4 = func_002a9d68();
    v0 = func_00294000(1);
    t5 = *(u32*)((v0 + 8));
    if (((s32)(t5) > 0)) {
        s0 = (v0 + 0x10);
        s1 = 0;
        s2 = 0;
        s3 = 0xffffffff;
        do {
            t7 = *(s8*)(s0);
            if ((s3 != t7)) {
                s2 = 0;
                s3 = t7;
            }
            if (((s32)(t7) < (s32)(0xf))) {
                if (((s32)(func_00294268(s0)) != 0)) {
                    t5_0 = (*(s8*)(s0) << 2);
                    t6 = (s4 + t5_0);
                    t4 = ((s2 >> 5) << 2);
                    t7_1 = *(u32*)(((t6 + t4) + 0xac));
                    t3 = (1 << (s2 & 0x1f));
                    if (((t7_1 & t3) == 0)) {
                        t7_2 = *(u32*)(&D_0035f610);
                        t7_3 = (t7_2 + t5_0);
                        t7_4 = (t7_3 + 0xac);
                        t7_5 = (t7_4 + t4);
                        t6_6 = *(u32*)(t7_5);
                        *(u32*)(t7_5) = (t6_6 | t3);
                    }
                }
                s2 = (s2 + 1);
                t5 = *(u32*)((v0 + 8));
            }
            s1_7 = (s1 + 1);
            s0 = (s0 + 0xc);
            s1 = s1_7;
        } while (((s32)(((s32)(s1_7) < (s32)(t5))) != 0));
    }
    return;
}
