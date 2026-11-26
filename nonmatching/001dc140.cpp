// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001e50a8(u32, u32) asm("func_001e50a8");

// 0x001dc140 wtarget_001dc140(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001dc140(u32 a0, u32 a1) asm("_Z16wtarget_001dc140jjjj");
void lift_001dc140(u32 a0, u32 a1) {
    u8 frame[16];
    u32 t5;
    u32 s0;
    u32 s0_0;
    u32 s1;
    u32 s2;
    u32 s0_1;
    u32 a0_2;
    u32 a0_3;
    u32 sp;
    t5 = (a0 + 0x10);
    if (((s32)(*(u32*)((a0 + 0xc))) > 0)) {
        s0 = 0;
        do {
            if (((s32)(*(u32*)(t5)) != 0)) {
                *(u32*)(t5) = (*(u32*)(t5) + (a0 - a1));
            }
            s0_0 = (s0 + 1);
            s0 = s0_0;
            t5 = (t5 + 0x20);
        } while (((s32)(((s32)(s0_0) < (s32)(*(u32*)((a0 + 0xc))))) != 0));
    }
    if (((s32)(*(u32*)(t5)) > 0)) {
        s1 = (t5 + 4);
        s2 = (a0 - a1);
        s0_1 = *(u32*)(t5);
        a0_2 = *(u32*)(s1);
        do {
            a0_3 = (*(u32*)(s1) + a0);
            func_001e50a8(a0_3, s2);
            s0_1 = (s0_1 + -1);
            s1 = (s1 + 4);
        } while ((s0_1 != 0));
    } else {
        sp = (u32)frame;
    }
    return;
}
