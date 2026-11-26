// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c7a0 asm("D_0034c7a0");
extern "C" void func_00106420(u32) asm("func_00106420");

// 0x00165968 func_00165968
void func_00165968() asm("_ZN2dk6ObjOcc4exitEv");
void func_00165968() {
    u8 frame[16];
    u32 a0_0;
    u32 t7;
    u32 sp;
    if (((s32)(*(u32*)(&D_0034c7a0)) != 0)) {
        a0_0 = *(u32*)(&D_0034c7a0);
        t7 = (*(u32*)(&D_0034c7a0) + 0x400);
        do {
            t7 = (t7 + -0x10);
        } while ((a0_0 != t7));
        func_00106420(a0_0);
        *(u32*)(&D_0034c7a0) = 0;
    } else {
        sp = (u32)frame;
    }
    return;
}
