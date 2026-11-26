// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ee58 asm("D_0035ee58");
extern "C" u32 D_0035ee5c asm("D_0035ee5c");
extern "C" u32 D_0035ee60 asm("D_0035ee60");
extern "C" u32 D_0035ee68 asm("D_0035ee68");
extern "C" u32 D_0035ee6c asm("D_0035ee6c");
extern "C" u32 D_0035ee70 asm("D_0035ee70");
extern "C" u32 D_0035ee74 asm("D_0035ee74");
extern "C" u32 D_0035ee78 asm("D_0035ee78");
extern "C" u32 D_0035ee7c asm("D_0035ee7c");
extern "C" u32 D_0035ee80 asm("D_0035ee80");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x00250fb8 func_00250fb8
void func_00250fb8() asm("func_00250fb8");
void func_00250fb8() {
    u32 a0_0;
    u32 s0;
    u32 s1;
    if ((func_00139d78(*(u32*)(&D_0035ee60)) == 0)) {
        if ((func_00139d78(*(u32*)(&D_0035ee68)) == 0)) {
            if ((func_00139d78(*(u32*)(&D_0035ee6c)) == 0)) {
                if ((func_00139d78(*(u32*)(&D_0035ee7c)) == 0)) {
                    if (((s32)(func_00139d78(*(u32*)(&D_0035ee78))) == 0)) {
                        if (((s32)(func_00139d78(*(u32*)(&D_0035ee80))) == 0)) {
                            a0_0 = *(u32*)(&D_0035ee70);
                            s0 = 0;
                            s1 = 0;
                            do {
                                if ((func_00139d78(a0_0 + s0) != 0)) {
                                    return;
                                }
                                if (((s32)(func_00139d78(*(u32*)(&D_0035ee74) + s0)) != 0)) {
                                    return;
                                }
                                a0_0 = *(u32*)(&D_0035ee70);
                                s0 = (s0 + 0x1b0);
                                s1 = (s1 + 1);
                            } while (((s32)(((s32)(s1) < (s32)(4))) != 0));
                            if (((s32)(func_0028acc8(*(u32*)(&D_0035ee58))) == 0)) {
                                func_0028acc8(*(u32*)(&D_0035ee5c));
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
