// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_002a9d68(u32, u32) asm("func_002a9d68");
extern "C" u32 func_002abf40(u32, u32) asm("func_002abf40");

// 0x002ac110 func_002ac110
u32 func_002ac110(u32 a0, u32 a1) asm("func_002ac110");
u32 func_002ac110(u32 a0, u32 a1) {
    u32 s5;
    u32 v0;
    u32 t7;
    u32 s0;
    u32 s2;
    u32 v0_0;
    u32 t7_1;
    u32 t3;
    u32 t7_2;
    u32 t5;
    u32 t6;
    u32 t4;
    u32 t7_3;
    u32 t6_4;
    u32 t7_5;
    u32 v0_6;
    u32 t5_7;
    u32 t2;
    u32 t5_8;
    u32 t3_9;
    u32 t7_10;
    u32 v0_11;
    u32 t7_12;
    u32 t6_13;
    u32 a0_14;
    s5 = func_002a9d68(a0, a1);
    v0 = func_00294000(1);
    if (((s32)(a1) < 0)) {
        t7 = *(u32*)((v0 + 8));
        if (((s32)(t7) > 0)) {
            s0 = 0;
            s2 = 1;
            do {
                v0_0 = func_002abf40(a0, 0);
                s0 = (s0 + 1);
                if (((s32)(v0_0) >= 0)) {
                    t7_1 = *(u32*)(&D_0035f610);
                    t3 = (a0 << 2);
                    t7_2 = (t7_1 + t3);
                    t5 = ((v0_0 >> 5) << 2);
                    t6 = *(u32*)(((t7_2 + t5) + 0xac));
                    t4 = (1 << (v0_0 & 0x1f));
                    if (((s32)((t6 & t4)) != 0)) {
                        t7_3 = (s5 + t3);
                        t6_4 = *(u32*)(((t7_3 + t5) + 0xac));
                        s2 = ((u32)(0) < (u32)((t6_4 & t4)));
                        if (((s32)(s2) == 0)) {
                            return s2;
                        }
                    }
                }
                t7_5 = *(u32*)((v0 + 8));
            } while (((s32)(((s32)(s0) < (s32)(t7_5))) != 0));
            v0 = s2;
        } else {
            v0 = 1;
        }
    } else {
        v0_6 = func_002abf40(a0, a1);
        t5_7 = *(u32*)(&D_0035f610);
        t2 = (a0 << 2);
        t5_8 = (t5_7 + t2);
        t3_9 = ((v0_6 >> 5) << 2);
        t7_10 = *(u32*)(((t5_8 + t3_9) + 0xac));
        v0_11 = (1 << (v0_6 & 0x1f));
        if (((s32)((t7_10 & v0_11)) != 0)) {
            t7_12 = (s5 + t2);
            t6_13 = *(u32*)(((t7_12 + t3_9) + 0xac));
            a0_14 = ((u32)(0) < (u32)((t6_13 & v0_11)));
        } else {
            a0_14 = 0;
        }
        v0 = a0_14;
    }
    return v0;
}
