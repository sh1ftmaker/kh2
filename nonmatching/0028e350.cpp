// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00106450(u32) asm("func_00106450");
extern "C" void func_00239870(u32) asm("func_00239870");

// 0x0028e350 ctarget_0028e350(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0028e350(u32 a0) asm("_Z16ctarget_0028e350jjjj");
void lift_0028e350(u32 a0) {
    u32 a0_0;
    u32 s0;
    if (((s32)(*(u32*)((a0 + 0x38))) != 0)) {
        a0_0 = *(u32*)((a0 + 0x38));
        s0 = (*(u32*)((a0 + 0x38)) + (*(u32*)((*(u32*)((a0 + 0x38)) + -4)) * 0x17c));
        while ((s0 = (s0 + -0x17c)), (a0_0 != s0)) {
            a0_0 = s0;
            func_00239870(a0_0);
            a0_0 = *(u32*)((a0 + 0x38));
        }
        func_00106450(a0_0 + -4);
        *(u32*)((a0 + 0x38)) = 0;
    }
    return;
}
