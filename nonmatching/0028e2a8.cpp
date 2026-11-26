// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001063f0(u32, u32) asm("func_001063f0");
extern "C" u32 func_0013a1d8(u32, u32) asm("func_0013a1d8");
extern "C" void func_00239700(u32) asm("func_00239700");

// 0x0028e2a8 func_0028e2a8
void func_0028e2a8(u32 a0, u32 a1) asm("_ZN2Tz8MultiSeq6createEiPvPN2YI5IMAGEEPsii");
void func_0028e2a8(u32 a0, u32 a1) {
    u8 frame[16];
    u32 s0;
    u32 v0;
    u32 s5;
    u32 s5_0;
    u32 s4;
    u32 s1;
    u32 sp;
    u32 sp_1;
    if (((s32)(*(u32*)((a0 + 0x38))) == 0)) {
        s0 = (a1 * 0x17c);
        v0 = func_001063f0(s0 + 4, func_0013a1d8(a0, a1));
        *(u32*)(v0) = a1;
        s5 = (v0 + 4);
        s5_0 = s5;
        if (((s32)(a1) != 0)) {
            s4 = 0xffffffff;
            s1 = (a1 + -1);
            do {
                func_00239700(s5);
                s5 = (s5 + 0x17c);
                s1 = (s1 + -1);
            } while ((s1 != s4));
        } else {
            sp = (u32)frame;
        }
        *(u32*)((a0 + 0x38)) = s5_0;
        sp_1 = sp;
    } else {
        sp_1 = (u32)frame;
    }
    *(u32*)((a0 + 0x18)) = a1;
    return;
}
