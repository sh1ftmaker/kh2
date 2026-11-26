// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5b0 asm("D_0035f5b0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x0029ad40 func_0029ad40
void func_0029ad40() asm("func_0029ad40");
void func_0029ad40() {
    u32 a0_0;
    u32 s1;
    u32 s0;
    if ((func_00139d78(*(u32*)(&D_0035f5b0)) == 0)) {
        if ((func_00139d78(*(u32*)(&D_0035f5b0) + 0x1b4) == 0)) {
            if ((func_00139d78(*(u32*)(&D_0035f5b0) + 0x368) == 0)) {
                if ((func_00139d78(*(u32*)(&D_0035f5b0) + 0x51c) == 0)) {
                    a0_0 = *(u32*)(&D_0035f5b0);
                    s1 = 0;
                    s0 = 0;
                    do {
                        if ((func_00139d78((*(u32*)(&D_0035f5b0) + (s0 + (s1 * 0x1b4))) + 0x6d0) != 0)) {
                            return;
                        }
                        if (((s32)(func_00139d78((*(u32*)(&D_0035f5b0) + (s0 + (s1 * 0x1b4))) + 0xf54)) != 0)) {
                            return;
                        }
                        s1 = (s1 + 1);
                    } while (((s32)(s1) < (s32)(5)));
                    if ((func_00139d78(*(u32*)(&D_0035f5b0) + 0x17d8) == 0)) {
                        func_00139d78(*(u32*)(&D_0035f5b0) + 0x1970);
                    }
                }
            }
        }
    }
    return;
}
