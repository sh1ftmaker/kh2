// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0033caf0 asm("D_0033caf0");
extern "C" u32 D_0033caf4 asm("D_0033caf4");
extern "C" u32 D_0033cafc asm("D_0033cafc");
extern "C" u32 D_0033cb00 asm("D_0033cb00");

// 0x00105af8 func_00105af8
void func_00105af8(u32 a0) asm("func_00105af8");
void func_00105af8(u32 a0) {
    *(u32*)(&D_0033cafc) = a0;
    *(u32*)(&D_0033caf0) = *(u32*)((((a0 << 2) + (u32)&D_0033cb00) + -4));
    if ((a0 != 3)) {
        if ((a0 != 8)) {
            *(u32*)(&D_0033caf4) = *(u32*)(&D_0033caf0);
            return;
        } else {
            *(u32*)(&D_0033caf4) = *(u32*)(&D_0033cb00);
            return;
        }
    } else {
        *(u32*)(&D_0033caf4) = *(u32*)(((u32)&D_0033cb00 + 4));
        return;
    }
}
