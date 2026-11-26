// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035dcf0 asm("D_0035dcf0");
extern "C" void func_002278e0(u32) asm("func_002278e0");

// 0x00227078 func_00227078
void func_00227078() asm("func_00227078");
void func_00227078() {
    u32 t7;
    u32 s1;
    u32 s0;
    if (((s32)(*(u32*)(&D_0035dcf0)) != 0)) {
        t7 = *(u32*)(&D_0035dcf0);
        s1 = 0;
        s0 = 0x7f;
        do {
            if (((s32)(*(u32*)(((s1 + t7) + 4))) != 0)) {
                if ((*(u32*)(((s1 + t7) + 4)) == 2)) {
                    func_002278e0(s1 + t7);
                }
            }
            s0 = (s0 + -1);
            s1 = (s1 + 0x54);
            t7 = *(u32*)(&D_0035dcf0);
        } while (((s32)(s0) >= 0));
    }
    return;
}
