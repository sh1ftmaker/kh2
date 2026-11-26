// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f5f0 asm("D_0035f5f0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00276368() asm("func_00276368");
extern "C" u32 func_00276888() asm("func_00276888");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x002a6718 func_002a6718
void func_002a6718() asm("func_002a6718");
void func_002a6718() {
    u32 a0_0;
    u32 s1;
    u32 s0;
    if ((func_00276368() == 0)) {
        if ((func_0028acc8(*(u32*)(&D_0035f200)) == 0)) {
            if ((func_00276888() == 0)) {
                a0_0 = *(u32*)(&D_0035f5f0);
                s1 = 0;
                s0 = 0;
                do {
                    if (((s32)(func_00139d78(a0_0 + (s0 + (s1 * 0x1b4)))) != 0)) {
                        break;
                    }
                    a0_0 = *(u32*)(&D_0035f5f0);
                    s1 = (s1 + 1);
                } while (((s32)(((s32)(s1) < (s32)(0xa))) != 0));
            }
        }
    }
    return;
}
