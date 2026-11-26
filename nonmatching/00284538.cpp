// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2c8 asm("D_0035f2c8");
extern "C" u32 D_0035f2cc asm("D_0035f2cc");
extern "C" u32 D_0035f2d8 asm("D_0035f2d8");
extern "C" u32 D_0035f2dc asm("D_0035f2dc");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x00284538 func_00284538
u32 func_00284538() asm("func_00284538");
u32 func_00284538() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 s1;
    u32 s2;
    u32 v0_2;
    v0 = func_00139d78(*(u32*)(&D_0035f2c8));
    if (((s32)(v0) == 0)) {
        v0_0 = func_00139d78(*(u32*)(&D_0035f2cc));
        if (((s32)(v0_0) == 0)) {
            v0_1 = func_00139d78(*(u32*)(&D_0035f2cc) + 0x1b4);
            if (((s32)(v0_1) == 0)) {
                s1 = 0;
                s2 = 7;
                do {
                    if (((s32)(func_00139d78((*(u32*)(&D_0035f2cc) + s1) + 0x368)) != 0)) {
                        ((void(*)(u32))(*(u32*)((*(u32*)(((s1 + *(u32*)(&D_0035f2cc)) + 0x368)) + 0x14))))((s1 + *(u32*)(&D_0035f2cc)) + 0x368);
                    }
                    if ((func_00139d78((*(u32*)(&D_0035f2cc) + s1) + 0x1108) != 0)) {
                        ((void(*)(u32))(*(u32*)((*(u32*)(((s1 + *(u32*)(&D_0035f2cc)) + 0x1108)) + 0x14))))((s1 + *(u32*)(&D_0035f2cc)) + 0x1108);
                    }
                    s1 = (s1 + 0x1b4);
                    s2 = (s2 + -1);
                } while (((s32)(s2) >= 0));
                if (((s32)(v0_1) == 0)) {
                    v0_2 = func_00139d78(*(u32*)(&D_0035f2d8));
                    if (((s32)(v0_2) == 0)) {
                        v0_2 = func_0028acc8(*(u32*)(&D_0035f2dc));
                    }
                    v0_1 = v0_2;
                }
            }
            v0_0 = v0_1;
        }
        v0 = v0_0;
    }
    return v0;
}
