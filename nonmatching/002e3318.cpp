// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x002e3318 func_002e3318
void func_002e3318(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) asm("func_002e3318");
void func_002e3318(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    u32 t3;
    u32 t8;
    u32 t5;
    u32 t2;
    u32 v1;
    u32 v0;
    u32 t7;
    u32 t4;
    u32 t7_0;
    u32 t7_1;
    u32 t7_2;
    if (((s32)(*(u32*)((a0 + 8))) != 0)) {
        t3 = *(u32*)((a0 + 8));
        t8 = 0;
        if (((s32)(t3) > 0)) {
            t5 = (a0 + 0x10);
            t2 = 0;
            do {
                if ((*(u8*)(t5) == a4)) {
                    if ((*(u8*)((t5 + 1)) == a5)) {
                        if (((s32)((*(u16*)((t5 + 2)) & 0xffff)) != 0)) {
                            v1 = 0;
                            v0 = ((t8 << 2) + a1);
                            t7 = *(u16*)((t5 + 4));
                            t4 = *(u16*)((t5 + 2));
                            do {
                                if ((*(u16*)(((t5 + (v1 * 8)) + 4)) == a3)) {
                                    if (((s32)(t8) < (s32)(a2))) {
                                        *(u32*)(v0) = *(u32*)((((t5 + (v1 * 8)) + 4) + 4));
                                        t4 = *(u16*)((t5 + 2));
                                        t8 = (t8 + 1);
                                        v0 = (v0 + 4);
                                    }
                                }
                                t7 = ((s32)((v1 + 1)) < (s32)((t4 & 0xffff)));
                                v1 = (v1 + 1);
                            } while ((t7 != 0));
                            t3 = *(u32*)((a0 + 8));
                            t7_0 = (t4 & 0xffff);
                        } else {
                            t7_0 = (*(u16*)((t5 + 2)) & 0xffff);
                        }
                        t7_1 = t7_0;
                    } else {
                        t7_1 = (*(u16*)((t5 + 2)) & 0xffff);
                    }
                    t7_2 = t7_1;
                } else {
                    t7_2 = (*(u16*)((t5 + 2)) & 0xffff);
                }
                t2 = (t2 + 1);
                t5 = ((t5 + (t7_2 << 3)) + 4);
            } while (((s32)(((s32)(t2) < (s32)(t3))) != 0));
        }
    }
    return;
}
