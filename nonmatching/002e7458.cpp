// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2bf00 asm("D_01e2bf00");

// 0x002e7458 func_002e7458(void*)
void lift_002e7458(u32 a0) asm("_Z13func_002e7458Pv");
void lift_002e7458(u32 a0) {
    u32 t5;
    u32 t6;
    u32 t6_0;
    u32 t5_1;
    u32 t5_2;
    u32 t6_3;
    u32 t6_4;
    u32 t5_5;
    u32 t5_6;
    u32 t6_7;
    t5 = 0;
    while ((t6 = (t5 == 0) ? *(u32*)(&D_01e2bf00) : *(u32*)(t5)), ((s32)(t6) != 0)) {
        if ((t6 == a0)) {
            if (((s32)(1) != 0)) {
                if ((a0 == *(u32*)(&D_01e2bf00))) {
                    *(u32*)(&D_01e2bf00) = *(u32*)(a0);
                    t6 = 0;
                } else {
                    if ((*(u32*)(*(u32*)(&D_01e2bf00)) != a0)) {
                        t6_0 = *(u32*)(*(u32*)(&D_01e2bf00));
                        do {
                            t5_1 = t6_0;
                            t6_0 = *(u32*)(t6_0);
                        } while ((t6_0 != a0));
                        t5_2 = t5_1;
                    } else {
                        t5_2 = *(u32*)(&D_01e2bf00);
                    }
                    *(u32*)(t5_2) = *(u32*)(a0);
                    t6 = t5_2;
                }
                if ((a0 == *(u32*)(((u32)&D_01e2bf00 + 4)))) {
                    t6_3 = *(u32*)(((u32)&D_01e2bf00 + 4));
                    *(u32*)(((u32)&D_01e2bf00 + 4)) = t6;
                }
                *(u32*)(a0) = 0;
            }
            return;
        }
        t5 = t6;
    }
    if (((s32)(0) != 0)) {
        if ((a0 == *(u32*)(&D_01e2bf00))) {
            *(u32*)(&D_01e2bf00) = *(u32*)(a0);
            t5 = 0;
        } else {
            if ((*(u32*)(*(u32*)(&D_01e2bf00)) != a0)) {
                t6_4 = *(u32*)(*(u32*)(&D_01e2bf00));
                do {
                    t5_5 = t6_4;
                    t6_4 = *(u32*)(t6_4);
                } while ((t6_4 != a0));
                t5_6 = t5_5;
            } else {
                t5_6 = *(u32*)(&D_01e2bf00);
            }
            *(u32*)(t5_6) = *(u32*)(a0);
            t5 = t5_6;
        }
        if ((a0 == *(u32*)(((u32)&D_01e2bf00 + 4)))) {
            t6_7 = *(u32*)(((u32)&D_01e2bf00 + 4));
            *(u32*)(((u32)&D_01e2bf00 + 4)) = t5;
        }
        *(u32*)(a0) = 0;
    }
    return;
}
