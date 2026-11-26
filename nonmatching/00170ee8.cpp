// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dca0 asm("D_0034dca0");
extern "C" u32 D_0034dcb8 asm("D_0034dcb8");

// 0x00170ee8 func_00170ee8
void func_00170ee8(u32 a0, u32 a1) asm("func_00170ee8");
void func_00170ee8(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_0034dca0) = 0;
            *(u32*)(((u32)&D_0034dca0 + 4)) = 0;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(u32*)(&D_0034dcb8) = 0;
                *(u32*)(((u32)&D_0034dcb8 + 4)) = 0;
            }
        }
    }
    return;
}
