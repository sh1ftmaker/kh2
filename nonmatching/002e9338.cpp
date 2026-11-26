// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003633c8 asm("D_003633c8");
extern "C" u32 D_01e2bfa0 asm("D_01e2bfa0");
extern "C" void func_00106420(u32) asm("func_00106420");

// 0x002e9338 func_002e9338
void func_002e9338() asm("_ZN2Ts21ExecAllFlareFinalizerEP4TASK");
void func_002e9338() {
    u8 frame[16];
    u32 a0_0;
    u32 t7;
    u32 sp;
    if (((s32)(*(u32*)(&D_01e2bfa0)) != 0)) {
        a0_0 = *(u32*)(&D_01e2bfa0);
        t7 = (*(u32*)(&D_01e2bfa0) + 0x780);
        do {
            t7 = (t7 + -0x40);
        } while ((a0_0 != t7));
        func_00106420(a0_0);
    } else {
        sp = (u32)frame;
    }
    *(u32*)(&D_01e2bfa0) = 0;
    *(u32*)(&D_003633c8) = 0;
    return;
}
