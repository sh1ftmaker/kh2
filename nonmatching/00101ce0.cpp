// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0037a6e4 asm("D_0037a6e4");

// 0x00101ce0 func_00101ce0
void func_00101ce0() asm("func_00101ce0");
void func_00101ce0() {
    u8 frame[16];
    u32 s0;
    u32 s1;
    u32 t6;
    u32 sp;
    if ((*(u32*)(((u32)&D_0037a6e4 + -4)) != 0xffffffff)) {
        s0 = ((u32)&D_0037a6e4 + -4);
        s1 = 0xffffffff;
        t6 = *(u32*)(((u32)&D_0037a6e4 + -4));
        do {
            ((void(*)())(t6))();
            s0 = (s0 + -4);
            t6 = *(u32*)(s0);
        } while ((*(u32*)(s0) != s1));
    } else {
        sp = (u32)frame;
    }
    return;
}
