// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001e4f40(u32) asm("func_001e4f40");

// 0x001dc098 wtarget_001dc098(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001dc098(u32 a0) asm("_Z16wtarget_001dc098jjjj");
void lift_001dc098(u32 a0) {
    u8 frame[16];
    u32 a0_0;
    u32 s0;
    u32 s0_1;
    u32 s1;
    u32 a0_2;
    u32 s0_3;
    u32 a0_4;
    u32 sp;
    a0_0 = (a0 + 0x10);
    if (((s32)(*(u32*)((a0 + 0xc))) > 0)) {
        s0 = 0;
        do {
            if (((s32)(*(u32*)(a0_0)) != 0)) {
                *(u32*)(a0_0) = (*(u32*)(a0_0) + a0);
            }
            s0_1 = (s0 + 1);
            a0_0 = (a0_0 + 0x20);
            s0 = s0_1;
        } while (((s32)(((s32)(s0_1) < (s32)(*(u32*)((a0 + 0xc))))) != 0));
    }
    if (((s32)(*(u32*)(a0_0)) > 0)) {
        s1 = (a0_0 + 4);
        a0_2 = *(u32*)(s1);
        s0_3 = *(u32*)(a0_0);
        do {
            a0_4 = (*(u32*)(s1) + a0);
            func_001e4f40(a0_4);
            s0_3 = (s0_3 + -1);
            s1 = (s1 + 4);
        } while ((s0_3 != 0));
    } else {
        sp = (u32)frame;
    }
    return;
}
